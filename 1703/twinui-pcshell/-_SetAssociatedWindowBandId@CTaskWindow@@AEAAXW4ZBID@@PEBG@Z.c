/*
 * XREFs of ?_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z @ 0x180064920
 * Callers:
 *     ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x1800635D0 (-SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HANDLE __fastcall CTaskWindow::_SetAssociatedWindowBandId(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  HWND v5; // rax
  HANDLE result; // rax

  v5 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  result = GetPropW(v5, a3);
  if ( result )
    return (HANDLE)(*(__int64 (__fastcall **)(PVOID, HANDLE, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                                            + 32LL))(
                     CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
                     result,
                     0LL,
                     a2);
  return result;
}
