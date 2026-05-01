/*
 * XREFs of ??$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z @ 0x1801AAD14
 * Callers:
 *     ?GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801AE880 (-GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@W.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B3F24 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const (&)[7],int>(__int64 a1, int *a2)
{
  __int64 v3; // rax
  int v4; // r10d
  TraceLoggingHProvider v5; // r11
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  v3 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         a1,
         lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v3 + 8) > 4u )
  {
    LOBYTE(v3) = TlgKeywordOn(*(TraceLoggingHProvider *)(v3 + 8), 0x400000000000uLL);
    if ( (_BYTE)v3 )
    {
      TlgCreateWsz(&pDesc, L"<none>");
      v4 = *a2;
      v12 = 0;
      v10 = &v7;
      v7 = v4;
      v11 = 4;
      LOBYTE(v3) = TlgWrite(v5, &unk_180392416, 0LL, 0LL, 4u, &pData);
    }
  }
  return v3;
}
