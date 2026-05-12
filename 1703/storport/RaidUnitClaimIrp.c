/*
 * XREFs of RaidUnitClaimIrp @ 0x1C00080D0
 * Callers:
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C000E0CC (RaidUnitReenablePendingTimer.c)
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C001DA2C (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C001E534 (TranslateToExtendedSrb.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002B8A0 (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidGetSystemAddressForMdl @ 0x1C00395C4 (RaidGetSystemAddressForMdl.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C003F904 (StorpDataInBufferAllocateMdlAndLockPages.c)
 *     Template_qcq @ 0x1C003FB58 (Template_qcq.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  ULONGLONG UnbiasedInterruptTime; // r12
  __int64 v6; // rbx
  __int64 v9; // rbp
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  char *v21; // r8
  char v22; // dl
  __int64 v23; // rbp
  unsigned __int8 v24; // al
  int v25; // r13d
  __int64 v26; // rcx
  unsigned int v27; // r14d
  __int64 v28; // r10
  int v29; // eax
  char v30; // al
  __int64 v31; // r13
  unsigned int v32; // edx
  __int64 v33; // r14
  char *v34; // rax
  __int64 v35; // r14
  char *v36; // rax
  __int64 v37; // rcx
  unsigned __int8 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // rbx
  _DWORD *v47; // rbp
  USHORT CurrentNodeNumber; // ax
  __int64 v49; // rsi
  int v50; // r14d
  _QWORD *v51; // rax
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // r9d
  signed __int32 v55; // ecx
  ULONG v56; // esi
  ULONG v57; // ebp
  int v58; // r14d
  __int64 result; // rax
  __int64 v60; // rcx
  __int64 BidirectionalData; // rax
  __int64 v62; // r10
  int v63; // eax
  char *SrbScsiData; // rax
  unsigned int v65; // r11d
  __int64 v66; // rcx
  unsigned __int64 v67; // r10
  __int64 v68; // rsi
  int v69; // ecx
  __int64 v70; // r8
  char v71; // r9
  int v72; // edx
  unsigned __int8 v73; // al
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  int SystemAddressForMdl; // r14d
  __int64 v78; // rax
  struct _MDL *v79; // rcx
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rcx
  _QWORD *v84; // rax
  char v85; // [rsp+30h] [rbp-C8h]
  char v86[7]; // [rsp+31h] [rbp-C7h] BYREF
  __int64 v87; // [rsp+38h] [rbp-C0h]
  __int64 v88; // [rsp+40h] [rbp-B8h]
  __int64 v89; // [rsp+48h] [rbp-B0h]
  char *v90; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v91; // [rsp+58h] [rbp-A0h]
  __int64 v92; // [rsp+60h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v94; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v95[2]; // [rsp+98h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  UnbiasedInterruptTime = 0LL;
  v6 = *(_QWORD *)(a4 + 16);
  v87 = a4;
  v89 = 0LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(v4 + 8);
  v85 = 0;
  v95[0] = 0LL;
  v86[0] = 0;
  v11 = *(_BYTE *)(v10 + 2) == 40;
  v88 = 0LL;
  v92 = 0LL;
  if ( v11 )
  {
    v60 = v10 + *(unsigned int *)(v10 + 52);
    v89 = v10;
    *(_WORD *)v60 = 1;
    *(_DWORD *)(v60 + 4) = 4;
    *(_BYTE *)(v60 + 8) = *(_BYTE *)(a1 + 88);
    *(_BYTE *)(v60 + 9) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v60 + 10) = *(_BYTE *)(a1 + 90);
    v12 = *(_QWORD *)(v10 + 80);
    v13 = *(_QWORD *)(v10 + 64);
    GetSrbScsiData(v10, 0, 0, 0, 0LL, (__int64)v86);
    BidirectionalData = RaidSrbExGetBidirectionalData(v10);
    v62 = BidirectionalData;
    if ( BidirectionalData )
    {
      v70 = *(_QWORD *)(BidirectionalData + 16);
      if ( v70 )
      {
        v71 = 0;
        v72 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
        if ( v72 == 315412 || v72 == 315464 )
          v71 = 1;
        v88 = *(_QWORD *)(BidirectionalData + 16);
        if ( v71 )
          v73 = *(_BYTE *)(a2 + 64);
        else
          v73 = 0;
        result = StorpDataInBufferAllocateMdlAndLockPages(&v92, *(unsigned int *)(v62 + 8), v70, v73);
        if ( (int)result < 0 )
          return result;
        v9 = v92;
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = *(_QWORD *)(v10 + 24);
    *(_BYTE *)(v10 + 6) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(a1 + 88);
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(a1 + 90);
    v86[0] = *(_BYTE *)(v10 + 11);
    v14 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v14 + 402) == 1 )
    {
      v74 = *(_QWORD *)(v6 + 760);
      if ( !v74 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        result = 3221225626LL;
        *(_DWORD *)(v10 + 64) = -1073741670;
        return result;
      }
      result = TranslateToExtendedSrb(
                 v74,
                 v10,
                 *(_DWORD *)(v6 + 744),
                 v74,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v14 + 528) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
LABEL_119:
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = result;
        return result;
      }
      v75 = *(_QWORD *)(v6 + 760);
      *(_BYTE *)(v6 + 16) |= 0x40u;
      *(_QWORD *)(v6 + 752) = v10;
      v95[0] = v10;
      v10 = v75;
      v89 = v75;
      v85 = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v75;
    }
  }
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v6 + 160) = a2;
  *(_QWORD *)(v6 + 168) = v10;
  *(_QWORD *)(v6 + 224) = a1;
  *(_QWORD *)(v6 + 104) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v6 + 136) = v9;
  if ( !v11 )
    IoGetActivityIdIrp(a2, v6 + 728);
  v15 = v89;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
  {
    if ( *(_BYTE *)(v10 + 2) == 40 )
      v63 = *(_DWORD *)(v89 + 96);
    else
      v63 = *(_DWORD *)(v10 + 56);
    *(_DWORD *)(v6 + 18) = v63;
  }
  else
  {
    *(_BYTE *)(v6 + 20) = -1;
    *(_WORD *)(v6 + 18) = -1;
  }
  v16 = *(_BYTE *)(v6 + 16) & 0xE7;
  *(_QWORD *)(v6 + 176) = v12;
  v17 = v87;
  *(_BYTE *)(v6 + 16) = v16 | 4;
  *(_QWORD *)(v6 + 192) = v88;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 184) = v13;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    *(_QWORD *)(v15 + 96) = v6;
    *(_DWORD *)(v15 + 32) = *(_DWORD *)v17;
  }
  else
  {
    *(_QWORD *)(v10 + 48) = v6;
    *(_BYTE *)(v10 + 8) = *(_BYTE *)v17;
  }
  v18 = *(_QWORD *)(v17 + 8);
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    if ( (v19 & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(v10 + 104) = v18;
  }
  else if ( (v19 & 0xFFFFFFF8) != 0 )
  {
    *(_QWORD *)(v10 + 56) = v18;
  }
  v20 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v20 + 5696) )
  {
    result = RaidAdapterAcquireCryptoKeyResources(v20, v6);
    if ( (int)result < 0 )
      goto LABEL_119;
  }
  v21 = *(char **)(a1 + 24);
  v22 = 0;
  v90 = v21;
  if ( !*(_QWORD *)(a2 + 8) )
    goto LABEL_36;
  v23 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v23 + 2) == 40 )
    v88 = *(_QWORD *)(v23 + 96);
  else
    v88 = *(_QWORD *)(v23 + 48);
  v24 = *(_BYTE *)(v23 + 2);
  if ( v24 == 40 )
  {
    v27 = *(_DWORD *)(v23 + 20);
    v26 = *(_QWORD *)(v23 + 64);
    v25 = *(_DWORD *)(v23 + 24);
    v91 = v26;
    if ( !v27 )
    {
      SrbScsiData = (char *)GetSrbScsiData(v23, 0, 0, 0, 0LL, 0LL);
      v26 = v91;
      v21 = v90;
      if ( SrbScsiData )
        v22 = *SrbScsiData;
      else
        v22 = 0;
    }
  }
  else
  {
    v25 = *(_DWORD *)(v23 + 12);
    v26 = *(_QWORD *)(v23 + 24);
    v27 = v24;
    if ( !v24 )
      v22 = *(_BYTE *)(v23 + 72);
  }
  if ( (v25 & 0xC0) == 0 )
    goto LABEL_35;
  v28 = v88;
  if ( !v26 && !*(_QWORD *)(v88 + 104) )
    goto LABEL_35;
  if ( v27 <= 0x17 && (v29 = 8389124, _bittest(&v29, v27))
    || (v30 = v21[393], v30 == 3)
    || (unsigned __int8)(v30 - 1) <= 1u && (v27 || ((v22 - 8) & 0x5D) != 0) )
  {
    v31 = *(_QWORD *)(v88 + 104);
    v32 = 16;
    v33 = *(_QWORD *)(v88 + 184);
    if ( !*(_BYTE *)(a2 + 64) )
      v32 = 32;
    LODWORD(v91) = v32;
    if ( (*(_BYTE *)(v31 + 10) & 5) != 0 )
    {
      v34 = *(char **)(v31 + 24);
    }
    else
    {
      v34 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v31, 0, MmCached, 0LL, 0, v32 | 0x40000000);
      v32 = v91;
      v28 = v88;
    }
    if ( v34 )
    {
      v35 = v33 ? v33 - *(unsigned int *)(v31 + 44) - *(_QWORD *)(v31 + 32) : 0LL;
      v36 = &v34[v35];
      v11 = *(_BYTE *)(v23 + 2) == 40;
      v90 = v36;
      if ( v11 )
        *(_QWORD *)(v23 + 64) = v36;
      else
        *(_QWORD *)(v23 + 24) = v36;
      v37 = *(_QWORD *)(v28 + 136);
      if ( !v37 )
        goto LABEL_35;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v37, *(_QWORD *)(v28 + 192), v32, &v90);
      if ( SystemAddressForMdl >= 0 )
      {
        v78 = RaidSrbExGetBidirectionalData(v23);
        *(_QWORD *)(v78 + 16) = v90;
      }
      if ( SystemAddressForMdl != -1073741670 )
        goto LABEL_35;
    }
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      if ( !v85 )
      {
        *(_DWORD *)(v89 + 44) = -1073741670;
LABEL_137:
        v79 = *(struct _MDL **)(v6 + 136);
        if ( v79 )
        {
          MmUnlockPages(v79);
          IoFreeMdl(*(PMDL *)(v6 + 136));
          *(_QWORD *)(v6 + 136) = 0LL;
        }
        return 3221225626LL;
      }
    }
    else if ( !v85 )
    {
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v6 + 176);
LABEL_136:
      *(_DWORD *)(v10 + 64) = -1073741670;
      goto LABEL_137;
    }
    v10 = v95[0];
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v95[0];
    goto LABEL_136;
  }
  if ( !v21[4450] )
  {
LABEL_35:
    v17 = v87;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    *(_QWORD *)(v23 + 24) = 0LL;
    goto LABEL_35;
  }
  v76 = RaidSrbExGetBidirectionalData(v23);
  v17 = v87;
  *(_QWORD *)(v23 + 64) = 0LL;
  if ( v76 )
    *(_QWORD *)(v76 + 16) = 0LL;
LABEL_36:
  if ( v86[0] > *(_BYTE *)(a1 + 1444) )
    v38 = v86[0];
  else
    v38 = *(_BYTE *)(a1 + 1444);
  v39 = *(_QWORD *)(v6 + 168);
  v40 = *(_QWORD *)(v17 + 24);
  if ( *(_BYTE *)(v39 + 2) != 40 )
  {
    *(_QWORD *)(v6 + 200) = *(_QWORD *)(v39 + 32);
    *(_BYTE *)(v6 + 208) = *(_BYTE *)(v39 + 11);
    *(_QWORD *)(v39 + 32) = v40;
    *(_BYTE *)(v39 + 11) = v38;
    *(_BYTE *)(v6 + 16) |= 0x20u;
    goto LABEL_40;
  }
  if ( !*(_DWORD *)(v39 + 20) )
  {
    v65 = 0;
    if ( *(_DWORD *)(v39 + 56) )
    {
      while ( 1 )
      {
        v66 = *(unsigned int *)(v39 + 4LL * v65 + 120);
        if ( (unsigned int)v66 < 0x80 )
          goto LABEL_103;
        v67 = *(unsigned int *)(v39 + 16);
        if ( (unsigned int)v66 > (unsigned int)v67 )
          goto LABEL_103;
        v68 = (unsigned int)v66;
        v69 = *(_DWORD *)(v39 + v66);
        if ( v69 != 64 )
          break;
        if ( v68 + 40 <= v67 )
          goto LABEL_101;
LABEL_103:
        if ( ++v65 >= *(_DWORD *)(v39 + 56) )
          goto LABEL_40;
      }
      v80 = v69 - 65;
      if ( v80 )
      {
        if ( v80 != 1 || v68 + 40 > v67 )
          goto LABEL_103;
        *(_QWORD *)(v6 + 200) = *(_QWORD *)(v39 + v68 + 24);
        *(_BYTE *)(v6 + 208) = *(_BYTE *)(v39 + v68 + 9);
        *(_QWORD *)(v39 + v68 + 24) = v40;
      }
      else
      {
        if ( v68 + 56 > v67 )
          goto LABEL_103;
LABEL_101:
        *(_QWORD *)(v6 + 200) = *(_QWORD *)(v39 + v68 + 16);
        *(_BYTE *)(v6 + 208) = *(_BYTE *)(v39 + v68 + 9);
        *(_QWORD *)(v39 + v68 + 16) = v40;
      }
      *(_BYTE *)(v39 + v68 + 9) = v38;
      *(_BYTE *)(v6 + 16) |= 0x20u;
      goto LABEL_103;
    }
  }
LABEL_40:
  v41 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v41 + 2) == 40 )
    v42 = *(_QWORD *)(v41 + 96);
  else
    v42 = *(_QWORD *)(v41 + 48);
  v43 = *(_QWORD *)(v42 + 168);
  if ( *(_BYTE *)(v43 + 2) == 40 )
    v44 = *(_DWORD *)(v43 + 40);
  else
    v44 = *(_DWORD *)(v43 + 20);
  if ( v44 <= 2 && !*(_BYTE *)(a1 + 2576) )
    v44 = 3;
  v45 = *(_QWORD *)(a1 + 24);
  if ( v45 && *(_QWORD *)(v45 + 5000) || (**(_DWORD **)(a1 + 208) & 1) != 0 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  *(_BYTE *)(v42 + 16) |= 2u;
  v46 = v42 + 48;
  v47 = *(_DWORD **)(a1 + 208);
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v49 = (__int64)&v47[14 * CurrentNodeNumber + 16];
  if ( v44 - 1 > 0xFFFFFFFC )
    v44 = 10;
  v50 = 2 * v44;
  *(_QWORD *)(v46 + 40) = UnbiasedInterruptTime;
  *(_DWORD *)(v46 + 32) = v50;
  *(_DWORD *)(v46 + 36) = CurrentNodeNumber;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v49 + 40), &LockHandle);
  v51 = *(_QWORD **)(v49 + 8);
  if ( *v51 != v49 )
    __fastfail(3u);
  *(_QWORD *)v46 = v49;
  *(_QWORD *)(v46 + 8) = v51;
  *v51 = v46;
  *(_QWORD *)(v49 + 8) = v46;
  if ( *(_DWORD *)(v49 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v49 + 48) = v50;
  if ( (*v47 & 1) != 0 )
  {
    v81 = *(_QWORD *)(v49 + 24);
    v82 = v49 + 16;
    if ( v81 == v82 )
    {
LABEL_153:
      v83 = *(_QWORD *)v82;
      v84 = (_QWORD *)(v46 + 16);
      if ( *(_QWORD *)(*(_QWORD *)v82 + 8LL) != v82 )
        __fastfail(3u);
      *v84 = v83;
      *(_QWORD *)(v46 + 24) = v82;
      *(_QWORD *)(v83 + 8) = v84;
      *(_QWORD *)v82 = v84;
    }
    else
    {
      while ( *(_QWORD *)(v46 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v46 + 32)) < *(_QWORD *)(v81 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v81 + 16)) )
      {
        v81 = *(_QWORD *)(v81 + 8);
        if ( v81 == v82 )
          goto LABEL_153;
      }
      *(_QWORD *)(v46 + 16) = *(_QWORD *)v81;
      *(_QWORD *)(*(_QWORD *)v81 + 8LL) = v46 + 16;
      *(_QWORD *)v81 = v46 + 16;
      *(_QWORD *)(v46 + 24) = v81;
    }
    *(_DWORD *)(v46 + 48) |= 1u;
  }
  else
  {
    *(_DWORD *)(v46 + 48) &= ~1u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    v95[0] = 0LL;
    v95[1] = 0LL;
    IoGetActivityIdIrp(a2, v95);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
      Template_qcq(v53, v52, (unsigned int)v95, v54, 3);
  }
  if ( *(_BYTE *)(a1 + 153) >= 0x80u
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
  {
    v55 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1456) + 56LL));
    if ( *(_BYTE *)(a1 + 2604) )
    {
      LOBYTE(v52) = 1;
      RaidUnitReenablePendingTimer(a1, v52);
      *(_BYTE *)(a1 + 2604) = 0;
    }
    else if ( v55 == 1 )
    {
      v56 = 2000;
      v57 = 300;
      if ( *(_BYTE *)(a1 + 2576) )
      {
        v57 = 50;
        v56 = 500;
        v58 = 1;
      }
      else
      {
        v58 = 4;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &v94);
      if ( (*(_BYTE *)(a1 + 153) & 0x20) != 0 )
      {
        KeSetCoalescableTimer((PKTIMER)(a1 + 664), (LARGE_INTEGER)(-10000LL * v56), v56, v57, (PKDPC)(a1 + 728));
        *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) = v58;
        *(_BYTE *)(a1 + 153) &= ~0x20u;
      }
      KeReleaseInStackQueuedSpinLock(&v94);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  else if ( *(_BYTE *)(a1 + 2604) )
  {
    LOBYTE(v52) = 1;
    RaidUnitReenablePendingTimer(a1, v52);
    *(_BYTE *)(a1 + 2604) = 0;
  }
  return 0LL;
}
