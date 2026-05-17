/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x180040530
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegFree @ 0x1800481C0 (RtlpHpSegFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180049050 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpScheduleCompaction @ 0x18004911C (RtlpHpScheduleCompaction.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1800497B8 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x18004A2A4 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpSegLfhVsFree @ 0x18004AC30 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C96C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006E210 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x180080DA8 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v6; // rdi
  signed __int64 v8; // r15
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned __int64 v13; // r10
  int v14; // edx
  unsigned __int16 v15; // cx
  unsigned __int64 v16; // r9
  char v17; // cl
  int v18; // r11d
  __int64 v19; // r8
  __int64 v20; // r10
  char *v21; // r9
  int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rbx
  char *v25; // rcx
  int v26; // r14d
  int v27; // esi
  unsigned __int16 v28; // dx
  char v30; // cl
  signed __int64 v31; // rbx
  volatile signed __int64 *v32; // r12
  BOOL v33; // r12d
  int v34; // r14d
  BOOL v35; // r13d
  _QWORD *v36; // r8
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rsi
  int v40; // edx
  signed __int64 v41; // r10
  _QWORD *v42; // r8
  __int64 *v43; // r9
  _QWORD *v44; // r11
  __int64 v45; // rcx
  _QWORD *v46; // rax
  volatile signed __int64 *v47; // rcx
  signed __int64 v48; // rax
  unsigned __int64 v49; // rdx
  volatile signed __int64 *v50; // rbx
  char v51; // r8
  int v52; // r8d
  int v53; // eax
  unsigned int v54; // r14d
  char v55; // r13
  BOOL v56; // r12d
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  int v59; // r13d
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  char v63; // cl
  unsigned int v64; // r12d
  void (__fastcall *v65)(__int64, __int64, _QWORD); // rax
  unsigned int v66; // r14d
  __int64 v67; // rcx
  __int64 v68; // rdx
  char v69; // cl
  __int64 v70; // r10
  char *v71; // r9
  char *i; // rcx
  __int64 *v73; // rax
  __int64 v74; // rdx
  int EmptyUnits; // esi
  __int64 v76; // r8
  unsigned int v77; // ebx
  char v78; // si
  volatile signed __int64 *v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  void (__fastcall *v82)(__int64, __int64, _QWORD, BOOL); // rax
  char v83; // cl
  unsigned int v84; // r14d
  void (__fastcall *v85)(__int64, __int64, _QWORD); // rax
  unsigned int v86; // ebx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  signed __int64 v91; // r8
  signed __int64 v92; // rdx
  signed __int64 v93; // rtt
  bool v94; // zf
  signed __int64 v95; // rax
  unsigned __int16 v96; // [rsp+30h] [rbp-68h]
  _DWORD v97[3]; // [rsp+34h] [rbp-64h] BYREF
  signed __int64 v98; // [rsp+40h] [rbp-58h]
  _WORD *v99; // [rsp+48h] [rbp-50h]
  int v101; // [rsp+A8h] [rbp+10h]
  unsigned int v102; // [rsp+B0h] [rbp+18h] BYREF
  int v103; // [rsp+B8h] [rbp+20h]

  v103 = a4;
  v4 = 0;
  v5 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v6 = a2;
  v96 = v5;
  v8 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v9 = (unsigned __int16)v5;
  v10 = *(_QWORD *)(a1
                  + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v5 + 15) >> 4]
                  + 208);
  v11 = a3 - HIWORD(v5) - a2;
  v12 = *(_DWORD *)(v10 + 72);
  if ( v12 )
  {
    v13 = (v11 * (unsigned __int64)v12) >> *(_BYTE *)(v10 + 76);
    v14 = v11 - v13 * v9;
  }
  else
  {
    v30 = *(_BYTE *)(v10 + 76);
    LODWORD(v13) = v11 >> v30;
    v14 = v11 & ((1 << v30) - 1);
  }
  if ( !v14 )
  {
    v15 = *(_WORD *)(v6 + 36);
    if ( v15 >= (unsigned __int16)v13 )
      v15 = v13;
    *(_WORD *)(v6 + 36) = v15;
    v16 = v6 + 8 * ((unsigned __int64)(unsigned int)(2 * v13) >> 6);
    _m_prefetchw((const void *)(v16 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v16 + 48), ~(3LL << ((2 * v13) & 0x3F))) >> ((2 * v13) & 0x3F)) & 1) != 0 )
    {
      if ( *(_BYTE *)(v6 + 45) <= 1u )
        goto LABEL_13;
      v17 = *(_BYTE *)(v6 + 44);
      v18 = a3 - v6;
      v19 = (unsigned int)(a3 - v6) >> v17;
      v20 = 2 * v19;
      v21 = (char *)(2 * v19 + v6 + *(unsigned __int16 *)(v6 + 46));
      _m_prefetchw(v21);
      v22 = 0;
      v23 = v9 + v18 - 1;
      LODWORD(v24) = -1;
      v25 = &v21[2 * ((v23 >> v17) - (unsigned int)v19) + 2];
      if ( v21 >= v25 )
        goto LABEL_13;
      do
      {
        if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v21, 0xFFFFu) == 1 )
        {
          ++v22;
          if ( (_DWORD)v24 == -1 )
            v24 = v20 >> 1;
        }
        v21 += 2;
        v20 += 2LL;
      }
      while ( v21 < v25 );
      if ( (_DWORD)v24 == -1 )
        goto LABEL_13;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 24LL),
        (unsigned __int64)(unsigned int)(v22 << *(_BYTE *)(v6 + 44)) >> 12);
      v101 = 0;
      v33 = (int)v24 < 0;
      v34 = 0;
      v35 = v24 == -2;
      if ( (int)v24 < 0 )
      {
        LODWORD(v24) = 1;
      }
      else if ( !(_DWORD)v24 )
      {
        goto LABEL_13;
      }
      if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v33 )
      {
        v36 = *(_QWORD **)(*(_QWORD *)a1 + 72LL);
        v37 = v36[1] >> *(_BYTE *)(*(_QWORD *)a1 + 11LL);
        if ( v37 <= 8 )
          v37 = 8LL;
        v38 = v36[1] >> *(_BYTE *)(*(_QWORD *)a1 + 12LL);
        if ( v38 <= 8 )
          v38 = 8LL;
        v39 = v36[3] + v36[2];
        if ( (v39 <= v37 || (int)RtlpHpScheduleCompaction() >= 0) && v39 <= v38 )
          goto LABEL_13;
        v34 = 0;
      }
      if ( (unsigned int)v24 < *(unsigned __int8 *)(v6 + 45) )
      {
        while ( 1 )
        {
          EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(v6, (unsigned int)v24, &v102);
          if ( EmptyUnits == -1 )
          {
LABEL_97:
            v78 = v103;
LABEL_98:
            v8 = 0LL;
            if ( v34 )
            {
              if ( !v35 )
              {
                v79 = (volatile signed __int64 *)(v6 + 24);
                if ( v34 == 2 )
                  RtlReleaseSRWLockExclusive(v79);
                else
                  RtlReleaseSRWLockShared(v79, v74, v76);
              }
              if ( (v78 & 1) == 0 )
                RtlReleaseSRWLockShared(a1 + 72, v74, v76);
            }
            break;
          }
          v77 = v102;
          if ( v102 >= 2 )
          {
            if ( !v34 )
            {
              LODWORD(v24) = EmptyUnits;
              v78 = v103;
              if ( (v103 & 1) == 0 )
                RtlAcquireSRWLockShared(a1 + 72);
              v34 = 2;
              v101 = 2;
              if ( !v35 )
                RtlAcquireSRWLockExclusive(v6 + 24);
              goto LABEL_114;
            }
            v83 = *(_BYTE *)(v6 + 44);
            v84 = EmptyUnits << v83;
            v85 = (void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 32));
            v86 = v102 << v83;
            v87 = *(_QWORD *)a1;
            v88 = v6 + v84;
            if ( (char *)v85 == (char *)RtlpHpSegLfhVsDecommit )
              RtlpHpSegLfhVsDecommit(v87, v88, v86);
            else
              v85(v87, v88, v86);
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 24LL),
              -(__int64)((unsigned __int64)v86 >> 12));
            RtlpHpLfhSubsegmentDecBlockCounts(v6, v84, v86, 1, 0LL);
            v34 = v101;
            if ( !v33 )
              goto LABEL_97;
            v77 = v102;
          }
          else if ( !v33 )
          {
            goto LABEL_97;
          }
          LODWORD(v24) = EmptyUnits + v77;
          v78 = v103;
LABEL_114:
          if ( (unsigned int)v24 >= *(unsigned __int8 *)(v6 + 45) )
            goto LABEL_98;
        }
      }
LABEL_13:
      v26 = *(unsigned __int16 *)(v6 + 34);
      LOWORD(v27) = *(_WORD *)(v6 + 32);
      while ( v8 || (_WORD)v27 && (unsigned __int16)v27 != v26 - 1 )
      {
LABEL_17:
        v28 = v27 + 1;
        v27 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 32), v27 + 1, v27);
        if ( v28 == v27 + 1 )
        {
          if ( (_WORD)v27 )
          {
            if ( (unsigned __int16)v27 != v26 - 1 )
              goto LABEL_20;
            v40 = 2;
          }
          else
          {
            v40 = 0;
          }
          switch ( *(_BYTE *)(v6 + 38) )
          {
            case 0:
              v41 = v8 + 24;
              v42 = (_QWORD *)(v8 + 8);
              goto LABEL_47;
            case 1:
              v41 = v8 + 40;
              v42 = 0LL;
              goto LABEL_47;
            case 2:
              v41 = 0LL;
              v42 = 0LL;
LABEL_47:
              if ( v40 )
              {
                v43 = 0LL;
                v44 = 0LL;
              }
              else
              {
                v43 = (__int64 *)(v8 + 24);
                v44 = (_QWORD *)(v8 + 8);
              }
              if ( v41 )
              {
                v45 = *(_QWORD *)v6;
                if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v46 = *(_QWORD **)(v6 + 8), *v46 != v6) )
                  __fastfail(3u);
                *v46 = v45;
                *(_QWORD *)(v45 + 8) = v46;
                if ( v42 )
                  --*v42;
              }
              *(_BYTE *)(v6 + 38) = v40;
              if ( v43 )
              {
                v73 = (__int64 *)v43[1];
                if ( (__int64 *)*v73 != v43 )
                  __fastfail(3u);
                *(_QWORD *)v6 = v43;
                *(_QWORD *)(v6 + 8) = v73;
                *v73 = v6;
                v43[1] = v6;
                if ( v44 )
                  ++*v44;
                v6 = 0LL;
              }
              if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
              {
                v6 = *v43;
                if ( *(__int64 **)(*v43 + 8) != v43 || (v89 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
                  __fastfail(3u);
                *v43 = v89;
                *(_QWORD *)(v89 + 8) = v43;
                --*v44;
                *(_BYTE *)(v6 + 38) = 2;
              }
              if ( v6 && *(_BYTE *)(v6 + 38) == 2 )
                *(_QWORD *)(v6 + 16) = 0LL;
              break;
          }
          v47 = (volatile signed __int64 *)(v8 + 16);
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 1LL);
          if ( v48 != 1 )
          {
            do
            {
              v90 = 3LL;
              v91 = v48 & 6;
              if ( v91 != 2 )
                v90 = -1LL;
              v92 = v48 + v90;
              v93 = v48;
              v48 = _InterlockedCompareExchange64(v47, v92, v48);
            }
            while ( v93 != v48 );
            if ( v91 == 2 )
              RtlpWakeSRWLock(v47, v92, 0LL);
          }
          v98 = 0LL;
          v8 = 0LL;
          if ( v6 )
          {
            v49 = a1;
            v50 = *(volatile signed __int64 **)(a1
                                              + 8LL
                                              * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v96 + 15) >> 4]
                                              + 208);
            if ( *(_WORD *)(v6 + 32) != *(_WORD *)(v6 + 34) )
            {
              RtlAcquireSRWLockExclusive(v50 + 2);
              RtlpHpLfhSubsegmentSetOwner(v6, v50);
              if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
                *(_QWORD *)(v6 + 16) = 0LL;
              else
                v6 = RtlpHpLfhOwnerMoveSubsegment(v50, v6, 0LL);
              RtlReleaseSRWLockExclusive(v50 + 2);
              v49 = a1;
            }
            if ( v6 )
            {
              v51 = v103;
              _InterlockedDecrement64(v50 + 8);
              v52 = 2 * (v51 & 1);
              v53 = -*(__int16 *)(v6 + 34);
              v103 = v52;
              _InterlockedExchangeAdd64(v50 + 7, v53);
              v54 = *(unsigned __int8 *)(v6 + 45);
              v55 = *(_BYTE *)(v6 + 44);
              v56 = v52 != 0;
              v57 = v54 << v55;
              _BitScanForward((unsigned int *)&v53, v54 << v55);
              v97[1] = v53 - 12;
              v99 = (_WORD *)(v49 + 16 * ((unsigned int)(v53 - 12) + 6LL));
              if ( *v99 )
              {
                v80 = RtlpHpLfhSubsegmentCountEmptyUnits(v6);
                if ( v80 && (unsigned __int8)v54 > 1u )
                  _InterlockedExchangeAdd64(
                    (volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 24LL),
                    -(__int64)((unsigned __int64)(unsigned int)(v80 << v55) >> 12));
                v81 = *(_QWORD *)a1;
                v82 = (void (__fastcall *)(__int64, __int64, _QWORD, BOOL))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16));
                if ( (char *)v82 == (char *)RtlpHpSegLfhVsFree )
                  RtlpHpSegLfhVsFree(v81, v6, v57, v56);
                else
                  v82(v81, v6, v57, v56);
              }
              else
              {
                v58 = 1;
                if ( v54 > 1 )
                {
                  v59 = v52;
                  do
                  {
                    v60 = RtlpHpLfhSubsegmentFindEmptyUnits(v6, v58, v97);
                    v58 = v60;
                    if ( v60 == -1 )
                      break;
                    if ( v97[0] )
                    {
                      if ( v4 )
                      {
                        v63 = *(_BYTE *)(v6 + 44);
                        v64 = v60 << v63;
                        v65 = (void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 32));
                        v66 = v97[0] << v63;
                        v67 = *(_QWORD *)a1;
                        v68 = v6 + v64;
                        if ( (char *)v65 == (char *)RtlpHpSegLfhVsDecommit )
                          RtlpHpSegLfhVsDecommit(v67, v68, v66);
                        else
                          v65(v67, v68, v66);
                        _InterlockedExchangeAdd64(
                          (volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 24LL),
                          -(__int64)((unsigned __int64)v66 >> 12));
                        v69 = *(_BYTE *)(v6 + 44);
                        v62 = v64 >> v69;
                        v70 = 2 * v62;
                        v71 = (char *)(2 * v62 + v6 + *(unsigned __int16 *)(v6 + 46));
                        _m_prefetchw(v71);
                        v61 = 0xFFFFFFFFLL;
                        for ( i = &v71[2 * (((v66 + v64 - 1) >> v69) - (unsigned int)v62) + 2]; v71 < i; v70 += 2LL )
                        {
                          if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v71, 0xFFFFu) == 1
                            && (_DWORD)v61 == -1 )
                          {
                            v61 = v70 >> 1;
                          }
                          v71 += 2;
                        }
                        v58 += v97[0];
                      }
                      else
                      {
                        if ( !v59 )
                          RtlAcquireSRWLockShared(a1 + 72);
                        v4 = 2;
                      }
                    }
                  }
                  while ( v58 < *(unsigned __int8 *)(v6 + 45) );
                  if ( v4 && !v59 )
                    RtlReleaseSRWLockShared(a1 + 72, v61, v62);
                }
                RtlpInterlockedPushEntrySList(v99, v6);
                v8 = v98;
              }
            }
          }
          goto LABEL_20;
        }
      }
      v31 = *(_QWORD *)(v6 + 16);
      do
      {
        while ( 1 )
        {
          while ( !v31 )
          {
            v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 3LL, 0LL);
            if ( !v31 )
            {
              v8 = 0LL;
              goto LABEL_20;
            }
          }
          if ( (v31 & 1) != 0 )
            break;
          v32 = (volatile signed __int64 *)(v31 + 16);
          v8 = v31;
          RtlAcquireSRWLockExclusive(v31 + 16);
          v31 = *(_QWORD *)(v6 + 16);
          if ( v8 == v31 )
            goto LABEL_30;
          RtlReleaseSRWLockExclusive(v32);
        }
        v95 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v6 + 16),
                v31 & 1 | (v31 + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                v31);
        v94 = v31 == v95;
        v31 = v95;
      }
      while ( !v94 );
      v8 = 0LL;
LABEL_30:
      if ( v8 )
        goto LABEL_17;
LABEL_20:
      v4 = 1;
      if ( v8 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 16));
    }
    else
    {
      RtlpLogHeapFailure(16, *(_QWORD *)a1, a3, v6, (unsigned int)v13, 0LL);
    }
  }
  return v4;
}
