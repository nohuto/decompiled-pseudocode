/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C000B470
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006F90 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007370 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0012CAC (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012D4C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r8
  __int64 v30; // r8
  _QWORD *v31; // rdx
  KSPIN_LOCK *v32; // rdi
  _QWORD *v33; // rax
  LARGE_INTEGER v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 **v40; // rax
  LARGE_INTEGER v41; // rcx
  unsigned __int128 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int128 v44; // rtt
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  void *v47; // rcx
  __int64 v48; // rcx
  void (__fastcall *v49)(_QWORD); // rax
  __int64 v50; // rcx
  void (__fastcall *v51)(_QWORD); // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER v55; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v57; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = 1;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v7 + 2860) || (*(_BYTE *)(v7 + 2884) & 1) != 0 )
    goto LABEL_21;
  v8 = *(_QWORD *)(a1 + 640);
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
  if ( !*(_BYTE *)(v10 + 188)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 184), 0, 0)
    && !*(_DWORD *)(v11 + 2860)
    && !*(_DWORD *)(v8 + 48)
    && (*(_DWORD *)(v8 + 64) & 8) == 0 )
  {
    if ( *(_DWORD *)(v10 + 1216) || *(_BYTE *)(v11 + 51) )
      LOBYTE(a4) = 0;
    else
      a4 = 1LL;
    v19 = *(_DWORD *)(v8 + 464);
    if ( v19 > 0x10 )
    {
      if ( *(_DWORD *)(v11 + 980) )
      {
LABEL_57:
        if ( !*(_QWORD *)(a1 + 48) )
        {
          v38 = (__int64 *)(a1 + 40);
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3328LL;
          v40 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3336LL);
          if ( *v40 != (__int64 *)v39 )
            __fastfail(3u);
          *v38 = v39;
          *(_QWORD *)(a1 + 48) = v40;
          *v40 = v38;
          *(_QWORD *)(v39 + 8) = v38;
        }
        VidSchiUpdateContextStatus(a1, 3LL, 14149LL);
        return 3LL;
      }
    }
    else
    {
      v11 = 0LL;
      if ( v19 )
      {
        do
        {
          if ( (v20 = *(_QWORD *)(*(_QWORD *)(v8 + 8LL * (unsigned int)v11 + 472) + 96LL), !(_BYTE)a4)
            || (v21 = *(_DWORD *)v20, (*(_DWORD *)v20 & 0x20000000) != 0) && v21 < 0
            || (v21 & 0x80000) != 0
            || (v21 & 0x100) != 0 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v20 + 16) + 8LL) )
              goto LABEL_57;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *(_DWORD *)(v8 + 464) );
      }
    }
  }
  v12 = *(_DWORD *)(v4 + 6256) != -1;
  v54 = 0LL;
  if ( (*(_DWORD *)(a1 + 636) & 0xF) != 0
    || (*(_DWORD *)(a1 + 112) & 0x10) == 0
    || (v13 = *(_QWORD *)(a1 + 104), *(_BYTE *)(v13 + 188))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 184), 0, 0) )
  {
LABEL_21:
    v16 = *(_QWORD *)(a1 + 96);
    v17 = *(_QWORD *)(v16 + 216);
    if ( v17 != a1 )
    {
      VidSchiProfilePerformanceTick(
        3LL,
        *(_QWORD *)(v16 + 24),
        *(_QWORD *)(a1 + 96),
        a4,
        a1,
        0LL,
        0LL,
        *(_QWORD *)(v16 + 216));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 892) )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
          v52[3] = 281LL;
          v52[4] = 3840LL;
          v52[5] = a1;
          v52[6] = 0LL;
          v52[7] = 0LL;
          WdLogEvent5_WdCriticalError(v52);
          JUMPOUT(0x1C001CFE7LL);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v16 + 216) = a1;
      if ( v17 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v17 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 72), 0xFFFFFFFF) == 1 )
        {
          v27 = *(_QWORD *)(v17 + 96);
          if ( *(_QWORD *)(v27 + 224) == v17 )
            *(_QWORD *)(v27 + 224) = 0LL;
          v28 = *(_QWORD *)(v17 + 8);
          if ( *(_QWORD *)(v28 + 8) != v17 + 8 || (v29 = *(_QWORD **)(v17 + 16), *v29 != v17 + 8) )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          v30 = *(_QWORD *)(v17 + 24);
          if ( *(_QWORD *)(v30 + 8) != v17 + 24 || (v31 = *(_QWORD **)(v17 + 32), *v31 != v17 + 24) )
            __fastfail(3u);
          *v31 = v30;
          v32 = (KSPIN_LOCK *)(v26 + 1912);
          *(_QWORD *)(v30 + 8) = v31;
          while ( 1 )
          {
            v33 = VidSchiInterlockedRemoveHeadListIfExist(v32, (_QWORD **)(v17 + 704), (_DWORD *)(v17 + 720));
            if ( !v33 )
              break;
            ExFreePoolWithTag(v33 - 1, 0);
          }
          if ( (*(_DWORD *)(v17 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v53 = VidSchiInterlockedRemoveHeadListIfExist(v32, (_QWORD **)(v17 + 728), (_DWORD *)(v17 + 744));
              if ( !v53 )
                break;
              ExFreePoolWithTag(v53 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v17);
          v47 = *(void **)(v17 + 976);
          if ( v47 )
            ExFreePoolWithTag(v47, 0);
          VidSchiDecrementDeviceReference(*(PVOID *)(v17 + 104));
          ExFreePoolWithTag((PVOID)v17, 0);
        }
      }
    }
    return v6;
  }
  if ( VidSchiCheckPreemptionPolicy(a1, &v54, v11, a4) )
  {
    v6 = 4;
    goto LABEL_20;
  }
  v14 = v54;
  if ( v54 == -1 )
  {
    if ( !*(_DWORD *)(v4 + 2832)
      && (*(_DWORD *)(v4 + 2812) > 1u
       || (v15 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560)) != 0 && a1 != v15) )
    {
      v34 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( is_mul_ok(v34.QuadPart, 0x989680uLL) )
      {
        v35 = (unsigned __int64)v34.QuadPart * (unsigned __int128)0x989680uLL
            % (unsigned __int64)PerformanceFrequency.QuadPart;
        v36 = (unsigned __int64)v34.QuadPart
            * (unsigned __int128)0x989680uLL
            / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v35 = 10000000 * (v34.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            % PerformanceFrequency.QuadPart;
        v36 = 10000000 * (v34.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
            + 10000000
            * (v34.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart;
      }
      *(_QWORD *)(v4 + 128) = v36 + *(_QWORD *)(a1 + 472);
      *(_QWORD *)(v4 + 144) = *(_QWORD *)(v4 + 96);
      v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdEvent)((LARGE_INTEGER)v34.QuadPart, v35);
      *(_QWORD *)(v37 + 24) = *(unsigned __int16 *)(v4 + 4);
      *(_QWORD *)(v37 + 32) = *(_QWORD *)(v4 + 144);
      WdLogEvent5_WdEvent(v37);
    }
  }
  else
  {
    v41 = KeQueryPerformanceCounter(&v55);
    v42 = (unsigned __int64)v41.QuadPart * (unsigned __int128)0x989680uLL;
    v57 = *((_QWORD *)&v42 + 1);
    if ( is_mul_ok(v41.QuadPart, 0x989680uLL) )
    {
      v44 = v42;
      v43 = v42 % (unsigned __int64)v55.QuadPart;
      v45 = v44 / (unsigned __int64)v55.QuadPart;
    }
    else
    {
      v43 = 10000000 * (v41.QuadPart % (unsigned __int64)v55.QuadPart) % v55.QuadPart;
      v45 = 10000000 * (v41.QuadPart / (unsigned __int64)v55.QuadPart)
          + 10000000 * (v41.QuadPart % (unsigned __int64)v55.QuadPart) / v55.QuadPart;
    }
    *(_QWORD *)(v4 + 128) = v45 + v14;
    *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 96);
    v46 = WdLogNewEntry5_WdEvent(v45, v43);
    *(_QWORD *)(v46 + 24) = *(unsigned __int16 *)(v4 + 4);
    *(_QWORD *)(v46 + 32) = *(_QWORD *)(v4 + 136);
    WdLogEvent5_WdEvent(v46);
  }
  if ( *(int *)(v4 + 2808) > 0 && *(_DWORD *)(v4 + 2824) < *(_DWORD *)(v7 + 204) && !*(_DWORD *)(v4 + 2832) )
  {
LABEL_20:
    if ( v12 )
    {
      v48 = *(_QWORD *)(a1 + 640);
      if ( (*(_DWORD *)(v48 + 80) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 6256) != -1 )
        {
          v49 = *(void (__fastcall **)(_QWORD))(v7 + 2912);
          if ( v49 )
          {
            v49(*(_QWORD *)(v7 + 2952));
            v48 = *(_QWORD *)(a1 + 640);
          }
        }
        *(_DWORD *)(v48 + 80) |= 0x10u;
      }
      if ( !*(_BYTE *)(v4 + 6260) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 14313LL);
        return 3LL;
      }
    }
    goto LABEL_21;
  }
  v22 = *(_QWORD *)(v7 + 424) & ~(1LL << *(_WORD *)(v4 + 4));
  *(_QWORD *)(v7 + 424) = v22;
  if ( (v22 & *(_QWORD *)(v7 + 416)) != 0 )
    return 3LL;
  if ( v12 )
  {
    v50 = *(_QWORD *)(a1 + 640);
    if ( (*(_DWORD *)(v50 + 80) & 0x10) == 0 )
    {
      if ( *(_DWORD *)(v4 + 6256) != -1 )
      {
        v51 = *(void (__fastcall **)(_QWORD))(v7 + 2912);
        if ( v51 )
        {
          v51(*(_QWORD *)(v7 + 2952));
          v50 = *(_QWORD *)(a1 + 640);
        }
      }
      *(_DWORD *)(v50 + 80) |= 0x10u;
    }
  }
  return 2LL;
}
