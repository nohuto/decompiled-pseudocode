/*
 * XREFs of KiRetireDpcList @ 0x1401073A0
 * Callers:
 *     KiIdleLoop @ 0x1401AE5C0 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x1401B1E60 (KyRetireDpcList.c)
 * Callees:
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiExecuteAllDpcs @ 0x140107C40 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x140108660 (KiProcessExpiredTimerList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x14024615C (KiBeginCounterAccumulation.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char v7; // r11
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int16 v20; // bx
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r8
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  _QWORD *v28; // rdx
  bool v29; // zf
  signed __int16 result; // ax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // esi
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rdi
  char v36; // cl
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rbx
  unsigned int v40; // ebx
  int v41; // eax
  unsigned __int64 v42; // r8
  int v43; // edi
  unsigned int v44; // esi
  unsigned int v45; // r10d
  unsigned int v46; // edx
  int v47; // ecx
  __int64 v48; // r14
  _QWORD *v49; // rbx
  __int64 v50; // r8
  unsigned int v51; // eax
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  char v54; // r11
  _QWORD *v55; // rax
  ULONG_PTR v56; // r9
  unsigned __int64 v57; // rax
  struct _KPRCB *v58; // rcx
  _DWORD *v59; // rdx
  _QWORD *v60; // rdx
  _QWORD *v61; // rax
  unsigned int v62; // edx
  unsigned __int64 v63; // rcx
  ULONG_PTR BugCheckParameter4; // rcx
  char v65; // al
  _QWORD *i; // rcx
  char v67; // r11
  __int64 v68; // rbx
  __int64 v69; // r9
  unsigned int *v70; // r10
  __int64 v71; // r11
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  int v74; // eax
  int v75; // eax
  char v76; // [rsp+31h] [rbp-1D7h]
  int v77; // [rsp+34h] [rbp-1D4h]
  unsigned int v78; // [rsp+38h] [rbp-1D0h]
  unsigned __int64 v79; // [rsp+40h] [rbp-1C8h]
  unsigned int v80; // [rsp+48h] [rbp-1C0h]
  int v81; // [rsp+4Ch] [rbp-1BCh]
  char v82; // [rsp+50h] [rbp-1B8h]
  unsigned int v83; // [rsp+54h] [rbp-1B4h]
  __int64 v84; // [rsp+58h] [rbp-1B0h]
  unsigned __int64 v85; // [rsp+60h] [rbp-1A8h]
  int v86; // [rsp+68h] [rbp-1A0h] BYREF
  int v87; // [rsp+6Ch] [rbp-19Ch]
  __int64 v88; // [rsp+70h] [rbp-198h]
  __int64 v89; // [rsp+78h] [rbp-190h]
  unsigned int v90; // [rsp+80h] [rbp-188h]
  _QWORD v91[2]; // [rsp+98h] [rbp-170h] BYREF
  unsigned __int64 v92; // [rsp+A8h] [rbp-160h] BYREF
  char v93; // [rsp+B0h] [rbp-158h]
  int v94; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-140h]

  v1 = *(_QWORD *)(a1 + 8);
  v84 = v1;
  v94 = 0;
  do
  {
    *(_BYTE *)(a1 + 32) = 1;
    v3 = __rdtsc();
    v4 = v3 - *(_QWORD *)(a1 + 23488);
    v5 = v4 + *(_QWORD *)(v1 + 72);
    v6 = v4 + *(unsigned int *)(v1 + 80);
    *(_QWORD *)(v1 + 72) = v5;
    *(_QWORD *)(a1 + 23488) = v3;
    v7 = *(_BYTE *)(v1 + 2);
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    *(_DWORD *)(v1 + 80) = v6;
    if ( (v7 & 0x3E) != 0 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
        *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v1 + 124) + 23504) += v5;
        v7 &= ~0x10u;
        *(_QWORD *)(a1 + 23496) = 0LL;
      }
      if ( (v7 & 0x20) != 0 )
      {
        v8 = *(_QWORD *)(v1 + 1976);
        if ( v8 )
        {
          v9 = *(_QWORD *)(a1 + 24176);
          v10 = *(_QWORD *)(a1 + 24184);
          if ( v9 && v10 )
          {
            if ( *(_BYTE *)(v10 + 100) )
            {
              v11 = *(_DWORD *)(v10 + 116);
            }
            else
            {
              v11 = *(_DWORD *)(v10 + 72);
              if ( v11 >= *(_DWORD *)(v9 + 368) )
                v11 = *(_DWORD *)(v9 + 368);
            }
          }
          else
          {
            v11 = 100;
          }
          if ( v11 < 0x4B )
            v12 = v11 / 0x19;
          else
            v12 = 3;
          v13 = *(unsigned __int8 *)(a1 + 23858);
          v14 = v12;
          v15 = v13 + 2LL * v12;
          v16 = *(_QWORD *)(v8 + 8 * v15);
          v5 = v8 + 8 * v15;
          v17 = KiTimelineBitmapTime;
          *(_QWORD *)v5 = v4 + v16;
          v18 = *(_DWORD *)(v8 + 192);
          if ( v17 > v18 )
          {
            LODWORD(v88) = v17;
            v5 = v17 - v18;
            if ( (unsigned int)v5 >= 0x20 )
              HIDWORD(v88) = 1;
            else
              HIDWORD(v88) = (*(_DWORD *)(v8 + 196) << (v17 - v18)) | 1;
            *(_QWORD *)(v8 + 192) = v88;
          }
          else
          {
            v19 = v18 - v17;
            if ( v19 < 0x20 )
              *(_DWORD *)(v8 + 196) |= 1 << v19;
          }
          if ( (*(_DWORD *)(v1 + 120) & 3) == 2 )
          {
            v5 = 2 * v14;
            *(_QWORD *)(v8 + 16 * v14 + 8) += v4;
          }
          if ( *(_QWORD *)(v1 + 1920) )
          {
            *(_QWORD *)(v8 + 8 * (v13 + 16 + 2 * v14)) += v4;
            v5 = *(_QWORD *)(*(_QWORD *)(v1 + 1920) + 1976LL) + 8 * (v13 + 8 + 2 * v14);
            _InterlockedExchangeAdd64((volatile signed __int64 *)v5, v4);
          }
        }
        v7 &= ~0x20u;
      }
      if ( (v7 & 0x40) != 0 )
      {
        LOBYTE(v5) = 1;
        KiSetVpThreadSystemWork(a1, v5);
        v7 = v67 & 0xBF;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v31 = *(_QWORD *)(v1 + 104);
        if ( v31 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v31); i; i = (_QWORD *)i[51] )
            *i += v4;
        }
        if ( (*(_BYTE *)(v1 + 2) & 8) != 0
          && (*(_QWORD *)(v1 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                               + 136LL) )
        {
          *(_QWORD *)(a1 + 23528) += v4;
        }
        if ( *(_BYTE *)(v1 + 125) )
        {
          if ( (*(_DWORD *)(v1 + 120) & 3) == 2 )
            *(_QWORD *)(a1 + 23544) += v4;
          else
            *(_QWORD *)(a1 + 23536) += v4;
        }
        v32 = *(_QWORD *)(v1 + 360);
        if ( v32 )
        {
          v68 = *(_QWORD *)(v32 + 32);
          if ( v68 )
          {
            v69 = 1LL;
            if ( KiHwCountersCount )
            {
              v70 = (unsigned int *)&KiHwCounters;
              v71 = (unsigned int)KiHwCountersCount;
              v72 = v32 + 48;
              do
              {
                if ( (v69 & v68) != 0 )
                {
                  v73 = __readpmc(*v70);
                  *(_QWORD *)(v72 + 8) += (unsigned int)(v73 - *(_DWORD *)v72);
                  *(_QWORD *)v72 = v73;
                }
                v69 *= 2LL;
                ++v70;
                v72 += 24LL;
                --v71;
              }
              while ( v71 );
            }
          }
        }
      }
    }
    v20 = *(_WORD *)(a1 + 11884);
    *(_WORD *)(a1 + 11884) = 1;
    v82 = v20;
    if ( (v20 & 8) != 0 )
    {
      v33 = *(_DWORD *)(a1 + 11888);
      v34 = MEMORY[0xFFFFF78000000008];
      v85 = MEMORY[0xFFFFF78000000008];
      if ( KiLastNonHrTimerExpiration == *(_QWORD *)(a1 + 11688) )
      {
        v36 = 0;
        _enable();
        v95 = MEMORY[0xFFFFF78000000014];
LABEL_76:
        if ( *(_BYTE *)(a1 + 33) )
          KiTimer2Expiration(a1, v34, v36, (__int64)&v94);
        _disable();
        goto LABEL_28;
      }
      *(_QWORD *)(a1 + 11688) = KiLastNonHrTimerExpiration;
      v35 = v34 >> 18;
      v36 = 1;
      *(_DWORD *)(a1 + 11888) = v34 >> 18;
      _enable();
      v95 = MEMORY[0xFFFFF78000000014];
      if ( KiSerializeTimerExpiration )
      {
        if ( !*(_BYTE *)(a1 + 33) )
        {
LABEL_109:
          v1 = v84;
          goto LABEL_76;
        }
        v37 = KiProcessorBlock[0];
      }
      else
      {
        v37 = a1;
      }
      v38 = v37 + 13952;
      v89 = v37 + 13952;
      if ( v37 != -13952 )
      {
        v39 = 2LL * *(unsigned int *)(a1 + 26624);
        *(_DWORD *)(a1 + 26624) = ((unsigned __int8)*(_DWORD *)(a1 + 26624) + 1) & 0xF;
        *(_QWORD *)(a1 + 8 * v39 + 26632) = v34;
        *(LARGE_INTEGER *)(a1 + 8 * v39 + 26640) = KeQueryPerformanceCounter(0LL);
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          v92 = v34;
          v91[0] = &v92;
          v93 = 0;
          v91[1] = 16LL;
          EtwTraceKernelEvent((int)v91, 1, 0x40020000u, 3920, 1538);
        }
        v40 = v35 - v33 + 1;
        v83 = v40;
        if ( v40 <= 0x100 )
        {
LABEL_63:
          v81 = v40;
          v41 = 256 - v40;
          v79 = v34;
          v42 = v34;
          if ( 256 - v40 > 0x18 )
            v41 = 24;
          goto LABEL_65;
        }
        v50 = (v35 - v40 + 1) << 18;
        do
        {
          if ( v40 <= 0x100 )
            goto LABEL_63;
          v42 = v50 + 0x4000000;
          v81 = 256;
          v79 = v42;
          v41 = 0;
LABEL_65:
          v43 = v33 - 1;
          v80 = 0;
          v87 = v33 + v81;
          v44 = 0;
          v45 = 0;
          v76 = -64;
          v46 = v87 - 1;
          v47 = v87 - 1 + v41;
          v78 = v87 - 1;
          v77 = v47;
          do
          {
            v48 = v38 + 32 * ((unsigned __int8)++v43 + 16LL);
            if ( v44 <= v46 || *(_QWORD *)(v48 + 24) <= v42 )
            {
              v49 = (_QWORD *)(v48 + 8);
              if ( v49 != (_QWORD *)*v49 )
              {
LABEL_79:
                CurrentPrcb = KeGetCurrentPrcb();
                v86 = 0;
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v74 = SchedulerAssist[5];
                    SchedulerAssist[5] = v74 + 1;
                    if ( v74 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
                      KiPerformUnboostKick(CurrentPrcb);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)v48, 0LL) )
                {
                  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
                  do
                    KeYieldProcessorEx(&v86);
                  while ( *(_QWORD *)v48 );
                  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
                }
                v38 = v89;
                v42 = v79;
                v45 = v80;
                v54 = v76;
                while ( 1 )
                {
                  v55 = (_QWORD *)*v49;
                  if ( v49 == (_QWORD *)*v49 )
                    goto LABEL_85;
                  v56 = (ULONG_PTR)(v55 - 4);
                  v57 = *(v55 - 1);
                  if ( v57 > v42 )
                    break;
                  v60 = *(_QWORD **)(v56 + 32);
                  v61 = *(_QWORD **)(v56 + 40);
                  if ( v60[1] != v56 + 32 || *v61 != v56 + 32 )
                    __fastfail(3u);
                  *v61 = v60;
                  v60[1] = v61;
                  if ( v61 == v60 )
                  {
                    *(_DWORD *)(v48 + 28) = -1;
                    if ( KiSerializeTimerExpiration )
                    {
                      v62 = v43 & 0x3F;
                      v63 = 8LL * ((unsigned __int8)v43 >> 6);
                    }
                    else
                    {
                      v62 = *(unsigned __int8 *)(v38 - 13743);
                      v63 = (unsigned __int64)(unsigned __int8)v43 << 6;
                    }
                    _interlockedbittestandreset64(
                      (volatile signed __int32 *)(qword_14044D448[2 * *(unsigned __int8 *)(v38 - 13744)] + v63),
                      v62);
                    v42 = v79;
                  }
                  BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v38 + 8LL * v45), v56);
                  if ( BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 8uLL, 1uLL, v56, BugCheckParameter4);
                  v90 = 0;
                  v65 = v45++ ^ v54;
                  v80 = v45;
                  v54 ^= v65 & 0x3F;
                  v76 = v54;
                  HIBYTE(v90) = v54 ^ *(_BYTE *)(v56 + 3);
                  _InterlockedXor((volatile signed __int32 *)v56, v90);
                  if ( v45 == 64 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
                    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
                    KiProcessExpiredTimerList(a1, &v94, v38, 64LL);
                    v45 = 0;
                    v80 = 0;
                    if ( v49 == (_QWORD *)*v49 )
                    {
LABEL_144:
                      v42 = v79;
                      goto LABEL_86;
                    }
                    goto LABEL_79;
                  }
                }
                *(_QWORD *)(v48 + 24) = v57;
LABEL_85:
                _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
                v58 = KeGetCurrentPrcb();
                v59 = v58->SchedulerAssist;
                if ( v59 )
                {
                  if ( v58->NestingLevel <= 1u )
                  {
                    v75 = v59[5] - 1;
                    v59[5] = v75;
                    if ( !v75 )
                    {
                      if ( !*((_BYTE *)v59 + 25) && !*((_BYTE *)v59 + 27) )
                        KiPerformUnboostKick(v58);
                      goto LABEL_144;
                    }
                  }
                }
LABEL_86:
                v47 = v77;
                v46 = v78;
              }
              ++v44;
            }
          }
          while ( v43 != v47 );
          if ( v45 )
            KiProcessExpiredTimerList(a1, &v94, v38, v45);
          v29 = v83 == v81;
          v40 = v83 - v81;
          v33 = v87;
          v50 = v79;
          v34 = v85;
          v83 -= v81;
        }
        while ( !v29 );
        LOBYTE(v20) = v82;
        if ( (*(_BYTE *)(a1 + 11884) & 8) == 0 )
        {
          v51 = *(_DWORD *)(a1 + 23464);
          v1 = v84;
          *(_DWORD *)(a1 + 23460) = 0;
          v36 = 1;
          if ( v51 >= KeTimeIncrement )
            *(_DWORD *)(a1 + 23464) = v51 - KeTimeIncrement;
          else
            *(_DWORD *)(a1 + 23464) = 0;
          goto LABEL_76;
        }
        v36 = 1;
      }
      goto LABEL_109;
    }
LABEL_28:
    KiExecuteAllDpcs(a1, v1, &v94, 0LL);
    if ( (v20 & 4) != 0 )
    {
      _enable();
      KeSignalGate(a1 + 22656, 0);
      _disable();
    }
    v21 = __rdtsc();
    v22 = v21 - *(_QWORD *)(a1 + 23488);
    *(_QWORD *)(a1 + 23608) += v22;
    v23 = *(_BYTE *)(v1 + 2);
    if ( (v23 & 0x20) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 24176);
      v25 = *(_QWORD *)(a1 + 24184);
      if ( v24 && v25 )
      {
        if ( *(_BYTE *)(v25 + 100) )
        {
          v26 = *(_DWORD *)(v25 + 116);
        }
        else
        {
          v26 = *(_DWORD *)(v25 + 72);
          if ( v26 >= *(_DWORD *)(v24 + 368) )
            v26 = *(_DWORD *)(v24 + 368);
        }
      }
      else
      {
        v26 = 100;
      }
      if ( v26 < 0x4B )
        v27 = v26 / 0x19;
      else
        v27 = 3;
      v28 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v27));
      *v28 += v22;
      v23 = *(_BYTE *)(v1 + 2);
    }
    if ( (v23 & 0x40) != 0 )
      KiSetVpThreadSystemWork(a1, 0LL);
    *(_QWORD *)(a1 + 23488) = v21;
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
      *(_QWORD *)(a1 + 23496) = v21;
    if ( (*(_BYTE *)(v1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v1, 0LL);
    v29 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v29 )
      *(_BYTE *)(a1 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(a1 + 11808) = 0LL;
  return result;
}
