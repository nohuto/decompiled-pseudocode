/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0009E80
 * Callers:
 *     RaUnitStartIo @ 0x1C0009A00 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaidUnitReenablePendingTimer @ 0x1C0035DA4 (RaidUnitReenablePendingTimer.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0037B48 (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C0038100 (TranslateToExtendedSrb.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0039830 (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0qcq @ 0x1C003A190 (McTemplateK0qcq.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C003E538 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONGLONG UnbiasedInterruptTime; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  char v13; // r11
  char *v14; // r9
  __int64 v15; // r13
  unsigned int v16; // r10d
  unsigned int v17; // r9d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  bool v22; // zf
  int v23; // eax
  __int64 v24; // r10
  char v25; // al
  char v26; // dl
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // ecx
  __int64 v30; // r8
  char v31; // r13
  __int64 v32; // r14
  unsigned __int8 v33; // al
  __int64 v34; // rcx
  unsigned int v35; // edx
  int v36; // r9d
  __int64 v37; // r15
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // r10
  __int64 v42; // r11
  int v43; // ecx
  char *v44; // rcx
  int v45; // eax
  char v46; // al
  __int64 v47; // rdx
  unsigned __int8 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  unsigned int v51; // r10d
  __int64 v52; // rcx
  unsigned __int64 v53; // r11
  __int64 v54; // rsi
  int v55; // ecx
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rax
  unsigned int v59; // r14d
  __int64 v60; // rax
  __int64 v61; // rbx
  _DWORD *v62; // r15
  USHORT CurrentNodeNumber; // ax
  __int64 v64; // rsi
  int v65; // r14d
  _QWORD *v66; // rax
  __int64 v67; // rdx
  int v68; // ecx
  int v69; // r9d
  __int64 result; // rax
  char v71; // al
  unsigned __int8 v72; // cl
  __int64 v73; // rax
  unsigned int v74; // r8d
  signed __int32 v75; // eax
  ULONG v76; // esi
  ULONG v77; // ebp
  int v78; // r14d
  __int64 v79; // r13
  unsigned int v80; // edx
  __int64 v81; // r15
  char *v82; // rax
  __int64 v83; // r15
  char *v84; // rax
  __int64 v85; // rcx
  int v86; // ecx
  __int64 v87; // rcx
  unsigned __int64 v88; // r10
  __int64 v89; // rdx
  __int64 v90; // r8
  char v91; // r9
  int v92; // ecx
  __int64 v93; // r9
  __int64 v94; // rax
  int v95; // ecx
  unsigned int v96; // esi
  unsigned int v97; // r8d
  __int64 v98; // rcx
  unsigned __int64 v99; // r10
  int SystemAddressForMdl; // eax
  int v101; // r15d
  __int64 BidirectionalData; // rax
  struct _MDL *v103; // rcx
  int v104; // ecx
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rcx
  _QWORD *v108; // rax
  unsigned __int8 v109; // [rsp+30h] [rbp-C8h]
  char v110; // [rsp+32h] [rbp-C6h]
  char *v111; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v112; // [rsp+40h] [rbp-B8h]
  unsigned int v113; // [rsp+48h] [rbp-B0h]
  __int64 v114; // [rsp+50h] [rbp-A8h]
  __int64 v115; // [rsp+58h] [rbp-A0h]
  __int64 v116; // [rsp+60h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v118; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v119[2]; // [rsp+98h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  UnbiasedInterruptTime = 0LL;
  v112 = a4;
  v109 = 0;
  v8 = *(_QWORD *)(a2 + 184);
  v9 = 0LL;
  v115 = 0LL;
  v10 = 0LL;
  v110 = 0;
  v119[0] = 0LL;
  v11 = *(_QWORD *)(v8 + 8);
  v116 = 0LL;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v14 = *(char **)(v11 + 24);
    v15 = *(_QWORD *)(v11 + 48);
    *(_BYTE *)(v11 + 6) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v11 + 5) = *(_BYTE *)(a1 + 88);
    v71 = *(_BYTE *)(a1 + 90);
    v72 = *(_BYTE *)(v11 + 11);
    *(_BYTE *)(v11 + 7) = v71;
    v73 = *(_QWORD *)(a1 + 24);
    v111 = v14;
    v109 = v72;
    if ( *(_BYTE *)(v73 + 402) == 1 )
    {
      v93 = *(_QWORD *)(v4 + 760);
      if ( !v93 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        result = 3221225626LL;
        *(_DWORD *)(v11 + 64) = -1073741670;
        return result;
      }
      result = TranslateToExtendedSrb(
                 v93,
                 v11,
                 *(_DWORD *)(v4 + 744),
                 v93,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v73 + 528) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        *(_DWORD *)(v11 + 64) = result;
        return result;
      }
      v94 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      *(_QWORD *)(v4 + 752) = v11;
      v119[0] = v11;
      v11 = v94;
      v115 = v94;
      v110 = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v94;
LABEL_149:
      v14 = v111;
    }
LABEL_13:
    v22 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v4 + 160) = a2;
    *(_QWORD *)(v4 + 168) = v11;
    *(_QWORD *)(v4 + 224) = a1;
    *(_QWORD *)(v4 + 104) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v4 + 136) = v10;
    if ( !v22 )
    {
      IoGetActivityIdIrp(a2, v4 + 728);
      v14 = v111;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
    {
      if ( *(_BYTE *)(v11 + 2) == 40 )
        v23 = *(_DWORD *)(v115 + 96);
      else
        v23 = *(_DWORD *)(v11 + 56);
      *(_DWORD *)(v4 + 18) = v23;
    }
    else
    {
      *(_BYTE *)(v4 + 20) = -1;
      *(_WORD *)(v4 + 18) = -1;
    }
    v24 = v112;
    v25 = *(_BYTE *)(v4 + 16) & 0xE3 | 4;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_BYTE *)(v4 + 16) = v25;
    *(_QWORD *)(v4 + 176) = v15;
    *(_QWORD *)(v4 + 184) = v14;
    *(_QWORD *)(v4 + 192) = v9;
    v26 = *(_BYTE *)(v11 + 2);
    if ( v26 == 40 )
    {
      v27 = v115;
      *(_QWORD *)(v115 + 96) = v4;
      *(_DWORD *)(v27 + 32) = *(_DWORD *)v24;
      v26 = *(_BYTE *)(v11 + 2);
    }
    else
    {
      *(_QWORD *)(v11 + 48) = v4;
      *(_BYTE *)(v11 + 8) = *(_BYTE *)v24;
    }
    v28 = *(_QWORD *)(v24 + 8);
    v29 = (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8;
    if ( v26 == 40 )
    {
      if ( v29 )
        *(_QWORD *)(v11 + 104) = v28;
    }
    else if ( v29 )
    {
      *(_QWORD *)(v11 + 56) = v28;
    }
    v30 = *(_QWORD *)(a1 + 24);
    v31 = 0;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_50;
    v32 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v33 = *(_BYTE *)(v32 + 2);
    if ( v33 != 40 )
    {
      v34 = *(_QWORD *)(v32 + 48);
      v36 = *(_DWORD *)(v32 + 12);
      v37 = *(_QWORD *)(v32 + 24);
      v114 = v34;
      v35 = v33;
      if ( !v33 )
        v31 = *(_BYTE *)(v32 + 72);
      goto LABEL_37;
    }
    v34 = *(_QWORD *)(v32 + 96);
    v35 = *(_DWORD *)(v32 + 20);
    v36 = *(_DWORD *)(v32 + 24);
    v37 = *(_QWORD *)(v32 + 64);
    v114 = v34;
    if ( v35 )
      goto LABEL_37;
    v38 = *(_DWORD *)(v32 + 56);
    v39 = 0LL;
    v113 = 0;
    LODWORD(v111) = v38;
    if ( !v38 )
      goto LABEL_36;
    while ( 1 )
    {
      v40 = *(unsigned int *)(v32 + 4 * v39 + 120);
      if ( (unsigned int)v40 < 0x80 )
        goto LABEL_164;
      v41 = *(unsigned int *)(v32 + 16);
      if ( (unsigned int)v40 > (unsigned int)v41 )
        goto LABEL_164;
      v42 = (unsigned int)v40;
      v43 = *(_DWORD *)(v32 + v40);
      if ( v43 == 64 )
      {
        if ( v42 + 40 <= v41 )
        {
          if ( !*(_BYTE *)(v32 + v42 + 10) )
            goto LABEL_36;
LABEL_33:
          v44 = (char *)(v42 + v32 + 24);
          goto LABEL_34;
        }
        goto LABEL_164;
      }
      v95 = v43 - 65;
      if ( v95 )
        break;
      if ( v42 + 56 <= v41 )
      {
        if ( !*(_BYTE *)(v32 + v42 + 10) )
          goto LABEL_36;
        goto LABEL_33;
      }
LABEL_164:
      v39 = v113 + 1;
      v113 = v39;
      if ( (unsigned int)v39 >= (unsigned int)v111 )
        goto LABEL_36;
    }
    if ( v95 != 1 || v42 + 40 > v41 )
      goto LABEL_164;
    v44 = (char *)(v42 + v32 + 32);
    if ( !*(_DWORD *)(v32 + v42 + 12) )
      v44 = 0LL;
LABEL_34:
    if ( v44 )
      v31 = *v44;
LABEL_36:
    v34 = v114;
LABEL_37:
    if ( (v36 & 0xC0) == 0 || !v37 && !*(_QWORD *)(v34 + 104) )
    {
LABEL_97:
      v24 = v112;
      goto LABEL_50;
    }
    if ( v35 > 0x17 || (v45 = 8389124, !_bittest(&v45, v35)) )
    {
      v46 = *(_BYTE *)(v30 + 393);
      if ( v46 != 3 && ((unsigned __int8)(v46 - 1) > 1u || !v35 && ((v31 - 8) & 0x5D) == 0) )
      {
        if ( !*(_BYTE *)(v30 + 4450) )
          goto LABEL_97;
        if ( *(_BYTE *)(v32 + 2) != 40 )
        {
          *(_QWORD *)(v32 + 24) = 0LL;
          goto LABEL_97;
        }
        v47 = 0LL;
        if ( (*(_BYTE *)(v32 + 24) & 0xC0) == 0xC0 )
        {
          v96 = *(_DWORD *)(v32 + 56);
          v97 = 0;
          if ( v96 )
          {
            while ( 1 )
            {
              v98 = *(unsigned int *)(v32 + 4LL * v97 + 120);
              if ( (unsigned int)v98 >= 0x80 )
              {
                v99 = *(unsigned int *)(v32 + 16);
                if ( (unsigned int)v98 <= (unsigned int)v99
                  && *(_DWORD *)(v32 + v98) == 1
                  && (unsigned __int64)(unsigned int)v98 + 24 <= v99 )
                {
                  break;
                }
              }
              if ( ++v97 >= v96 )
                goto LABEL_48;
            }
            v47 = v32 + v98;
          }
        }
LABEL_48:
        v24 = v112;
        *(_QWORD *)(v32 + 64) = 0LL;
        if ( v47 )
          *(_QWORD *)(v47 + 16) = 0LL;
LABEL_50:
        if ( v109 > *(_BYTE *)(a1 + 1476) )
          v48 = v109;
        else
          v48 = *(_BYTE *)(a1 + 1476);
        v49 = *(_QWORD *)(v4 + 168);
        v50 = *(_QWORD *)(v24 + 24);
        if ( *(_BYTE *)(v49 + 2) == 40 )
        {
          if ( !*(_DWORD *)(v49 + 20) )
          {
            v51 = 0;
            if ( *(_DWORD *)(v49 + 56) )
            {
              while ( 1 )
              {
                v52 = *(unsigned int *)(v49 + 4LL * v51 + 120);
                if ( (unsigned int)v52 < 0x80 )
                  goto LABEL_61;
                v53 = *(unsigned int *)(v49 + 16);
                if ( (unsigned int)v52 > (unsigned int)v53 )
                  goto LABEL_61;
                v54 = (unsigned int)v52;
                v55 = *(_DWORD *)(v49 + v52);
                if ( v55 != 64 )
                  break;
                if ( v54 + 40 <= v53 )
                  goto LABEL_59;
LABEL_61:
                if ( ++v51 >= *(_DWORD *)(v49 + 56) )
                  goto LABEL_62;
              }
              v104 = v55 - 65;
              if ( v104 )
              {
                if ( v104 != 1 || v54 + 40 > v53 )
                  goto LABEL_61;
                *(_QWORD *)(v4 + 200) = *(_QWORD *)(v49 + v54 + 24);
                *(_BYTE *)(v4 + 208) = *(_BYTE *)(v49 + v54 + 9);
                *(_QWORD *)(v49 + v54 + 24) = v50;
              }
              else
              {
                if ( v54 + 56 > v53 )
                  goto LABEL_61;
LABEL_59:
                *(_QWORD *)(v4 + 200) = *(_QWORD *)(v49 + v54 + 16);
                *(_BYTE *)(v4 + 208) = *(_BYTE *)(v49 + v54 + 9);
                *(_QWORD *)(v49 + v54 + 16) = v50;
              }
              *(_BYTE *)(v49 + v54 + 9) = v48;
              *(_BYTE *)(v4 + 16) |= 0x20u;
              goto LABEL_61;
            }
          }
        }
        else
        {
          *(_QWORD *)(v4 + 200) = *(_QWORD *)(v49 + 32);
          *(_BYTE *)(v4 + 208) = *(_BYTE *)(v49 + 11);
          *(_QWORD *)(v49 + 32) = v50;
          *(_BYTE *)(v49 + 11) = v48;
          *(_BYTE *)(v4 + 16) |= 0x20u;
        }
LABEL_62:
        v56 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
        if ( *(_BYTE *)(v56 + 2) == 40 )
          v57 = *(_QWORD *)(v56 + 96);
        else
          v57 = *(_QWORD *)(v56 + 48);
        v58 = *(_QWORD *)(v57 + 168);
        if ( *(_BYTE *)(v58 + 2) == 40 )
          v59 = *(_DWORD *)(v58 + 40);
        else
          v59 = *(_DWORD *)(v58 + 20);
        if ( v59 <= 2 && !*(_BYTE *)(a1 + 2624) )
          v59 = 3;
        v60 = *(_QWORD *)(a1 + 24);
        if ( v60 && *(_QWORD *)(v60 + 5000) || (**(_DWORD **)(a1 + 208) & 1) != 0 )
          UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
        *(_BYTE *)(v57 + 16) |= 2u;
        v61 = v57 + 48;
        v62 = *(_DWORD **)(a1 + 208);
        CurrentNodeNumber = KeGetCurrentNodeNumber();
        v64 = (__int64)&v62[14 * CurrentNodeNumber + 16];
        if ( v59 - 1 > 0xFFFFFFFC )
          v59 = 10;
        v65 = 2 * v59;
        *(_QWORD *)(v61 + 40) = UnbiasedInterruptTime;
        *(_DWORD *)(v61 + 32) = v65;
        *(_DWORD *)(v61 + 36) = CurrentNodeNumber;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v64 + 40), &LockHandle);
        v66 = *(_QWORD **)(v64 + 8);
        if ( *v66 != v64 )
          __fastfail(3u);
        *(_QWORD *)v61 = v64;
        *(_QWORD *)(v61 + 8) = v66;
        *v66 = v61;
        *(_QWORD *)(v64 + 8) = v61;
        if ( *(_DWORD *)(v64 + 48) >= 0xFFFFFFFE )
          *(_DWORD *)(v64 + 48) = v65;
        if ( (*v62 & 1) != 0 )
        {
          v105 = *(_QWORD *)(v64 + 24);
          v106 = v64 + 16;
          if ( v105 == v106 )
          {
LABEL_200:
            v107 = *(_QWORD *)v106;
            v108 = (_QWORD *)(v61 + 16);
            if ( *(_QWORD *)(*(_QWORD *)v106 + 8LL) != v106 )
              __fastfail(3u);
            *v108 = v107;
            *(_QWORD *)(v61 + 24) = v106;
            *(_QWORD *)(v107 + 8) = v108;
            *(_QWORD *)v106 = v108;
          }
          else
          {
            while ( *(_QWORD *)(v61 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v61 + 32)) < *(_QWORD *)(v105 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v105 + 16)) )
            {
              v105 = *(_QWORD *)(v105 + 8);
              if ( v105 == v106 )
                goto LABEL_200;
            }
            *(_QWORD *)(v61 + 16) = *(_QWORD *)v105;
            *(_QWORD *)(*(_QWORD *)v105 + 8LL) = v61 + 16;
            *(_QWORD *)v105 = v61 + 16;
            *(_QWORD *)(v61 + 24) = v105;
          }
          *(_DWORD *)(v61 + 48) |= 1u;
        }
        else
        {
          *(_DWORD *)(v61 + 48) &= ~1u;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( StorEtwLoggingEnabled )
        {
          v119[0] = 0LL;
          v119[1] = 0LL;
          IoGetActivityIdIrp(a2, v119);
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
            McTemplateK0qcq(v68, v67, (unsigned int)v119, v69, 3);
        }
        if ( *(char *)(a1 + 153) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
        {
          v75 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1532));
          if ( !*(_BYTE *)(a1 + 2652) )
          {
            if ( v75 == 1 )
            {
              v76 = 2000;
              v77 = 300;
              if ( *(_BYTE *)(a1 + 2624) )
              {
                v77 = 50;
                v76 = 500;
                v78 = 1;
              }
              else
              {
                v78 = 4;
              }
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &v118);
              if ( (*(_BYTE *)(a1 + 153) & 0x20) != 0 )
              {
                KeSetCoalescableTimer((PKTIMER)(a1 + 696), (LARGE_INTEGER)(-10000LL * v76), v76, v77, (PKDPC)(a1 + 760));
                *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) = v78;
                *(_BYTE *)(a1 + 153) &= ~0x20u;
              }
              KeReleaseInStackQueuedSpinLock(&v118);
            }
            return 0LL;
          }
        }
        else if ( !*(_BYTE *)(a1 + 2652) )
        {
          return 0LL;
        }
        LOBYTE(v67) = 1;
        RaidUnitReenablePendingTimer(a1, v67);
        *(_BYTE *)(a1 + 2652) = 0;
        return 0LL;
      }
    }
    v79 = *(_QWORD *)(v34 + 104);
    v80 = 16;
    v81 = *(_QWORD *)(v34 + 184);
    if ( !*(_BYTE *)(a2 + 64) )
      v80 = 32;
    LODWORD(v111) = v80;
    if ( (*(_BYTE *)(v79 + 10) & 5) != 0 )
    {
      v82 = *(char **)(v79 + 24);
    }
    else
    {
      v82 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v79, 0, MmCached, 0LL, 0, v80 | 0x40000000);
      v80 = (unsigned int)v111;
    }
    if ( v82 )
    {
      v83 = v81 ? v81 - *(unsigned int *)(v79 + 44) - *(_QWORD *)(v79 + 32) : 0LL;
      v84 = &v82[v83];
      v22 = *(_BYTE *)(v32 + 2) == 40;
      v111 = v84;
      if ( v22 )
        *(_QWORD *)(v32 + 64) = v84;
      else
        *(_QWORD *)(v32 + 24) = v84;
      v85 = *(_QWORD *)(v114 + 136);
      if ( !v85 )
        goto LABEL_97;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v85, *(_QWORD *)(v114 + 192), v80, &v111);
      v101 = SystemAddressForMdl;
      if ( SystemAddressForMdl >= 0 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v32);
        *(_QWORD *)(BidirectionalData + 16) = v111;
      }
      if ( v101 != -1073741670 )
        goto LABEL_97;
    }
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      if ( !v110 )
      {
        *(_DWORD *)(v115 + 44) = -1073741670;
LABEL_184:
        v103 = *(struct _MDL **)(v4 + 136);
        if ( v103 )
        {
          MmUnlockPages(v103);
          IoFreeMdl(*(PMDL *)(v4 + 136));
          *(_QWORD *)(v4 + 136) = 0LL;
        }
        return 3221225626LL;
      }
    }
    else if ( !v110 )
    {
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(v4 + 176);
LABEL_183:
      *(_DWORD *)(v11 + 64) = -1073741670;
      goto LABEL_184;
    }
    v11 = v119[0];
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v119[0];
    goto LABEL_183;
  }
  v12 = v11 + *(unsigned int *)(v11 + 52);
  v115 = v11;
  *(_WORD *)v12 = 1;
  *(_DWORD *)(v12 + 4) = 4;
  *(_BYTE *)(v12 + 8) = *(_BYTE *)(a1 + 88);
  *(_BYTE *)(v12 + 9) = *(_BYTE *)(a1 + 89);
  *(_BYTE *)(v12 + 10) = *(_BYTE *)(a1 + 90);
  v13 = *(_BYTE *)(v11 + 2);
  v14 = *(char **)(v11 + 64);
  v15 = *(_QWORD *)(v11 + 80);
  v111 = v14;
  if ( v13 != 40 || *(_DWORD *)(v11 + 20) )
  {
    v109 = 0;
    goto LABEL_11;
  }
  v16 = *(_DWORD *)(v11 + 56);
  v17 = 0;
  if ( !v16 )
    goto LABEL_10;
  while ( 1 )
  {
    v18 = *(unsigned int *)(v11 + 4LL * v17 + 120);
    if ( (unsigned int)v18 < 0x80 )
      goto LABEL_131;
    v19 = *(unsigned int *)(v11 + 16);
    if ( (unsigned int)v18 > (unsigned int)v19 )
      goto LABEL_131;
    v20 = (unsigned int)v18;
    v21 = *(_DWORD *)(v18 + v11);
    if ( v21 == 64 )
    {
      if ( v20 + 40 <= v19 )
      {
        v109 = *(_BYTE *)(v20 + v11 + 9);
        goto LABEL_10;
      }
      goto LABEL_131;
    }
    v86 = v21 - 65;
    if ( v86 )
      break;
    if ( v20 + 56 <= v19 )
      goto LABEL_129;
LABEL_131:
    if ( ++v17 >= v16 )
      goto LABEL_10;
  }
  if ( v86 != 1 || v20 + 40 > v19 )
    goto LABEL_131;
LABEL_129:
  v109 = *(_BYTE *)(v20 + v11 + 9);
LABEL_10:
  v14 = v111;
LABEL_11:
  if ( v13 != 40 )
    goto LABEL_13;
  if ( (*(_BYTE *)(v11 + 24) & 0xC0) != 0xC0 )
    goto LABEL_13;
  v74 = 0;
  v113 = *(_DWORD *)(v11 + 56);
  if ( !v113 )
    goto LABEL_13;
  while ( 1 )
  {
    v87 = *(unsigned int *)(v11 + 4LL * v74 + 120);
    if ( (unsigned int)v87 >= 0x80 )
    {
      v88 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v87 <= (unsigned int)v88 )
      {
        v89 = v87 + v11;
        if ( *(_DWORD *)(v87 + v11) == 1 && v87 + 24 <= v88 )
          break;
      }
    }
    if ( ++v74 >= v113 )
      goto LABEL_13;
  }
  if ( !v89 )
    goto LABEL_13;
  v90 = *(_QWORD *)(v89 + 16);
  if ( !v90 )
    goto LABEL_13;
  v91 = 0;
  v92 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v92 == 315412 || v92 == 315464 )
    v91 = 1;
  v9 = *(_QWORD *)(v89 + 16);
  if ( v91 )
    v14 = (char *)*(unsigned __int8 *)(a2 + 64);
  else
    LOBYTE(v14) = 0;
  result = StorpDataInBufferAllocateMdlAndLockPages(&v116, *(unsigned int *)(v89 + 8), v90, v14);
  if ( (int)result >= 0 )
  {
    v10 = v116;
    goto LABEL_149;
  }
  return result;
}
