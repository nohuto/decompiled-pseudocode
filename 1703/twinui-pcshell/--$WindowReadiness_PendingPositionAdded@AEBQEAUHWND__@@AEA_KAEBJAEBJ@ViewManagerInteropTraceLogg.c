/*
 * XREFs of ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x18011BE00
 * Callers:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18011BBE0 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        __int64 *a1,
        _DWORD *a2,
        int *a3,
        int *a4)
{
  const struct _TlgProvider_t *v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  int *v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  int *v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  int *v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]

  v8 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a1;
    v16 = &v14;
    v18 = &v11;
    v12 = *a3;
    v20 = &v12;
    v13 = *a4;
    v14 = v9;
    LODWORD(v9) = *a2;
    v22 = &v13;
    v17 = 8LL;
    v11 = v9;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_180200FA5, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
