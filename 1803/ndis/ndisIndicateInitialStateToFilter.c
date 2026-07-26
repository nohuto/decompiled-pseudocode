/*
 * XREFs of ndisIndicateInitialStateToFilter @ 0x1C0019370
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisFInvokeStatus @ 0x1C0019D44 (ndisFInvokeStatus.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019E34 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019E80 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisFAllocateFilterOffload @ 0x1C001A068 (ndisFAllocateFilterOffload.c)
 *     ndisUpdateFilterFakeStatus @ 0x1C0024238 (ndisUpdateFilterFakeStatus.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rsi
  __int64 v4; // rdi
  KIRQL v5; // al
  KIRQL v6; // dl
  int v7; // ecx
  _BYTE *v8; // rcx
  _BYTE *v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD *, struct _NET_BUFFER_LIST *, int, __int64, int); // rax
  __int64 v13; // rsi
  void (__fastcall *v14)(_QWORD, _QWORD *); // rax
  unsigned int v15; // edi
  char v16; // al
  void (__stdcall *v17)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  void (__fastcall *v18)(__int64, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  KIRQL v19; // dl
  int v20; // eax
  KIRQL v21; // dl
  __int128 *v22; // rdx
  __int128 v23; // xmm1
  _OWORD *v24; // rdx
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // rax
  KIRQL v28; // dl
  void (__fastcall *v29)(_QWORD, _QWORD *); // rax
  unsigned int v30; // r12d
  int v31; // eax
  void (__fastcall *v32)(_QWORD *, struct _NET_BUFFER_LIST *, int, __int64, int); // rax
  KIRQL v33; // dl
  KIRQL NewIrql[8]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h]
  __int64 v36; // [rsp+38h] [rbp-D0h]
  _QWORD v37[14]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v38[6]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v40; // [rsp+F8h] [rbp-10h]
  __int128 v41; // [rsp+108h] [rbp+0h]
  __int128 v42; // [rsp+118h] [rbp+10h]
  __int128 v43; // [rsp+128h] [rbp+20h]
  __int128 v44; // [rsp+138h] [rbp+30h]
  __int128 v45; // [rsp+148h] [rbp+40h]
  __int128 v46; // [rsp+158h] [rbp+50h]
  __int128 v47; // [rsp+168h] [rbp+60h]
  __int128 v48; // [rsp+178h] [rbp+70h]
  __int128 v49; // [rsp+188h] [rbp+80h]
  __int64 v50; // [rsp+198h] [rbp+90h]
  int v51; // [rsp+1A0h] [rbp+98h]

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 120);
  NewIrql[0] = 0;
  v36 = v1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(71LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  memset(v38, 0, 0x28uLL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  v6 = v5;
  v7 = *(_DWORD *)(a1 + 56);
  NewIrql[1] = v5;
  *(_DWORD *)(a1 + 160) = 2102783;
  if ( (v7 & 0x2000) != 0 )
  {
    do
    {
      *(_QWORD *)(a1 + 152) = 0LL;
      *(_DWORD *)(a1 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v6);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v35) = 0;
        do
          LODWORD(v35) = v35 + 1;
        while ( (unsigned int)v35 < 0x32 );
      }
      else
      {
        NdisMSleep(0x32u);
      }
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
      *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 160) = 2102783;
      v7 = *(_DWORD *)(a1 + 56);
    }
    while ( (v7 & 0x2000) != 0 );
    NewIrql[1] = v6;
  }
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 56) = v7 | 0x2000;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 144));
  HIDWORD(v38[0]) = *(_DWORD *)(a1 + 352);
  LODWORD(v38[1]) = *(_DWORD *)(a1 + 356);
  v38[2] = *(_QWORD *)(a1 + 360);
  v38[3] = *(_QWORD *)(a1 + 368);
  v38[4] = *(_QWORD *)(a1 + 376);
  LODWORD(v38[0]) = 2621824;
  if ( v4 )
  {
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
    v20 = *(_DWORD *)(v4 + 56);
    for ( *(_DWORD *)(v4 + 160) = 2102798; (v20 & 0x2000) != 0; v20 = *(_DWORD *)(v4 + 56) )
    {
      v21 = NewIrql[0];
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v21);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v35) = 0;
        do
          LODWORD(v35) = v35 + 1;
        while ( (unsigned int)v35 < 0x32 );
      }
      else
      {
        NdisMSleep(0x32u);
      }
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 160) = 2102798;
    }
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_DWORD *)(v4 + 56) = v20 | 0x2000;
    *(_DWORD *)(v4 + 160) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v22 = *(__int128 **)(v4 + 808);
    if ( v22 )
    {
      v39 = *v22;
      v40 = v22[1];
      v41 = v22[2];
      v42 = v22[3];
      v43 = v22[4];
      v44 = v22[5];
      v45 = v22[6];
      v23 = v22[7];
      v24 = v22 + 8;
      v25 = *(_QWORD *)(a1 + 808) == 0LL;
      v46 = v23;
      v47 = *v24;
      v48 = v24[1];
      v49 = v24[2];
      v50 = *((_QWORD *)v24 + 6);
      v51 = *((_DWORD *)v24 + 14);
      if ( !v25 || !(unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v26 = *(_QWORD *)(a1 + 808);
        *(_OWORD *)v26 = v39;
        *(_OWORD *)(v26 + 16) = v40;
        *(_OWORD *)(v26 + 32) = v41;
        *(_OWORD *)(v26 + 48) = v42;
        *(_OWORD *)(v26 + 64) = v43;
        *(_OWORD *)(v26 + 80) = v44;
        *(_OWORD *)(v26 + 96) = v45;
        v26 += 128LL;
        *(_OWORD *)(v26 - 16) = v46;
        *(_OWORD *)v26 = v47;
        *(_OWORD *)(v26 + 16) = v48;
        *(_OWORD *)(v26 + 32) = v49;
        *(_QWORD *)(v26 + 48) = v50;
        *(_DWORD *)(v26 + 56) = v51;
        memset(v37, 0, sizeof(v37));
        LODWORD(v37[0]) = 7340440;
        v27 = v2;
        HIDWORD(v37[2]) = 1073872902;
        if ( v1 )
          v27 = v1;
        LODWORD(v37[7]) = 188;
        v37[1] = v27;
        v37[6] = &v39;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
        v28 = NewIrql[0];
        *(_DWORD *)(v4 + 56) &= ~0x2000u;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_DWORD *)(v4 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v28);
        v35 = *(_QWORD *)(a1 + 16);
        v29 = *(void (__fastcall **)(_QWORD, _QWORD *))(v35 + 288);
        if ( v29 )
        {
          v30 = HIDWORD(v37[2]);
          if ( (unsigned __int8)byte_1C009961F >= 4u )
          {
            WPP_SF_qD(129LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, HIDWORD(v37[2]));
            v29 = *(void (__fastcall **)(_QWORD, _QWORD *))(v35 + 288);
          }
          v29(*(_QWORD *)(a1 + 24), v37);
          if ( (unsigned __int8)byte_1C009961F >= 4u )
            WPP_SF_qD(130LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v30);
          v1 = v36;
        }
        else
        {
          ndisFIndicateStatusInternal(a1, (__int64)v37);
        }
        while ( 1 )
        {
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
          *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
          *(_DWORD *)(v4 + 160) = 2102834;
          v31 = *(_DWORD *)(v4 + 56);
          *(_QWORD *)(v4 + 152) = 0LL;
          *(_DWORD *)(v4 + 160) = 0;
          if ( (v31 & 0x2000) == 0 )
            break;
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
          {
            LODWORD(v35) = 0;
            do
              LODWORD(v35) = v35 + 1;
            while ( (unsigned int)v35 < 0x32 );
          }
          else
          {
            NdisMSleep(0x32u);
          }
        }
        *(_DWORD *)(v4 + 56) = v31 | 0x2000;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
      }
    }
    v32 = ndisFilterIndicateReceiveNetBufferLists;
    if ( *(_DWORD *)(v4 + 352) != 1 )
      v32 = (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, int, __int64, int))&ndisFakeFilterReceiveHandler;
    *(_QWORD *)(a1 + 640) = v32;
    memset(v37, 0, sizeof(v37));
    LODWORD(v37[0]) = 7340440;
    v37[6] = v38;
    HIDWORD(v37[2]) = 1073807383;
    if ( v1 )
      v2 = v1;
    LODWORD(v37[7]) = 40;
    v37[1] = v2;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v33 = NewIrql[0];
    *(_DWORD *)(v4 + 56) &= ~0x2000u;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_DWORD *)(v4 + 160) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v33);
  }
  else
  {
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql);
    v8 = *(_BYTE **)(v2 + 4120);
    if ( v8 )
    {
      if ( *v8 )
      {
        v9 = v8 + 196;
        v39 = *(_OWORD *)v9;
        v40 = *((_OWORD *)v9 + 1);
        v41 = *((_OWORD *)v9 + 2);
        v42 = *((_OWORD *)v9 + 3);
        v43 = *((_OWORD *)v9 + 4);
        v44 = *((_OWORD *)v9 + 5);
        v45 = *((_OWORD *)v9 + 6);
        v10 = *((_OWORD *)v9 + 7);
        v9 += 128;
        v46 = v10;
        v47 = *(_OWORD *)v9;
        v48 = *((_OWORD *)v9 + 1);
        v49 = *((_OWORD *)v9 + 2);
        v50 = *((_QWORD *)v9 + 6);
        v51 = *((_DWORD *)v9 + 14);
        if ( *(_QWORD *)(a1 + 808) || !(unsigned int)ndisFAllocateFilterOffload(a1) )
        {
          v11 = *(_QWORD *)(a1 + 808);
          *(_OWORD *)v11 = v39;
          *(_OWORD *)(v11 + 16) = v40;
          *(_OWORD *)(v11 + 32) = v41;
          *(_OWORD *)(v11 + 48) = v42;
          *(_OWORD *)(v11 + 64) = v43;
          *(_OWORD *)(v11 + 80) = v44;
          *(_OWORD *)(v11 + 96) = v45;
          v11 += 128LL;
          *(_OWORD *)(v11 - 16) = v46;
          *(_OWORD *)v11 = v47;
          *(_OWORD *)(v11 + 16) = v48;
          *(_OWORD *)(v11 + 32) = v49;
          *(_QWORD *)(v11 + 48) = v50;
          *(_DWORD *)(v11 + 56) = v51;
          memset(v37, 0, sizeof(v37));
          v37[6] = &v39;
          LODWORD(v37[0]) = 7340440;
          v37[1] = v2;
          HIDWORD(v37[2]) = 1073872902;
          LODWORD(v37[7]) = 188;
          ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql[0]);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL) )
            ndisFInvokeStatus(a1, v37);
          else
            ndisFIndicateStatusInternal(a1, (__int64)v37);
          ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql);
        }
      }
    }
    LODWORD(v38[0]) = 2621824;
    HIDWORD(v38[0]) = *(_DWORD *)(v2 + 480);
    LODWORD(v38[1]) = *(_DWORD *)(v2 + 488);
    v38[2] = *(_QWORD *)(v2 + 792);
    v38[3] = *(_QWORD *)(v2 + 800);
    v12 = ndisFilterIndicateReceiveNetBufferLists;
    if ( *(_DWORD *)(v2 + 480) != 1 )
      v12 = (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, int, __int64, int))&ndisFakeFilterReceiveHandler;
    *(_QWORD *)(a1 + 640) = v12;
    memset(v37, 0, sizeof(v37));
    v37[6] = v38;
    LODWORD(v37[0]) = 7340440;
    v37[1] = v2;
    HIDWORD(v37[2]) = 1073807383;
    LODWORD(v37[7]) = 40;
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, NewIrql[0]);
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(void (__fastcall **)(_QWORD, _QWORD *))(v13 + 288);
  if ( v14 )
  {
    v15 = HIDWORD(v37[2]);
    if ( (unsigned __int8)byte_1C009961F >= 4u )
    {
      WPP_SF_qD(129LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, HIDWORD(v37[2]));
      (*(void (__fastcall **)(_QWORD, _QWORD *))(v13 + 288))(*(_QWORD *)(a1 + 24), v37);
    }
    else
    {
      v14(*(_QWORD *)(a1 + 24), v37);
    }
    if ( (unsigned __int8)byte_1C009961F >= 4u )
      WPP_SF_qD(130LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v15);
  }
  else
  {
    ndisFIndicateStatusInternal(a1, (__int64)v37);
  }
  v16 = *(_BYTE *)(a1 + 384);
  if ( *(_DWORD *)(a1 + 352) == 1 )
  {
    v18 = ndisFilterSendNetBufferLists;
    *(_BYTE *)(a1 + 384) = v16 & 0xFE;
    v17 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    *(_BYTE *)(a1 + 384) = v16 | 1;
    ndisUpdateFilterFakeStatus(a1);
    v17 = ndisFakeMiniportCancelSendPackets;
    v18 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))&ndisFakeFilterSendHandler;
  }
  *(_QWORD *)(a1 + 632) = v18;
  *(_QWORD *)(a1 + 648) = v17;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 144));
  v19 = NewIrql[1];
  *(_DWORD *)(a1 + 56) &= ~0x2000u;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v19);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(72LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
}
