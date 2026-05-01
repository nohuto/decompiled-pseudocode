/*
 * XREFs of ?OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18000AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180043DB0 (-GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x18004C600 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::OnTitleUpdated(CAppViewManager *this, HWND a2)
{
  RTL_SRWLOCK *v4; // rbx
  CApplicationManager *v5; // rcx
  __int64 (__fastcall *v6)(CApplicationManager *__hidden, HWND, const struct _GUID *, void **); // rax
  int ApplicationByWindowInternal; // eax
  void (__fastcall *v8)(CImmersiveApp *__hidden, HWND); // rax
  CImmersiveApp *v9; // rcx
  CImmersiveApp *v11; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK v12; // [rsp+58h] [rbp+10h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  v5 = (CApplicationManager *)*((_QWORD *)this + 11);
  v6 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, HWND, const struct _GUID *, void **))(*(_QWORD *)v5 + 40LL);
  if ( v6 == CApplicationManager::GetApplicationByWindowInternal )
    ApplicationByWindowInternal = CApplicationManager::GetApplicationByWindowInternal(
                                    v5,
                                    a2,
                                    &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                    (void **)&v11);
  else
    ApplicationByWindowInternal = v6(v5, a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, (void **)&v11);
  if ( ApplicationByWindowInternal >= 0 )
  {
    v8 = *(void (__fastcall **)(CImmersiveApp *__hidden, HWND))(*(_QWORD *)v11 + 200LL);
    if ( v8 == CImmersiveApp::OnTitleUpdated )
      CImmersiveApp::OnTitleUpdated(v11, a2);
    else
      v8(v11, a2);
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
