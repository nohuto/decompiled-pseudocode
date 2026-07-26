/*
 * XREFs of NdisCloseAdapter @ 0x1C0102A80
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C00B3360 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxz @ 0x1C005C040 (McTemplateK0jqxz.c)
 *     WPP_SF_qqZZ @ 0x1C005C954 (WPP_SF_qqZZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00AC470 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisCleanUpForProtocol @ 0x1C00B33A4 (ndisCleanUpForProtocol.c)
 *     ndisMKillOpen @ 0x1C0102BA4 (ndisMKillOpen.c)
 */

void __fastcall NdisCloseAdapter(int *a1, __int64 a2)
{
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  KIRQL v12; // al
  __int64 v13; // rcx

  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x1Au, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v6 = 0;
  while ( NextGlobalOpen && NextGlobalOpen != (struct _NDIS_OPEN_BLOCK *)a2 )
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( NextGlobalOpen )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_QWORD *)(a2 + 24);
    if ( (unsigned __int8)byte_1C0099610 >= 4u )
      WPP_SF_qqZZ(0x1Bu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, v9, a2, v10 + 72, *(_QWORD *)(v9 + 3880));
    if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
      McTemplateK0jqxz(
        v8,
        v7,
        (const GUID *)(v9 + 4032),
        v9 + 4032,
        *(_DWORD *)(v9 + 4080),
        *(_QWORD *)(v9 + 4048),
        *(const wchar_t **)(v10 + 80));
    if ( *(_BYTE *)(v10 + 56) < 6u )
    {
      if ( !*(_BYTE *)(a2 + 1000)
        || *(struct NDIS_BIND_LINK_BASE **)(a2 + 952) != Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v9 + 5136)) )
      {
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 232));
        *(_DWORD *)(a2 + 224) |= 0x40000000u;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 232), v12);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 960), (WORK_QUEUE_TYPE)40);
LABEL_16:
        v11 = 259;
LABEL_17:
        *a1 = v11;
        v6 = v11;
        goto LABEL_18;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 65) = 0;
      if ( *(struct _KTHREAD **)(v10 + 416) != KeGetCurrentThread() )
      {
        v11 = -1073741823;
        goto LABEL_17;
      }
    }
    *(_BYTE *)(a2 + 1000) = 0;
    if ( (*(_DWORD *)(v9 + 124) & 0x2000) != 0 )
    {
      v13 = *(_QWORD *)(v9 + 4008);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD))(v13 + 40))(*(_QWORD *)(v13 + 8));
    }
    ndisCleanUpForProtocol(a2, v7);
    ndisMKillOpen(a2);
    goto LABEL_16;
  }
  *a1 = 0;
LABEL_18:
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a2, v6);
}
