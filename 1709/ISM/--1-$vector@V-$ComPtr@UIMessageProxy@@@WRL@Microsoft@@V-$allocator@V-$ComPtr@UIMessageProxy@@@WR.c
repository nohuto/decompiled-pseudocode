/*
 * XREFs of ??1?$vector@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E298
 * Callers:
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x180083170 (--1ViewHierarchy@@UEAA@XZ.c)
 *     ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800927B4 (--1SpatialInputControllerCollection@@UEAA@XZ.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$3 @ 0x1800CD479 (_DWMInputRouter--HitTest_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$3 @ 0x1800CEE8C (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x1800CEEFE (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$9.c)
 *     _ViewHierarchy::_ViewHierarchy_::_1_::dtor$8 @ 0x1800D07F1 (_ViewHierarchy--_ViewHierarchy_--_1_--dtor$8.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$13 @ 0x1800D0D43 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$13.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(
        unsigned __int64 *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = (__int64 *)*a1;
  if ( *a1 )
  {
    v3 = (__int64 *)a1[1];
    while ( v2 != v3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v2;
    }
    v5 = *a1;
    v6 = (__int64)(a1[2] - *a1) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete((void *)v5);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
  }
}
