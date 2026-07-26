/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C0018100
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019420 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019AF4 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0021F3C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int128 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 v14[16]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v15[14]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-60h] BYREF
  int v17; // [rsp+B0h] [rbp-58h]
  int v18; // [rsp+B8h] [rbp-50h] BYREF
  int v19; // [rsp+BCh] [rbp-4Ch]
  int v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+D8h] [rbp-30h]
  int v24; // [rsp+DCh] [rbp-2Ch]
  __int128 v25; // [rsp+E0h] [rbp-28h] BYREF
  int v26; // [rsp+F0h] [rbp-18h]
  __int128 v27; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v28; // [rsp+108h] [rbp+0h]
  int v29; // [rsp+110h] [rbp+8h]
  _OWORD v30[5]; // [rsp+118h] [rbp+10h] BYREF
  int v31; // [rsp+168h] [rbp+60h]
  _OWORD v32[8]; // [rsp+178h] [rbp+70h] BYREF
  int v33; // [rsp+1F8h] [rbp+F0h]
  _OWORD v34[11]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v35; // [rsp+2B8h] [rbp+1B0h]
  int v36; // [rsp+2C0h] [rbp+1B8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(77LL, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1);
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v14);
  v18 = 2621824;
  v3 = *(_QWORD *)(v1 + 2056);
  if ( v3 )
  {
    v19 = *(_DWORD *)(v3 + 388);
    v20 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 392LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 400LL);
    v22 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 408LL);
    v23 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 416LL);
    v24 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 420LL);
  }
  else
  {
    v19 = *(_DWORD *)(v1 + 480);
    v20 = *(_DWORD *)(v1 + 488);
    v21 = *(_QWORD *)(v1 + 792);
    v22 = *(_QWORD *)(v1 + 800);
    v23 = *(_DWORD *)(v1 + 808);
    v24 = *(_DWORD *)(v1 + 468);
  }
  memset(v15, 0, sizeof(v15));
  LODWORD(v15[3]) |= 3u;
  v15[6] = &v18;
  LODWORD(v15[0]) = 7340440;
  v15[1] = v1;
  HIDWORD(v15[2]) = 1073807383;
  LODWORD(v15[7]) = 40;
  v15[4] = a1;
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
  LOBYTE(v4) = 17;
  if ( ndisMReferenceIfBlock(v1, v4) )
  {
    v17 = 0;
    v16 = 786816LL;
    HIDWORD(v16) = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 1112LL);
    v17 = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 1116LL);
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[3]) |= 1u;
    v15[6] = &v16;
    LODWORD(v15[0]) = 7340440;
    v15[1] = v1;
    HIDWORD(v15[2]) = 1073807395;
    LODWORD(v15[7]) = 12;
    v15[4] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    LOBYTE(v5) = 17;
    ndisMDereferenceIfBlock(v1, v5);
  }
  v6 = *(_QWORD *)(v1 + 4120);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 1) == 1 )
    {
      v7 = v6 + 196;
      v34[0] = *(_OWORD *)v7;
      v34[1] = *(_OWORD *)(v7 + 16);
      v34[2] = *(_OWORD *)(v7 + 32);
      v34[3] = *(_OWORD *)(v7 + 48);
      v34[4] = *(_OWORD *)(v7 + 64);
      v34[5] = *(_OWORD *)(v7 + 80);
      v34[6] = *(_OWORD *)(v7 + 96);
      v8 = *(_OWORD *)(v7 + 112);
      v7 += 128LL;
      v34[7] = v8;
      v34[8] = *(_OWORD *)v7;
      v34[9] = *(_OWORD *)(v7 + 16);
      v34[10] = *(_OWORD *)(v7 + 32);
      v35 = *(_QWORD *)(v7 + 48);
      v36 = *(_DWORD *)(v7 + 56);
      memset(v15, 0, sizeof(v15));
      LODWORD(v15[3]) |= 1u;
      v15[6] = v34;
      LODWORD(v15[0]) = 7340440;
      v15[1] = v1;
      HIDWORD(v15[2]) = 1073872902;
      LODWORD(v15[7]) = 188;
      v15[4] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
    v9 = *(_QWORD *)(v1 + 4120);
    if ( *(_BYTE *)(v9 + 2) == 1 && !*(_BYTE *)(v9 + 4) )
    {
      v25 = *(_OWORD *)(v9 + 872);
      v26 = *(_DWORD *)(v9 + 888);
      memset(v15, 0, sizeof(v15));
      LODWORD(v15[3]) |= 1u;
      v15[6] = &v25;
      LODWORD(v15[0]) = 7340440;
      v15[1] = v1;
      HIDWORD(v15[2]) = 1073872899;
      LODWORD(v15[7]) = 20;
      v15[4] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
  }
  v10 = *(__int128 **)(v1 + 4296);
  if ( v10 )
  {
    v27 = *v10;
    v28 = *((_QWORD *)v10 + 2);
    v29 = *((_DWORD *)v10 + 6);
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[3]) |= 1u;
    v15[6] = &v27;
    LODWORD(v15[0]) = 7340440;
    v15[1] = v1;
    HIDWORD(v15[2]) = 1073872908;
    LODWORD(v15[7]) = 28;
    v15[4] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
  }
  if ( !*(_DWORD *)(v1 + 3508) && (*(_QWORD *)(v1 + 3592) || *(_QWORD *)(v1 + 3568)) )
  {
    v11 = *(_QWORD *)(v1 + 4640);
    if ( (!v11 || (*(_BYTE *)(v11 + 8) & 3) != 3) && !(unsigned __int8)ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v12 = *(_QWORD *)(v1 + 3568);
      if ( v12 )
      {
        v30[0] = *(_OWORD *)v12;
        v30[1] = *(_OWORD *)(v12 + 16);
        v30[2] = *(_OWORD *)(v12 + 32);
        v30[3] = *(_OWORD *)(v12 + 48);
        v30[4] = *(_OWORD *)(v12 + 64);
        v31 = *(_DWORD *)(v12 + 80);
        memset(v15, 0, sizeof(v15));
        LODWORD(v15[3]) |= 1u;
        v15[6] = v30;
        LODWORD(v15[0]) = 7340440;
        v15[1] = v1;
        HIDWORD(v15[2]) = 1073872912;
        LODWORD(v15[7]) = 84;
        v15[4] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
      }
      v13 = *(_QWORD *)(v1 + 3592);
      if ( v13 )
      {
        v32[0] = *(_OWORD *)v13;
        v32[1] = *(_OWORD *)(v13 + 16);
        v32[2] = *(_OWORD *)(v13 + 32);
        v32[3] = *(_OWORD *)(v13 + 48);
        v32[4] = *(_OWORD *)(v13 + 64);
        v32[5] = *(_OWORD *)(v13 + 80);
        v32[6] = *(_OWORD *)(v13 + 96);
        v32[7] = *(_OWORD *)(v13 + 112);
        v33 = *(_DWORD *)(v13 + 128);
        memset(v15, 0, sizeof(v15));
        LODWORD(v15[3]) |= 1u;
        v15[6] = v32;
        LODWORD(v15[0]) = 7340440;
        v15[1] = v1;
        HIDWORD(v15[2]) = 1073872960;
        LODWORD(v15[7]) = 132;
        v15[4] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v1);
      }
    }
  }
  ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v14[0]);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(78LL, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1);
}
