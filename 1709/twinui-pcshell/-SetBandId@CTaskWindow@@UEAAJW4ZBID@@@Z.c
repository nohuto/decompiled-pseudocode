/*
 * XREFs of ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x1800652B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z @ 0x1800665E4 (-_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::SetBandId(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48))(
    *(_QWORD *)(a1 + 48),
    &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
    &v6);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, a2);
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{1CADE38A-8C26-4D73-A0D7-3ADE69F02A94}");
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{A086F28F-D579-49B1-9117-F2A3AC324349}");
  *(_DWORD *)(a1 + 44) = a2 - 8;
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
