/*
 * XREFs of ndisSendCompleteWithPause @ 0x1C00577D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005D740 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisSendCompleteWithPause(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  bool v6; // si
  struct _NDIS_STACK_RESERVED *v7; // rax
  KIRQL v8; // al
  int v9; // edx
  struct _NDIS_STACK_RESERVED *v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qqd(0x34u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v11);
  v7 = v11;
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  *((_DWORD *)v7 + 2) = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 720));
  v9 = --*(_DWORD *)(a1 + 740);
  *(_BYTE *)(a1 + 728) = v8;
  if ( *(_DWORD *)(a1 + 736) == 1 )
    v6 = v9 == 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 720), v8);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))(a1 + 776))(*(_QWORD *)(a1 + 528), a2, a3);
  if ( v6 )
    KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
  ndisMDereferenceOpenUnlocked(a1);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(0x35u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2);
}
