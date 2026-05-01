/*
 * XREFs of ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180037284
 * Callers:
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x1800354E8 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180035E3C (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CClassicWindowManager::_HandleOwnerBecameDestroyed(
        CClassicWindowManager *this,
        struct IClassicWindow *a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 i; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  struct IClassicWindow *v8; // [rsp+68h] [rbp+10h] BYREF
  struct IClassicWindow **v9; // [rsp+70h] [rbp+18h]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v8 = a2;
  v9 = &v8;
  v3 = *((_QWORD *)this + 23);
  for ( i = 0LL; i < v3; ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * i);
    v10 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( *(struct IClassicWindow **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5) == a2 )
    {
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)*v9 + 96LL))(*v9);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 104LL))(v5, *v6);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
