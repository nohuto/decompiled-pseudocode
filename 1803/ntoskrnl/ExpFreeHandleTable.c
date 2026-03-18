/*
 * XREFs of ExpFreeHandleTable @ 0x140547650
 * Callers:
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 *     ObKillProcess @ 0x1404F8400 (ObKillProcess.c)
 *     RtlDestroyAtomTable @ 0x140547520 (RtlDestroyAtomTable.c)
 *     ExDupHandleTable @ 0x1405533A0 (ExDupHandleTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140747D60 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EF7F0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpFreeLowLevelTable @ 0x140547724 (ExpFreeLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x140547764 (ExpFreeTablePagedPool.c)
 *     ExDereferenceHandleDebugInfo @ 0x1407BD294 (ExDereferenceHandleDebugInfo.c)
 */

void __fastcall ExpFreeHandleTable(_QWORD *P)
{
  struct _KPROCESS *v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r14
  unsigned int i; // ebp
  __int64 v7; // r8
  unsigned int j; // r12d
  _QWORD *v9; // rbp
  unsigned int v10; // r13d
  _QWORD *v11; // r15

  v2 = (struct _KPROCESS *)P[2];
  v3 = P[1] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (P[1] & 3) != 0 )
  {
    v5 = (_QWORD *)(P[1] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (P[1] & 3) == 1 )
    {
      for ( i = 0; i < 0x200; ++i )
      {
        if ( !*v5 )
          break;
        ExpFreeLowLevelTable(v2);
        ++v5;
      }
      v7 = 4096LL;
    }
    else
    {
      for ( j = 0; j < 0x80; ++j )
      {
        v9 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
        v10 = 0;
        v11 = (_QWORD *)*v5;
        do
        {
          if ( !*v11 )
            break;
          ExpFreeLowLevelTable(v2);
          ++v10;
          ++v11;
        }
        while ( v10 < 0x200 );
        ExpFreeTablePagedPool(v2, v9, 4096LL);
        ++v5;
      }
      v7 = 1024LL;
    }
    ExpFreeTablePagedPool(v2, v3, v7);
  }
  else
  {
    ExpFreeLowLevelTable(P[2]);
  }
  v4 = P[12];
  if ( v4 )
    ExDereferenceHandleDebugInfo(P, v4);
  ExFreePoolWithTag(P, 0x6274624Fu);
  if ( v2 )
    PsReturnProcessPagedPoolQuota(v2, 128LL);
}
