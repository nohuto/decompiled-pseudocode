/*
 * XREFs of ACPIVectorBuildVectorMasks @ 0x1C003F78C
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C0027598 (ACPIGpeBuildEventMasks.c)
 * Callees:
 *     ACPIGpeInstallRemoveIndex @ 0x1C0027B54 (ACPIGpeInstallRemoveIndex.c)
 *     WPP_RECORDER_SF_d @ 0x1C00377D8 (WPP_RECORDER_SF_d.c)
 */

void ACPIVectorBuildVectorMasks()
{
  unsigned int i; // ebx
  char *v1; // r10
  int v2; // edx

  for ( i = 0; i < GpeVectorTableSize; ++i )
  {
    v1 = (char *)*((_QWORD *)GpeVectorTable + 2 * i + 1);
    if ( v1 )
    {
      if ( !ACPIGpeInstallRemoveIndex(*(unsigned int *)v1, *((_DWORD *)v1 + 7) == 0, 0, v1 + 25) )
      {
        LOBYTE(v2) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v2,
          14,
          10,
          (__int64)&WPP_54ed5c38fd043f43cce4e7311b7ced51_Traceguids,
          i);
      }
    }
  }
}
