/*
 * XREFs of MiRestrictRangeToNode @ 0x1401547A8
 * Callers:
 *     MiDescribePageRun @ 0x140154454 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14020D5A0 (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x14080053C (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140800A20 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1408010A0 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140801360 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14080190C (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiRestrictRangeToNode(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  int v5; // edx
  KIRQL v6; // si
  int v7; // r9d
  unsigned __int64 v8; // r9
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned __int64 v12; // r9

  v4 = ExAcquireSpinLockShared(&dword_14036BF60);
  v5 = 0;
  v6 = v4;
  if ( qword_14036C1D0 )
  {
    v7 = 0;
    if ( a1 >= *(_QWORD *)(qword_14036C1D0 + 16) )
    {
      v10 = 1;
      do
      {
        ++v10;
        ++v7;
      }
      while ( a1 >= *(_QWORD *)(qword_14036C1D0 + 16LL * v10) );
    }
    v8 = *(_QWORD *)(qword_14036C1D0 + 16LL * (unsigned int)(v7 + 1));
    if ( a1 + a2 > v8 )
      a2 = v8 - a1;
  }
  if ( qword_14036C1D8 )
  {
    if ( a1 >= *(_QWORD *)(qword_14036C1D8 + 16) )
    {
      v11 = 1;
      do
      {
        ++v11;
        ++v5;
      }
      while ( a1 >= *(_QWORD *)(qword_14036C1D8 + 16LL * v11) );
    }
    v12 = *(_QWORD *)(qword_14036C1D8 + 16LL * (unsigned int)(v5 + 1));
    if ( a1 + a2 > v12 )
      a2 = v12 - a1;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036BF60);
  __writecr8(v6);
  return a2;
}
