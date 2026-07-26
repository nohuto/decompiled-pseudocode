/*
 * XREFs of ndisFIndicateStatusInternal @ 0x1C00179C4
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0016FF0 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusWrapper @ 0x1C00179B0 (ndisFIndicateStatusWrapper.c)
 *     ndisFIndicateStatusInternal @ 0x1C00179C4 (ndisFIndicateStatusInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0012428 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMAllocateMiniportOffload @ 0x1C0015B7C (ndisMAllocateMiniportOffload.c)
 *     ndisFIndicateStatusInternal @ 0x1C00179C4 (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019420 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019AF4 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00222B0 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C00267E4 (ndisFIndicateOffloadChange.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0045244 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisIfUpdateL2MtuSize @ 0x1C00452EC (ndisIfUpdateL2MtuSize.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C004AFD8 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C004B080 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C004B0D0 (ndisFilterIndicateWoLPatternReject.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 */

void __fastcall ndisFIndicateStatusInternal(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  int v10; // eax
  char v11; // al
  KIRQL v12; // al
  __int64 v13; // rbx
  __int64 v14; // rbx
  int v15; // edx
  _QWORD *v16; // rcx
  unsigned int v17; // r10d
  __int64 v18; // rax
  unsigned int v19; // edx
  KIRQL v20; // dl
  int v21; // eax
  _QWORD *v22; // rcx
  unsigned int v23; // edx
  char v24; // bl
  __int64 v25; // rbx
  int v26; // r8d
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // r8d
  char v33; // al
  char v34; // al
  int v35; // edx
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-29h] BYREF
  int v37; // [rsp+24h] [rbp-25h]
  unsigned int v38; // [rsp+28h] [rbp-21h]
  KIRQL v39; // [rsp+2Ch] [rbp-1Dh]
  int v40; // [rsp+30h] [rbp-19h]
  int v41; // [rsp+34h] [rbp-15h]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-11h]
  __int64 v43; // [rsp+40h] [rbp-9h]
  _QWORD *v44; // [rsp+48h] [rbp-1h]
  __int64 v45; // [rsp+50h] [rbp+7h]
  _QWORD v46[5]; // [rsp+60h] [rbp+17h] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  v3 = a2;
  v4 = *(_QWORD **)(a2 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  v45 = a2;
  v38 = *(_DWORD *)(a2 + 56);
  v43 = a1;
  v40 = v2;
  v44 = v4;
  LOBYTE(v37) = 0;
  LOBYTE(v41) = 0;
  if ( v2 == 1073873072 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) != DriverEntry )
      return;
    ndisIfUpdateCurrentMacAddress(*(_QWORD *)(a1 + 840), v4);
    a1 = v43;
    v2 = v40;
  }
  if ( v2 == 1073873073 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(v3 + 8) != DriverEntry )
      return;
    ndisIfUpdateL2MtuSize(*(_QWORD *)(a1 + 840), **(unsigned int **)(v3 + 48));
  }
  memset(v46, 0, sizeof(v46));
  LODWORD(v46[0]) = 2621824;
  LODWORD(v46[1]) = *(_DWORD *)(v43 + 392);
  v46[2] = *(_QWORD *)(v43 + 400);
  v46[3] = *(_QWORD *)(v43 + 408);
  v46[4] = *(_QWORD *)(v43 + 416);
  SpinLock = (PKSPIN_LOCK)(v43 + 144);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v43 + 144));
  v7 = v43;
  v8 = v40;
  NewIrql[0] = v6;
  v9 = v40 == 1073807372;
  *(_QWORD *)(v43 + 152) = KeGetCurrentThread();
  v10 = HIDWORD(v46[0]);
  if ( v9 )
    v10 = 2;
  *(_DWORD *)(v7 + 160) = 2100578;
  HIDWORD(v46[0]) = v10;
  v11 = v9;
  if ( v8 == 1073807371 )
  {
    HIDWORD(v46[0]) = 1;
    v11 = 1;
  }
  if ( v11 )
  {
    *(_DWORD *)(v3 + 20) = 1073807383;
    *(_QWORD *)(v3 + 48) = v46;
    v4 = v46;
    v44 = v46;
    v8 = 1073807383;
    *(_DWORD *)(v3 + 56) = 40;
    v38 = 40;
    v40 = 1073807383;
  }
  if ( v8 == 1073807383 )
  {
    v26 = *(_DWORD *)(v7 + 388);
    v27 = *((_DWORD *)v4 + 1);
    if ( v26 != v27 )
    {
      if ( v27 == 1 )
      {
        LOBYTE(v41) = 1;
      }
      else
      {
        v28 = (unsigned __int8)v37;
        if ( v26 == 1 )
          v28 = 1;
        v37 = v28;
      }
    }
    *(_DWORD *)(v7 + 388) = v27;
    *(_DWORD *)(v7 + 392) = *((_DWORD *)v4 + 2);
    *(_QWORD *)(v7 + 400) = v4[2];
    *(_QWORD *)(v7 + 408) = v4[3];
    *(_DWORD *)(v7 + 416) = *((_DWORD *)v4 + 8);
    *(_DWORD *)(v7 + 420) = *((_DWORD *)v4 + 9);
    *(_DWORD *)(*(_QWORD *)(v7 + 840) + 1220LL) = v27;
    *(_DWORD *)(*(_QWORD *)(v7 + 840) + 1224LL) = *(_DWORD *)(v7 + 392);
    *(_QWORD *)(*(_QWORD *)(v7 + 840) + 1208LL) = *(_QWORD *)(v7 + 408);
    *(_QWORD *)(*(_QWORD *)(v7 + 840) + 1200LL) = *(_QWORD *)(v7 + 400);
  }
  *(_QWORD *)(v7 + 152) = 0LL;
  *(_DWORD *)(v7 + 160) = 0;
  KeReleaseSpinLock(SpinLock, NewIrql[0]);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  v13 = v43;
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 1856) = 2105675;
  v39 = v12;
  v14 = *(_QWORD *)(v13 + 120);
  if ( v14 )
  {
    do
    {
      if ( (unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(v14 + 320)) )
        break;
      v14 = *(_QWORD *)(v14 + 120);
    }
    while ( v14 );
    v12 = v39;
  }
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v12);
  if ( v14 )
  {
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 144));
    *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
    *(_DWORD *)(v14 + 160) = 2100647;
    if ( (*(_DWORD *)(v14 + 56) & 0x2000) != 0 )
    {
      do
      {
        *(_QWORD *)(v14 + 152) = 0LL;
        *(_DWORD *)(v14 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 144), NewIrql[0]);
        if ( KeGetCurrentIrql() == 2 )
        {
          LODWORD(SpinLock) = 0;
          while ( (unsigned int)SpinLock < 0x32 )
            LODWORD(SpinLock) = (_DWORD)SpinLock + 1;
        }
        else
        {
          NdisMSleep(0x32u);
        }
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 144));
        *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v14 + 160) = 2100647;
      }
      while ( (*(_DWORD *)(v14 + 56) & 0x2000) != 0 );
      v3 = v45;
    }
    *(_DWORD *)(v14 + 56) |= 0x2000u;
    *(_QWORD *)(v14 + 152) = 0LL;
    *(_DWORD *)(v14 + 160) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 144));
    v15 = v40;
    v16 = v44;
    if ( v40 == 1073807383 )
    {
      if ( !v44 )
        goto LABEL_22;
      v17 = v38;
      if ( v38 < 0x28 )
        goto LABEL_22;
      v31 = *(_DWORD *)(v14 + 352);
      v32 = *((_DWORD *)v44 + 1);
      if ( v31 != v32 )
      {
        if ( v32 == 1 )
        {
          LOBYTE(v41) = 1;
        }
        else
        {
          v33 = v37;
          if ( v31 == 1 )
            v33 = 1;
          LOBYTE(v37) = v33;
        }
      }
      *(_DWORD *)(v14 + 352) = v32;
      *(_DWORD *)(v14 + 356) = *((_DWORD *)v16 + 2);
      *(_QWORD *)(v14 + 368) = v16[3];
      *(_QWORD *)(v14 + 360) = v16[2];
      *(_DWORD *)(v14 + 376) = *((_DWORD *)v16 + 8);
      *(_DWORD *)(v14 + 380) = *((_DWORD *)v16 + 9);
    }
    else
    {
      v17 = v38;
    }
    if ( v15 == 1073872902 )
    {
      v34 = ndisFIndicateOffloadChange(v14, v16, v17);
    }
    else
    {
      if ( v15 == 1073938515 )
      {
        ndisFilterIndicatePMCapabilities(v14, v3);
        v15 = v40;
      }
      if ( v15 == 1073938513 )
      {
        v34 = ndisFilterIndicateWoLPatternReject(v14, v3);
      }
      else
      {
        if ( v15 != 1073938514 )
          goto LABEL_22;
        v34 = ndisFilterIndicatePMOffloadReject(v14, v3);
      }
    }
    if ( !v34 )
    {
LABEL_31:
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 144));
      v20 = NewIrql[0];
      *(_DWORD *)(v14 + 56) &= ~0x2000u;
      *(_QWORD *)(v14 + 152) = 0LL;
      *(_DWORD *)(v14 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 144), v20);
      ndisDereferenceRef((PKSPIN_LOCK)(v14 + 320));
      return;
    }
LABEL_22:
    v18 = *(_QWORD *)(v14 + 16);
    v45 = v18;
    if ( *(_QWORD *)(v18 + 288) )
    {
      v19 = *(_DWORD *)(v3 + 20);
      LODWORD(SpinLock) = v19;
      if ( (unsigned __int8)byte_1C009261F >= 4u )
      {
        WPP_SF_qD(131LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v14, v19);
        v18 = v45;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(v18 + 288))(*(_QWORD *)(v14 + 24), v3);
      if ( (unsigned __int8)byte_1C009261F >= 4u )
        WPP_SF_qD(132LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v14, (unsigned int)SpinLock);
    }
    else
    {
      ndisFIndicateStatusInternal(v14, v3);
    }
    if ( (_BYTE)v37 )
      ndisSwapFilterHandlersForMediaDisconnect(v5, v43, v14);
    if ( (_BYTE)v41 )
      ndisRestoreFilterHandlersForMediaDisconnect(v5, v43, v14);
    goto LABEL_31;
  }
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrql);
  v21 = v40;
  v22 = v44;
  v23 = v38;
  if ( v40 != 1073807383 || !v44 )
  {
    v24 = v37;
    goto LABEL_35;
  }
  if ( v38 >= 0x28 )
  {
    v29 = *(_DWORD *)(v5 + 480);
    v30 = *((_DWORD *)v44 + 1);
    if ( v29 != v30 )
    {
      if ( v29 == 1 )
      {
        v24 = 1;
        goto LABEL_51;
      }
      v35 = (unsigned __int8)v41;
      if ( v30 == 1 )
        v35 = 1;
      v41 = v35;
    }
    v24 = v37;
LABEL_51:
    v23 = v38;
    goto LABEL_35;
  }
  v24 = v37;
LABEL_35:
  *(_DWORD *)(v3 + 24) |= 2u;
  if ( v21 == 1073872902 )
  {
    if ( v23 >= 0x70 && *(_BYTE *)v22 == 0xA7 && *((_WORD *)v22 + 1) >= 0x70u && *((_BYTE *)v22 + 1) )
    {
      if ( *(_QWORD *)(v5 + 4120) )
        goto LABEL_36;
      ndisMAllocateMiniportOffload(v5);
    }
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrql[0]);
    return;
  }
LABEL_36:
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v5);
  v9 = v24 == 0;
  v25 = v43;
  if ( !v9 )
    ndisSwapFilterHandlersForMediaDisconnect(v5, v43, 0LL);
  if ( (_BYTE)v41 )
    ndisRestoreFilterHandlersForMediaDisconnect(v5, v25, 0LL);
  *(_DWORD *)(v5 + 4448) &= ~1u;
  *(_DWORD *)(v5 + 4224) = 0;
  *(_QWORD *)(v5 + 4216) = 0LL;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 96));
  KeLowerIrql(NewIrql[0]);
}
