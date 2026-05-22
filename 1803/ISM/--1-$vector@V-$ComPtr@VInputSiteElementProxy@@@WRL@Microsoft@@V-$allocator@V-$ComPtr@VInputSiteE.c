/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000C274
 * Callers:
 *     ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x18000BA00 (--_GInputSiteManager@@UEAAPEAXI@Z.c)
 *     ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x180023810 (--_GInputDeliveryServer@@UEAAPEAXI@Z.c)
 *     ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x180023904 (--1InputAttemptedTargetManager@@QEAA@XZ.c)
 *     ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x18002ED70 (--_GControllerNavigationManager@@UEAAPEAXI@Z.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$9 @ 0x1800E4355 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$9.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v3 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(__int64 **)(a1 + 8);
    if ( v3 != v4 )
    {
      do
      {
        v5 = *v3;
        if ( *v3 )
        {
          *v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        }
        ++v3;
      }
      while ( v3 != v4 );
      v3 = *(__int64 **)a1;
    }
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete(v3);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v3 & 0x1F) == 0 )
      {
        v7 = *(v3 - 1);
        if ( v7 < (unsigned __int64)v3 && (unsigned __int64)v3 - v7 - 8 <= 0x1F )
        {
          v3 = (__int64 *)*(v3 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x18000C33DLL);
  }
}
