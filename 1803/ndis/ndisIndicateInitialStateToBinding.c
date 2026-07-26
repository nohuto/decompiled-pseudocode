/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C0017990
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019E34 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019E80 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F1C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019FC4 (ndisMReferenceIfBlock.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001A044 (ndisIovNicSwitchWithoutIovSupported.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int8 v11[16]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[14]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+A8h] [rbp-60h] BYREF
  int v14; // [rsp+B0h] [rbp-58h]
  int v15; // [rsp+B8h] [rbp-50h] BYREF
  int v16; // [rsp+BCh] [rbp-4Ch]
  int v17; // [rsp+C0h] [rbp-48h]
  __int64 v18; // [rsp+C8h] [rbp-40h]
  __int64 v19; // [rsp+D0h] [rbp-38h]
  int v20; // [rsp+D8h] [rbp-30h]
  int v21; // [rsp+DCh] [rbp-2Ch]
  __int128 v22; // [rsp+E0h] [rbp-28h] BYREF
  int v23; // [rsp+F0h] [rbp-18h]
  __int128 v24; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v25; // [rsp+108h] [rbp+0h]
  int v26; // [rsp+110h] [rbp+8h]
  _OWORD v27[5]; // [rsp+118h] [rbp+10h] BYREF
  int v28; // [rsp+168h] [rbp+60h]
  _OWORD v29[8]; // [rsp+178h] [rbp+70h] BYREF
  int v30; // [rsp+1F8h] [rbp+F0h]
  _OWORD v31[11]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v32; // [rsp+2B8h] [rbp+1B0h]
  int v33; // [rsp+2C0h] [rbp+1B8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(77LL, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1);
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v11);
  v15 = 2621824;
  v3 = *(_QWORD *)(v1 + 2056);
  if ( v3 )
  {
    v16 = *(_DWORD *)(v3 + 388);
    v17 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 392LL);
    v18 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 400LL);
    v19 = *(_QWORD *)(*(_QWORD *)(v1 + 2056) + 408LL);
    v20 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 416LL);
    v21 = *(_DWORD *)(*(_QWORD *)(v1 + 2056) + 420LL);
  }
  else
  {
    v16 = *(_DWORD *)(v1 + 480);
    v17 = *(_DWORD *)(v1 + 488);
    v18 = *(_QWORD *)(v1 + 792);
    v19 = *(_QWORD *)(v1 + 800);
    v20 = *(_DWORD *)(v1 + 808);
    v21 = *(_DWORD *)(v1 + 468);
  }
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[3]) |= 3u;
  v12[6] = &v15;
  LODWORD(v12[0]) = 7340440;
  v12[1] = v1;
  HIDWORD(v12[2]) = 1073807383;
  LODWORD(v12[7]) = 40;
  v12[4] = a1;
  ndisIndicateStatusInternal(v1, v12);
  LOBYTE(v4) = 17;
  if ( ndisMReferenceIfBlock(v1, v4) )
  {
    v14 = 0;
    v13 = 786816LL;
    HIDWORD(v13) = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 1112LL);
    v14 = *(_DWORD *)(*(_QWORD *)(v1 + 4064) + 1116LL);
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[3]) |= 1u;
    v12[6] = &v13;
    LODWORD(v12[0]) = 7340440;
    v12[1] = v1;
    HIDWORD(v12[2]) = 1073807395;
    LODWORD(v12[7]) = 12;
    v12[4] = a1;
    ndisIndicateStatusInternal(v1, v12);
    LOBYTE(v5) = 17;
    ndisMDereferenceIfBlock(v1, v5);
  }
  v6 = *(_QWORD *)(v1 + 4120);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 1) == 1 )
    {
      v31[0] = *(_OWORD *)(v6 + 196);
      v31[1] = *(_OWORD *)(v6 + 212);
      v31[2] = *(_OWORD *)(v6 + 228);
      v31[3] = *(_OWORD *)(v6 + 244);
      v31[4] = *(_OWORD *)(v6 + 260);
      v31[5] = *(_OWORD *)(v6 + 276);
      v31[6] = *(_OWORD *)(v6 + 292);
      v31[7] = *(_OWORD *)(v6 + 308);
      v31[8] = *(_OWORD *)(v6 + 324);
      v31[9] = *(_OWORD *)(v6 + 340);
      v31[10] = *(_OWORD *)(v6 + 356);
      v32 = *(_QWORD *)(v6 + 372);
      v33 = *(_DWORD *)(v6 + 380);
      memset(v12, 0, sizeof(v12));
      LODWORD(v12[3]) |= 1u;
      v12[6] = v31;
      LODWORD(v12[0]) = 7340440;
      v12[1] = v1;
      HIDWORD(v12[2]) = 1073872902;
      LODWORD(v12[7]) = 188;
      v12[4] = a1;
      ndisIndicateStatusInternal(v1, v12);
      v6 = *(_QWORD *)(v1 + 4120);
    }
    if ( *(_BYTE *)(v6 + 2) == 1 && !*(_BYTE *)(v6 + 4) )
    {
      v22 = *(_OWORD *)(v6 + 872);
      v23 = *(_DWORD *)(v6 + 888);
      memset(v12, 0, sizeof(v12));
      LODWORD(v12[3]) |= 1u;
      v12[6] = &v22;
      LODWORD(v12[0]) = 7340440;
      v12[1] = v1;
      HIDWORD(v12[2]) = 1073872899;
      LODWORD(v12[7]) = 20;
      v12[4] = a1;
      ndisIndicateStatusInternal(v1, v12);
    }
  }
  v7 = *(__int128 **)(v1 + 4296);
  if ( v7 )
  {
    v24 = *v7;
    v25 = *((_QWORD *)v7 + 2);
    v26 = *((_DWORD *)v7 + 6);
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[3]) |= 1u;
    v12[6] = &v24;
    LODWORD(v12[0]) = 7340440;
    v12[1] = v1;
    HIDWORD(v12[2]) = 1073872908;
    LODWORD(v12[7]) = 28;
    v12[4] = a1;
    ndisIndicateStatusInternal(v1, v12);
  }
  if ( !*(_DWORD *)(v1 + 3508) && (*(_QWORD *)(v1 + 3592) || *(_QWORD *)(v1 + 3568)) )
  {
    v8 = *(_QWORD *)(v1 + 4640);
    if ( (!v8 || (*(_BYTE *)(v8 + 8) & 3) != 3) && !(unsigned __int8)ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v10 = *(_QWORD *)(v1 + 3568);
      if ( v10 )
      {
        v27[0] = *(_OWORD *)v10;
        v27[1] = *(_OWORD *)(v10 + 16);
        v27[2] = *(_OWORD *)(v10 + 32);
        v27[3] = *(_OWORD *)(v10 + 48);
        v27[4] = *(_OWORD *)(v10 + 64);
        v28 = *(_DWORD *)(v10 + 80);
        memset(v12, 0, sizeof(v12));
        LODWORD(v12[3]) |= 1u;
        v12[6] = v27;
        LODWORD(v12[0]) = 7340440;
        v12[1] = v1;
        HIDWORD(v12[2]) = 1073872912;
        LODWORD(v12[7]) = 84;
        v12[4] = a1;
        ndisIndicateStatusInternal(v1, v12);
        v9 = *(_QWORD *)(v1 + 3592);
      }
      if ( v9 )
      {
        v29[0] = *(_OWORD *)v9;
        v29[1] = *(_OWORD *)(v9 + 16);
        v29[2] = *(_OWORD *)(v9 + 32);
        v29[3] = *(_OWORD *)(v9 + 48);
        v29[4] = *(_OWORD *)(v9 + 64);
        v29[5] = *(_OWORD *)(v9 + 80);
        v29[6] = *(_OWORD *)(v9 + 96);
        v29[7] = *(_OWORD *)(v9 + 112);
        v30 = *(_DWORD *)(v9 + 128);
        memset(v12, 0, sizeof(v12));
        LODWORD(v12[3]) |= 1u;
        v12[6] = v29;
        LODWORD(v12[0]) = 7340440;
        v12[1] = v1;
        HIDWORD(v12[2]) = 1073872960;
        LODWORD(v12[7]) = 132;
        v12[4] = a1;
        ndisIndicateStatusInternal(v1, v12);
      }
    }
  }
  ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v11[0]);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(78LL, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1);
}
