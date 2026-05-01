/*
 * XREFs of ??$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x1801444D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___::Run @ 0x180145140 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int &>(int *a1)
{
  const struct _TlgProvider_t *v2; // rax
  int v3; // ecx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = *a1;
    v9 = 0;
    v5 = v3;
    v7 = &v5;
    v8 = 4;
    LODWORD(v2) = TlgWrite(v2, &unk_180263F6D, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
