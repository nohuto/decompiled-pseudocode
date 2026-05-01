/*
 * XREFs of ?SetGhostVisualStyle@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@@Z @ 0x180052340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetGhostVisualStyle(__int64 a1, unsigned int a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 368LL))(a1 + 16, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
