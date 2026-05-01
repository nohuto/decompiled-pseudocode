/*
 * XREFs of ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180034E08
 * Callers:
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x1800353C0 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800374DC (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_844449e548af17c9f319f8c2e0def985___ @ 0x180039D1C (Windows--Internal--ComTaskPool--QueueTask__lambda_844449e548af17c9f319f8c2e0def985___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaiseApplicationViewChangeNotification(__int64 a1, int a2)
{
  __int64 result; // rax
  PSRWLOCK v5; // rsi
  __int64 *Ptr; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 Ptr_low; // r8
  __int64 *v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*Ptr + 8))(CApplicationManagerUtility::g_pIAMGlobals[12].Ptr);
    v7 = *Ptr;
    v11 = Ptr;
    (*(void (__fastcall **)(__int64 *))(v7 + 8))(Ptr);
    v12 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    Ptr_low = LODWORD(v5[13].Ptr);
    v13 = a2;
    Windows::Internal::ComTaskPool::QueueTask__lambda_844449e548af17c9f319f8c2e0def985___(v9, v8, Ptr_low, &v11);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
    result = (*(__int64 (__fastcall **)(__int64 *))(*Ptr + 16))(Ptr);
  }
  if ( a1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}
