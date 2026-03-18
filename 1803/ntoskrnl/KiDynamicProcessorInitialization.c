/*
 * XREFs of KiDynamicProcessorInitialization @ 0x14023FB84
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1401A5BD0 (KeOptimizeSpecCtrlSettings.c)
 *     KeWriteProtectProcessorState @ 0x14047B720 (KeWriteProtectProcessorState.c)
 */

void __fastcall KiDynamicProcessorInitialization(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  KeWriteProtectProcessorState(a1 - 384);
  KeOptimizeSpecCtrlSettings(0LL, v3);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
