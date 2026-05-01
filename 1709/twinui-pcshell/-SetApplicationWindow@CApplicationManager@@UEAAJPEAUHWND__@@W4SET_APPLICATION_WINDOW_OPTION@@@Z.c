/*
 * XREFs of ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18000A040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::SetApplicationWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = (a1 + 32) & -(__int64)(a1 != 160);
  v10 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
    v6,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 96) + 32LL))(a1 + 96, a2, a3);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
