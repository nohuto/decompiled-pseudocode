/*
 * XREFs of ??$SessionIdleTaskCompletionAdded@AEAIAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEBQEAUHWND__@@AEAK@Z @ 0x180144414
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b1f275bf309deb67bee58a4dcb93f43___::Run @ 0x180145260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5b1f275bf309deb67bee58a4dcb93f43___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int &,HWND__ * const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  int v8; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  __int64 *v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+80h] [rbp+2Fh]
  __int64 v15; // [rsp+88h] [rbp+37h]
  __int64 v16; // [rsp+90h] [rbp+3Fh]

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
    LODWORD(v6) = TlgWrite(v6, &unk_180263FAD, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
