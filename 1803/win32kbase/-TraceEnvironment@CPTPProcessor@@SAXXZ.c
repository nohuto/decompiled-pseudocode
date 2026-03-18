/*
 * XREFs of ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C0126888
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0013BF0 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C000EFE0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C004076C (TraceLoggingProviderEnabled.c)
 */

void __fastcall CPTPProcessor::TraceEnvironment(__int64 a1, UCHAR a2)
{
  CBaseInput *v2; // r10

  if ( gpHidInput && CBaseInput::_sessionInitialized )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C019EBC0, a2, 1uLL) )
      CBaseInput::EnumDevices(
        v2,
        0LL,
        (unsigned __int8 (__fastcall *)(struct DEVICEINFO *, void *))lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_);
  }
}
