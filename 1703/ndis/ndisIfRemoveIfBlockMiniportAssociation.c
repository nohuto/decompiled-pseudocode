/*
 * XREFs of ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00BEA64
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00BE9A0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     ndisIfDetachMiniportBlock @ 0x1C0025030 (ndisIfDetachMiniportBlock.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h]

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qq(0xD7u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2);
  *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1116LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 4064) + 1192LL) = a3;
  v6 = *(_QWORD *)(a2 + 4064);
  if ( *(_DWORD *)(v6 + 1112) != 2 )
  {
    *(_DWORD *)(v6 + 1112) = 2;
    v9 = *(_QWORD *)(a2 + 4064);
    v10 = 1LL;
    v12 = 0x21800000008LL;
    v11 = v9 + 1112;
    ndisNsiNotifyClientInterfaceChange(v9, 0, (__int64)&v10, 1);
  }
  v7 = *(_QWORD *)(a2 + 4064);
  if ( *(_DWORD *)(v7 + 1220) )
  {
    *(_DWORD *)(v7 + 1220) = 0;
    v8 = *(_QWORD *)(a2 + 4064);
    v10 = 1LL;
    v12 = 0x28400000004LL;
    v11 = v8 + 1220;
    ndisNsiNotifyClientInterfaceChange(v8, 0, (__int64)&v10, 1);
  }
  ndisIfDetachMiniportBlock(a2);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qq(0xD8u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2);
}
