/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIApplicationViewIconLoaderNotifications@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166640
 * Callers:
 *     ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIImageSource@Media@Xaml@UI@Windows@@@Z @ 0x180165F10 (-CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Common@Multitasking@Experiences@Comp.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIApplicationViewIconLoaderNotifications@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166840 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIApplicationViewIconLoaderNotifica_ea_180166840.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIApplicationViewIconLoaderNotifications@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166860 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIApplicationViewIconLoaderNotifica_ea_180166860.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewIconLoaderNotifications,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  if ( *a2 != -1350114592 )
  {
LABEL_15:
    a1 += 8LL;
    if ( *a2 != 163383542
      || a2[1] != *(_DWORD *)&GUID_09bd08f6_5805_4a9c_b795_a08c46164aea.Data2
      || a2[2] != *(_DWORD *)GUID_09bd08f6_5805_4a9c_b795_a08c46164aea.Data4
      || a2[3] != *(_DWORD *)&GUID_09bd08f6_5805_4a9c_b795_a08c46164aea.Data4[4] )
    {
      if ( *a2 == 56
        && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        v4 = 0;
        *a3 = a1 + 8;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
      goto LABEL_26;
    }
LABEL_14:
    *a3 = a1;
    v4 = 0;
LABEL_26:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    if ( *a2 == -1350114592
      && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_9:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
