/*
 * XREFs of ??$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x18013888C
 * Callers:
 *     ?GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z @ 0x180135888 (-GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::GetShellWindowIdForView::WindowId<unsigned int &>(__int64 a1, int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // edx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v4 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a2;
    v11 = 0;
    v9 = &v7;
    v7 = v5;
    v10 = 4;
    LODWORD(v4) = TlgWrite(v4, &unk_18026176F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
