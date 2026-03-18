/*
 * XREFs of MiRestrictRangeToNode @ 0x14016FC04
 * Callers:
 *     MiDescribePageRun @ 0x14016F8B4 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x140252AC0 (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x140899CB8 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x14089A028 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x14089A66C (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x14089A954 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14089AEA4 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

unsigned __int64 __fastcall MiRestrictRangeToNode(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  int v5; // edx
  KIRQL v6; // si
  unsigned __int64 v7; // r9
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned __int64 v11; // r9
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8

  v4 = ExAcquireSpinLockShared(&dword_1403CB420);
  v5 = 0;
  v6 = v4;
  if ( qword_1403CB6B0 )
  {
    v9 = 0;
    if ( a1 >= *(_QWORD *)(qword_1403CB6B0 + 16) )
    {
      v10 = 1;
      do
      {
        ++v10;
        ++v9;
      }
      while ( a1 >= *(_QWORD *)(qword_1403CB6B0 + 16LL * v10) );
    }
    v11 = *(_QWORD *)(qword_1403CB6B0 + 16LL * (unsigned int)(v9 + 1));
    if ( a1 + a2 > v11 )
      a2 = v11 - a1;
  }
  v7 = a2;
  if ( qword_1403CB6B8 )
  {
    if ( a1 >= *(_QWORD *)(qword_1403CB6B8 + 16) )
    {
      v12 = 1;
      do
      {
        ++v12;
        ++v5;
      }
      while ( a1 >= *(_QWORD *)(qword_1403CB6B8 + 16LL * v12) );
    }
    v13 = a1 + a2;
    v14 = *(_QWORD *)(qword_1403CB6B8 + 16LL * (unsigned int)(v5 + 1));
    a2 = v14 - a1;
    if ( v13 <= v14 )
      a2 = v7;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB420);
  __writecr8(v6);
  return a2;
}
