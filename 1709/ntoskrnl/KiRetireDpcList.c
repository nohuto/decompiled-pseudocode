/*
 * XREFs of KiRetireDpcList @ 0x140094770
 * Callers:
 *     KiIdleLoop @ 0x140184970 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x140188230 (KyRetireDpcList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x1400939C0 (KiProcessExpiredTimerList.c)
 *     KiExecuteAllDpcs @ 0x140094F80 (KiExecuteAllDpcs.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  char v6; // r8
  __int16 v7; // bx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  bool v10; // zf
  signed __int16 result; // ax
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // esi
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rdi
  char v30; // cl
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rbx
  unsigned int v34; // ecx
  int v35; // eax
  unsigned __int64 v36; // rdx
  int v37; // edi
  int v38; // ebx
  unsigned int v39; // esi
  unsigned int v40; // r11d
  unsigned int v41; // ecx
  int v42; // r13d
  __int64 v43; // r14
  _QWORD *v44; // rdi
  __int64 v45; // rdx
  unsigned int v46; // eax
  char v47; // r8
  _QWORD *v48; // rax
  ULONG_PTR v49; // r9
  unsigned __int64 v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  unsigned int v53; // edx
  unsigned __int64 v54; // rcx
  ULONG_PTR BugCheckParameter4; // rcx
  char v56; // al
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // ecx
  unsigned int v60; // edx
  _QWORD *v61; // rdx
  _QWORD *i; // rcx
  __int64 v63; // rbx
  __int64 v64; // r9
  unsigned int *v65; // r10
  __int64 v66; // r11
  __int64 v67; // r8
  unsigned __int64 v68; // rax
  char v69; // [rsp+30h] [rbp-1C8h]
  unsigned int v70; // [rsp+34h] [rbp-1C4h]
  char v71; // [rsp+38h] [rbp-1C0h]
  unsigned int v72; // [rsp+3Ch] [rbp-1BCh]
  int v73; // [rsp+40h] [rbp-1B8h]
  unsigned int v74; // [rsp+44h] [rbp-1B4h]
  unsigned __int64 v75; // [rsp+48h] [rbp-1B0h]
  __int64 v76; // [rsp+50h] [rbp-1A8h]
  __int64 v77; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 v78; // [rsp+60h] [rbp-198h]
  int v79; // [rsp+68h] [rbp-190h] BYREF
  int v80; // [rsp+6Ch] [rbp-18Ch]
  __int64 v81; // [rsp+70h] [rbp-188h]
  unsigned int v82; // [rsp+78h] [rbp-180h]
  _QWORD v83[2]; // [rsp+90h] [rbp-168h] BYREF
  unsigned __int64 v84; // [rsp+A0h] [rbp-158h] BYREF
  char v85; // [rsp+A8h] [rbp-150h]
  int v86; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-140h]

  v1 = *(_QWORD *)(a1 + 8);
  v76 = v1;
  v86 = 0;
  do
  {
    *(_BYTE *)(a1 + 32) = 1;
    v3 = __rdtsc();
    v4 = v3 - *(_QWORD *)(a1 + 23488);
    v5 = v4 + *(unsigned int *)(v1 + 80);
    *(_QWORD *)(v1 + 72) += v4;
    *(_QWORD *)(a1 + 23488) = v3;
    if ( v5 > 0xFFFFFFFF )
      LODWORD(v5) = -1;
    v6 = *(_BYTE *)(v1 + 2);
    *(_DWORD *)(v1 + 80) = v5;
    if ( (v6 & 0x3E) != 0 )
    {
      if ( (v6 & 0x10) != 0 )
      {
        *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v1 + 124) + 23504) += *(_QWORD *)(a1 + 23488)
                                                                        - *(_QWORD *)(a1 + 23496);
        v6 &= ~0x10u;
        *(_QWORD *)(a1 + 23496) = 0LL;
      }
      if ( (v6 & 0x20) != 0 )
      {
        v12 = *(_QWORD *)(v1 + 1976);
        if ( v12 )
        {
          v13 = *(_QWORD *)(a1 + 24176);
          v14 = *(_QWORD *)(a1 + 24184);
          if ( v13 && v14 )
          {
            if ( *(_BYTE *)(v14 + 100) )
            {
              v15 = *(_DWORD *)(v14 + 116);
            }
            else
            {
              v15 = *(_DWORD *)(v14 + 72);
              if ( v15 >= *(_DWORD *)(v13 + 368) )
                v15 = *(_DWORD *)(v13 + 368);
            }
          }
          else
          {
            v15 = 100;
          }
          if ( v15 < 0x4B )
            v16 = v15 / 0x19;
          else
            v16 = 3;
          v17 = *(unsigned __int8 *)(a1 + 23858);
          v18 = v16;
          v19 = v17 + 2LL * v16;
          v20 = *(_QWORD *)(v12 + 8 * v19);
          v21 = (_QWORD *)(v12 + 8 * v19);
          v22 = KiTimelineBitmapTime;
          *v21 = v4 + v20;
          v23 = *(_DWORD *)(v12 + 192);
          if ( v22 > v23 )
          {
            LODWORD(v81) = v22;
            if ( v22 - v23 >= 0x20 )
              HIDWORD(v81) = 1;
            else
              HIDWORD(v81) = (*(_DWORD *)(v12 + 196) << (v22 - v23)) | 1;
            *(_QWORD *)(v12 + 192) = v81;
          }
          else
          {
            v24 = v23 - v22;
            if ( v24 < 0x20 )
              *(_DWORD *)(v12 + 196) |= 1 << v24;
          }
          if ( (*(_DWORD *)(v1 + 120) & 3) == 2 )
            *(_QWORD *)(v12 + 16 * v18 + 8) += v4;
          if ( *(_QWORD *)(v1 + 1920) )
          {
            *(_QWORD *)(v12 + 8 * (v17 + 16 + 2 * v18)) += v4;
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v1 + 1920) + 1976LL) + 8 * (v17 + 2 * (v18 + 4))),
              v4);
          }
        }
        v6 &= ~0x20u;
      }
      if ( (v6 & 0x3E) != 0 )
      {
        v25 = *(_QWORD *)(v1 + 104);
        if ( v25 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v25); i; i = (_QWORD *)i[51] )
            *i += v4;
        }
        if ( (*(_BYTE *)(v1 + 2) & 8) != 0
          && (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL) & *(_QWORD *)(v1 + 576)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
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
        v26 = *(_QWORD *)(v1 + 360);
        if ( v26 )
        {
          v63 = *(_QWORD *)(v26 + 32);
          if ( v63 )
          {
            v64 = 1LL;
            if ( KiHwCountersCount )
            {
              v65 = (unsigned int *)&KiHwCounters;
              v66 = (unsigned int)KiHwCountersCount;
              v67 = v26 + 48;
              do
              {
                if ( (v64 & v63) != 0 )
                {
                  v68 = __readpmc(*v65);
                  *(_QWORD *)(v67 + 8) += (unsigned int)(v68 - *(_DWORD *)v67);
                  *(_QWORD *)v67 = v68;
                }
                v64 *= 2LL;
                ++v65;
                v67 += 24LL;
                --v66;
              }
              while ( v66 );
            }
          }
        }
      }
    }
    v7 = *(_WORD *)(a1 + 11884);
    *(_WORD *)(a1 + 11884) = 1;
    v71 = v7;
    if ( (v7 & 8) != 0 )
    {
      v27 = *(_DWORD *)(a1 + 11888);
      v28 = MEMORY[0xFFFFF78000000008];
      v78 = MEMORY[0xFFFFF78000000008];
      if ( KiLastNonHrTimerExpiration == *(_QWORD *)(a1 + 11688) )
      {
        v30 = 0;
        _enable();
        v87 = MEMORY[0xFFFFF78000000014];
LABEL_64:
        if ( *(_BYTE *)(a1 + 33) )
          KiTimer2Expiration(a1, v28, v30, (__int64)&v86);
        _disable();
        goto LABEL_6;
      }
      *(_QWORD *)(a1 + 11688) = KiLastNonHrTimerExpiration;
      v29 = v28 >> 18;
      v30 = 1;
      *(_DWORD *)(a1 + 11888) = v28 >> 18;
      _enable();
      v87 = MEMORY[0xFFFFF78000000014];
      if ( KiSerializeTimerExpiration )
      {
        if ( !*(_BYTE *)(a1 + 33) )
        {
LABEL_103:
          v1 = v76;
          goto LABEL_64;
        }
        v31 = KiProcessorBlock[0];
      }
      else
      {
        v31 = a1;
      }
      v32 = v31 + 13952;
      v77 = v31 + 13952;
      if ( v31 != -13952 )
      {
        v33 = 2LL * *(unsigned int *)(a1 + 26624);
        *(_DWORD *)(a1 + 26624) = ((unsigned __int8)*(_DWORD *)(a1 + 26624) + 1) & 0xF;
        *(_QWORD *)(a1 + 8 * v33 + 26632) = v28;
        *(LARGE_INTEGER *)(a1 + 8 * v33 + 26640) = KeQueryPerformanceCounter(0LL);
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          v84 = v28;
          v83[0] = &v84;
          v85 = 0;
          v83[1] = 16LL;
          EtwTraceKernelEvent((unsigned int)v83, 1, 1073872896, 3920, 1538);
        }
        v34 = v29 - v27 + 1;
        v74 = v34;
        if ( v34 <= 0x100 )
        {
LABEL_51:
          v73 = v34;
          v35 = 256 - v34;
          v36 = v28;
          v75 = v28;
          v37 = v34;
          if ( 256 - v34 > 0x18 )
            v35 = 24;
          goto LABEL_53;
        }
        v45 = (v29 - v34 + 1) << 18;
        do
        {
          if ( v34 <= 0x100 )
            goto LABEL_51;
          v37 = 256;
          v36 = v45 + 0x4000000;
          v73 = 256;
          v35 = 0;
          v75 = v36;
LABEL_53:
          v70 = 0;
          v38 = v27 - 1;
          v80 = v27 + v37;
          v39 = 0;
          v69 = -64;
          v40 = 0;
          v41 = v80 - 1;
          v72 = v80 - 1;
          v42 = v80 - 1 + v35;
          do
          {
            v43 = 32 * ((unsigned __int8)++v38 + 16LL) + v32;
            if ( v39 <= v41 || *(_QWORD *)(v43 + 24) <= v36 )
            {
              v44 = (_QWORD *)(v43 + 8);
              if ( v44 != (_QWORD *)*v44 )
              {
                do
                {
                  v79 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v43, 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v79);
                    while ( *(_QWORD *)v43 );
                  }
                  v40 = v70;
                  v47 = v69;
                  do
                  {
                    v48 = (_QWORD *)*v44;
                    v36 = v75;
                    if ( v44 == (_QWORD *)*v44 )
                      goto LABEL_73;
                    v49 = (ULONG_PTR)(v48 - 4);
                    v50 = *(v48 - 1);
                    if ( v50 > v75 )
                    {
                      *(_QWORD *)(v43 + 24) = v50;
LABEL_73:
                      _InterlockedAnd64((volatile signed __int64 *)v43, 0LL);
                      goto LABEL_74;
                    }
                    v51 = *(_QWORD **)(v49 + 32);
                    v52 = *(_QWORD **)(v49 + 40);
                    if ( v51[1] != v49 + 32 || *v52 != v49 + 32 )
                      __fastfail(3u);
                    *v52 = v51;
                    v51[1] = v52;
                    if ( v52 == v51 )
                    {
                      *(_DWORD *)(v43 + 28) = -1;
                      if ( KiSerializeTimerExpiration )
                      {
                        v53 = v38 & 0x3F;
                        v54 = 8LL * ((unsigned __int8)v38 >> 6);
                      }
                      else
                      {
                        v53 = *(unsigned __int8 *)(v77 - 13743);
                        v54 = (unsigned __int64)(unsigned __int8)v38 << 6;
                      }
                      _interlockedbittestandreset64(
                        (volatile signed __int32 *)(qword_140402288[2 * *(unsigned __int8 *)(v77 - 13744)] + v54),
                        v53);
                      v47 = v69;
                    }
                    BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v77 + 8LL * v40), v49);
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0xC7u, 8uLL, 1uLL, v49, BugCheckParameter4);
                    v82 = 0;
                    v56 = v40++ ^ v47;
                    v70 = v40;
                    v47 ^= v56 & 0x3F;
                    v69 = v47;
                    HIBYTE(v82) = v47 ^ *(_BYTE *)(v49 + 3);
                    _InterlockedXor((volatile signed __int32 *)v49, v82);
                  }
                  while ( v40 != 64 );
                  _InterlockedAnd64((volatile signed __int64 *)v43, 0LL);
                  KiProcessExpiredTimerList(a1, &v86, v77, 0x40u);
                  v40 = 0;
                  v70 = 0;
                }
                while ( v44 != (_QWORD *)*v44 );
                v36 = v75;
LABEL_74:
                v41 = v72;
              }
              ++v39;
            }
            v32 = v77;
          }
          while ( v38 != v42 );
          if ( v40 )
            KiProcessExpiredTimerList(a1, &v86, v77, v40);
          v10 = v74 == v73;
          v34 = v74 - v73;
          v27 = v80;
          v45 = v75;
          v28 = v78;
          v74 -= v73;
        }
        while ( !v10 );
        LOBYTE(v7) = v71;
        if ( (*(_BYTE *)(a1 + 11884) & 8) == 0 )
        {
          v46 = *(_DWORD *)(a1 + 23464);
          v1 = v76;
          *(_DWORD *)(a1 + 23460) = 0;
          v30 = 1;
          if ( v46 >= KeTimeIncrement )
            *(_DWORD *)(a1 + 23464) = v46 - KeTimeIncrement;
          else
            *(_DWORD *)(a1 + 23464) = 0;
          goto LABEL_64;
        }
        v30 = 1;
      }
      goto LABEL_103;
    }
LABEL_6:
    KiExecuteAllDpcs(a1, v1, &v86, 0LL);
    if ( (v7 & 4) != 0 )
    {
      _enable();
      KeSignalGate(a1 + 22656, 0LL);
      _disable();
    }
    v8 = __rdtsc();
    v9 = v8 - *(_QWORD *)(a1 + 23488);
    *(_QWORD *)(a1 + 23608) += v9;
    if ( (*(_BYTE *)(v1 + 2) & 0x20) != 0 )
    {
      v57 = *(_QWORD *)(a1 + 24176);
      v58 = *(_QWORD *)(a1 + 24184);
      if ( v57 && v58 )
      {
        if ( *(_BYTE *)(v58 + 100) )
        {
          v59 = *(_DWORD *)(v58 + 116);
        }
        else
        {
          v59 = *(_DWORD *)(v58 + 72);
          if ( v59 >= *(_DWORD *)(v57 + 368) )
            v59 = *(_DWORD *)(v57 + 368);
        }
      }
      else
      {
        v59 = 100;
      }
      if ( v59 < 0x4B )
        v60 = v59 / 0x19;
      else
        v60 = 3;
      v61 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v60));
      *v61 += v9;
    }
    *(_QWORD *)(a1 + 23488) = v8;
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
      *(_QWORD *)(a1 + 23496) = v8;
    if ( (*(_BYTE *)(v1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v1, 0LL);
    v10 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v10 )
      *(_BYTE *)(a1 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(a1 + 11808) = 0LL;
  return result;
}
