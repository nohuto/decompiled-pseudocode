/*
 * XREFs of ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180035B04
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180034A10 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035E3C (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_7a26999a8ff8ee75627551ee74790a9c___ @ 0x180038878 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_7a26999a8ff8ee75627551ee74790a9c___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindowManager::AddApplicationView(CClassicWindowManager *this, struct IClassicWindow *a2)
{
  PSRWLOCK v3; // rdi
  __int64 *Ptr; // rbx
  __int64 v5; // rax
  int v6; // edi
  IUnknown **v7; // rax
  CClassicWindowManager *v8; // rcx
  __int64 *v9; // [rsp+30h] [rbp-18h] BYREF
  struct IClassicWindow *v10; // [rsp+38h] [rbp-10h]
  CClassicWindowManager *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = this;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*Ptr + 8))(CApplicationManagerUtility::g_pIAMGlobals[12].Ptr);
    v5 = *Ptr;
    v9 = Ptr;
    (*(void (__fastcall **)(__int64 *))(v5 + 8))(Ptr);
    v10 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = (int)v3[13].Ptr;
    v7 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_7a26999a8ff8ee75627551ee74790a9c___(
                        &v11,
                        &v9);
    Windows::Internal::ComTaskPool::RunTask(3, 2u, v6, 0, *v7, 0LL);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v10 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
    (*(void (__fastcall **)(__int64 *))(*Ptr + 16))(Ptr);
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
