/*
 * XREFs of ndisIndicateInitialStateToFilter @ 0x1C0005230
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisFInvokeStatus @ 0x1C000565C (ndisFInvokeStatus.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00056C8 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0005714 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisUpdateFilterFakeStatus @ 0x1C001E108 (ndisUpdateFilterFakeStatus.c)
 *     ndisFAllocateFilterOffload @ 0x1C001E450 (ndisFAllocateFilterOffload.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rsi
  __int64 v4; // rdi
  KIRQL v5; // dl
  _BYTE *v6; // rcx
  _BYTE *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rdx
  void *v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // edi
  void (__stdcall *v13)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  KIRQL v14; // dl
  KIRQL v15; // dl
  __int128 *v16; // rdx
  __int128 v17; // xmm1
  _OWORD *v18; // rdx
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rax
  KIRQL v22; // dl
  __int64 v23; // rax
  unsigned int v24; // r13d
  KSPIN_LOCK *v25; // rcx
  void *v26; // rax
  KIRQL v27; // dl
  KIRQL NewIrql[8]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+30h] [rbp-D8h]
  __int64 v30; // [rsp+38h] [rbp-D0h]
  _QWORD v31[14]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v32[6]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v33; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v34; // [rsp+F8h] [rbp-10h]
  __int128 v35; // [rsp+108h] [rbp+0h]
  __int128 v36; // [rsp+118h] [rbp+10h]
  __int128 v37; // [rsp+128h] [rbp+20h]
  __int128 v38; // [rsp+138h] [rbp+30h]
  __int128 v39; // [rsp+148h] [rbp+40h]
  __int128 v40; // [rsp+158h] [rbp+50h]
  __int128 v41; // [rsp+168h] [rbp+60h]
  __int128 v42; // [rsp+178h] [rbp+70h]
  __int128 v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+198h] [rbp+90h]
  int v45; // [rsp+1A0h] [rbp+98h]

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 120);
  NewIrql[0] = 0;
  v30 = v1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(71LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  memset(v32, 0, 0x28uLL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  NewIrql[1] = v5;
  *(_DWORD *)(a1 + 160) = 2102782;
  if ( (*(_DWORD *)(a1 + 56) & 0x2000) != 0 )
  {
    do
    {
      *(_QWORD *)(a1 + 152) = 0LL;
      *(_DWORD *)(a1 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v5);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v29) = 0;
        while ( (unsigned int)v29 < 0x32 )
          LODWORD(v29) = v29 + 1;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
      *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 160) = 2102782;
    }
    while ( (*(_DWORD *)(a1 + 56) & 0x2000) != 0 );
    NewIrql[1] = v5;
  }
  *(_DWORD *)(a1 + 56) |= 0x2000u;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 144));
  HIDWORD(v32[0]) = *(_DWORD *)(a1 + 352);
  LODWORD(v32[1]) = *(_DWORD *)(a1 + 356);
  v32[2] = *(_QWORD *)(a1 + 360);
  v32[3] = *(_QWORD *)(a1 + 368);
  v32[4] = *(_QWORD *)(a1 + 376);
  LODWORD(v32[0]) = 2621824;
  if ( v4 )
  {
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
    for ( *(_DWORD *)(v4 + 160) = 2102797; (*(_DWORD *)(v4 + 56) & 0x2000) != 0; *(_DWORD *)(v4 + 160) = 2102797 )
    {
      v15 = NewIrql[0];
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v15);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v29) = 0;
        while ( (unsigned int)v29 < 0x32 )
          LODWORD(v29) = v29 + 1;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
    }
    *(_DWORD *)(v4 + 56) |= 0x2000u;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_DWORD *)(v4 + 160) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v16 = *(__int128 **)(v4 + 808);
    if ( v16 )
    {
      v33 = *v16;
      v34 = v16[1];
      v35 = v16[2];
      v36 = v16[3];
      v37 = v16[4];
      v38 = v16[5];
      v39 = v16[6];
      v17 = v16[7];
      v18 = v16 + 8;
      v19 = *(_QWORD *)(a1 + 808) == 0LL;
      v40 = v17;
      v41 = *v18;
      v42 = v18[1];
      v43 = v18[2];
      v44 = *((_QWORD *)v18 + 6);
      v45 = *((_DWORD *)v18 + 14);
      if ( !v19 || !(unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v20 = *(_QWORD *)(a1 + 808);
        *(_OWORD *)v20 = v33;
        *(_OWORD *)(v20 + 16) = v34;
        *(_OWORD *)(v20 + 32) = v35;
        *(_OWORD *)(v20 + 48) = v36;
        *(_OWORD *)(v20 + 64) = v37;
        *(_OWORD *)(v20 + 80) = v38;
        *(_OWORD *)(v20 + 96) = v39;
        v20 += 128LL;
        *(_OWORD *)(v20 - 16) = v40;
        *(_OWORD *)v20 = v41;
        *(_OWORD *)(v20 + 16) = v42;
        *(_OWORD *)(v20 + 32) = v43;
        *(_QWORD *)(v20 + 48) = v44;
        *(_DWORD *)(v20 + 56) = v45;
        memset(v31, 0, sizeof(v31));
        LODWORD(v31[0]) = 7340440;
        v21 = v2;
        HIDWORD(v31[2]) = 1073872902;
        if ( v1 )
          v21 = v1;
        LODWORD(v31[7]) = 188;
        v31[1] = v21;
        v31[6] = &v33;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
        v22 = NewIrql[0];
        *(_DWORD *)(v4 + 56) &= ~0x2000u;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_DWORD *)(v4 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v22);
        v23 = *(_QWORD *)(a1 + 16);
        v29 = v23;
        if ( *(_QWORD *)(v23 + 288) )
        {
          v24 = HIDWORD(v31[2]);
          if ( (unsigned __int8)byte_1C009875F >= 4u )
          {
            WPP_SF_qD(129LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, HIDWORD(v31[2]));
            v23 = v29;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD *))(v23 + 288))(*(_QWORD *)(a1 + 24), v31);
          if ( (unsigned __int8)byte_1C009875F >= 4u )
            WPP_SF_qD(130LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v24);
          v1 = v30;
        }
        else
        {
          ndisFIndicateStatusInternal(a1, v31);
        }
        while ( 1 )
        {
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
          v25 = (KSPIN_LOCK *)(v4 + 144);
          *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
          *(_DWORD *)(v4 + 160) = 2102833;
          if ( (*(_DWORD *)(v4 + 56) & 0x2000) == 0 )
            break;
          *(_QWORD *)(v4 + 152) = 0LL;
          *(_DWORD *)(v4 + 160) = 0;
          KeReleaseSpinLock(v25, NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
          {
            LODWORD(v29) = 0;
            while ( (unsigned int)v29 < 0x32 )
              LODWORD(v29) = v29 + 1;
          }
          else
          {
            NdisMSleep(0x32u);
          }
        }
        *(_DWORD *)(v4 + 56) |= 0x2000u;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_DWORD *)(v4 + 160) = 0;
        KeReleaseSpinLockFromDpcLevel(v25);
      }
    }
    v26 = &ndisFakeFilterReceiveHandler;
    if ( *(_DWORD *)(v4 + 352) == 1 )
      v26 = &ndisFilterIndicateReceiveNetBufferLists;
    *(_QWORD *)(a1 + 640) = v26;
    memset(v31, 0, sizeof(v31));
    LODWORD(v31[0]) = 7340440;
    v31[6] = v32;
    HIDWORD(v31[2]) = 1073807383;
    if ( v1 )
      v2 = v1;
    LODWORD(v31[7]) = 40;
    v31[1] = v2;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v27 = NewIrql[0];
    *(_DWORD *)(v4 + 56) &= ~0x2000u;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_DWORD *)(v4 + 160) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v27);
  }
  else
  {
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql);
    v6 = *(_BYTE **)(v2 + 4120);
    if ( v6 )
    {
      if ( *v6 )
      {
        v7 = v6 + 196;
        v33 = *(_OWORD *)v7;
        v34 = *((_OWORD *)v7 + 1);
        v35 = *((_OWORD *)v7 + 2);
        v36 = *((_OWORD *)v7 + 3);
        v37 = *((_OWORD *)v7 + 4);
        v38 = *((_OWORD *)v7 + 5);
        v39 = *((_OWORD *)v7 + 6);
        v8 = *((_OWORD *)v7 + 7);
        v7 += 128;
        v40 = v8;
        v41 = *(_OWORD *)v7;
        v42 = *((_OWORD *)v7 + 1);
        v43 = *((_OWORD *)v7 + 2);
        v44 = *((_QWORD *)v7 + 6);
        v45 = *((_DWORD *)v7 + 14);
        if ( *(_QWORD *)(a1 + 808) || !(unsigned int)ndisFAllocateFilterOffload(a1) )
        {
          v9 = *(_QWORD *)(a1 + 808);
          *(_OWORD *)v9 = v33;
          *(_OWORD *)(v9 + 16) = v34;
          *(_OWORD *)(v9 + 32) = v35;
          *(_OWORD *)(v9 + 48) = v36;
          *(_OWORD *)(v9 + 64) = v37;
          *(_OWORD *)(v9 + 80) = v38;
          *(_OWORD *)(v9 + 96) = v39;
          v9 += 128LL;
          *(_OWORD *)(v9 - 16) = v40;
          *(_OWORD *)v9 = v41;
          *(_OWORD *)(v9 + 16) = v42;
          *(_OWORD *)(v9 + 32) = v43;
          *(_QWORD *)(v9 + 48) = v44;
          *(_DWORD *)(v9 + 56) = v45;
          memset(v31, 0, sizeof(v31));
          v31[6] = &v33;
          LODWORD(v31[0]) = 7340440;
          v31[1] = v2;
          HIDWORD(v31[2]) = 1073872902;
          LODWORD(v31[7]) = 188;
          ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql[0]);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL) )
            ndisFInvokeStatus(a1, v31);
          else
            ndisFIndicateStatusInternal(a1, v31);
          ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql);
        }
      }
    }
    LODWORD(v32[0]) = 2621824;
    HIDWORD(v32[0]) = *(_DWORD *)(v2 + 480);
    LODWORD(v32[1]) = *(_DWORD *)(v2 + 488);
    v32[2] = *(_QWORD *)(v2 + 792);
    v32[3] = *(_QWORD *)(v2 + 800);
    v10 = &ndisFakeFilterReceiveHandler;
    if ( *(_DWORD *)(v2 + 480) == 1 )
      v10 = &ndisFilterIndicateReceiveNetBufferLists;
    *(_QWORD *)(a1 + 640) = v10;
    memset(v31, 0, sizeof(v31));
    v31[6] = v32;
    LODWORD(v31[0]) = 7340440;
    v31[1] = v2;
    HIDWORD(v31[2]) = 1073807383;
    LODWORD(v31[7]) = 40;
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql[0]);
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v11 + 288) )
  {
    v12 = HIDWORD(v31[2]);
    if ( (unsigned __int8)byte_1C009875F >= 4u )
      WPP_SF_qD(129LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, HIDWORD(v31[2]));
    (*(void (__fastcall **)(_QWORD, _QWORD *))(v11 + 288))(*(_QWORD *)(a1 + 24), v31);
    if ( (unsigned __int8)byte_1C009875F >= 4u )
      WPP_SF_qD(130LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v12);
  }
  else
  {
    ndisFIndicateStatusInternal(a1, v31);
  }
  if ( *(_DWORD *)(a1 + 352) == 1 )
  {
    *(_BYTE *)(a1 + 384) &= ~1u;
    *(_QWORD *)(a1 + 632) = ndisFilterSendNetBufferLists;
    v13 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    *(_BYTE *)(a1 + 384) |= 1u;
    ndisUpdateFilterFakeStatus(a1);
    *(_QWORD *)(a1 + 632) = &ndisFakeFilterSendHandler;
    v13 = ndisFakeMiniportCancelSendPackets;
  }
  *(_QWORD *)(a1 + 648) = v13;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 144));
  v14 = NewIrql[1];
  *(_DWORD *)(a1 + 56) &= ~0x2000u;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v14);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(72LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
}
