/*
 * XREFs of ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180035C58
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180034A10 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x1800354E8 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035E3C (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_94e78e0ab61cd36278875a1a9164841b___ @ 0x1800388BC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_94e78e0ab61cd36278875a1a9164841b___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall CClassicWindowManager::RemoveApplicationView(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  PSRWLOCK v6; // rdi
  __int64 *Ptr; // rbx
  __int64 v8; // rax
  int v9; // edi
  IUnknown **v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  result = &retaddr;
  v16 = a1;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*Ptr + 8))(CApplicationManagerUtility::g_pIAMGlobals[12].Ptr);
    v8 = *Ptr;
    v12 = Ptr;
    (*(void (__fastcall **)(__int64 *))(v8 + 8))(Ptr);
    v13 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = (int)v6[13].Ptr;
    v14 = a3;
    v10 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_94e78e0ab61cd36278875a1a9164841b___(
                         &v16,
                         &v12);
    Windows::Internal::ComTaskPool::RunTask(3, 2u, v9, 0, *v10, 0LL);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64 *))(*Ptr + 16))(Ptr);
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return result;
}
