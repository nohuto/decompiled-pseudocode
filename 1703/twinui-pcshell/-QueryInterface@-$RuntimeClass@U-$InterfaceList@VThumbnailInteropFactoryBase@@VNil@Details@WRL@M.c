/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180168030
 * Callers:
 *     ??$com_query@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@@Z @ 0x180168494 (--$com_query@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801689D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@_ea_1801689D0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180168A10 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@_ea_180168A10.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180168A70 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@_ea_180168A70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == 1549354306
      && a2[1] == *(_DWORD *)&GUID_5c594542_969f_4b3c_971b_c13cb89bbdbb.Data2
      && a2[2] == *(_DWORD *)GUID_5c594542_969f_4b3c_971b_c13cb89bbdbb.Data4
      && a2[3] == *(_DWORD *)&GUID_5c594542_969f_4b3c_971b_c13cb89bbdbb.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_34;
    }
    if ( *a2 == -1593636024
      && a2[1] == *(_DWORD *)&GUID_a1030b48_7355_4030_bd21_061bc57b9a78.Data2
      && a2[2] == *(_DWORD *)GUID_a1030b48_7355_4030_bd21_061bc57b9a78.Data4
      && a2[3] == *(_DWORD *)&GUID_a1030b48_7355_4030_bd21_061bc57b9a78.Data4[4] )
    {
      *a3 = a1 + 8;
    }
    else
    {
      if ( *a2 != -22656073
        || a2[1] != *(_DWORD *)&GUID_fea64bb7_089f_421b_926e_37414adffca0.Data2
        || a2[2] != *(_DWORD *)GUID_fea64bb7_089f_421b_926e_37414adffca0.Data4
        || a2[3] != *(_DWORD *)&GUID_fea64bb7_089f_421b_926e_37414adffca0.Data4[4] )
      {
        v4 = -2147467262;
        goto LABEL_27;
      }
      *a3 = a1 + 16;
    }
    v4 = 0;
LABEL_27:
    if ( v4 >= 0 )
      goto LABEL_35;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      v4 = 0;
      *a3 = a1 + 88;
      goto LABEL_35;
    }
    v4 = -2147467262;
LABEL_34:
    if ( v4 < 0 )
      return (unsigned int)v4;
LABEL_35:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
