/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x180042C90
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x180048A5C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180046890 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpSegLfhVsCommit @ 0x180048300 (RtlpHpSegLfhVsCommit.c)
 *     RtlpWaitCouldDeadlock @ 0x18004A984 (RtlpWaitCouldDeadlock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C96C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18005EF54 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlBackoff @ 0x1800697A0 (RtlBackoff.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006E210 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpOptimizeSRWLockList @ 0x180075EC0 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007F8DC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180107090 (RtlpHpLfhSubsegmentAllocateBlock.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(
        unsigned __int64 UniqueThread,
        _RTL_SRWLOCK *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 Block; // rdi
  __int64 v6; // r15
  unsigned int v7; // ebp
  _RTL_SRWLOCK *v8; // r13
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  volatile signed __int64 *v13; // rsi
  signed __int64 v14; // rbx
  _QWORD *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r10
  signed __int64 v18; // r8
  unsigned int v19; // edx
  unsigned __int16 v20; // si
  unsigned __int16 v21; // cx
  unsigned int v22; // r9d
  volatile signed __int64 *v23; // rsi
  signed __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // r12
  unsigned __int64 v27; // r13
  __int64 v28; // rax
  struct _TEB *v29; // r15
  unsigned int v30; // r14d
  unsigned int v31; // ebp
  unsigned __int16 LowFragHeapDataSlot; // ax
  __int64 v33; // rcx
  unsigned __int16 v34; // si
  unsigned __int16 v35; // ax
  unsigned __int64 v36; // r8
  volatile signed __int64 *v37; // rsi
  volatile signed __int64 *v38; // r10
  signed __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  bool v42; // zf
  signed __int64 v43; // rax
  signed __int64 v44; // rsi
  unsigned int v45; // r15d
  int v46; // r11d
  char v47; // cl
  int v48; // r10d
  unsigned __int16 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r12
  signed __int16 *v52; // r14
  int v53; // eax
  __int64 v54; // rax
  signed __int16 *v55; // r13
  int v56; // esi
  signed __int16 v57; // dx
  signed __int16 v58; // ax
  _RTL_SRWLOCK *v59; // r13
  int v60; // r12d
  int v61; // r14d
  unsigned int v62; // ebp
  unsigned __int64 v63; // rcx
  unsigned __int64 v65; // rdx
  signed __int64 v66; // rax
  __int64 v67; // rdx
  signed __int64 v68; // rcx
  signed __int64 v69; // rdx
  signed __int64 v70; // rtt
  _RTL_SRWLOCK *v71; // rcx
  _RTL_SRWLOCK *v72; // rax
  unsigned __int64 *v73; // rsi
  _QWORD *v74; // rdx
  __int64 *v75; // rax
  volatile signed __int64 *v76; // rcx
  signed __int64 v77; // rax
  __int64 v78; // rdx
  signed __int64 v79; // rdx
  signed __int64 v80; // rtt
  unsigned int v81; // eax
  char v82; // cl
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 (__fastcall *v85)($2F38BEDF952D5DA5F266621B11247D04, __int64, __int64); // rax
  _RTL_SRWLOCK v86; // rcx
  int v87; // eax
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  __int16 RandomValue32; // ax
  signed __int64 v91; // rcx
  signed __int64 v92; // rtt
  signed __int64 v93; // rdx
  signed __int64 v94; // rtt
  unsigned __int64 v95; // rax
  signed __int64 v96; // rax
  _QWORD *v98; // rcx
  __int64 i; // rdx
  signed __int64 v100; // rbx
  signed __int64 v101; // rax
  unsigned __int64 v102; // rbx
  int v103; // [rsp+30h] [rbp-A8h]
  int v104; // [rsp+30h] [rbp-A8h]
  unsigned int v105; // [rsp+38h] [rbp-A0h]
  int v106; // [rsp+3Ch] [rbp-9Ch]
  int v107; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v108; // [rsp+44h] [rbp-94h]
  __int64 v109; // [rsp+48h] [rbp-90h]
  __int64 v110; // [rsp+50h] [rbp-88h]
  signed __int64 v111; // [rsp+58h] [rbp-80h]
  int v112; // [rsp+60h] [rbp-78h]
  int v113; // [rsp+68h] [rbp-70h]
  unsigned __int64 v114; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 *v115; // [rsp+78h] [rbp-60h]
  __int64 v116; // [rsp+80h] [rbp-58h]
  unsigned __int64 v117; // [rsp+88h] [rbp-50h]
  int v118; // [rsp+90h] [rbp-48h]
  signed __int32 v119[17]; // [rsp+94h] [rbp-44h] BYREF
  unsigned __int64 v120; // [rsp+E0h] [rbp+8h]

  v120 = UniqueThread;
  Block = 0LL;
  v6 = a3;
  v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v106 = 0;
  v8 = (_RTL_SRWLOCK *)UniqueThread;
  v110 = 0LL;
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = 17LL;
    v12 = 4096LL;
    if ( v7 )
      break;
    if ( !v9 )
    {
      v9 = 1;
      v107 = 0;
      v13 = (volatile signed __int64 *)(v6 + 16);
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 17LL, 0LL);
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (v14 & 1) != 0 && ((v14 & 2) != 0 || (v14 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
          {
            if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v12, a3, v11) )
              ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
            UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
            v117 = UniqueThread;
            LOBYTE(UniqueThread) = 0;
            v119[0] = 2;
            v116 = 0LL;
            if ( (v14 & 2) != 0 )
            {
              v115 = 0LL;
              v118 = -1;
              UniqueThread = (unsigned __int8)v14;
              v114 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
              v12 = (unsigned __int64)&v114 | v14 & 8 | 7;
              LOBYTE(UniqueThread) = (v14 & 4) == 0;
            }
            else
            {
              v118 = -2;
              v115 = &v114;
              v12 = (unsigned __int64)&v114 + 3;
            }
            v96 = _InterlockedCompareExchange64(v13, v12, v14);
            v42 = v14 == v96;
            v14 = v96;
            if ( !v42 )
              goto LABEL_161;
            if ( (_BYTE)UniqueThread )
              RtlpOptimizeSRWLockList(v6 + 16);
            if ( MEMORY[0x7FFE036A] > 1u )
            {
              UniqueThread = (unsigned int)SRWLockSpinCount;
              if ( SRWLockSpinCount )
              {
                do
                {
                  if ( (v119[0] & 2) == 0 )
                    break;
                  _mm_pause();
                  v42 = (_DWORD)UniqueThread == 1;
                  UniqueThread = (unsigned int)(UniqueThread - 1);
                }
                while ( !v42 );
              }
            }
            if ( _interlockedbittestandreset(v119, 1u) )
            {
              do
                NtWaitForAlertByThreadId((PVOID)(v6 + 16), 0LL);
              while ( (v119[0] & 4) == 0 );
            }
          }
          else
          {
            v91 = (v14 | 1) + 16;
            if ( (v14 & 2) != 0 )
              v91 = v14 | 1;
            v111 = _InterlockedCompareExchange64(v13, v91, v14);
            if ( v14 == v111 )
            {
              v8 = (_RTL_SRWLOCK *)v120;
              goto LABEL_137;
            }
LABEL_161:
            RtlBackoff(&v107);
            _m_prefetchw((const void *)v13);
            v14 = *v13;
          }
        }
      }
    }
LABEL_5:
    v15 = (_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 8) )
    {
      v16 = *(_QWORD *)(v6 + 24);
      v17 = v6 + 24;
      v18 = 1LL;
      if ( v7 )
        LOWORD(v18) = 4096;
      if ( v16 != v17 )
      {
LABEL_9:
        LOWORD(v19) = *(_WORD *)(v16 + 32);
        v106 = 0;
        while ( 1 )
        {
          if ( (unsigned __int16)v18 >= (unsigned __int16)v19 )
          {
            v20 = v19;
            if ( v9 == 1 )
            {
              v16 = *(_QWORD *)v16;
              if ( v16 != v17 )
                goto LABEL_9;
              v11 = 17LL;
              break;
            }
          }
          else
          {
            v20 = v18;
          }
          v21 = v19 - v20;
          v19 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v16 + 32), v19 - v20, v19);
          v22 = v20 + v21;
          if ( (unsigned __int16)v19 == v22 )
          {
            if ( !*(_WORD *)(v16 + 32) )
              RtlpHpLfhOwnerMoveSubsegment(v6, v16, 1LL);
            v11 = 17LL;
            if ( v20 > 1u )
              *(_QWORD *)(v6 + 56) = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(v20 - 1)) & 0xFFF;
            goto LABEL_17;
          }
          if ( v19 < v22 )
            v106 = 1;
        }
      }
      v16 = 0LL;
LABEL_17:
      v23 = (volatile signed __int64 *)(v6 + 16);
      if ( v9 == 2 )
      {
        v66 = _InterlockedCompareExchange64(v23, 0LL, 1LL);
        if ( v66 == 1 )
          goto LABEL_19;
        do
        {
          v67 = 3LL;
          v68 = v66 & 6;
          if ( v68 != 2 )
            v67 = -1LL;
          v69 = v66 + v67;
          v70 = v66;
          v66 = _InterlockedCompareExchange64(v23, v69, v66);
        }
        while ( v70 != v66 );
        goto LABEL_83;
      }
      v24 = _InterlockedCompareExchange64(v23, 0LL, 17LL);
      if ( v24 == 17 )
        goto LABEL_19;
      if ( (v24 & 1) == 0 )
        RtlRaiseStatus(-1073741212);
      if ( (v24 & 2) != 0 )
      {
LABEL_144:
        if ( (v24 & 8) != 0 )
        {
          v98 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( i = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v98[1] )
            v98 = (_QWORD *)*v98;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
            goto LABEL_19;
          v18 = -9LL;
        }
        else
        {
          v18 = -1LL;
        }
        do
        {
          v68 = v24 & 6;
          if ( v68 == 2 )
            v93 = v18 + 4;
          else
            v93 = v18;
          v69 = v24 + v93;
          v94 = v24;
          v24 = _InterlockedCompareExchange64(v23, v69, v24);
        }
        while ( v94 != v24 );
LABEL_83:
        if ( v68 == 2 )
          RtlpWakeSRWLock(v6 + 16, v69, 0LL);
        goto LABEL_19;
      }
      while ( 1 )
      {
        v18 = 0LL;
        if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
          v18 = v24 - 16;
        v92 = v24;
        v24 = _InterlockedCompareExchange64(v23, v18, v24);
        if ( v92 == v24 )
          break;
        if ( (v24 & 2) != 0 )
          goto LABEL_144;
      }
LABEL_19:
      if ( v16 )
      {
        v25 = 3LL;
        v26 = v16 + 48;
        v27 = 2 * (unsigned int)*(unsigned __int16 *)(v16 + 34);
        v28 = *(unsigned __int8 *)(v6 + 1);
        v29 = NtCurrentTeb();
        v30 = RtlpSearchWidth[v28];
        v108 = (unsigned int)v16 >> 12;
        v31 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v16 + 40) ^ ((unsigned int)v16 >> 12));
        v103 = RtlpLFHKey ^ *(_DWORD *)(v16 + 40) ^ ((unsigned int)v16 >> 12);
        if ( a4 >= v31 )
          v25 = 1LL;
        LowFragHeapDataSlot = v29->LowFragHeapDataSlot;
        v111 = v25;
        v33 = LowFragHeapDataSlot;
        v34 = (unsigned __int8)LowFragHeapDataSlot;
        if ( (unsigned __int8)LowFragHeapDataSlot == HIBYTE(LowFragHeapDataSlot) )
        {
          LOWORD(v33) = HIBYTE(LowFragHeapDataSlot);
          RandomValue32 = RtlpHeapGenerateRandomValue32(v33, 255LL, v18, v11);
          v25 = v111;
          v35 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
        }
        else
        {
          v35 = (unsigned __int8)(LowFragHeapDataSlot ^ (LowFragHeapDataSlot + 1)) ^ LowFragHeapDataSlot;
        }
        v29->LowFragHeapDataSlot = v35;
        LODWORD(v36) = *((unsigned __int8 *)&RtlpLowFragHeapRandomData + v34);
        v37 = (volatile signed __int64 *)(v26
                                        + 8
                                        * ((unsigned __int64)(2 * (unsigned int)*(unsigned __int16 *)(v16 + 36)) >> 6));
        v38 = (volatile signed __int64 *)(v26 + 8 * ((v27 - 1) >> 6));
LABEL_25:
        if ( v27 < 0x40 )
        {
          v39 = *v37;
          if ( (unsigned int)v27 < v30 )
            v30 = v27;
        }
        else
        {
          while ( 1 )
          {
            v39 = *v37;
            if ( (*v37 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            if ( v37 == v38 )
              v37 = (volatile signed __int64 *)(v16 + 48);
            else
              ++v37;
          }
          if ( v37 == v38 && (v27 & 0x3F) != 0 && (v27 & 0x3F) < v30 )
            v30 = v27 & 0x3F;
        }
        v36 = ((v30 * (unsigned int)v36) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          if ( v30 < 0x40 )
          {
            _BitScanForward64(&v65, ~v39 & 0x5555555555555555LL);
            v36 = (unsigned int)(v65 + v36);
            v40 = (((1LL << v30) - 1) << v65) & 0x5555555555555555LL;
          }
          else
          {
            v40 = 0x5555555555555555LL;
          }
          _BitScanForward64(&v41, __ROR8__(v40 & ~v39, v36));
          v112 = ((_BYTE)v36 + (_BYTE)v41) & 0x3F;
          v43 = _InterlockedCompareExchange64(v37, v39 | (v25 << v112), v39);
          v42 = v39 == v43;
          v39 = v43;
          if ( v42 )
            break;
          if ( (v43 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            if ( ++v37 > v38 )
              v37 = (volatile signed __int64 *)(v16 + 48);
            goto LABEL_25;
          }
        }
        v44 = (v112 + ((unsigned int)(((__int64)v37 - v26) >> 3) << 6)) >> 1;
        v111 = v44;
        *(_WORD *)(v16 + 36) = v44;
        v45 = HIWORD(v103) + v44 * v31;
        if ( *(_BYTE *)(v16 + 45) <= 1u )
          goto LABEL_52;
        v46 = 0;
        v47 = *(_BYTE *)(v16 + 44);
        v48 = 0;
        v49 = RtlpLFHKey ^ v108 ^ *(_WORD *)(v16 + 40);
        v50 = v45 >> v47;
        v51 = 2 * v50;
        v52 = (signed __int16 *)(2 * v50 + v16 + *(unsigned __int16 *)(v16 + 46));
        _m_prefetchw(v52);
        v53 = v49;
        v39 = 0xFFFFFFFFLL;
        v113 = v53;
        v105 = -1;
        v104 = 0;
        v54 = ((v45 + v53 - 1) >> v47) - (unsigned int)v50 + 1;
        v36 = 0LL;
        v109 = 0LL;
        v55 = &v52[v54];
        if ( v52 < v55 )
        {
          v56 = 0;
          do
          {
            while ( 1 )
            {
              v57 = *v52;
              while ( v57 > 0 )
              {
                v58 = _InterlockedCompareExchange16(v52, v57 + 1, v57);
                v42 = v57 == v58;
                v57 = v58;
                if ( v42 )
                {
                  v39 = v105;
                  v36 = v109;
                  goto LABEL_39;
                }
              }
              if ( v48 )
                break;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v16 + 24));
              v48 = 1;
            }
            if ( v57 == -1 )
            {
              v36 = v51 >> 1;
              v81 = v51 >> 1;
              v109 = v51 >> 1;
              if ( v105 != -1 )
                v81 = v105;
              *v52 = 0;
              v39 = v81;
              v105 = v81;
            }
            else
            {
              v39 = v105;
              ++v56;
              v36 = v109;
              *v52 = v57 + 1;
            }
LABEL_39:
            ++v52;
            v51 += 2LL;
          }
          while ( v52 < v55 );
          v104 = v56;
          LODWORD(v44) = v111;
          if ( (_DWORD)v39 != -1 )
          {
            v59 = (_RTL_SRWLOCK *)v120;
            v82 = *(_BYTE *)(v16 + 44);
            v109 = (unsigned int)(v36 - v39 + 1);
            v83 = v16 + (unsigned int)((_DWORD)v39 << v82);
            v60 = 1;
            v84 = (unsigned int)((_DWORD)v109 << v82);
            v85 = (__int64 (__fastcall *)($2F38BEDF952D5DA5F266621B11247D04, __int64, __int64))(v120 ^ RtlpHeapKey ^ *(_QWORD *)(v120 + 24));
            v86.0 = *($2F38BEDF952D5DA5F266621B11247D04 *)v120;
            if ( (char *)v85 == (char *)RtlpHpSegLfhVsCommit )
              v87 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlpHpSegLfhVsCommit)(v86.0, v83, v84);
            else
              v87 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v85)(v86.0, v83, v84);
            v61 = v87;
            if ( v87 < 0 )
            {
              v46 = 1;
LABEL_45:
              if ( v104 )
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(v59[8].Value + 24),
                  -(__int64)((unsigned __int64)(unsigned int)(v104 << *(_BYTE *)(v16 + 44)) >> 12));
              if ( v46 )
                RtlpHpLfhSubsegmentDecBlockCounts(v16, v45, v113, 2, 0LL);
              if ( v60 )
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v16 + 24));
              if ( v61 < 0 )
              {
                if ( (_DWORD)v44 != -1 )
                {
                  v36 = ~(3LL << ((2 * v44) & 0x3F));
                  _InterlockedAnd64(
                    (volatile signed __int64 *)(v16 + 8 * ((unsigned __int64)(unsigned int)(2 * v44) >> 6) + 48),
                    v36);
                }
                goto LABEL_55;
              }
LABEL_52:
              Block = v16 + v45;
              if ( a4 < v31 )
              {
                v62 = v31 - a4;
                v63 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v108 ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 40);
                *(_BYTE *)(v63 + Block - 1) = 0;
                if ( v62 == 1 )
                {
                  *(_WORD *)(v63 + Block - 2) |= 0x8000u;
                }
                else
                {
                  *(_WORD *)(v63 + Block - 2) &= 0xC000u;
                  *(_WORD *)(v63 + Block - 2) |= v62 & 0x3FFF;
                }
              }
LABEL_55:
              v8 = (_RTL_SRWLOCK *)v120;
              if ( !Block )
                RtlpHpLfhSubsegmentFreeBlock((_RTL_SRWLOCK *)v120, v16, 0LL, a5);
              v10 = v110;
              goto LABEL_58;
            }
            v36 = v16 + *(unsigned __int16 *)(v16 + 46) + 2LL * v105;
            v88 = (unsigned int)v109;
            v89 = 0LL;
            if ( v36 > v36 + 2LL * (unsigned int)v109 )
              v88 = 0LL;
            if ( v88 )
            {
              do
              {
                if ( !*(_WORD *)v36 )
                  *(_WORD *)v36 = 1;
                v36 += 2LL;
                ++v89;
              }
              while ( v89 < v88 );
              LODWORD(v44) = v111;
            }
            v46 = 0;
LABEL_44:
            v61 = 0;
            goto LABEL_45;
          }
          if ( v48 )
          {
            v76 = (volatile signed __int64 *)(v16 + 24);
            v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 24), 0LL, 1LL);
            if ( v77 != 1 )
            {
              v39 = -1LL;
              do
              {
                v78 = 3LL;
                v36 = v77 & 6;
                if ( v36 != 2 )
                  v78 = -1LL;
                v79 = v77 + v78;
                v80 = v77;
                v77 = _InterlockedCompareExchange64(v76, v79, v77);
              }
              while ( v80 != v77 );
              if ( v36 == 2 )
                RtlpWakeSRWLock(v76, v79, 0LL);
            }
          }
          v46 = 0;
        }
        v59 = (_RTL_SRWLOCK *)v120;
        v60 = 0;
        goto LABEL_44;
      }
      v9 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 16));
      v10 = v110;
    }
    else
    {
      v71 = (_RTL_SRWLOCK *)(v6 + 16);
      if ( v9 == 2 )
        RtlReleaseSRWLockExclusive(v71);
      else
        RtlReleaseSRWLockShared(v71);
      v72 = a2;
      v73 = (unsigned __int64 *)&a2[3];
      if ( (unsigned __int64 *)*v73 != v73 )
      {
        RtlAcquireSRWLockExclusive(a2 + 2);
        if ( (unsigned __int64 *)*v73 == v73 )
          v10 = 0LL;
        else
          v10 = RtlpHpLfhOwnerMoveSubsegment(a2, *v73, 2LL);
        RtlReleaseSRWLockExclusive(a2 + 2);
        if ( v10 )
          goto LABEL_90;
        v72 = a2;
      }
      v10 = RtlpHpLfhSubsegmentCreate(v8, v72, a5);
      if ( !v10 )
        goto LABEL_58;
LABEL_90:
      v9 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 16));
      UniqueThread = *(unsigned __int16 *)(v10 + 34);
      if ( *(_WORD *)(v10 + 32) == (_WORD)UniqueThread )
      {
        *(_QWORD *)(v10 + 16) = v6;
      }
      else
      {
        v95 = _InterlockedExchange64((volatile __int64 *)(v10 + 16), v6);
        if ( (v95 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 32), v95 >> 1);
      }
      if ( *v15 && *(_WORD *)(v10 + 32) == *(_WORD *)(v10 + 34) )
        goto LABEL_168;
      UniqueThread = *(unsigned __int8 *)(v10 + 38);
      if ( (_DWORD)UniqueThread == 2 )
      {
        UniqueThread = 0LL;
LABEL_95:
        v74 = 0LL;
        goto LABEL_96;
      }
      if ( *(_BYTE *)(v10 + 38) )
      {
        if ( (_DWORD)UniqueThread != 1 )
          goto LABEL_105;
        UniqueThread = v6 + 40;
        goto LABEL_95;
      }
      UniqueThread = v6 + 24;
      v74 = (_QWORD *)(v6 + 8);
LABEL_96:
      v75 = (__int64 *)(v6 + 24);
      if ( UniqueThread )
      {
        a3 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10
          || (UniqueThread = *(_QWORD *)(v10 + 8), *(_QWORD *)UniqueThread != v10) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)UniqueThread = a3;
        *(_QWORD *)(a3 + 8) = UniqueThread;
        if ( v74 )
          --*v74;
      }
      *(_BYTE *)(v10 + 38) = 0;
      if ( v6 != -24 )
      {
        UniqueThread = *(_QWORD *)(v6 + 32);
        if ( *(__int64 **)UniqueThread != v75 )
          __fastfail(3u);
        *(_QWORD *)v10 = v75;
        *(_QWORD *)(v10 + 8) = UniqueThread;
        *(_QWORD *)UniqueThread = v10;
        *(_QWORD *)(v6 + 32) = v10;
        if ( v6 != -8 )
          ++*v15;
        v10 = 0LL;
      }
      if ( (*(_BYTE *)v6 & 1) == 0 && *v15 > 8uLL )
      {
        v10 = *v75;
        if ( *(__int64 **)(*v75 + 8) != v75 || (UniqueThread = *(_QWORD *)v10, *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10) )
          __fastfail(3u);
        *v75 = UniqueThread;
        *(_QWORD *)(UniqueThread + 8) = v75;
        --*v15;
        *(_BYTE *)(v10 + 38) = 2;
      }
      if ( v10 && *(_BYTE *)(v10 + 38) == 2 )
LABEL_168:
        *(_QWORD *)(v10 + 16) = 0LL;
LABEL_105:
      v110 = v10;
    }
  }
  while ( 1 )
  {
    _m_prefetchw((const void *)(v6 + 56));
    v100 = *(_QWORD *)(v6 + 56);
    if ( (v100 & 0xFFF) != 0 )
    {
      while ( 1 )
      {
        v101 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 56), v100 - 1, v100);
        if ( v100 == v101 )
          break;
        v106 = 1;
        v100 = v101;
        if ( (v101 & 0xFFF) == 0 )
          goto LABEL_191;
      }
      v102 = v100 & 0xFFFFFFFFFFFFF000uLL;
      if ( v102 )
        break;
    }
LABEL_191:
    if ( v9 == 2 )
    {
LABEL_137:
      v11 = 17LL;
      goto LABEL_5;
    }
    v9 = 2;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 16));
  }
  Block = RtlpHpLfhSubsegmentAllocateBlock(v8, v6, v102, a4);
  if ( !Block )
    RtlpHpLfhSubsegmentFreeBlock(v8, v102, 0LL, a5);
  if ( v9 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 16));
LABEL_58:
  if ( v106 )
    RtlpHpLfhBucketUpdateAffinityMapping(v8, a2, v36, v39);
  if ( v10 )
    RtlpHpLfhBucketAddSubsegment(v8, a2, v10, a5);
  return Block;
}
