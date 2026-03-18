/*
 * XREFs of ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00124D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ @ 0x1C012091C (-DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ.c)
 */

void __fastcall EnableDxgkrnlTelemetryProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  struct DXGGLOBAL *Global; // rax

  if ( ControlCode == 1 && DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(Global, AdapterTelemetryEnabledCallback, 0LL, 0LL);
  }
}
