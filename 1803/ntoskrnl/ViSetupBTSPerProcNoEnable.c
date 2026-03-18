/*
 * XREFs of ViSetupBTSPerProcNoEnable @ 0x140823928
 * Callers:
 *     VfInitializeBranchTracing @ 0x140823574 (VfInitializeBranchTracing.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 ViSetupBTSPerProcNoEnable()
{
  __int64 i; // rdi
  unsigned int v1; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v1 = KiProcessorIndexToNumberMappingTable[i];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v1 >> 6);
    Affinity.Mask = 1LL << (v1 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    __writemsr(0x600u, VfBTSDataManagementArea[i]);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  return 1LL;
}
