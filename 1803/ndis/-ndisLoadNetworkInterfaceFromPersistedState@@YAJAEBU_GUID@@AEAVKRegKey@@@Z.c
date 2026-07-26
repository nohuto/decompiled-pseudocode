/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C14A8
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C00424F4 (ndisIfCreateOrUpdateInterface.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00C1690 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00092E0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001A584 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001D2F4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C003F240 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROP.c)
 *     WPP_SF_I @ 0x1C0041960 (WPP_SF_I.c)
 *     WPP_SF_IL @ 0x1C0041994 (WPP_SF_IL.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00BA180 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 *     ?ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C00C15C0 (-ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(const struct _GUID *this, struct KRegKey *a2)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rsi
  struct KRegKey *v6; // rbx
  int NetworkInterfaceV2; // edi
  struct _NDIS_INTERFACE_ADDITIONAL_PROPERTIES *v8; // r8
  __int64 v9; // rdx
  int updated; // eax
  __int64 v12; // rdx
  struct _GUID v13; // [rsp+20h] [rbp-18h] BYREF
  union _NET_LUID_LH v14; // [rsp+50h] [rbp+18h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x484uLL, 0x6669444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x484uLL);
    v6 = (struct KRegKey *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6669444Eu);
    if ( v6 )
    {
      v6->m_ptr = 0LL;
      v6[1].m_ptr = 0LL;
      NetworkInterfaceV2 = Ndis::BindRegistry::ReadNetworkInterfaceV2(
                             (Ndis::BindRegistry *)this,
                             a2,
                             (struct KRegKey *)&v14,
                             (union _NET_LUID_LH *)v5);
      if ( NetworkInterfaceV2 >= 0 )
      {
        if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)v5 + 66, &ndisDefaultNetworkGuid) )
          *((struct _GUID *)v5 + 66) = *ndisIfGetDefaultNetworkGuid(&v13);
        if ( (unsigned int)ndisIfCreateInterfaceFromPersistentStore(
                             &v14,
                             (struct _GUID *)v5,
                             NdisIfBlockSourcePersistedNetSetup) )
        {
          NetworkInterfaceV2 = -1073741823;
        }
        else if ( (int)Ndis::BindRegistry::ReadAdditionalNetworkInterfaceParameters(a2, v6, v8) >= 0 )
        {
          if ( (unsigned __int8)byte_1C009961D >= 4u )
            WPP_SF_I(0xDu, v9, v14.Value);
          updated = ndisIfUpdateInterfaceFromPersistentStore(v14, (struct _NDIS_INTERFACE_ADDITIONAL_PROPERTIES *)v6);
          NetworkInterfaceV2 = updated;
          if ( updated < 0 && (unsigned __int8)byte_1C009961D >= 2u )
            WPP_SF_IL(0xEu, v12, v14.Value, updated);
        }
        else
        {
          NetworkInterfaceV2 = 0;
        }
      }
    }
    else
    {
      v6 = 0LL;
      NetworkInterfaceV2 = -1073741670;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)NetworkInterfaceV2;
}
