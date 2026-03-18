/*
 * XREFs of ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0076370
 * Callers:
 *     <none>
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C001A28C (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C001C61C (TraceLoggingProviderEnabled.c)
 */

void __fastcall W32kBaseInputEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  void *v4; // rdx
  CBaseInput *v5; // rcx

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject && ControlCode == 1 && CBaseInput::_sessionInitialized )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C018D230, 1u, 1uLL) )
      CBaseInput::EnumDevices(v5, v4, lambda_31a9479bdf43f1457bc87359a481f8f6_::_lambda_invoker_cdecl_);
  }
}
