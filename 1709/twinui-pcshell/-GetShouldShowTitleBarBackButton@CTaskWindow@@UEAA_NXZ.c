/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x180065810
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CTaskWindow::GetShouldShowTitleBarBackButton(CTaskWindow *this)
{
  char v1; // al
  __int64 v2; // rbx
  HRESULT v3; // eax
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER v7; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v8; // [rsp+48h] [rbp-20h] BYREF

  v6 = -2LL;
  v1 = 0;
  v5[0] = 0;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v8 = 0LL;
    v3 = WindowsCreateStringReference(L"BackVisible", 0xBu, &v7, &v8);
    if ( v3 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    (*(void (__fastcall **)(__int64, HSTRING, _BYTE *))(*(_QWORD *)v2 + 368LL))(v2, v8, v5);
    v1 = v5[0];
  }
  return v1 != 0;
}
