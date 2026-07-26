/*
 * XREFs of ndisUpdatePMCurrentCapabilities @ 0x1C0022864
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E24D0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisResetPMCapabilities @ 0x1C00AC458 (ndisResetPMCapabilities.c)
 *     ndisComparePMCapabilities @ 0x1C00C8954 (ndisComparePMCapabilities.c)
 *     ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C00C8974 (-ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z.c)
 */

bool __fastcall ndisUpdatePMCurrentCapabilities(__int64 a1)
{
  struct _NDIS_PM_CAPABILITIES *v1; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  __int128 v8; // xmm0
  int v9; // ecx
  unsigned __int8 v10; // al
  __int64 v11; // rax
  KIRQL v12; // dl
  bool v13; // zf
  unsigned __int8 v14; // cl
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // r8d
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  _OWORD v29[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+50h] [rbp-18h]
  int v31; // [rsp+58h] [rbp-10h]

  v1 = (struct _NDIS_PM_CAPABILITIES *)(a1 + 1060);
  v3 = *(_OWORD *)(a1 + 1076);
  v29[0] = *(_OWORD *)(a1 + 1060);
  v4 = *(_OWORD *)(a1 + 1092);
  v29[1] = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 1108);
  v29[2] = v4;
  v5 = *(_OWORD *)(a1 + 1000);
  v30 = v3;
  v6 = *(_OWORD *)(a1 + 1016);
  v31 = *(_DWORD *)(a1 + 1116);
  v7 = *(_DWORD *)(a1 + 1056);
  *(_OWORD *)(a1 + 1060) = v5;
  v8 = *(_OWORD *)(a1 + 1032);
  *(_OWORD *)(a1 + 1076) = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 1048);
  *(_OWORD *)(a1 + 1092) = v8;
  *(_QWORD *)(a1 + 1108) = v6;
  *(_DWORD *)(a1 + 1116) = v7;
  ndisResetPMCapabilities(a1 + 1060);
  if ( (*(_DWORD *)(a1 + 124) & 1) != 0
    && (*(_DWORD *)(a1 + 3888) & 8) == 0
    && (unsigned int)(*(_DWORD *)(a1 + 1272) - 2) <= 2
    && *(_DWORD *)(a1 + 1268) )
  {
    v9 = *(_DWORD *)(a1 + 1004);
    if ( (v9 & 4) != 0 && !ndisDefaultNapsState )
    {
      v24 = *(_DWORD *)(a1 + 3936);
      if ( (v24 & 0xC000) == 0 )
        *(_DWORD *)(a1 + 3936) = v24 & 0xFFFF0FFF | 0xA000;
    }
    v10 = *(_BYTE *)(a1 + 32);
    if ( (v10 > 6u || v10 == 6 && *(_BYTE *)(a1 + 33) >= 0x1Eu)
      && (*(_DWORD *)(a1 + 120) & 0x20000) == 0
      && (v11 = *(_QWORD *)(a1 + 3784), *(_QWORD *)(v11 + 840))
      && *(_QWORD *)(v11 + 848)
      && (*(_DWORD *)(a1 + 3936) & 0x3000) == 0x2000
      && (v9 & 6) != 0
      || (*(_DWORD *)(a1 + 120) & 0x80u) != 0 && (*(_DWORD *)(a1 + 3936) & 0x3000) == 0x2000 && (v9 & 6) != 0 )
    {
      v25 = *(_DWORD *)(a1 + 1064) | 2;
      *(_DWORD *)(a1 + 1064) = v25;
      if ( (v9 & 4) != 0 )
      {
        v26 = v25 | 4;
        *(_DWORD *)(a1 + 1064) = v26;
        if ( (v9 & 0xC) == 0xC )
        {
          *(_DWORD *)(a1 + 1064) = v26 | 8;
          if ( (unsigned __int8)byte_1C0099610 >= 4u )
            WPP_SF_qZ(145LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, *(_QWORD *)(a1 + 3880));
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 1004) & 1) != 0 )
      *(_DWORD *)(a1 + 1064) |= 1u;
    *(_DWORD *)(a1 + 1108) = *(_DWORD *)(a1 + 1048);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v13 = ndisAoAcCapable == 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2764225;
    if ( !v13
      || ndisAoAcTest
      || (v14 = *(_BYTE *)(a1 + 32), v14 <= 6u) && (v14 != 6 || *(_BYTE *)(a1 + 33) < 0x14u)
      || (unsigned int)(*(_DWORD *)(a1 + 1108) - 2) > 2
      || *(_WORD *)(a1 + 3700) == 0xFFFF
      || (v27 = *(_DWORD *)(a1 + 3936), (v27 & 0x30) == 0x10)
      || (v27 & 0x3000) == 0x2000
      || *(_DWORD *)(a1 + 464)
      || *(_DWORD *)(a1 + 1832) != 14
      || !*(_BYTE *)(a1 + 1288) )
    {
      *(_DWORD *)(a1 + 4452) &= ~8u;
    }
    else
    {
      *(_DWORD *)(a1 + 4452) |= 8u;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
    v15 = *(_DWORD *)(a1 + 3936);
    v16 = *(_DWORD *)(a1 + 1028);
    *(_DWORD *)(a1 + 1088) = v16;
    if ( (v15 & 0xC0) == 0x40 )
    {
      v16 &= ~1u;
      *(_DWORD *)(a1 + 1088) = v16;
    }
    if ( (v15 & 0x300) == 0x100 )
    {
      v16 &= ~2u;
      *(_DWORD *)(a1 + 1088) = v16;
    }
    if ( (v15 & 0xC00) == 0x400 )
    {
      v16 &= ~0x80u;
      *(_DWORD *)(a1 + 1088) = v16;
    }
    if ( (v16 & 1) == 0 )
    {
      v28 = *(_DWORD *)(a1 + 3888);
      if ( (v28 & 0x10000000) != 0 && *(_DWORD *)(a1 + 3800) != 8 )
        *(_DWORD *)(a1 + 3888) = v28 | 0x100;
    }
    v17 = *(_DWORD *)(a1 + 3888);
    if ( (v17 & 0x10) == 0 )
    {
      v18 = *(_DWORD *)(a1 + 1040);
      if ( (unsigned int)(v18 - 2) <= 2 && ((v17 & 0x100) != 0 || (v15 & 0xC) != 4) )
      {
        *(_DWORD *)(a1 + 1068) = 2;
        *(_DWORD *)(a1 + 1100) = v18;
      }
      v19 = *(_DWORD *)(a1 + 1044);
      if ( (unsigned int)(v19 - 2) <= 2 && (v15 & 3) != 1 && (v17 & 0x100) == 0 )
      {
        v20 = *(_DWORD *)(a1 + 1008);
        v21 = *(_DWORD *)(a1 + 1068);
        if ( (v20 & 1) != 0 )
        {
          v21 |= 1u;
          *(_DWORD *)(a1 + 1104) = v19;
          *(_DWORD *)(a1 + 1068) = v21;
        }
        *(_DWORD *)(a1 + 1068) = v21 | v20 & 0xFFFFFFFC;
      }
    }
  }
  ndisConvertPMCapabilitiesToPnp(v1, (struct _NDIS_PNP_CAPABILITIES *)(a1 + 984));
  return (unsigned __int8)ndisComparePMCapabilities(v22, v29) == 0;
}
