/*
 * XREFs of ExpCheckForWorker @ 0x140287298
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x1402848FC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r15
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v5; // rbx
  unsigned __int16 i; // si
  __int64 v7; // rbp
  __int64 v8; // r13
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r12
  int v11; // ecx
  volatile signed __int32 **v12; // rdx
  volatile signed __int32 *j; // r8

  BugCheckParameter4 = BugCheckParameter3 + a2;
  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v5) )
  {
    v5 = result;
    if ( !result )
      break;
    if ( result != PspSystemPartition || *((_QWORD *)result + 2) )
    {
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v7 = 0LL;
        v8 = KeNodeBlock[i];
        if ( (_UNKNOWN *)v8 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * i) )
          v8 = 0LL;
        do
        {
          v9 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 8LL)
                                                       + 8LL * *(unsigned __int16 *)(v8 + 146))
                                           + v7);
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
          v7 += 8LL;
        }
        while ( v7 < 64 );
      }
    }
  }
  return result;
}
