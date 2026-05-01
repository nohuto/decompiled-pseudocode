/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___ @ 0x180119174
 * Callers:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180006FE0 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 i; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v4; ++i )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    v6 = v9;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
    if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6) == **(_QWORD **)a2 )
    {
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(****(_QWORD ****)(a2 + 8) + 96LL))(***(_QWORD ***)(a2 + 8));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, *v7);
    }
    Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v9);
  }
  return 1;
}
