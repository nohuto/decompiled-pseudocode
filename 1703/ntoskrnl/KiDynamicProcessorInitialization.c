/*
 * XREFs of KiDynamicProcessorInitialization @ 0x1401FC84C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14017BD30 (KeOptimizeSpecCtrlSettings.c)
 *     KeWriteProtectProcessorState @ 0x140412AB0 (KeWriteProtectProcessorState.c)
 */

void __fastcall KiDynamicProcessorInitialization(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  KeWriteProtectProcessorState(a1 - 384);
  KeOptimizeSpecCtrlSettings(0LL, v3, v4);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
