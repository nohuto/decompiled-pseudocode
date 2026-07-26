/*
 * XREFs of NdisCloseAdapter @ 0x1C00FB7F0
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C00BFB60 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxz @ 0x1C005C3A4 (Template_jqxz.c)
 *     WPP_SF_qqZZ @ 0x1C005C678 (WPP_SF_qqZZ.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00A6498 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisCleanUpForProtocol @ 0x1C00BFBA4 (ndisCleanUpForProtocol.c)
 *     ndisMKillOpen @ 0x1C00FB908 (ndisMKillOpen.c)
 */

void __fastcall NdisCloseAdapter(int *a1, __int64 a2)
{
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  KIRQL v10; // al
  __int64 v11; // rcx

  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x1Au, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i && i != (struct _NDIS_OPEN_BLOCK *)a2; i = i->NextGlobalOpen )
    ;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( i )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int8)byte_1C0092610 >= 4u )
      WPP_SF_qqZZ(0x1Bu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, v8, a2, v9 + 72, *(_QWORD *)(v8 + 3880));
    if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
      Template_jqxz(
        v7,
        v6,
        (const GUID *)(v8 + 4032),
        v8 + 4032,
        *(_DWORD *)(v8 + 4080),
        *(_QWORD *)(v8 + 4048),
        *(const wchar_t **)(v9 + 80));
    if ( *(_BYTE *)(v9 + 56) < 6u )
    {
      if ( !*(_BYTE *)(a2 + 1000)
        || *(struct NDIS_BIND_LINK_BASE **)(a2 + 952) != Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v8 + 5136)) )
      {
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 232));
        *(_DWORD *)(a2 + 224) |= 0x40000000u;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 232), v10);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 960), NormalWorkQueue);
LABEL_16:
        *a1 = 259;
        goto LABEL_17;
      }
LABEL_14:
      *(_BYTE *)(a2 + 1000) = 0;
      if ( (*(_DWORD *)(v8 + 124) & 0x2000) != 0 )
      {
        v11 = *(_QWORD *)(v8 + 4008);
        if ( v11 )
          (*(void (__fastcall **)(_QWORD))(v11 + 40))(*(_QWORD *)(v11 + 8));
      }
      ndisCleanUpForProtocol(a2, v6);
      ndisMKillOpen(a2);
      goto LABEL_16;
    }
    *(_BYTE *)(a2 + 65) = 0;
    if ( *(struct _KTHREAD **)(v9 + 416) == KeGetCurrentThread() )
      goto LABEL_14;
    *a1 = -1073741823;
  }
  else
  {
    *a1 = 0;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a2, *a1);
}
