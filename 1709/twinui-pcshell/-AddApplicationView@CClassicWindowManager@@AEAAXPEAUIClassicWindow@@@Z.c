/*
 * XREFs of ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180037234
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180036160 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800374DC (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7a26999a8ff8ee75627551ee74790a9c___ @ 0x180039ED0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7a26999a8ff8ee75627551ee74790a9c___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindowManager::AddApplicationView(CClassicWindowManager *this, struct IClassicWindow *a2)
{
  PSRWLOCK v3; // rsi
  __int64 *Ptr; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  struct IClassicWindow *v9; // [rsp+28h] [rbp-10h]

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
    v8 = Ptr;
    (*(void (__fastcall **)(__int64 *))(v5 + 8))(Ptr);
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    Windows::Internal::ComTaskPool::QueueTask__lambda_7a26999a8ff8ee75627551ee74790a9c___(
      v7,
      v6,
      LODWORD(v3[13].Ptr),
      &v8);
    if ( v9 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v8 )
      (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
    (*(void (__fastcall **)(__int64 *))(*Ptr + 16))(Ptr);
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
