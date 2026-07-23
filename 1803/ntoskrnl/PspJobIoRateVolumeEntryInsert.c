/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1402849FC
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14077BEB4 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockTrackerCompare @ 0x140253D40 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // r15
  _RTL_RB_TREE *v4; // r14
  KIRQL v5; // al
  _RTL_BALANCED_NODE *Min; // rcx
  BOOLEAN v7; // bl
  unsigned __int64 v8; // r12
  KIRQL v9; // r13
  __int64 Root; // rdi
  int v11; // esi
  unsigned __int64 v12; // rax
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (_RTL_RB_TREE *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  Min = v4->Min;
  v7 = 0;
  v8 = (unsigned __int64)a2[1].Children[0];
  v9 = v5;
  Root = (__int64)v4->Root;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)v4;
    else
      Root = 0LL;
  }
  v11 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v8, Root) < 0 )
      {
        v12 = *(_QWORD *)Root;
        if ( v11 )
        {
          if ( !v12 )
            break;
          v12 ^= Root;
        }
        if ( !v12 )
          break;
      }
      else
      {
        v12 = *(_QWORD *)(Root + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_11;
          v12 ^= Root;
        }
        if ( !v12 )
        {
LABEL_11:
          v7 = 1;
          break;
        }
      }
      Root = v12;
    }
  }
  RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v7, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v9;
  __writecr8(v9);
  return result;
}
