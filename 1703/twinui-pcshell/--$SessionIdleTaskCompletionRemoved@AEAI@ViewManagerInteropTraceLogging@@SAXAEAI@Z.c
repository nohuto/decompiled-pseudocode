/*
 * XREFs of ??$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180119B40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f25f51c1118b73fb82a4cf2a862a275___::Run @ 0x18011A870 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7f25f51c1118b73fb82a4cf2a862a275___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int &>(int *a1)
{
  const struct _TlgProvider_t *v2; // rax
  int v3; // ecx
  int v5; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+64h] [rbp-24h]

  v2 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = *a1;
    v9 = 0;
    v5 = v3;
    v7 = &v5;
    v8 = 4;
    LODWORD(v2) = TlgWrite(v2, &unk_18020087F, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
