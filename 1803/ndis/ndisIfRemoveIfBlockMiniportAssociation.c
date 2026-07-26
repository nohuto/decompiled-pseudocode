/*
 * XREFs of ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00B1F20
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00B1E5C (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     ndisIfDetachMiniportBlock @ 0x1C0011BB0 (ndisIfDetachMiniportBlock.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C078C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qq(0xD7u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
  *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1192LL) = a3;
  v6 = *(_QWORD *)(a2 + 4064);
  if ( *(_DWORD *)(v6 + 1112) != 2 )
  {
    *(_DWORD *)(v6 + 1112) = 2;
    v8 = *(_QWORD *)(a2 + 4064);
    v9 = 1LL;
    v11 = 0x21800000008LL;
    v10 = v8 + 1112;
    ndisNsiNotifyClientInterfaceChange(v8, 0LL, &v9);
    v6 = *(_QWORD *)(a2 + 4064);
  }
  if ( *(_DWORD *)(v6 + 1220) )
  {
    *(_DWORD *)(v6 + 1220) = 0;
    v7 = *(_QWORD *)(a2 + 4064);
    v9 = 1LL;
    v11 = 0x28400000004LL;
    v10 = v7 + 1220;
    ndisNsiNotifyClientInterfaceChange(v7, 0LL, &v9);
  }
  ndisIfDetachMiniportBlock(a2);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qq(0xD8u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
}
