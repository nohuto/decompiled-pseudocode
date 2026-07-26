/*
 * XREFs of ndisFIndicateStatusInternal @ 0x1C00172BC
 * Callers:
 *     ndisFIndicateStatusWrapper @ 0x1C00172A0 (ndisFIndicateStatusWrapper.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0019370 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C000FDEC (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     ndisFIndicateOffloadChange @ 0x1C0013AA8 (ndisFIndicateOffloadChange.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001673C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019E34 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMAllocateMiniportOffload @ 0x1C001EFA0 (ndisMAllocateMiniportOffload.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0042EB0 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisIfUpdateL2MtuSize @ 0x1C0042F5C (ndisIfUpdateL2MtuSize.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0049E40 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0049EE8 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0049F3C (ndisFilterIndicateWoLPatternReject.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 */

void __fastcall ndisFIndicateStatusInternal(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  KIRQL v6; // r8
  int v7; // eax
  int v8; // ecx
  bool v9; // cl
  KIRQL v10; // al
  __int64 v11; // rbx
  KSPIN_LOCK *v12; // rax
  unsigned __int16 v13; // cx
  KIRQL v14; // dl
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r10d
  void (__fastcall *v18)(_QWORD, __int64); // rax
  __int64 v19; // rbx
  KIRQL v20; // di
  int v22; // ecx
  unsigned int v23; // edx
  char v24; // bl
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // r8d
  char v31; // al
  char v32; // al
  char v33; // dl
  KIRQL NewIrql; // [rsp+20h] [rbp-29h]
  KIRQL NewIrqla; // [rsp+20h] [rbp-29h]
  unsigned __int8 NewIrqlb; // [rsp+20h] [rbp-29h]
  bool v37; // [rsp+24h] [rbp-25h]
  unsigned int v38; // [rsp+28h] [rbp-21h]
  int SpinLock; // [rsp+30h] [rbp-19h]
  unsigned int SpinLocka; // [rsp+30h] [rbp-19h]
  unsigned int SpinLockb; // [rsp+30h] [rbp-19h]
  unsigned int SpinLockc; // [rsp+30h] [rbp-19h]
  KIRQL v43; // [rsp+38h] [rbp-11h]
  int v44; // [rsp+3Ch] [rbp-Dh]
  char v45; // [rsp+40h] [rbp-9h]
  __int64 v46; // [rsp+48h] [rbp-1h]
  _QWORD *v47; // [rsp+50h] [rbp+7h]
  __int64 v49; // [rsp+58h] [rbp+Fh]
  _QWORD v50[5]; // [rsp+60h] [rbp+17h] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  v3 = a2;
  v4 = *(_QWORD **)(a2 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  v38 = *(_DWORD *)(a2 + 56);
  v46 = a1;
  v44 = v2;
  v47 = v4;
  v37 = 0;
  v45 = 0;
  if ( v2 == 1073873072 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) != DriverEntry )
      return;
    ndisIfUpdateCurrentMacAddress(*(_QWORD *)(a1 + 840), v4);
    a1 = v46;
    v2 = 1073873072;
  }
  if ( v2 == 1073873073 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(v3 + 8) != DriverEntry )
      return;
    ndisIfUpdateL2MtuSize(*(_QWORD *)(a1 + 840), **(unsigned int **)(v3 + 48));
  }
  memset(v50, 0, sizeof(v50));
  LODWORD(v50[0]) = 2621824;
  LODWORD(v50[1]) = *(_DWORD *)(v46 + 392);
  v50[2] = *(_QWORD *)(v46 + 400);
  v50[3] = *(_QWORD *)(v46 + 408);
  v50[4] = *(_QWORD *)(v46 + 416);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v46 + 144));
  v7 = v44;
  *(_QWORD *)(v46 + 152) = KeGetCurrentThread();
  v8 = HIDWORD(v50[0]);
  if ( v44 == 1073807372 )
    v8 = 2;
  *(_DWORD *)(v46 + 160) = 2100483;
  HIDWORD(v50[0]) = v8;
  v9 = v44 == 1073807372;
  if ( v44 == 1073807371 )
  {
    HIDWORD(v50[0]) = 1;
    v9 = 1;
  }
  if ( v9 )
  {
    *(_DWORD *)(v3 + 20) = 1073807383;
    *(_QWORD *)(v3 + 48) = v50;
    v7 = 1073807383;
    *(_DWORD *)(v3 + 56) = 40;
    v4 = v50;
    v44 = 1073807383;
    v47 = v50;
    v38 = 40;
  }
  if ( v7 == 1073807383 )
  {
    v25 = *(_DWORD *)(v46 + 388);
    v26 = *((_DWORD *)v4 + 1);
    if ( v25 != v26 )
    {
      if ( v26 == 1 )
        v45 = 1;
      else
        v37 = v25 == 1;
    }
    *(_DWORD *)(v46 + 388) = v26;
    *(_DWORD *)(v46 + 392) = *((_DWORD *)v4 + 2);
    *(_QWORD *)(v46 + 400) = v4[2];
    *(_QWORD *)(v46 + 408) = v4[3];
    *(_DWORD *)(v46 + 416) = *((_DWORD *)v4 + 8);
    *(_DWORD *)(v46 + 420) = *((_DWORD *)v4 + 9);
    *(_DWORD *)(*(_QWORD *)(v46 + 840) + 1220LL) = v26;
    *(_DWORD *)(*(_QWORD *)(v46 + 840) + 1224LL) = *(_DWORD *)(v46 + 392);
    *(_QWORD *)(*(_QWORD *)(v46 + 840) + 1208LL) = *(_QWORD *)(v46 + 408);
    *(_QWORD *)(*(_QWORD *)(v46 + 840) + 1200LL) = *(_QWORD *)(v46 + 400);
  }
  *(_QWORD *)(v46 + 152) = 0LL;
  *(_DWORD *)(v46 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v46 + 144), v6);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 1856) = 2105638;
  v43 = v10;
  v11 = *(_QWORD *)(v46 + 120);
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
          NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v11 + 336), 8u);
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
    v10 = v43;
  }
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v10);
  if ( v11 )
  {
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 144));
    NewIrqla = v14;
    *(_QWORD *)(v11 + 152) = KeGetCurrentThread();
    v15 = *(_DWORD *)(v11 + 56);
    *(_DWORD *)(v11 + 160) = 2100552;
    if ( (v15 & 0x2000) != 0 )
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
        v15 = *(_DWORD *)(v11 + 56);
      }
      while ( (v15 & 0x2000) != 0 );
      v3 = a2;
      NewIrqla = v14;
    }
    *(_QWORD *)(v11 + 152) = 0LL;
    *(_DWORD *)(v11 + 160) = 0;
    *(_DWORD *)(v11 + 56) = v15 | 0x2000;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 144));
    v16 = v44;
    if ( v44 == 1073807383 )
    {
      if ( !v47 )
        goto LABEL_25;
      v17 = v38;
      if ( v38 < 0x28 )
        goto LABEL_25;
      v29 = *(_DWORD *)(v11 + 352);
      v30 = *((_DWORD *)v47 + 1);
      if ( v29 != v30 )
      {
        if ( v30 == 1 )
        {
          v45 = 1;
        }
        else
        {
          v31 = v37;
          if ( v29 == 1 )
            v31 = 1;
          v37 = v31;
        }
      }
      *(_DWORD *)(v11 + 352) = v30;
      *(_DWORD *)(v11 + 356) = *((_DWORD *)v47 + 2);
      *(_QWORD *)(v11 + 368) = v47[3];
      *(_QWORD *)(v11 + 360) = v47[2];
      *(_DWORD *)(v11 + 376) = *((_DWORD *)v47 + 8);
      *(_DWORD *)(v11 + 380) = *((_DWORD *)v47 + 9);
    }
    else
    {
      v17 = v38;
    }
    if ( v44 == 1073872902 )
    {
      v32 = ndisFIndicateOffloadChange(v11, v47, v17);
    }
    else
    {
      if ( v44 == 1073938515 )
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
          v49 = *(_QWORD *)(v11 + 16);
          v18 = *(void (__fastcall **)(_QWORD, __int64))(v49 + 288);
          if ( v18 )
          {
            SpinLocka = *(_DWORD *)(v3 + 20);
            if ( (unsigned __int8)byte_1C009961F >= 4u )
            {
              WPP_SF_qD(129LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, v11, *(unsigned int *)(v3 + 20));
              (*(void (__fastcall **)(_QWORD, __int64))(v49 + 288))(*(_QWORD *)(v11 + 24), v3);
            }
            else
            {
              v18(*(_QWORD *)(v11 + 24), v3);
            }
            if ( (unsigned __int8)byte_1C009961F >= 4u )
              WPP_SF_qD(130LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, v11, SpinLocka);
          }
          else
          {
            ndisFIndicateStatusInternal(v11, v3);
          }
          if ( v37 )
            ndisSwapFilterHandlersForMediaDisconnect(v5, v46, v11);
          if ( v45 )
            ndisRestoreFilterHandlersForMediaDisconnect(v5, v46, v11);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 144));
          *(_DWORD *)(v11 + 56) &= ~0x2000u;
          *(_QWORD *)(v11 + 152) = 0LL;
          *(_DWORD *)(v11 + 160) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 144), NewIrqla);
          v19 = v11 + 320;
          v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v19);
          NdisDereferenceWithTag(*(_QWORD *)(v19 + 16), 8u);
          if ( (*(_WORD *)(v19 + 8))-- == 1 && !*(_BYTE *)(v19 + 11) )
          {
            NdisFreeRefCount(*(struct NDIS_REFCOUNT_HANDLE__ **)(v19 + 16));
            *(_QWORD *)(v19 + 16) = 1LL;
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
  v22 = *(_DWORD *)(v5 + 4448);
  *(_DWORD *)(v5 + 1856) = 2102614;
  if ( (v22 & 1) != 0 )
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
      *(_DWORD *)(v5 + 1856) = 2102614;
      v22 = *(_DWORD *)(v5 + 4448);
    }
    while ( (v22 & 1) != 0 );
    v3 = a2;
  }
  v23 = v38;
  *(_DWORD *)(v5 + 4448) = v22 | 1;
  *(_DWORD *)(v5 + 4224) = 2102618;
  *(_QWORD *)(v5 + 4216) = KeGetCurrentThread();
  if ( v44 != 1073807383 || !v47 || v38 < 0x28 )
  {
    v24 = v37;
    goto LABEL_42;
  }
  v27 = *(_DWORD *)(v5 + 480);
  v28 = *((_DWORD *)v47 + 1);
  if ( v27 != v28 )
  {
    if ( v27 == 1 )
    {
      v24 = 1;
      goto LABEL_56;
    }
    v33 = v45;
    if ( v28 == 1 )
      v33 = 1;
    v45 = v33;
  }
  v24 = v37;
LABEL_56:
  v23 = v38;
LABEL_42:
  *(_DWORD *)(v3 + 24) |= 2u;
  if ( v44 == 1073872902 )
  {
    if ( v23 >= 0x70 && *(_BYTE *)v47 == 0xA7 && *((_WORD *)v47 + 1) >= 0x70u && *((_BYTE *)v47 + 1) )
    {
      if ( *(_QWORD *)(v5 + 4120) )
        goto LABEL_43;
      ndisMAllocateMiniportOffload(v5);
    }
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrqlb);
    return;
  }
LABEL_43:
  ndisIndicateStatusInternal(v5, v3);
  if ( v24 )
    ndisSwapFilterHandlersForMediaDisconnect(v5, v46, 0LL);
  if ( v45 )
    ndisRestoreFilterHandlersForMediaDisconnect(v5, v46, 0LL);
  *(_DWORD *)(v5 + 4448) &= ~1u;
  *(_DWORD *)(v5 + 4224) = 0;
  *(_QWORD *)(v5 + 4216) = 0LL;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 96));
  KeLowerIrql(NewIrqlb);
}
