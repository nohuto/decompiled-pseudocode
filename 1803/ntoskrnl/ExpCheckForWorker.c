/*
 * XREFs of ExpCheckForWorker @ 0x1402BB594
 * Callers:
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x1402B8EBC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r12
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  unsigned __int16 i; // si
  __int64 v7; // r15
  __int64 v8; // rbp
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r13
  int v11; // ecx
  volatile signed __int32 **v12; // rdx
  volatile signed __int32 *j; // r8

  BugCheckParameter4 = BugCheckParameter3 + a2;
  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v5) )
  {
    v5 = result;
    if ( !result )
      break;
    if ( result != PspSystemPartition || result[2] )
    {
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v7 = 0LL;
        v8 = 0LL;
        if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * i) )
          v7 = KeNodeBlock[i];
        do
        {
          v9 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(v5[2] + 8LL) + 8LL
                                                                                  * *(unsigned __int16 *)(v7 + 146))
                                           + v8);
          if ( ((unsigned __int8)v9 & 1) == 0 && v9 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            KiAcquireKobjectLockSafe(v9);
            v11 = 0;
            v12 = (volatile signed __int32 **)(v9 + 6);
            do
            {
              for ( j = *v12; j != &v9[4 * v11 + 6]; j = *(volatile signed __int32 **)j )
              {
                if ( (unsigned __int64)j >= BugCheckParameter3 && (unsigned __int64)j < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)j, BugCheckParameter3, BugCheckParameter4);
              }
              v12 += 2;
              ++v11;
            }
            while ( v11 < 32 );
            _InterlockedAnd(v9, 0xFFFFFF7F);
            __writecr8(CurrentIrql);
          }
          v8 += 8LL;
        }
        while ( v8 < 64 );
      }
    }
  }
  return result;
}
