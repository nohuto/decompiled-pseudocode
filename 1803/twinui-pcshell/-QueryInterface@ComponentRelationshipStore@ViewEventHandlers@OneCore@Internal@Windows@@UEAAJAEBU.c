/*
 * XREFs of ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F8D0
 * Callers:
 *     ?GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z @ 0x180033E10 (-GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z.c)
 *     ?GetDesktopBrokerProcessHandle@ViewEventDispatcher@@UEAAJPEAPEAX@Z @ 0x180033EE0 (-GetDesktopBrokerProcessHandle@ViewEventDispatcher@@UEAAJPEAPEAX@Z.c)
 *     ?GetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180034050 (-GetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z.c)
 *     ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7F00 (-QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAJAEB.c)
 *     ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7F10 (-QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAJA.c)
 *     ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7F20 (-QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAJA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::QueryInterface(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  void **v9; // r8
  __int64 v10; // r10
  __int64 v11; // r9
  int CanCastTo; // eax
  void (*v13)(void); // rax

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v6;
    v13 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    goto LABEL_12;
  }
  if ( InlineIsEqualGUID(v7, &GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b)
    || InlineIsEqualGUID(v8, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v9 = (void *)v10;
LABEL_11:
    v13 = *(void (**)(void))(*(_QWORD *)*v9 + 8LL);
LABEL_12:
    v13();
    return v3;
  }
  if ( *(_DWORD *)v11 == 417727895
    && *(_DWORD *)(v11 + 4) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data2
    && *(_DWORD *)(v11 + 8) == *(_DWORD *)GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4
    && *(_DWORD *)(v11 + 12) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4[4] )
  {
    *v9 = (void *)(v10 + 8);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 16), (const struct _GUID *)v11, v9);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  v3 = CanCastTo;
  if ( CanCastTo >= 0 )
    goto LABEL_11;
  return v3;
}
