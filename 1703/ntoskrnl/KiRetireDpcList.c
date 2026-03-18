/*
 * XREFs of KiRetireDpcList @ 0x1400F18D0
 * Callers:
 *     KiIdleLoop @ 0x140184ED0 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x140188780 (KyRetireDpcList.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiProcessExpiredTimerList @ 0x1400E40B0 (KiProcessExpiredTimerList.c)
 *     KiExecuteAllDpcs @ 0x1400F1ED0 (KiExecuteAllDpcs.c)
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x140201F5C (KiBeginCounterAccumulation.c)
 *     RtlTimelineBitmapUpdate @ 0x140204B38 (RtlTimelineBitmapUpdate.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char v7; // r11
  __int16 v8; // di
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r11
  bool v13; // zf
  signed __int16 result; // ax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ebp
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // eax
  unsigned __int64 v25; // r10
  unsigned int v26; // r14d
  __int64 v27; // r8
  int v28; // ebp
  unsigned int v29; // r11d
  unsigned int v30; // edx
  int v31; // ecx
  __int64 v32; // rsi
  __int64 **v33; // rdi
  __int64 v34; // r10
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 **v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // edx
  volatile signed __int32 *v41; // rcx
  ULONG_PTR BugCheckParameter4; // rcx
  char v43; // al
  __int64 v44; // rcx
  char v45; // al
  _QWORD *i; // rcx
  __int64 v47; // rdi
  unsigned int FrequencyBucket; // eax
  __int64 v49; // r14
  __int64 v50; // rsi
  __int64 v51; // r10
  __int64 v52; // rdi
  __int64 v53; // r9
  unsigned int *v54; // r10
  __int64 v55; // r11
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // r10
  char v60; // [rsp+31h] [rbp-1C7h]
  unsigned int v61; // [rsp+34h] [rbp-1C4h]
  int v62; // [rsp+38h] [rbp-1C0h]
  char v63; // [rsp+3Ch] [rbp-1BCh]
  int v64; // [rsp+40h] [rbp-1B8h]
  unsigned int v65; // [rsp+44h] [rbp-1B4h]
  unsigned int v66; // [rsp+48h] [rbp-1B0h]
  __int64 v67; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v68; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 v69; // [rsp+60h] [rbp-198h]
  int v70; // [rsp+68h] [rbp-190h] BYREF
  int v71; // [rsp+6Ch] [rbp-18Ch]
  unsigned int v72; // [rsp+70h] [rbp-188h]
  _QWORD v73[2]; // [rsp+88h] [rbp-170h] BYREF
  unsigned __int64 v74; // [rsp+98h] [rbp-160h] BYREF
  char v75; // [rsp+A0h] [rbp-158h]
  int v76; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-140h]

  v1 = *(_QWORD *)(a1 + 8);
  v76 = 0;
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
        v47 = *(_QWORD *)(v1 + 1968);
        if ( v47 )
        {
          FrequencyBucket = PoGetFrequencyBucket(a1, v5, 0xFFFFFFFFLL, 0xFFFFF78000000014uLL);
          v49 = *(unsigned __int8 *)(a1 + 23986);
          v50 = FrequencyBucket;
          *(_QWORD *)(v47 + 8 * (v49 + 2LL * FrequencyBucket)) += v51;
          RtlTimelineBitmapUpdate(v47 + 192, (unsigned int)KiTimelineBitmapTime);
          if ( (*(_DWORD *)(v1 + 120) & 4) == 0 )
            *(_QWORD *)(v47 + 16LL * (unsigned int)v50 + 8) += v4;
          if ( *(_QWORD *)(v1 + 1912) )
          {
            *(_QWORD *)(v47 + 8 * (v49 + 16 + 2 * v50)) += v4;
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v1 + 1912) + 1968LL) + 8 * (v49 + 2 * (v50 + 4))),
              v4);
          }
        }
        v7 &= ~0x20u;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v15 = *(_QWORD *)(v1 + 104);
        if ( v15 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v15); i; i = (_QWORD *)i[51] )
            *i += v4;
        }
        if ( (*(_BYTE *)(v1 + 2) & 8) != 0
          && (*(_QWORD *)(v1 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                               + 136LL) )
        {
          *(_QWORD *)(a1 + 23528) += v4;
        }
        if ( KeHeteroSystem != 1 && *(_BYTE *)(v1 + 125) )
        {
          if ( (*(_DWORD *)(v1 + 120) & 4) != 0 )
            *(_QWORD *)(a1 + 23536) += v4;
          else
            *(_QWORD *)(a1 + 23544) += v4;
        }
        v16 = *(_QWORD *)(v1 + 360);
        if ( v16 )
        {
          v52 = *(_QWORD *)(v16 + 32);
          if ( v52 )
          {
            v53 = 1LL;
            if ( KiHwCountersCount )
            {
              v54 = (unsigned int *)&KiHwCounters;
              v55 = (unsigned int)KiHwCountersCount;
              v56 = v16 + 48;
              do
              {
                if ( (v53 & v52) != 0 )
                {
                  v57 = __readpmc(*v54);
                  *(_QWORD *)(v56 + 8) += (unsigned int)(v57 - *(_DWORD *)v56);
                  *(_QWORD *)v56 = v57;
                }
                v53 *= 2LL;
                ++v54;
                v56 += 24LL;
                --v55;
              }
              while ( v55 );
            }
          }
        }
      }
    }
    v8 = *(_WORD *)(a1 + 11884);
    *(_WORD *)(a1 + 11884) = 1;
    v63 = v8;
    if ( (v8 & 8) != 0 )
    {
      v17 = *(_DWORD *)(a1 + 11888);
      v18 = MEMORY[0xFFFFF78000000008];
      v69 = MEMORY[0xFFFFF78000000008];
      if ( KiLastNonHrTimerExpiration == *(_QWORD *)(a1 + 11688) )
      {
        v20 = 0;
        _enable();
        v77 = MEMORY[0xFFFFF78000000014];
      }
      else
      {
        *(_QWORD *)(a1 + 11688) = KiLastNonHrTimerExpiration;
        v19 = v18 >> 18;
        v20 = 1;
        *(_DWORD *)(a1 + 11888) = v18 >> 18;
        _enable();
        v77 = MEMORY[0xFFFFF78000000014];
        if ( !KiSerializeTimerExpiration )
        {
          v21 = a1 + 13952;
          goto LABEL_33;
        }
        if ( *(_BYTE *)(a1 + 33) )
        {
          v21 = KiProcessorBlock[0] + 13952;
LABEL_33:
          v67 = v21;
          if ( v21 )
          {
            v22 = *(unsigned int *)(a1 + 27184);
            *(_DWORD *)(a1 + 27184) = ((_BYTE)v22 + 1) & 0xF;
            *(_QWORD *)(a1 + 16 * (v22 + 1683)) = v18;
            *(LARGE_INTEGER *)(a1 + 16 * (v22 + 1683) + 8) = KeQueryPerformanceCounter(0LL);
            if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
            {
              v74 = v18;
              v73[0] = &v74;
              v75 = 0;
              v73[1] = 16LL;
              EtwTraceKernelEvent((int)v73, 1, 0x40020000u, 3920, 1538);
            }
            v23 = v19 - v17 + 1;
            v66 = v23;
            if ( v23 <= 0x100 )
            {
LABEL_37:
              v62 = v23;
              v24 = 256 - v23;
              v68 = v18;
              v25 = v18;
              if ( 256 - v23 > 0x18 )
                v24 = 24;
              goto LABEL_39;
            }
            v34 = (v19 - v23 + 1) << 18;
            do
            {
              if ( v23 <= 0x100 )
                goto LABEL_37;
              v25 = v34 + 0x4000000;
              v62 = 256;
              v68 = v25;
              v24 = 0;
LABEL_39:
              v26 = 0;
              v27 = v67;
              v71 = v17 + v62;
              v28 = v17 - 1;
              v29 = 0;
              v61 = 0;
              v60 = -64;
              v30 = v71 - 1;
              v31 = v71 - 1 + v24;
              v65 = v71 - 1;
              v64 = v31;
              do
              {
                v32 = v27 + 32 * ((unsigned __int8)++v28 + 16LL);
                if ( v26 <= v30 || *(_QWORD *)(v32 + 24) <= v25 )
                {
                  v33 = (__int64 **)(v32 + 8);
                  if ( v33 != (__int64 **)*v33 )
                  {
                    do
                    {
                      v70 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
                      {
                        do
                          KeYieldProcessorEx(&v70);
                        while ( *(_QWORD *)v32 );
                      }
                      v27 = v67;
                      v25 = v68;
                      v29 = v61;
                      do
                      {
                        if ( v33 == (__int64 **)*v33 )
                          goto LABEL_59;
                        v36 = (__int64)(*v33 - 4);
                        if ( *(_QWORD *)(v36 + 24) > v68 )
                        {
                          *(_QWORD *)(v32 + 24) = *(_QWORD *)(v36 + 24);
LABEL_59:
                          _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
                          goto LABEL_60;
                        }
                        v37 = **v33;
                        v38 = *(__int64 ***)(v36 + 40);
                        if ( *(__int64 **)(v37 + 8) != *v33 || *v38 != *v33 )
                          __fastfail(3u);
                        *v38 = (__int64 *)v37;
                        *(_QWORD *)(v37 + 8) = v38;
                        if ( v38 == (__int64 **)v37 )
                        {
                          *(_DWORD *)(v32 + 28) = -1;
                          v39 = qword_1403E4FD8[2 * *(unsigned __int8 *)(v67 - 13744)];
                          if ( KiSerializeTimerExpiration )
                          {
                            v40 = v28 & 0x3F;
                            v41 = (volatile signed __int32 *)(v39 + 8LL * ((unsigned __int8)v28 >> 6));
                          }
                          else
                          {
                            v40 = *(unsigned __int8 *)(v67 - 13743);
                            v41 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v28 << 6) + v39);
                          }
                          _interlockedbittestandreset64(v41, v40);
                        }
                        BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v67 + 8LL * v29), v36);
                        if ( BugCheckParameter4 )
                          KeBugCheckEx(0xC7u, 8uLL, 1uLL, v36, BugCheckParameter4);
                        v72 = 0;
                        v43 = (v60 ^ v29++) & 0x3F;
                        v44 = (unsigned __int8)(v43 ^ v60);
                        v61 = v29;
                        v45 = v43 ^ v60 ^ *(_BYTE *)(v36 + 3);
                        v60 = v44;
                        HIBYTE(v72) = v45;
                        _InterlockedXor((volatile signed __int32 *)v36, v72);
                      }
                      while ( v29 != 64 );
                      _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
                      KiProcessExpiredTimerList(a1, &v76, v67, 64LL);
                      v29 = 0;
                      v61 = 0;
                    }
                    while ( v33 != (__int64 **)*v33 );
                    v27 = v67;
                    v25 = v68;
LABEL_60:
                    v30 = v65;
                    v31 = v64;
                  }
                  ++v26;
                }
              }
              while ( v28 != v31 );
              if ( v29 )
                KiProcessExpiredTimerList(a1, &v76, v27, v29);
              v13 = v66 == v62;
              v23 = v66 - v62;
              v17 = v71;
              v34 = v68;
              v18 = v69;
              v66 -= v62;
            }
            while ( !v13 );
            LOBYTE(v8) = v63;
            if ( (*(_BYTE *)(a1 + 11884) & 8) != 0 )
            {
              v20 = 1;
            }
            else
            {
              v35 = *(_DWORD *)(a1 + 23468);
              *(_DWORD *)(a1 + 23464) = 0;
              v20 = 1;
              if ( v35 >= KeTimeIncrement )
                *(_DWORD *)(a1 + 23468) = v35 - KeTimeIncrement;
              else
                *(_DWORD *)(a1 + 23468) = 0;
            }
          }
        }
      }
      if ( *(_BYTE *)(a1 + 33) )
        KiTimer2Expiration(a1, v18, v20, (__int64)&v76);
      _disable();
    }
    KiExecuteAllDpcs(a1, v1, &v76, 0LL);
    if ( (v8 & 4) != 0 )
    {
      _enable();
      KeSignalGate(a1 + 22656, 0);
      _disable();
    }
    v11 = __rdtsc();
    v12 = v11;
    *(_QWORD *)(a1 + 23672) += v11 - *(_QWORD *)(a1 + 23488);
    if ( (*(_BYTE *)(v1 + 2) & 0x20) != 0 )
    {
      v58 = (_QWORD *)(a1
                     + 8
                     * (*(unsigned __int8 *)(a1 + 23986)
                      + 2960LL
                      + 2LL * (unsigned int)PoGetFrequencyBucket(a1, (unsigned __int64)HIDWORD(v11) << 32, v9, v10)));
      *v58 += v59;
    }
    *(_QWORD *)(a1 + 23488) = v12;
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
      *(_QWORD *)(a1 + 23496) = v12;
    if ( (*(_BYTE *)(v1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v1, 0LL);
    v13 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v13 )
      *(_BYTE *)(a1 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(a1 + 11808) = 0LL;
  return result;
}
