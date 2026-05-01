/*
 * XREFs of ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x1801461EC
 * Callers:
 *     ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x18013E2B0 (-HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
        __int64 *a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-68h] BYREF
  __int64 v8; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v4 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a1;
    v12 = 0;
    v15 = 0;
    v8 = v5;
    v10 = &v8;
    v7 = *a2;
    v13 = &v7;
    v11 = 8;
    v14 = 4;
    LODWORD(v4) = TlgWrite(v4, &unk_180264505, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
