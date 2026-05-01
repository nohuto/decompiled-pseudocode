/*
 * XREFs of ?get@?QIApplication@Xaml@UI@Windows@@DebugSettings@Application@234@UE$AAAPE$AAV5234@XZ @ 0x18014F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _get__QIApplication_Xaml_UI_Windows__DebugSettings_Application_234_UE_AAAPE_AAV5234_XZ(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *))
{
  __int64 v1; // rbx
  int v2; // eax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  v7 = 0LL;
  v1 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    v2 = (**a1)(a1, &_uuidof__AUIApplication_Xaml_UI_Windows__, &v8);
    if ( v2 < 0 )
      __abi_WinRTraiseException(v2);
    v1 = v8;
  }
  v9 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 64LL))(v1, &v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = v7;
  v5 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v4 = v7;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
