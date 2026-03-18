/*
 * XREFs of MiRestrictRangeToNode @ 0x1401378C4
 * Callers:
 *     MiDescribePageRun @ 0x14013756C (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14021464C (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x14082A50C (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x14082B05C (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x14082B318 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14082B8F0 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiRestrictRangeToNode(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  int v5; // edx
  KIRQL v6; // si
  int v7; // r9d
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8

  v4 = ExAcquireSpinLockShared(&dword_140388280);
  v5 = 0;
  v6 = v4;
  if ( qword_140388518 )
  {
    v7 = 0;
    if ( a1 >= *(_QWORD *)(qword_140388518 + 16) )
    {
      v11 = 1;
      do
      {
        ++v11;
        ++v7;
      }
      while ( a1 >= *(_QWORD *)(qword_140388518 + 16LL * v11) );
    }
    v8 = *(_QWORD *)(qword_140388518 + 16LL * (unsigned int)(v7 + 1));
    if ( a1 + a2 > v8 )
      a2 = v8 - a1;
  }
  v9 = a2;
  if ( qword_140388520 )
  {
    if ( a1 >= *(_QWORD *)(qword_140388520 + 16) )
    {
      v12 = 1;
      do
      {
        ++v12;
        ++v5;
      }
      while ( a1 >= *(_QWORD *)(qword_140388520 + 16LL * v12) );
    }
    v13 = a1 + a2;
    v14 = *(_QWORD *)(qword_140388520 + 16LL * (unsigned int)(v5 + 1));
    a2 = v14 - a1;
    if ( v13 <= v14 )
      a2 = v9;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140388280);
  __writecr8(v6);
  return a2;
}
