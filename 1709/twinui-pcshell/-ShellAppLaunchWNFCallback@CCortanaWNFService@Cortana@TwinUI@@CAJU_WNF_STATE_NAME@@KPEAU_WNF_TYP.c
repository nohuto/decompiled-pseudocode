/*
 * XREFs of ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DCAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x1800D1D34 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x1800DD294 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        PVOID *a4,
        unsigned __int16 *Src)
{
  bool v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  if ( (int)CortanaCapabilities::HasCortanaCapabilities(2304, &v7, (__int64)a3) >= 0 && v7 && a4 && Src )
    TwinUI::Cortana::RealtimeEnticementManager::TriggerToast(a4[8], Src);
  return 0LL;
}
