/*
 * XREFs of ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x18011BF9C
 * Callers:
 *     ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x180114060 (-HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(__int64 *a1)
{
  const struct _TlgProvider_t *v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+64h] [rbp-24h]

  v2 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = *a1;
    v9 = 0;
    v5 = v3;
    v7 = &v5;
    v8 = 8;
    LODWORD(v2) = TlgWrite(v2, &unk_18020105A, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
