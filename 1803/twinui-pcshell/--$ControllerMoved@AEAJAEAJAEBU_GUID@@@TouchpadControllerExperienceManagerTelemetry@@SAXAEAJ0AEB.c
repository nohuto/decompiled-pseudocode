/*
 * XREFs of ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x18017FD04
 * Callers:
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801828B4 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x180183A9C (-get@-$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadCo.c)
 */

char __fastcall TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  __int128 v9; // xmm0
  __int128 v11; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  __int64 v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  __int128 *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v6 = wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
         a1,
         lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_);
  v7 = *(const struct _TlgProvider_t **)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn(v7, 0x400000000000uLL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3;
      v13 = a1;
      v14 = 4LL;
      v11 = v9;
      v15 = a2;
      v16 = 4LL;
      v17 = &v11;
      v18 = 16LL;
      LOBYTE(v6) = TlgWrite(v8, &unk_1803905B2, 0LL, 0LL, 5u, &pData);
    }
  }
  return v6;
}
