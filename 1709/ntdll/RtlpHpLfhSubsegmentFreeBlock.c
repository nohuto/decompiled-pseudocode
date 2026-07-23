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

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v6; // rdi
  signed __int64 v8; // r15
  int v9; // ebx
  unsigned __int64 Value; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned __int64 v13; // r10
  int v14; // edx
  unsigned __int16 v15; // cx
  char v16; // cl
  int v17; // r11d
  __int64 v18; // r8
  __int64 v19; // r10
  int v20; // edx
  unsigned int v21; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  int v24; // r14d
  int v25; // esi
  unsigned __int16 v26; // dx
  char v28; // cl
  signed __int64 v29; // rbx
  _RTL_SRWLOCK *v30; // r12
  BOOL v31; // r12d
  int v32; // r14d
  BOOL v33; // r13d
  _QWORD *v34; // r8
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rsi
  int v38; // edx
  signed __int64 v39; // r10
  _QWORD *v40; // r8
  _QWORD *v41; // r11
  __int64 v42; // rcx
  _QWORD *v43; // rax
  volatile signed __int64 *v44; // rcx
  signed __int64 v45; // rax
  _RTL_SRWLOCK *v46; // rdx
  _RTL_SRWLOCK *v47; // rbx
  char v48; // r8
  __int64 v49; // r8
  int v50; // eax
  unsigned int v51; // r14d
  char v52; // r13
  BOOL v53; // r12d
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  int v56; // r13d
  unsigned int v57; // eax
  char v58; // cl
  unsigned int v59; // r12d
  void (__fastcall *v60)(unsigned __int64, __int64, _QWORD); // rax
  unsigned int v61; // r14d
  unsigned __int64 v62; // rcx
  __int64 v63; // rdx
  char v64; // cl
  __int64 v65; // r10
  __int64 v66; // rdx
  unsigned __int64 i; // rcx
  __int64 *v68; // rax
  int EmptyUnits; // esi
  unsigned int v70; // ebx
  char v71; // si
  _RTL_SRWLOCK *v72; // rcx
  int v73; // eax
  unsigned __int64 v74; // rcx
  void (__fastcall *v75)(unsigned __int64, __int64, _QWORD, BOOL); // rax
  char v76; // cl
  unsigned int v77; // r14d
  void (__fastcall *v78)(unsigned __int64, __int64, _QWORD); // rax
  unsigned int v79; // ebx
  unsigned __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  signed __int64 v84; // r8
  signed __int64 v85; // rdx
  signed __int64 v86; // rtt
  bool v87; // zf
  signed __int64 v88; // rax
  unsigned __int16 v89; // [rsp+30h] [rbp-68h]
  _DWORD v90[3]; // [rsp+34h] [rbp-64h] BYREF
  signed __int64 v91; // [rsp+40h] [rbp-58h]
  _RTL_SRWLOCK *v92; // [rsp+48h] [rbp-50h]
  int v94; // [rsp+A8h] [rbp+10h]
  unsigned int v95; // [rsp+B0h] [rbp+18h] BYREF
  int v96; // [rsp+B8h] [rbp+20h]

  v96 = a4;
  v4 = 0;
  v5 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v6 = a2;
  v89 = v5;
  v8 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v9 = (unsigned __int16)v5;
  Value = a1[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v5 + 15) >> 4] + 26].Value;
  v11 = a3 - HIWORD(v5) - a2;
  v12 = *(_DWORD *)(Value + 72);
  if ( v12 )
  {
    v13 = (v11 * (unsigned __int64)v12) >> *(_BYTE *)(Value + 76);
    v14 = v11 - v13 * v9;
  }
  else
  {
    v28 = *(_BYTE *)(Value + 76);
    LODWORD(v13) = v11 >> v28;
    v14 = v11 & ((1 << v28) - 1);
  }
  if ( !v14 )
  {
    v15 = *(_WORD *)(v6 + 36);
    if ( v15 >= (unsigned __int16)v13 )
      v15 = v13;
    *(_WORD *)(v6 + 36) = v15;
    a4 = v6 + 8 * ((unsigned __int64)(unsigned int)(2 * v13) >> 6);
    _m_prefetchw((const void *)(a4 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(a4 + 48), ~(3LL << ((2 * v13) & 0x3F))) >> ((2 * v13) & 0x3F)) & 1) != 0 )
    {
      if ( *(_BYTE *)(v6 + 45) <= 1u )
        goto LABEL_13;
      v16 = *(_BYTE *)(v6 + 44);
      v17 = a3 - v6;
      v18 = (unsigned int)(a3 - v6) >> v16;
      v19 = 2 * v18;
      a4 = 2 * v18 + v6 + *(unsigned __int16 *)(v6 + 46);
      _m_prefetchw((const void *)a4);
      v20 = 0;
      v21 = v9 + v17 - 1;
      LODWORD(v22) = -1;
      v23 = a4 + 2LL * ((v21 >> v16) - (unsigned int)v18 + 1);
      if ( a4 >= v23 )
        goto LABEL_13;
      do
      {
        if ( _InterlockedExchangeAdd16((volatile signed __int16 *)a4, 0xFFFFu) == 1 )
        {
          ++v20;
          if ( (_DWORD)v22 == -1 )
            v22 = v19 >> 1;
        }
        a4 += 2LL;
        v19 += 2LL;
      }
      while ( a4 < v23 );
      if ( (_DWORD)v22 == -1 )
        goto LABEL_13;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(a1[8].Value + 24),
        (unsigned __int64)(unsigned int)(v20 << *(_BYTE *)(v6 + 44)) >> 12);
      v94 = 0;
      v31 = (int)v22 < 0;
      v32 = 0;
      v33 = v22 == -2;
      if ( (int)v22 < 0 )
      {
        LODWORD(v22) = 1;
      }
      else if ( !(_DWORD)v22 )
      {
        goto LABEL_13;
      }
      if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v31 )
      {
        a4 = 8LL;
        v34 = *(_QWORD **)(a1->Value + 72);
        v35 = v34[1] >> *(_BYTE *)(a1->Value + 11);
        if ( v35 <= 8 )
          v35 = 8LL;
        v36 = v34[1] >> *(_BYTE *)(a1->Value + 12);
        if ( v36 <= 8 )
          v36 = 8LL;
        v37 = v34[3] + v34[2];
        if ( (v37 <= v35 || (int)RtlpHpScheduleCompaction() >= 0) && v37 <= v36 )
          goto LABEL_13;
        v32 = 0;
      }
      if ( (unsigned int)v22 < *(unsigned __int8 *)(v6 + 45) )
      {
        while ( 1 )
        {
          EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(v6, (unsigned int)v22, &v95);
          if ( EmptyUnits == -1 )
          {
LABEL_97:
            v71 = v96;
LABEL_98:
            v8 = 0LL;
            if ( v32 )
            {
              if ( !v33 )
              {
                v72 = (_RTL_SRWLOCK *)(v6 + 24);
                if ( v32 == 2 )
                  RtlReleaseSRWLockExclusive(v72);
                else
                  RtlReleaseSRWLockShared(v72);
              }
              if ( (v71 & 1) == 0 )
                RtlReleaseSRWLockShared(a1 + 9);
            }
            break;
          }
          v70 = v95;
          if ( v95 >= 2 )
          {
            if ( !v32 )
            {
              LODWORD(v22) = EmptyUnits;
              v71 = v96;
              if ( (v96 & 1) == 0 )
                RtlAcquireSRWLockShared(a1 + 9);
              v32 = 2;
              v94 = 2;
              if ( !v33 )
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 24));
              goto LABEL_114;
            }
            v76 = *(_BYTE *)(v6 + 44);
            v77 = EmptyUnits << v76;
            v78 = (void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[4].Value);
            v79 = v95 << v76;
            v80 = a1->Value;
            v81 = v6 + v77;
            if ( (char *)v78 == (char *)RtlpHpSegLfhVsDecommit )
              RtlpHpSegLfhVsDecommit(v80, v81, v79);
            else
              v78(v80, v81, v79);
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(a1[8].Value + 24),
              -(__int64)((unsigned __int64)v79 >> 12));
            RtlpHpLfhSubsegmentDecBlockCounts(v6, v77, v79, 1, 0LL);
            v32 = v94;
            if ( !v31 )
              goto LABEL_97;
            v70 = v95;
          }
          else if ( !v31 )
          {
            goto LABEL_97;
          }
          LODWORD(v22) = EmptyUnits + v70;
          v71 = v96;
LABEL_114:
          if ( (unsigned int)v22 >= *(unsigned __int8 *)(v6 + 45) )
            goto LABEL_98;
        }
      }
LABEL_13:
      v24 = *(unsigned __int16 *)(v6 + 34);
      LOWORD(v25) = *(_WORD *)(v6 + 32);
      while ( v8 || (_WORD)v25 && (unsigned __int16)v25 != v24 - 1 )
      {
LABEL_17:
        v26 = v25 + 1;
        v25 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 32), v25 + 1, v25);
        if ( v26 == v25 + 1 )
        {
          if ( (_WORD)v25 )
          {
            if ( (unsigned __int16)v25 != v24 - 1 )
              goto LABEL_20;
            v38 = 2;
          }
          else
          {
            v38 = 0;
          }
          switch ( *(_BYTE *)(v6 + 38) )
          {
            case 0:
              v39 = v8 + 24;
              v40 = (_QWORD *)(v8 + 8);
              goto LABEL_47;
            case 1:
              v39 = v8 + 40;
              v40 = 0LL;
              goto LABEL_47;
            case 2:
              v39 = 0LL;
              v40 = 0LL;
LABEL_47:
              if ( v38 )
              {
                a4 = 0LL;
                v41 = 0LL;
              }
              else
              {
                a4 = v8 + 24;
                v41 = (_QWORD *)(v8 + 8);
              }
              if ( v39 )
              {
                v42 = *(_QWORD *)v6;
                if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v43 = *(_QWORD **)(v6 + 8), *v43 != v6) )
                  __fastfail(3u);
                *v43 = v42;
                *(_QWORD *)(v42 + 8) = v43;
                if ( v40 )
                  --*v40;
              }
              *(_BYTE *)(v6 + 38) = v38;
              if ( a4 )
              {
                v68 = *(__int64 **)(a4 + 8);
                if ( *v68 != a4 )
                  __fastfail(3u);
                *(_QWORD *)v6 = a4;
                *(_QWORD *)(v6 + 8) = v68;
                *v68 = v6;
                *(_QWORD *)(a4 + 8) = v6;
                if ( v41 )
                  ++*v41;
                v6 = 0LL;
              }
              if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
              {
                v6 = *(_QWORD *)a4;
                if ( *(_QWORD *)(*(_QWORD *)a4 + 8LL) != a4
                  || (v82 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
                {
                  __fastfail(3u);
                }
                *(_QWORD *)a4 = v82;
                *(_QWORD *)(v82 + 8) = a4;
                --*v41;
                *(_BYTE *)(v6 + 38) = 2;
              }
              if ( v6 && *(_BYTE *)(v6 + 38) == 2 )
                *(_QWORD *)(v6 + 16) = 0LL;
              break;
          }
          v44 = (volatile signed __int64 *)(v8 + 16);
          v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 1LL);
          if ( v45 != 1 )
          {
            do
            {
              v83 = 3LL;
              v84 = v45 & 6;
              if ( v84 != 2 )
                v83 = -1LL;
              v85 = v45 + v83;
              v86 = v45;
              v45 = _InterlockedCompareExchange64(v44, v85, v45);
            }
            while ( v86 != v45 );
            if ( v84 == 2 )
              RtlpWakeSRWLock(v44, v85, 0LL);
          }
          v91 = 0LL;
          v8 = 0LL;
          if ( v6 )
          {
            v46 = a1;
            v47 = (_RTL_SRWLOCK *)a1[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v89 + 15) >> 4] + 26].Value;
            if ( *(_WORD *)(v6 + 32) != *(_WORD *)(v6 + 34) )
            {
              RtlAcquireSRWLockExclusive(v47 + 2);
              RtlpHpLfhSubsegmentSetOwner(v6, v47);
              if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
                *(_QWORD *)(v6 + 16) = 0LL;
              else
                v6 = RtlpHpLfhOwnerMoveSubsegment(v47, v6, 0LL);
              RtlReleaseSRWLockExclusive(v47 + 2);
              v46 = a1;
            }
            if ( v6 )
            {
              v48 = v96;
              _InterlockedDecrement64((volatile signed __int64 *)&v47[8]);
              v49 = 2 * (v48 & 1u);
              v50 = -*(__int16 *)(v6 + 34);
              v96 = v49;
              _InterlockedExchangeAdd64((volatile signed __int64 *)&v47[7], v50);
              v51 = *(unsigned __int8 *)(v6 + 45);
              v52 = *(_BYTE *)(v6 + 44);
              v53 = v49 != 0;
              v54 = v51 << v52;
              _BitScanForward((unsigned int *)&v50, v51 << v52);
              v90[1] = v50 - 12;
              v92 = &v46[2 * (unsigned int)(v50 - 12) + 12];
              if ( v92->0 )
              {
                v73 = RtlpHpLfhSubsegmentCountEmptyUnits(v6);
                if ( v73 && (unsigned __int8)v51 > 1u )
                  _InterlockedExchangeAdd64(
                    (volatile signed __int64 *)(a1[8].Value + 24),
                    -(__int64)((unsigned __int64)(unsigned int)(v73 << v52) >> 12));
                v74 = a1->Value;
                v75 = (void (__fastcall *)(unsigned __int64, __int64, _QWORD, BOOL))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[2].Value);
                if ( (char *)v75 == (char *)RtlpHpSegLfhVsFree )
                  RtlpHpSegLfhVsFree(v74, v6, v54, v53);
                else
                  v75(v74, v6, v54, v53);
              }
              else
              {
                v55 = 1;
                if ( v51 > 1 )
                {
                  v56 = v49;
                  do
                  {
                    v57 = RtlpHpLfhSubsegmentFindEmptyUnits(v6, v55, v90);
                    v55 = v57;
                    if ( v57 == -1 )
                      break;
                    if ( v90[0] )
                    {
                      if ( v4 )
                      {
                        v58 = *(_BYTE *)(v6 + 44);
                        v59 = v57 << v58;
                        v60 = (void (__fastcall *)(unsigned __int64, __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[4].Value);
                        v61 = v90[0] << v58;
                        v62 = a1->Value;
                        v63 = v6 + v59;
                        if ( (char *)v60 == (char *)RtlpHpSegLfhVsDecommit )
                          RtlpHpSegLfhVsDecommit(v62, v63, v61);
                        else
                          v60(v62, v63, v61);
                        _InterlockedExchangeAdd64(
                          (volatile signed __int64 *)(a1[8].Value + 24),
                          -(__int64)((unsigned __int64)v61 >> 12));
                        v64 = *(_BYTE *)(v6 + 44);
                        v49 = v59 >> v64;
                        v65 = 2 * v49;
                        a4 = 2 * v49 + v6 + *(unsigned __int16 *)(v6 + 46);
                        _m_prefetchw((const void *)a4);
                        LODWORD(v66) = -1;
                        for ( i = a4 + 2LL * (((v61 + v59 - 1) >> v64) - (unsigned int)v49 + 1); a4 < i; v65 += 2LL )
                        {
                          if ( _InterlockedExchangeAdd16((volatile signed __int16 *)a4, 0xFFFFu) == 1
                            && (_DWORD)v66 == -1 )
                          {
                            v66 = v65 >> 1;
                          }
                          a4 += 2LL;
                        }
                        v55 += v90[0];
                      }
                      else
                      {
                        if ( !v56 )
                          RtlAcquireSRWLockShared(a1 + 9);
                        v4 = 2;
                      }
                    }
                  }
                  while ( v55 < *(unsigned __int8 *)(v6 + 45) );
                  if ( v4 && !v56 )
                    RtlReleaseSRWLockShared(a1 + 9);
                }
                RtlpInterlockedPushEntrySList(v92, v6, v49, a4);
                v8 = v91;
              }
            }
          }
          goto LABEL_20;
        }
      }
      v29 = *(_QWORD *)(v6 + 16);
      do
      {
        while ( 1 )
        {
          while ( !v29 )
          {
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 3LL, 0LL);
            if ( !v29 )
            {
              v8 = 0LL;
              goto LABEL_20;
            }
          }
          if ( (v29 & 1) != 0 )
            break;
          v30 = (_RTL_SRWLOCK *)(v29 + 16);
          v8 = v29;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v29 + 16));
          v29 = *(_QWORD *)(v6 + 16);
          if ( v8 == v29 )
            goto LABEL_30;
          RtlReleaseSRWLockExclusive(v30);
        }
        v88 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v6 + 16),
                v29 & 1 | (v29 + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                v29);
        v87 = v29 == v88;
        v29 = v88;
      }
      while ( !v87 );
      v8 = 0LL;
LABEL_30:
      if ( v8 )
        goto LABEL_17;
LABEL_20:
      v4 = 1;
      if ( v8 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
    }
    else
    {
      RtlpLogHeapFailure(16, a1->Value, a3, v6, (unsigned int)v13, 0LL);
    }
  }
  return v4;
}
