/*
 * XREFs of ?CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ @ 0x1801B692C
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z @ 0x1801B85D0 (-OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUIServiceProvider@@@Z @ 0x1801B8EF0 (-RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUISer.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18008C784 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

char __fastcall Win32BackedViewHostItem::CheckWindowTextChanged(HWND *this)
{
  void **v2; // rcx
  unsigned __int64 v3; // r8
  char *v4; // r9
  HWND v5; // rax
  WCHAR *v6; // rdx
  __int64 v7; // r9
  WCHAR v8; // r10
  int v9; // eax
  bool v10; // zf
  char v11; // al
  WCHAR String[256]; // [rsp+20h] [rbp-218h] BYREF

  memset_0(String, 0, sizeof(String));
  if ( GetWindowTextW(this[14], String, 256) <= 0 )
    return 0;
  v2 = (void **)(this + 21);
  v3 = -1LL;
  do
    ++v3;
  while ( String[v3] );
  v4 = (char *)(this + 21);
  if ( (unsigned __int64)this[24] >= 8 )
    v4 = (char *)*v2;
  v5 = this[23];
  if ( v5 != (HWND)v3 )
    goto LABEL_13;
  v6 = String;
  if ( v5 )
  {
    v7 = v4 - (char *)String;
    while ( 1 )
    {
      v8 = *(WCHAR *)((char *)v6 + v7);
      if ( v8 != *v6 )
        break;
      ++v6;
      v5 = (HWND)((char *)v5 - 1);
      if ( !v5 )
        goto LABEL_11;
    }
    v9 = v8 < *v6 ? -1 : 1;
  }
  else
  {
LABEL_11:
    v9 = 0;
  }
  v10 = v9 == 0;
  v11 = 0;
  if ( !v10 )
LABEL_13:
    v11 = 1;
  if ( !v11 )
    return 0;
  std::wstring::assign(v2, String, v3);
  return 1;
}
