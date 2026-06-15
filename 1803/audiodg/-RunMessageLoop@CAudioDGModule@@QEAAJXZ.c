/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B14
 * Callers:
 *     WinMain @ 0x14001AC3C (WinMain.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     McTemplateU0q @ 0x140034B24 (McTemplateU0q.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  DWORD v4; // edi
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r9
  HANDLE CurrentProcess; // rax
  HANDLE Handles[2]; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids);
  }
  Handles[0] = this[15];
  Handles[1] = this[17];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q(v2, &EVT_AUDIOSRV_AUDIODG_READY, *((unsigned int *)this + 38));
  do
  {
    v4 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v4 == 1 )
    {
      *((_BYTE *)this + 148) = 1;
      v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                            v3,
                                            lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v5 > 2u && TlgKeywordOn(v5, 0x400000000000uLL) )
        TlgWrite(v6, &unk_14006FABC, 0LL, v7, 2u, &pData);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v4 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids);
  }
  return 0LL;
}
