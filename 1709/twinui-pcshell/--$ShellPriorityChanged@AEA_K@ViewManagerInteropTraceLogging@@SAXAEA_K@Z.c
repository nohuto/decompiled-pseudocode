/*
 * XREFs of ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x180129E98
 * Callers:
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x18012616C (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180140CB0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(int *a1)
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
    LODWORD(v2) = TlgWrite(v2, &unk_180260514, 0LL, 0LL, 3u, &pData);
  }
  return (int)v2;
}
