/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0008880
 * Callers:
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C001EA34 (RaidSrbExGetBidirectionalData.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     RaidUnitReenablePendingTimer @ 0x1C0038424 (RaidUnitReenablePendingTimer.c)
 *     TranslateToExtendedSrb @ 0x1C0039F50 (TranslateToExtendedSrb.c)
 *     RaidGetSystemAddressForMdl @ 0x1C003B0D4 (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0qcq @ 0x1C003B8F0 (McTemplateK0qcq.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C0040094 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r8
  char v17; // r9
  int v18; // edx
  __int64 v19; // r9
  __int64 result; // rax
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rcx
  int v28; // eax
  char *v29; // rcx
  char v30; // r15
  __int64 v31; // rbp
  unsigned __int8 v32; // al
  _QWORD *v33; // rdx
  unsigned int v34; // r14d
  int v35; // r12d
  __int64 v36; // r13
  char *SrbScsiData; // rax
  int v38; // eax
  char v39; // al
  __int64 BidirectionalData; // rax
  ULONGLONG UnbiasedInterruptTime; // r13
  unsigned __int8 v42; // r11
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned int i; // r10d
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // r15
  unsigned int v52; // r12d
  __int64 v53; // r14
  char *v54; // rax
  __int64 v55; // r14
  char *v56; // rax
  __int64 v57; // rcx
  int SystemAddressForMdl; // r14d
  __int64 v59; // rax
  struct _MDL *v60; // rcx
  unsigned __int64 v61; // rcx
  __int64 v62; // r15
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned int v66; // edi
  __int64 v67; // rax
  __int64 v68; // rbx
  _BYTE *v69; // r14
  USHORT CurrentNodeNumber; // ax
  __int64 v71; // rbp
  int v72; // edi
  _QWORD *v73; // rax
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rdx
  int v79; // ecx
  int v80; // r9d
  signed __int32 v81; // eax
  ULONG v82; // edi
  ULONG v83; // ebp
  int v84; // r14d
  char v85; // [rsp+30h] [rbp-C8h]
  char v86[7]; // [rsp+31h] [rbp-C7h] BYREF
  __int64 v87; // [rsp+38h] [rbp-C0h]
  __int64 v88; // [rsp+40h] [rbp-B8h]
  char *v89; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD *v90; // [rsp+50h] [rbp-A8h]
  __int64 v91; // [rsp+58h] [rbp-A0h]
  __int64 v92; // [rsp+60h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v94; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v95[2]; // [rsp+98h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  v5 = a2;
  v88 = a2;
  v87 = a4;
  v7 = 0LL;
  v91 = 0LL;
  v8 = *(_QWORD *)(a2 + 184);
  v9 = 0LL;
  v85 = 0;
  v10 = 0LL;
  v95[0] = 0LL;
  v86[0] = 0;
  v11 = *(_QWORD *)(v8 + 8);
  v92 = 0LL;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v13 = *(_QWORD *)(v11 + 48);
    v14 = *(_QWORD *)(v11 + 24);
    *(_BYTE *)(v11 + 6) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v11 + 5) = *(_BYTE *)(a1 + 88);
    *(_BYTE *)(v11 + 7) = *(_BYTE *)(a1 + 90);
    v86[0] = *(_BYTE *)(v11 + 11);
    v23 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v23 + 402) == 1 )
    {
      v24 = *(_QWORD *)(v4 + 760);
      if ( !v24 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        result = 3221225626LL;
        *(_DWORD *)(v11 + 64) = -1073741670;
        return result;
      }
      result = TranslateToExtendedSrb(
                 v24,
                 v11,
                 *(_DWORD *)(v4 + 744),
                 v24,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v23 + 528) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        *(_DWORD *)(v11 + 64) = result;
        return result;
      }
      v7 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      v5 = v88;
      *(_QWORD *)(v4 + 752) = v11;
      v95[0] = v11;
      v11 = v7;
      v91 = v7;
      v85 = 1;
      *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL) = v7;
    }
LABEL_13:
    v21 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v4 + 160) = v5;
    *(_QWORD *)(v4 + 168) = v11;
    *(_QWORD *)(v4 + 224) = a1;
    *(_QWORD *)(v4 + 104) = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v4 + 136) = v10;
    if ( !v21 )
    {
      IoGetActivityIdIrp(v5, v4 + 728);
      v5 = v88;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
    {
      if ( *(_BYTE *)(v11 + 2) == 40 )
        v22 = *(_DWORD *)(v7 + 96);
      else
        v22 = *(_DWORD *)(v11 + 56);
      *(_DWORD *)(v4 + 18) = v22;
    }
    else
    {
      *(_BYTE *)(v4 + 20) = -1;
      *(_WORD *)(v4 + 18) = -1;
    }
    v25 = v87;
    v26 = *(_BYTE *)(v4 + 16) & 0xE3 | 4;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_BYTE *)(v4 + 16) = v26;
    *(_QWORD *)(v4 + 176) = v13;
    *(_QWORD *)(v4 + 184) = v14;
    *(_QWORD *)(v4 + 192) = v9;
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      *(_QWORD *)(v7 + 96) = v4;
      *(_DWORD *)(v7 + 32) = *(_DWORD *)v25;
    }
    else
    {
      *(_QWORD *)(v11 + 48) = v4;
      *(_BYTE *)(v11 + 8) = *(_BYTE *)v25;
    }
    v27 = *(_QWORD *)(v25 + 8);
    v28 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7;
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      if ( (v28 & 0xFFFFFFF8) != 0 )
        *(_QWORD *)(v11 + 104) = v27;
    }
    else if ( (v28 & 0xFFFFFFF8) != 0 )
    {
      *(_QWORD *)(v11 + 56) = v27;
    }
    v29 = *(char **)(a1 + 24);
    v30 = 0;
    v89 = v29;
    if ( !*(_QWORD *)(v5 + 8) )
    {
      UnbiasedInterruptTime = 0LL;
      goto LABEL_57;
    }
    v31 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
    v32 = *(_BYTE *)(v31 + 2);
    if ( v32 == 40 )
    {
      v33 = *(_QWORD **)(v31 + 96);
      v34 = *(_DWORD *)(v31 + 20);
      v35 = *(_DWORD *)(v31 + 24);
      v36 = *(_QWORD *)(v31 + 64);
      v90 = v33;
      if ( !v34 )
      {
        SrbScsiData = (char *)GetSrbScsiData(v31, 0, 0, 0, 0LL, 0LL);
        v29 = v89;
        v33 = v90;
        v5 = v88;
        if ( SrbScsiData )
          v30 = *SrbScsiData;
      }
    }
    else
    {
      v33 = *(_QWORD **)(v31 + 48);
      v35 = *(_DWORD *)(v31 + 12);
      v36 = *(_QWORD *)(v31 + 24);
      v90 = v33;
      v34 = v32;
      if ( !v32 )
        v30 = *(_BYTE *)(v31 + 72);
    }
    if ( (v35 & 0xC0) == 0 || !v36 && !v33[13] )
      goto LABEL_95;
    if ( v34 > 0x17 || (v38 = 8389124, !_bittest(&v38, v34)) )
    {
      v39 = v29[393];
      if ( v39 != 3 && ((unsigned __int8)(v39 - 1) > 1u || !v34 && ((v30 - 8) & 0x5D) == 0) )
      {
        if ( v29[4450] )
        {
          if ( *(_BYTE *)(v31 + 2) == 40 )
          {
            BidirectionalData = RaidSrbExGetBidirectionalData(v31);
            v25 = v87;
            UnbiasedInterruptTime = 0LL;
            *(_QWORD *)(v31 + 64) = 0LL;
            if ( BidirectionalData )
              *(_QWORD *)(BidirectionalData + 16) = 0LL;
LABEL_57:
            v42 = v86[0];
            if ( v86[0] <= *(_BYTE *)(a1 + 1476) )
              v42 = *(_BYTE *)(a1 + 1476);
            v43 = *(_QWORD *)(v25 + 24);
            v44 = *(_QWORD *)(v4 + 168);
            if ( *(_BYTE *)(v44 + 2) == 40 )
            {
              if ( !*(_DWORD *)(v44 + 20) )
              {
                for ( i = 0; i < *(_DWORD *)(v44 + 56); ++i )
                {
                  v46 = *(unsigned int *)(v44 + 4LL * i + 120);
                  if ( (unsigned int)v46 < 0x80 )
                    continue;
                  v47 = *(unsigned int *)(v44 + 16);
                  if ( (unsigned int)v46 > (unsigned int)v47 )
                    continue;
                  v48 = (unsigned int)v46;
                  v49 = *(_DWORD *)(v44 + v46) - 64;
                  if ( v49 )
                  {
                    v50 = v49 - 1;
                    if ( v50 )
                    {
                      if ( v50 != 1 || v48 + 40 > v47 )
                        continue;
                      *(_QWORD *)(v4 + 200) = *(_QWORD *)(v44 + v48 + 24);
                      *(_BYTE *)(v4 + 208) = *(_BYTE *)(v44 + v48 + 9);
                      *(_QWORD *)(v44 + v48 + 24) = v43;
                      goto LABEL_101;
                    }
                    v61 = v48 + 56;
                  }
                  else
                  {
                    v61 = v48 + 40;
                  }
                  if ( v61 <= v47 )
                  {
                    *(_QWORD *)(v4 + 200) = *(_QWORD *)(v44 + v48 + 16);
                    *(_BYTE *)(v4 + 208) = *(_BYTE *)(v44 + v48 + 9);
                    *(_QWORD *)(v44 + v48 + 16) = v43;
LABEL_101:
                    *(_BYTE *)(v44 + v48 + 9) = v42;
                    *(_BYTE *)(v4 + 16) |= 0x20u;
                  }
                }
              }
            }
            else
            {
              *(_QWORD *)(v4 + 200) = *(_QWORD *)(v44 + 32);
              *(_BYTE *)(v4 + 208) = *(_BYTE *)(v44 + 11);
              *(_QWORD *)(v44 + 32) = v43;
              *(_BYTE *)(v44 + 11) = v42;
              *(_BYTE *)(v4 + 16) |= 0x20u;
            }
            v62 = v88;
            v63 = *(_QWORD *)(*(_QWORD *)(v88 + 184) + 8LL);
            if ( *(_BYTE *)(v63 + 2) == 40 )
              v64 = *(_QWORD *)(v63 + 96);
            else
              v64 = *(_QWORD *)(v63 + 48);
            v65 = *(_QWORD *)(v64 + 168);
            if ( *(_BYTE *)(v65 + 2) == 40 )
              v66 = *(_DWORD *)(v65 + 40);
            else
              v66 = *(_DWORD *)(v65 + 20);
            if ( !*(_BYTE *)(a1 + 2624) && v66 <= 2 )
              v66 = 3;
            v67 = *(_QWORD *)(a1 + 24);
            if ( v67 && *(_QWORD *)(v67 + 5000) || (**(_BYTE **)(a1 + 208) & 1) != 0 )
              UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
            *(_BYTE *)(v64 + 16) |= 2u;
            v68 = v64 + 48;
            v69 = *(_BYTE **)(a1 + 208);
            CurrentNodeNumber = KeGetCurrentNodeNumber();
            *(_QWORD *)(v68 + 40) = UnbiasedInterruptTime;
            *(_DWORD *)(v68 + 36) = CurrentNodeNumber;
            v71 = (__int64)&v69[56 * CurrentNodeNumber + 64];
            if ( v66 - 1 > 0xFFFFFFFC )
              v66 = 10;
            v72 = 2 * v66;
            *(_DWORD *)(v68 + 32) = v72;
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v71 + 40), &LockHandle);
            v73 = *(_QWORD **)(v71 + 8);
            if ( *v73 != v71 )
              __fastfail(3u);
            *(_QWORD *)v68 = v71;
            *(_QWORD *)(v68 + 8) = v73;
            *v73 = v68;
            *(_QWORD *)(v71 + 8) = v68;
            if ( *(_DWORD *)(v71 + 48) >= 0xFFFFFFFE )
              *(_DWORD *)(v71 + 48) = v72;
            if ( (*v69 & 1) != 0 )
            {
              v74 = v71 + 16;
              v75 = *(_QWORD *)(v71 + 24);
              if ( v75 == v71 + 16 )
              {
LABEL_128:
                v76 = *(_QWORD *)v74;
                v77 = (_QWORD *)(v68 + 16);
                if ( *(_QWORD *)(*(_QWORD *)v74 + 8LL) != v74 )
                  __fastfail(3u);
                *v77 = v76;
                *(_QWORD *)(v68 + 24) = v74;
                *(_QWORD *)(v76 + 8) = v77;
                *(_QWORD *)v74 = v77;
                *(_DWORD *)(v68 + 48) |= 1u;
              }
              else
              {
                while ( *(_QWORD *)(v68 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v68 + 32)) < *(_QWORD *)(v75 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v75 + 16)) )
                {
                  v75 = *(_QWORD *)(v75 + 8);
                  if ( v75 == v74 )
                    goto LABEL_128;
                }
                *(_QWORD *)(v68 + 16) = *(_QWORD *)v75;
                *(_QWORD *)(*(_QWORD *)v75 + 8LL) = v68 + 16;
                *(_QWORD *)v75 = v68 + 16;
                *(_DWORD *)(v68 + 48) |= 1u;
                *(_QWORD *)(v68 + 24) = v75;
              }
            }
            else
            {
              *(_DWORD *)(v68 + 48) &= ~1u;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( StorEtwLoggingEnabled )
            {
              v95[0] = 0LL;
              v95[1] = 0LL;
              IoGetActivityIdIrp(v62, v95);
              if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
                McTemplateK0qcq(v79, v78, (unsigned int)v95, v80, 3);
            }
            if ( *(char *)(a1 + 153) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
            {
              v81 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1532));
              if ( !*(_BYTE *)(a1 + 2652) )
              {
                if ( v81 == 1 )
                {
                  v82 = 2000;
                  v83 = 300;
                  if ( *(_BYTE *)(a1 + 2624) )
                  {
                    v82 = 500;
                    v83 = 50;
                    v84 = 1;
                  }
                  else
                  {
                    v84 = 4;
                  }
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &v94);
                  if ( (*(_BYTE *)(a1 + 153) & 0x20) != 0 )
                  {
                    KeSetCoalescableTimer(
                      (PKTIMER)(a1 + 696),
                      (LARGE_INTEGER)(-10000LL * v82),
                      v82,
                      v83,
                      (PKDPC)(a1 + 760));
                    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) = v84;
                    *(_BYTE *)(a1 + 153) &= ~0x20u;
                  }
                  KeReleaseInStackQueuedSpinLock(&v94);
                }
                return 0LL;
              }
            }
            else if ( !*(_BYTE *)(a1 + 2652) )
            {
              return 0LL;
            }
            LOBYTE(v78) = 1;
            RaidUnitReenablePendingTimer(a1, v78);
            *(_BYTE *)(a1 + 2652) = 0;
            return 0LL;
          }
          UnbiasedInterruptTime = 0LL;
          *(_QWORD *)(v31 + 24) = 0LL;
LABEL_56:
          v25 = v87;
          goto LABEL_57;
        }
LABEL_95:
        UnbiasedInterruptTime = 0LL;
        goto LABEL_56;
      }
    }
    v51 = v33[13];
    v52 = 32;
    v53 = v33[23];
    if ( *(_BYTE *)(v5 + 64) )
      v52 = 16;
    UnbiasedInterruptTime = 0LL;
    if ( (*(_BYTE *)(v51 + 10) & 5) != 0 )
    {
      v54 = *(char **)(v51 + 24);
    }
    else
    {
      v54 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v51, 0, MmCached, 0LL, 0, v52 | 0x40000000);
      v33 = v90;
    }
    if ( v54 )
    {
      v55 = v53 ? v53 - *(unsigned int *)(v51 + 44) - *(_QWORD *)(v51 + 32) : 0LL;
      v56 = &v54[v55];
      v21 = *(_BYTE *)(v31 + 2) == 40;
      v89 = v56;
      if ( v21 )
        *(_QWORD *)(v31 + 64) = v56;
      else
        *(_QWORD *)(v31 + 24) = v56;
      v57 = v33[17];
      if ( !v57 )
        goto LABEL_56;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v57, v33[24], v52, &v89);
      if ( SystemAddressForMdl >= 0 )
      {
        v59 = RaidSrbExGetBidirectionalData(v31);
        *(_QWORD *)(v59 + 16) = v89;
      }
      if ( SystemAddressForMdl != -1073741670 )
        goto LABEL_56;
    }
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      if ( !v85 )
      {
        *(_DWORD *)(v91 + 44) = -1073741670;
LABEL_92:
        v60 = *(struct _MDL **)(v4 + 136);
        if ( v60 )
        {
          MmUnlockPages(v60);
          IoFreeMdl(*(PMDL *)(v4 + 136));
          *(_QWORD *)(v4 + 136) = 0LL;
        }
        return 3221225626LL;
      }
    }
    else if ( !v85 )
    {
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(v4 + 176);
      goto LABEL_91;
    }
    v11 = v95[0];
    *(_QWORD *)(*(_QWORD *)(v88 + 184) + 8LL) = v95[0];
LABEL_91:
    *(_DWORD *)(v11 + 64) = -1073741670;
    goto LABEL_92;
  }
  v12 = v11 + *(unsigned int *)(v11 + 52);
  v91 = v11;
  v7 = v11;
  *(_WORD *)v12 = 1;
  *(_DWORD *)(v12 + 4) = 4;
  *(_BYTE *)(v12 + 8) = *(_BYTE *)(a1 + 88);
  *(_BYTE *)(v12 + 9) = *(_BYTE *)(a1 + 89);
  *(_BYTE *)(v12 + 10) = *(_BYTE *)(a1 + 90);
  v13 = *(_QWORD *)(v11 + 80);
  v14 = *(_QWORD *)(v11 + 64);
  GetSrbScsiData(v11, 0, 0, 0, 0LL, (__int64)v86);
  v15 = RaidSrbExGetBidirectionalData(v11);
  if ( !v15 || (v16 = *(_QWORD *)(v15 + 16)) == 0 )
  {
LABEL_12:
    v5 = v88;
    goto LABEL_13;
  }
  v17 = 0;
  v18 = *(_DWORD *)(*(_QWORD *)(v88 + 184) + 24LL);
  if ( v18 == 315412 || v18 == 315464 )
    v17 = 1;
  v9 = *(_QWORD *)(v15 + 16);
  if ( v17 )
    v19 = *(unsigned __int8 *)(v88 + 64);
  else
    v19 = 0LL;
  result = StorpDataInBufferAllocateMdlAndLockPages(&v92, *(unsigned int *)(v15 + 8), v16, v19);
  if ( (int)result >= 0 )
  {
    v10 = v92;
    goto LABEL_12;
  }
  return result;
}
