/*
 * XREFs of Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF1CC
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00B01A0 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C001691C (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_SZ @ 0x1C0043EF8 (WPP_SF_SZ.c)
 *     WPP_SF_Sd @ 0x1C0043F9C (WPP_SF_Sd.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1128 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rt.c)
 */

__int64 __fastcall Ndis::BindRegistry::LoadNetworkInterfaceString(__int64 a1, const wchar_t *a2, _WORD *a3)
{
  int v5; // eax
  const void **v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  v5 = KRegKey::QueryValueString(a1, a2, &P);
  v6 = (const void **)P;
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C009261D >= 2u )
      WPP_SF_Sd(0x15u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, a2, v5);
  }
  else if ( ndisIsValidIfStringParts((const unsigned __int16 *)*(unsigned __int16 *)P, *(unsigned __int16 *)P) )
  {
    memmove(a3 + 1, v6[1], (unsigned int)v9);
    v7 = 0;
    *a3 = *(_WORD *)v6;
  }
  else
  {
    if ( (unsigned __int8)byte_1C009261D >= 2u )
      WPP_SF_SZ(v9, v8, a2, (unsigned __int16 *)v6);
    v7 = -1073741811;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7274534Bu);
  return v7;
}
