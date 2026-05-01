/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@I@Collections@Foundation@Windows@@U?$IIterable@I@567@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C8200
 * Callers:
 *     ?QueryInterface@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C8330 (-QueryInterface@-$SimpleVectorView@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collection.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@I@Collections@Foundation@Windows@@U?$IIterable@I@567@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C93C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1801C93C0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@I@Collections@Foundation@Windows@@U?$IIterable@I@567@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C93F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1801C93F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<unsigned int>,Windows::Foundation::Collections::IIterable<unsigned int>>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

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
    if ( *a2 == -439477753
      && a2[1] == *(_DWORD *)&GUID_e5ce1a07_8d33_5007_ba64_7d2508ccf85c.Data2
      && a2[2] == *(_DWORD *)GUID_e5ce1a07_8d33_5007_ba64_7d2508ccf85c.Data4
      && a2[3] == *(_DWORD *)&GUID_e5ce1a07_8d33_5007_ba64_7d2508ccf85c.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_28;
    }
    v5 = a1 + 8;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != 1109216145
        || a2[1] != *(_DWORD *)&GUID_421d4b91_b13b_5f37_ae54_b5249bd80539.Data2
        || a2[2] != *(_DWORD *)GUID_421d4b91_b13b_5f37_ae54_b5249bd80539.Data4
        || a2[3] != *(_DWORD *)&GUID_421d4b91_b13b_5f37_ae54_b5249bd80539.Data4[4] )
      {
        v4 = -2147467262;
LABEL_27:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_28:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_27;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
