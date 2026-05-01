/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD650
 * Callers:
 *     ?QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED6C0 (-QueryInterface@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJAEBU.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1800F15E0 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101580 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIComponentRelationshipStore@ViewEv_ea_180101580.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101850 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIComponentRelationshipStore@ViewEv_ea_180101850.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101B50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIComponentRelationshipStore@ViewEv_ea_180101B50.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  char *v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)a2
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != -1350114592
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *(_DWORD *)a2 == -260278102
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_f07c78aa_32b6_4f71_9cca_05b43394d316.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_f07c78aa_32b6_4f71_9cca_05b43394d316.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_f07c78aa_32b6_4f71_9cca_05b43394d316.Data4[4]
      || (a1 += 8, *(_DWORD *)a2 == 56)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      v5 = a1 + 8;
      if ( *(_DWORD *)a2 == 417727895
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4[4] )
      {
        *a3 = v5;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v5 + 8),
                      (const struct _GUID *)a2,
                      a3);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
