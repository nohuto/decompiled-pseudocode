/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x140098470
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140095B50 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14011616C (PpmContinueActiveTimeAccumulation.c)
 *     PpmContinueTimeAccumulation @ 0x14014D618 (PpmContinueTimeAccumulation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     HvlGetPpmStatsForProcessor @ 0x14014B0AC (HvlGetPpmStatsForProcessor.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 *a5)
{
  __int64 v5; // r10
  __int64 v7; // rcx
  char v8; // bp
  char v9; // r11
  char v10; // di
  __int64 v11; // r12
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // r15
  _QWORD *v17; // rsi
  unsigned __int8 v18; // bp
  unsigned int i; // r14d
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, unsigned int *, unsigned __int64 *, __int64 *); // rax
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  char v28; // bp
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // eax
  __int64 *v32; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 PpmStatsForProcessor; // [rsp+30h] [rbp-78h]
  __int64 v38; // [rsp+38h] [rbp-70h]
  __int64 v39; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-60h] BYREF
  __int64 v41; // [rsp+50h] [rbp-58h] BYREF
  __int64 v42; // [rsp+58h] [rbp-50h] BYREF
  __int64 v43[8]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v46; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int8 v47; // [rsp+B8h] [rbp+10h]

  v47 = a2;
  v5 = 0LL;
  v7 = 0LL;
  PpmStatsForProcessor = 0LL;
  v8 = a4;
  v39 = 0LL;
  v9 = (char)a3;
  v38 = 0LL;
  if ( *(_DWORD *)(a1 + 24024) == 3 )
  {
    v10 = 1;
    v5 = 0LL;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24656) + 8LL * DWORD2(xmmword_1403A1E00)) >> 1;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v12 = (volatile signed __int32 *)(a1 + 23880);
  if ( a2
    || *(_QWORD *)(a1 + 23936)
    || *(_QWORD *)(a1 + 23960)
    && (*(_DWORD *)(a1 + 23432) != *(_DWORD *)(a1 + 23976) || *(_DWORD *)(a1 + 23428) != *(_DWORD *)(a1 + 23980))
    || (_BYTE)a3 && v11 != *(_QWORD *)(a1 + 23984) )
  {
    LOBYTE(a3) = 0;
    v13 = a1 + 23904;
    v14 = 0;
    a4 = 2LL;
    do
    {
      if ( *(_QWORD *)v13 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v13 + 32LL) )
        {
          if ( v9 )
            return 0;
          LOBYTE(a3) = 1;
        }
        if ( (_DWORD)a4 == 2 )
          a4 = v14;
      }
      ++v14;
      v13 += 8LL;
    }
    while ( v14 < 2 );
    if ( (_BYTE)a3 || a2 || !v8 )
    {
      _disable();
      v15 = v44 >> 9;
      LOBYTE(v15) = (v44 & 0x200) != 0;
      v44 = v15;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 23880);
      }
      else if ( _interlockedbittestandset64(v12, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 23880));
      }
      v16 = _InterlockedExchange64((volatile __int64 *)(a1 + 23936), 0LL);
      if ( v10 )
      {
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v42, &v39, a4);
        v38 = v42;
        v16 = PpmStatsForProcessor - v42 - *(_QWORD *)(a1 + 23992);
        *(_QWORD *)(a1 + 23992) = PpmStatsForProcessor - v42;
      }
      *(_QWORD *)(a1 + 23928) += v16;
      v17 = (_QWORD *)(a1 + 23944);
      v18 = v47;
      for ( i = 0; i < 2; ++i )
      {
        v20 = *(v17 - 5);
        if ( v20 )
        {
          v21 = *(void (__fastcall **)(__int64, unsigned int *, unsigned __int64 *, __int64 *))v20;
          v22 = *(_QWORD *)(v20 + 40);
          if ( *(_BYTE *)(v20 + 33) )
          {
            v21(v22, (unsigned int *)v18, &v40, &v41);
            v23 = *(_QWORD *)(v20 + 16);
            a4 = v40;
            if ( v40 != v23 )
            {
              a3 = *(unsigned __int64 **)(v20 + 8);
              a4 = v40 - v23;
              v25 = (v41 - (_QWORD)a3) * *(unsigned __int8 *)(v20 + 35);
              v40 = a4;
              v41 -= (__int64)a3;
              v24 = v41;
              *(_DWORD *)(v20 + 24) = v25 / a4;
              *(_QWORD *)(v20 + 16) = v23 + a4;
              *(_QWORD *)(v20 + 8) = (char *)a3 + v24;
            }
            v26 = *(_DWORD *)(v20 + 24);
            v46 = v26;
          }
          else
          {
            v21(v22, &v46, a3, (__int64 *)a4);
            v26 = v46;
          }
          v27 = v16 * v26;
          *v17 += v27;
          if ( i == *(unsigned __int8 *)(a1 + 24016) )
            *(_QWORD *)(a1 + 23960) += v27;
        }
        ++v17;
      }
      v28 = v44;
      if ( *(_BYTE *)(a1 + 24016) == 2 )
        *(_QWORD *)(a1 + 23960) += 100 * v16;
      v29 = *(_DWORD *)(a1 + 23432);
      v30 = *(_DWORD *)(a1 + 23428);
      v31 = v30 - *(_DWORD *)(a1 + 23980);
      a4 = v31 + v29 - *(_DWORD *)(a1 + 23976);
      if ( (_DWORD)a4 )
      {
        v34 = *(_QWORD *)(a1 + 23960);
        *(_QWORD *)(a1 + 23960) = 0LL;
        *(_DWORD *)(a1 + 23976) = v29;
        *(_DWORD *)(a1 + 23980) = v30;
        if ( v31 )
        {
          v35 = v31 / (unsigned int)a4;
          v46 = v35;
          *(_QWORD *)(a1 + 23968) += v34 * v35;
        }
      }
      *(_QWORD *)(a1 + 23984) = v11;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 23880, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      if ( v28 )
        _enable();
      v5 = PpmStatsForProcessor;
    }
    v7 = v38;
  }
  v32 = a5;
  if ( a5 )
  {
    if ( !v5 )
    {
      v36 = HvlGetPpmStatsForProcessor(a1, v43, &v39, a4);
      v7 = v43[0];
      v5 = v36;
    }
    v32[2] = v39;
    *v32 = v5;
    v32[1] = v7;
  }
  return 1;
}
