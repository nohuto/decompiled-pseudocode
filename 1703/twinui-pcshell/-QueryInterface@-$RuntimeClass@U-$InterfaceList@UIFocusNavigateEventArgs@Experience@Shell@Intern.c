/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C5E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009F470 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIFocusNavigateEventArgs@Experience_ea_18009F470.c)
 *     _CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::QueryInterface @ 0x1800BE1A0 (_CortanaExperienceManagerNotification--OnFocusNavigate_--_2_--CFocusNavigateEventArgs--QueryInte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IFocusNavigateEventArgs,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *a2 == -1350114592
    && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( *a2 == -1326361706
      && a2[1] == *(_DWORD *)&GUID_b0f15396_8df4_4167_b062_b2c66f34efbb.Data2
      && a2[2] == *(_DWORD *)GUID_b0f15396_8df4_4167_b062_b2c66f34efbb.Data4
      && a2[3] == *(_DWORD *)&GUID_b0f15396_8df4_4167_b062_b2c66f34efbb.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
      *a3 = a1 + 8;
    }
    a1 = *a3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
