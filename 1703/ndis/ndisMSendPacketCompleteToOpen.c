/*
 * XREFs of ndisMSendPacketCompleteToOpen @ 0x1C0057570
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00211E4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     Template_pp @ 0x1C00550B0 (Template_pp.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisMSendPacketCompleteToOpen(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  const GUID *v3; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _NDIS_STACK_RESERVED *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(const GUID **)(a1 + 16);
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qqd(0x14u, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v10);
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  *((_DWORD *)v10 + 2) = 0;
  if ( (Microsoft_Windows_NDISEnableBits & 0x200000000LL) != 0 )
    Template_pp(v8, v7, v3 + 252, a1, a2);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))(a1 + 776))(*(_QWORD *)(a1 + 528), a2, a3);
  ndisMDereferenceOpenUnlocked(a1, 9);
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(0x15u, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2);
}
