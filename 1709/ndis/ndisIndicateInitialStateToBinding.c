/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C0006CE8
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C00045E4 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0005714 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00057B0 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  KIRQL v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  KIRQL NewIrql[16]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v16[14]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-60h] BYREF
  int v18; // [rsp+B0h] [rbp-58h]
  int v19; // [rsp+B8h] [rbp-50h] BYREF
  int v20; // [rsp+BCh] [rbp-4Ch]
  int v21; // [rsp+C0h] [rbp-48h]
  __int64 v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D8h] [rbp-30h]
  int v25; // [rsp+DCh] [rbp-2Ch]
  __int128 v26; // [rsp+E0h] [rbp-28h] BYREF
  int v27; // [rsp+F0h] [rbp-18h]
  __int128 v28; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v29; // [rsp+108h] [rbp+0h]
  int v30; // [rsp+110h] [rbp+8h]
  _OWORD v31[5]; // [rsp+118h] [rbp+10h] BYREF
  int v32; // [rsp+168h] [rbp+60h]
  _OWORD v33[8]; // [rsp+178h] [rbp+70h] BYREF
  int v34; // [rsp+1F8h] [rbp+F0h]
  _OWORD v35[11]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v36; // [rsp+2B8h] [rbp+1B0h]
  int v37; // [rsp+2C0h] [rbp+1B8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(77LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1);
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
  v19 = 2621824;
  v3 = *(_QWORD *)(v1 + 2056);
  if ( v3 )
  {
    v20 = *(_DWORD *)(v3 + 388);
    v21 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 392LL);
    v22 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 400LL);
    v23 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 408LL);
    v24 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 416LL);
    v25 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 420LL);
  }
  else
  {
    v20 = *(_DWORD *)(v1 + 480);
    v21 = *(_DWORD *)(v1 + 488);
    v22 = *(_QWORD *)(v1 + 792);
    v23 = *(_QWORD *)(v1 + 800);
    v24 = *(_DWORD *)(v1 + 808);
    v25 = *(_DWORD *)(v1 + 468);
  }
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[3]) |= 3u;
  v16[6] = &v19;
  LODWORD(v16[0]) = 7340440;
  v16[1] = v1;
  HIDWORD(v16[2]) = 1073807383;
  LODWORD(v16[7]) = 40;
  v16[4] = a1;
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(v1 + 4056) )
  {
    v4 = *(_QWORD *)(v1 + 4064);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 1448));
    ++*(_DWORD *)(v4 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  if ( v4 )
  {
    v18 = 0;
    v17 = 786816LL;
    HIDWORD(v17) = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 1112LL);
    v18 = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 1116LL);
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[3]) |= 1u;
    v16[6] = &v17;
    LODWORD(v16[0]) = 7340440;
    v16[1] = v1;
    HIDWORD(v16[2]) = 1073807395;
    LODWORD(v16[7]) = 12;
    v16[4] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    IFBLOCK_DEREFERENCE_MINIPORT_LINK(*(struct _NDIS_IF_BLOCK **)(v1 + 4064), MPIFREF_INITIALSTATE);
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v6);
  }
  v7 = *(_QWORD *)(v1 + 4120);
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 1) == 1 )
    {
      v8 = v7 + 196;
      v35[0] = *(_OWORD *)v8;
      v35[1] = *(_OWORD *)(v8 + 16);
      v35[2] = *(_OWORD *)(v8 + 32);
      v35[3] = *(_OWORD *)(v8 + 48);
      v35[4] = *(_OWORD *)(v8 + 64);
      v35[5] = *(_OWORD *)(v8 + 80);
      v35[6] = *(_OWORD *)(v8 + 96);
      v9 = *(_OWORD *)(v8 + 112);
      v8 += 128LL;
      v35[7] = v9;
      v35[8] = *(_OWORD *)v8;
      v35[9] = *(_OWORD *)(v8 + 16);
      v35[10] = *(_OWORD *)(v8 + 32);
      v36 = *(_QWORD *)(v8 + 48);
      v37 = *(_DWORD *)(v8 + 56);
      memset(v16, 0, sizeof(v16));
      LODWORD(v16[3]) |= 1u;
      v16[6] = v35;
      LODWORD(v16[0]) = 7340440;
      v16[1] = v1;
      HIDWORD(v16[2]) = 1073872902;
      LODWORD(v16[7]) = 188;
      v16[4] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
    v10 = *(_QWORD *)(v1 + 4120);
    if ( *(_BYTE *)(v10 + 2) == 1 && !*(_BYTE *)(v10 + 4) )
    {
      v26 = *(_OWORD *)(v10 + 872);
      v27 = *(_DWORD *)(v10 + 888);
      memset(v16, 0, sizeof(v16));
      LODWORD(v16[3]) |= 1u;
      v16[6] = &v26;
      LODWORD(v16[0]) = 7340440;
      v16[1] = v1;
      HIDWORD(v16[2]) = 1073872899;
      LODWORD(v16[7]) = 20;
      v16[4] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
  }
  v11 = *(__int128 **)(v1 + 4296);
  if ( v11 )
  {
    v28 = *v11;
    v29 = *((_QWORD *)v11 + 2);
    v30 = *((_DWORD *)v11 + 6);
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[3]) |= 1u;
    v16[6] = &v28;
    LODWORD(v16[0]) = 7340440;
    v16[1] = v1;
    HIDWORD(v16[2]) = 1073872908;
    LODWORD(v16[7]) = 28;
    v16[4] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
  }
  if ( !*(_DWORD *)(v1 + 3508) && (*(_QWORD *)(v1 + 3592) || *(_QWORD *)(v1 + 3568)) )
  {
    v12 = *(_QWORD *)(v1 + 4640);
    if ( (!v12 || (*(_BYTE *)(v12 + 8) & 3) != 3) && !ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v13 = *(_QWORD *)(v1 + 3568);
      if ( v13 )
      {
        v31[0] = *(_OWORD *)v13;
        v31[1] = *(_OWORD *)(v13 + 16);
        v31[2] = *(_OWORD *)(v13 + 32);
        v31[3] = *(_OWORD *)(v13 + 48);
        v31[4] = *(_OWORD *)(v13 + 64);
        v32 = *(_DWORD *)(v13 + 80);
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[3]) |= 1u;
        v16[6] = v31;
        LODWORD(v16[0]) = 7340440;
        v16[1] = v1;
        HIDWORD(v16[2]) = 1073872912;
        LODWORD(v16[7]) = 84;
        v16[4] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
      }
      v14 = *(_QWORD *)(v1 + 3592);
      if ( v14 )
      {
        v33[0] = *(_OWORD *)v14;
        v33[1] = *(_OWORD *)(v14 + 16);
        v33[2] = *(_OWORD *)(v14 + 32);
        v33[3] = *(_OWORD *)(v14 + 48);
        v33[4] = *(_OWORD *)(v14 + 64);
        v33[5] = *(_OWORD *)(v14 + 80);
        v33[6] = *(_OWORD *)(v14 + 96);
        v33[7] = *(_OWORD *)(v14 + 112);
        v34 = *(_DWORD *)(v14 + 128);
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[3]) |= 1u;
        v16[6] = v33;
        LODWORD(v16[0]) = 7340440;
        v16[1] = v1;
        HIDWORD(v16[2]) = 1073872960;
        LODWORD(v16[7]) = 132;
        v16[4] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
      }
    }
  }
  *(_DWORD *)(v1 + 4448) &= ~1u;
  *(_DWORD *)(v1 + 4224) = 0;
  *(_QWORD *)(v1 + 4216) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 96));
  KeLowerIrql(NewIrql[0]);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(78LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1);
}
