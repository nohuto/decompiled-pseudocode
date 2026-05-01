/*
 * XREFs of ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800337FC
 * Callers:
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x180033D30 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035E3C (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_844449e548af17c9f319f8c2e0def985___ @ 0x180038834 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_844449e548af17c9f319f8c2e0def985___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaiseApplicationViewChangeNotification(__int64 a1, int a2)
{
  PSRWLOCK v4; // rdi
  __int64 *Ptr; // rbx
  __int64 v6; // rax
  int v7; // edi
  IUnknown **v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*Ptr + 8))(CApplicationManagerUtility::g_pIAMGlobals[12].Ptr);
    v6 = *Ptr;
    v10 = Ptr;
    (*(void (__fastcall **)(__int64 *))(v6 + 8))(Ptr);
    v11 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = (int)v4[13].Ptr;
    v12 = a2;
    v8 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_844449e548af17c9f319f8c2e0def985___(
                        &v13,
                        &v10);
    Windows::Internal::ComTaskPool::RunTask(3, 2u, v7, 0, *v8, 0LL);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
    (*(void (__fastcall **)(__int64 *))(*Ptr + 16))(Ptr);
  }
  if ( a1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
}
