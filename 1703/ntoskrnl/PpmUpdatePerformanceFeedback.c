/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x1400F5DE0
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x14008A990 (PpmContinueActiveTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400F3740 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     PpmContinueTimeAccumulation @ 0x140146D34 (PpmContinueTimeAccumulation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlGetPpmStatsForProcessor @ 0x1401E9324 (HvlGetPpmStatsForProcessor.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, __int64 *a5)
{
  bool v6; // zf
  __int64 v9; // r14
  char v10; // di
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  char v13; // r9
  __int64 v14; // rcx
  int v15; // r10d
  unsigned int i; // eax
  bool v17; // bp
  __int64 v18; // r15
  _QWORD *v19; // rdi
  unsigned int j; // esi
  __int64 v21; // r14
  void (__fastcall *v22)(__int64, unsigned int *); // rax
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // ecx
  int v32; // r9d
  unsigned int v33; // eax
  __int64 *v34; // rbx
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+30h] [rbp-78h] BYREF
  __int64 v40; // [rsp+38h] [rbp-70h] BYREF
  __int64 v41; // [rsp+40h] [rbp-68h]
  __int64 PpmStatsForProcessor; // [rsp+48h] [rbp-60h]
  __int64 v43; // [rsp+50h] [rbp-58h]
  __int64 v44; // [rsp+58h] [rbp-50h] BYREF
  __int64 v45[8]; // [rsp+60h] [rbp-48h] BYREF
  int v46; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v48; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v49; // [rsp+B8h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a1 + 24152) == 3;
  PpmStatsForProcessor = 0LL;
  v48 = 0LL;
  v9 = 0LL;
  v43 = 0LL;
  if ( v6 )
  {
    v10 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24848) + 8LL * DWORD2(xmmword_140389228)) >> 1;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v41 = v11;
  v12 = (volatile signed __int32 *)(a1 + 24008);
  if ( a2
    || *(_QWORD *)(a1 + 24064)
    || *(_QWORD *)(a1 + 24088)
    && (*(_DWORD *)(a1 + 23432) != *(_DWORD *)(a1 + 24104) || *(_DWORD *)(a1 + 23428) != *(_DWORD *)(a1 + 24108))
    || a3 && v11 != *(_QWORD *)(a1 + 24112) )
  {
    v13 = 0;
    v14 = a1 + 24032;
    v15 = 2;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v14 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 32LL) )
        {
          if ( a3 )
            return 0;
          v13 = 1;
        }
        if ( v15 == 2 )
          v15 = i;
      }
      v14 += 8LL;
    }
    if ( v13 || a2 || !a4 )
    {
      _disable();
      v17 = (v46 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 24008);
      }
      else if ( _interlockedbittestandset64(v12, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 24008));
      }
      v18 = _InterlockedExchange64((volatile __int64 *)(a1 + 24064), 0LL);
      if ( v10 )
      {
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v44, &v48);
        v43 = v44;
        v18 = PpmStatsForProcessor - v44 - *(_QWORD *)(a1 + 24120);
        *(_QWORD *)(a1 + 24120) = PpmStatsForProcessor - v44;
      }
      *(_QWORD *)(a1 + 24056) += v18;
      v19 = (_QWORD *)(a1 + 24072);
      for ( j = 0; j < 2; ++j )
      {
        v21 = *(v19 - 5);
        if ( v21 )
        {
          v22 = *(void (__fastcall **)(__int64, unsigned int *))v21;
          v23 = *(_QWORD *)(v21 + 40);
          if ( *(_BYTE *)(v21 + 33) )
          {
            ((void (__fastcall *)(__int64, _QWORD, unsigned __int64 *, __int64 *))v22)(v23, a2, &v39, &v40);
            v24 = *(_QWORD *)(v21 + 16);
            if ( v39 != v24 )
            {
              v25 = *(_QWORD *)(v21 + 8);
              v26 = v39 - v24;
              v28 = (v40 - v25) * *(unsigned __int8 *)(v21 + 34);
              v39 = v26;
              v40 -= v25;
              v27 = v40;
              *(_DWORD *)(v21 + 24) = v28 / v26;
              *(_QWORD *)(v21 + 16) = v24 + v26;
              *(_QWORD *)(v21 + 8) = v25 + v27;
            }
            v29 = *(_DWORD *)(v21 + 24);
            v49 = v29;
          }
          else
          {
            v22(v23, &v49);
            v29 = v49;
          }
          v30 = v18 * v29;
          *v19 += v30;
          if ( j == *(unsigned __int8 *)(a1 + 24144) )
            *(_QWORD *)(a1 + 24088) += v30;
        }
        ++v19;
      }
      if ( *(_BYTE *)(a1 + 24144) == 2 )
        *(_QWORD *)(a1 + 24088) += 100 * v18;
      v31 = *(_DWORD *)(a1 + 23432) - *(_DWORD *)(a1 + 24104);
      v32 = *(_DWORD *)(a1 + 24108);
      v33 = *(_DWORD *)(a1 + 23428) - v32;
      if ( v33 + v31 )
      {
        v36 = *(_QWORD *)(a1 + 24088);
        *(_DWORD *)(a1 + 24104) = *(_DWORD *)(a1 + 23432);
        *(_DWORD *)(a1 + 24108) = v32 + v33;
        *(_QWORD *)(a1 + 24088) = 0LL;
        if ( v33 )
        {
          v37 = v33 / (v33 + v31);
          v49 = v37;
          *(_QWORD *)(a1 + 24096) += v36 * v37;
        }
      }
      *(_QWORD *)(a1 + 24112) = v41;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 24008, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      if ( v17 )
        _enable();
      v9 = PpmStatsForProcessor;
    }
  }
  v34 = a5;
  if ( a5 )
  {
    if ( v9 )
    {
      v38 = v43;
    }
    else
    {
      v9 = HvlGetPpmStatsForProcessor(a1, v45, &v48);
      v38 = v45[0];
    }
    v34[2] = v48;
    *v34 = v9;
    v34[1] = v38;
  }
  return 1;
}
