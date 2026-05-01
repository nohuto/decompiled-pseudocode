/*
 * XREFs of ??$SessionIdleTaskCompletionAdded@AEAIAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEBQEAUHWND__@@AEAK@Z @ 0x1801199C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144___::Run @ 0x18011A940 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int &,HWND__ * const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  int v8; // [rsp+38h] [rbp-29h] BYREF
  __int64 v9; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v11; // [rsp+68h] [rbp+7h]
  __int64 v12; // [rsp+70h] [rbp+Fh]
  __int64 *v13; // [rsp+78h] [rbp+17h]
  __int64 v14; // [rsp+80h] [rbp+1Fh]
  __int64 v15; // [rsp+88h] [rbp+27h]
  __int64 v16; // [rsp+90h] [rbp+2Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = *a1;
    v11 = &v8;
    v9 = *a2;
    v13 = &v9;
    v12 = 4LL;
    v14 = 8LL;
    v15 = a3;
    v16 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_180200A46, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
