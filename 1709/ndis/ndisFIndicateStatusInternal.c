/*
 * XREFs of ndisFIndicateStatusInternal @ 0x1C00064EC
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0005230 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusWrapper @ 0x1C00064D0 (ndisFIndicateStatusWrapper.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00056C8 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisMAllocateMiniportOffload @ 0x1C0012BD8 (ndisMAllocateMiniportOffload.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001DA70 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001ED7C (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C0023D40 (ndisFIndicateOffloadChange.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0041F20 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisIfUpdateL2MtuSize @ 0x1C0041FC8 (ndisIfUpdateL2MtuSize.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0048A30 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0048AD8 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0048B2C (ndisFilterIndicateWoLPatternReject.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 */

void __fastcall ndisFIndicateStatusInternal(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  KIRQL v6; // r9
  int v7; // eax
  int v8; // ecx
  bool v9; // cl
  KIRQL v10; // al
  __int64 v11; // rbx
  KSPIN_LOCK *v12; // rax
  unsigned __int16 v13; // cx
  KIRQL v14; // dl
  bool v15; // zf
  int v16; // edx
  unsigned int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rbx
  KIRQL v20; // di
  int v21; // ecx
  unsigned int v22; // edx
  char v23; // bl
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  int v29; // r8d
  char v30; // al
  char v31; // dl
  char v32; // al
  KIRQL NewIrql; // [rsp+20h] [rbp-29h]
  KIRQL NewIrqla; // [rsp+20h] [rbp-29h]
  KIRQL NewIrqlb; // [rsp+20h] [rbp-29h]
  bool v36; // [rsp+24h] [rbp-25h]
  unsigned int v37; // [rsp+28h] [rbp-21h]
  int SpinLock; // [rsp+30h] [rbp-19h]
  unsigned int SpinLocka; // [rsp+30h] [rbp-19h]
  unsigned int SpinLockb; // [rsp+30h] [rbp-19h]
  unsigned int SpinLockc; // [rsp+30h] [rbp-19h]
  KIRQL v42; // [rsp+38h] [rbp-11h]
  int v43; // [rsp+3Ch] [rbp-Dh]
  char v44; // [rsp+40h] [rbp-9h]
  __int64 v45; // [rsp+48h] [rbp-1h]
  _QWORD *v46; // [rsp+50h] [rbp+7h]
  __int64 v48; // [rsp+58h] [rbp+Fh]
  _QWORD v49[5]; // [rsp+60h] [rbp+17h] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  v3 = a2;
  v4 = *(_QWORD **)(a2 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  v37 = *(_DWORD *)(a2 + 56);
  v45 = a1;
  v43 = v2;
  v46 = v4;
  v36 = 0;
  v44 = 0;
  if ( v2 == 1073873072 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) != DriverEntry )
      return;
    ndisIfUpdateCurrentMacAddress(*(_QWORD *)(a1 + 840), v4);
    a1 = v45;
    v2 = 1073873072;
  }
  if ( v2 == 1073873073 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(v3 + 8) != DriverEntry )
      return;
    ndisIfUpdateL2MtuSize(*(_QWORD *)(a1 + 840), **(unsigned int **)(v3 + 48));
  }
  memset(v49, 0, sizeof(v49));
  LODWORD(v49[0]) = 2621824;
  LODWORD(v49[1]) = *(_DWORD *)(v45 + 392);
  v49[2] = *(_QWORD *)(v45 + 400);
  v49[3] = *(_QWORD *)(v45 + 408);
  v49[4] = *(_QWORD *)(v45 + 416);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v45 + 144));
  v7 = v43;
  *(_QWORD *)(v45 + 152) = KeGetCurrentThread();
  v8 = HIDWORD(v49[0]);
  if ( v43 == 1073807372 )
    v8 = 2;
  *(_DWORD *)(v45 + 160) = 2100483;
  HIDWORD(v49[0]) = v8;
  v9 = v43 == 1073807372;
  if ( v43 == 1073807371 )
  {
    HIDWORD(v49[0]) = 1;
    v9 = 1;
  }
  if ( v9 )
  {
    *(_DWORD *)(v3 + 20) = 1073807383;
    *(_QWORD *)(v3 + 48) = v49;
    v7 = 1073807383;
    *(_DWORD *)(v3 + 56) = 40;
    v4 = v49;
    v43 = 1073807383;
    v46 = v49;
    v37 = 40;
  }
  if ( v7 == 1073807383 )
  {
    v24 = *(_DWORD *)(v45 + 388);
    v25 = *((_DWORD *)v4 + 1);
    if ( v24 != v25 )
    {
      if ( v25 == 1 )
        v44 = 1;
      else
        v36 = v24 == 1;
    }
    *(_DWORD *)(v45 + 388) = v25;
    *(_DWORD *)(v45 + 392) = *((_DWORD *)v4 + 2);
    *(_QWORD *)(v45 + 400) = v4[2];
    *(_QWORD *)(v45 + 408) = v4[3];
    *(_DWORD *)(v45 + 416) = *((_DWORD *)v4 + 8);
    *(_DWORD *)(v45 + 420) = *((_DWORD *)v4 + 9);
    *(_DWORD *)(*(_QWORD *)(v45 + 840) + 1220LL) = v25;
    *(_DWORD *)(*(_QWORD *)(v45 + 840) + 1224LL) = *(_DWORD *)(v45 + 392);
    *(_QWORD *)(*(_QWORD *)(v45 + 840) + 1208LL) = *(_QWORD *)(v45 + 408);
    *(_QWORD *)(*(_QWORD *)(v45 + 840) + 1200LL) = *(_QWORD *)(v45 + 400);
  }
  *(_QWORD *)(v45 + 152) = 0LL;
  *(_DWORD *)(v45 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v45 + 144), v6);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 1856) = 2105637;
  v42 = v10;
  v11 = *(_QWORD *)(v45 + 120);
  if ( v11 )
  {
    do
    {
      NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 320));
      v12 = (KSPIN_LOCK *)(v11 + 320);
      SpinLock = 1;
      if ( !*(_BYTE *)(v11 + 330) )
      {
        v13 = *(_WORD *)(v11 + 328);
        if ( v13 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          SpinLock = 2;
        }
        else
        {
          *(_WORD *)(v11 + 328) = v13 + 1;
          NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v11 + 336));
          SpinLock = 0;
          v12 = (KSPIN_LOCK *)(v11 + 320);
        }
      }
      KeReleaseSpinLock(v12, NewIrql);
      if ( !SpinLock )
        break;
      v11 = *(_QWORD *)(v11 + 120);
    }
    while ( v11 );
    v3 = a2;
    v10 = v42;
  }
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v10);
  if ( v11 )
  {
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 144));
    v15 = (*(_DWORD *)(v11 + 56) & 0x2000) == 0;
    *(_QWORD *)(v11 + 152) = KeGetCurrentThread();
    NewIrqla = v14;
    *(_DWORD *)(v11 + 160) = 2100552;
    if ( !v15 )
    {
      do
      {
        *(_QWORD *)(v11 + 152) = 0LL;
        *(_DWORD *)(v11 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 144), v14);
        if ( KeGetCurrentIrql() == 2 )
        {
          for ( SpinLockb = 0; SpinLockb < 0x32; ++SpinLockb )
            ;
        }
        else
        {
          NdisMSleep(0x32u);
        }
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 144));
        *(_QWORD *)(v11 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v11 + 160) = 2100552;
      }
      while ( (*(_DWORD *)(v11 + 56) & 0x2000) != 0 );
      v3 = a2;
      NewIrqla = v14;
    }
    *(_DWORD *)(v11 + 56) |= 0x2000u;
    *(_QWORD *)(v11 + 152) = 0LL;
    *(_DWORD *)(v11 + 160) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 144));
    v16 = v43;
    if ( v43 == 1073807383 )
    {
      if ( !v46 )
        goto LABEL_25;
      v17 = v37;
      if ( v37 < 0x28 )
        goto LABEL_25;
      v28 = *(_DWORD *)(v11 + 352);
      v29 = *((_DWORD *)v46 + 1);
      if ( v28 != v29 )
      {
        if ( v29 == 1 )
        {
          v44 = 1;
        }
        else
        {
          v30 = v36;
          if ( v28 == 1 )
            v30 = 1;
          v36 = v30;
        }
      }
      *(_DWORD *)(v11 + 352) = v29;
      *(_DWORD *)(v11 + 356) = *((_DWORD *)v46 + 2);
      *(_QWORD *)(v11 + 368) = v46[3];
      *(_QWORD *)(v11 + 360) = v46[2];
      *(_DWORD *)(v11 + 376) = *((_DWORD *)v46 + 8);
      *(_DWORD *)(v11 + 380) = *((_DWORD *)v46 + 9);
    }
    else
    {
      v17 = v37;
    }
    if ( v43 == 1073872902 )
    {
      v32 = ndisFIndicateOffloadChange(v11, v46, v17);
    }
    else
    {
      if ( v43 == 1073938515 )
      {
        ndisFilterIndicatePMCapabilities(v11, v3);
        v16 = 1073938515;
      }
      if ( v16 == 1073938513 )
      {
        v32 = ndisFilterIndicateWoLPatternReject(v11, v3);
      }
      else
      {
        if ( v16 != 1073938514 )
        {
LABEL_25:
          v18 = *(_QWORD *)(v11 + 16);
          v48 = v18;
          if ( *(_QWORD *)(v18 + 288) )
          {
            SpinLocka = *(_DWORD *)(v3 + 20);
            if ( (unsigned __int8)byte_1C009875F >= 4u )
            {
              WPP_SF_qD(129LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v11, *(unsigned int *)(v3 + 20));
              v18 = v48;
            }
            (*(void (__fastcall **)(_QWORD, __int64))(v18 + 288))(*(_QWORD *)(v11 + 24), v3);
            if ( (unsigned __int8)byte_1C009875F >= 4u )
              WPP_SF_qD(130LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v11, SpinLocka);
          }
          else
          {
            ndisFIndicateStatusInternal(v11, v3);
          }
          if ( v36 )
            ndisSwapFilterHandlersForMediaDisconnect(v5, v45, v11);
          if ( v44 )
            ndisRestoreFilterHandlersForMediaDisconnect(v5, v45, v11);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 144));
          *(_DWORD *)(v11 + 56) &= ~0x2000u;
          *(_QWORD *)(v11 + 152) = 0LL;
          *(_DWORD *)(v11 + 160) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 144), NewIrqla);
          v19 = v11 + 320;
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v19);
          NdisDereferenceWithTag(*(_QWORD *)(v19 + 16));
          v15 = (*(_WORD *)(v19 + 8))-- == 1;
          if ( v15 && !*(_BYTE *)(v19 + 11) )
          {
            NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v19 + 16));
            *(_QWORD *)(v19 + 16) = 0LL;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v19, v20);
          return;
        }
        v32 = ndisFilterIndicatePMOffloadReject(v11, v3);
      }
    }
    if ( !v32 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 144));
      *(_DWORD *)(v11 + 56) &= ~0x2000u;
      *(_QWORD *)(v11 + 152) = 0LL;
      *(_DWORD *)(v11 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 144), NewIrqla);
      ndisDereferenceRef((PKSPIN_LOCK)(v11 + 320));
      return;
    }
    goto LABEL_25;
  }
  NewIrqlb = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  v21 = *(_DWORD *)(v5 + 4448);
  *(_DWORD *)(v5 + 1856) = 2102613;
  if ( (v21 & 1) != 0 )
  {
    do
    {
      *(_QWORD *)(v5 + 520) = 0LL;
      *(_DWORD *)(v5 + 1856) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 96));
      for ( SpinLockc = 0; SpinLockc < 0x32; ++SpinLockc )
        ;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 96));
      *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 1856) = 2102613;
    }
    while ( (*(_DWORD *)(v5 + 4448) & 1) != 0 );
    v3 = a2;
  }
  *(_DWORD *)(v5 + 4448) |= 1u;
  v22 = v37;
  *(_DWORD *)(v5 + 4224) = 2102617;
  *(_QWORD *)(v5 + 4216) = KeGetCurrentThread();
  if ( v43 != 1073807383 || !v46 || v37 < 0x28 )
  {
    v23 = v36;
    goto LABEL_42;
  }
  v26 = *(_DWORD *)(v5 + 480);
  v27 = *((_DWORD *)v46 + 1);
  if ( v26 != v27 )
  {
    if ( v26 == 1 )
    {
      v23 = 1;
      goto LABEL_56;
    }
    v31 = v44;
    if ( v27 == 1 )
      v31 = 1;
    v44 = v31;
  }
  v23 = v36;
LABEL_56:
  v22 = v37;
LABEL_42:
  *(_DWORD *)(v3 + 24) |= 2u;
  if ( v43 == 1073872902 )
  {
    if ( v22 >= 0x70 && *(_BYTE *)v46 == 0xA7 && *((_WORD *)v46 + 1) >= 0x70u && *((_BYTE *)v46 + 1) )
    {
      if ( *(_QWORD *)(v5 + 4120) )
        goto LABEL_43;
      ndisMAllocateMiniportOffload(v5);
    }
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrqlb);
    return;
  }
LABEL_43:
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v5);
  if ( v23 )
    ndisSwapFilterHandlersForMediaDisconnect(v5, v45, 0LL);
  if ( v44 )
    ndisRestoreFilterHandlersForMediaDisconnect(v5, v45, 0LL);
  *(_DWORD *)(v5 + 4448) &= ~1u;
  *(_DWORD *)(v5 + 4224) = 0;
  *(_QWORD *)(v5 + 4216) = 0LL;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 96));
  KeLowerIrql(NewIrqlb);
}
