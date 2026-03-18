/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C00098D0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0008F20 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006030 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006410 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00103AC (VidSchiDecrementDeviceReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0022830 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r10
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rdx
  KSPIN_LOCK *v32; // rdi
  __int64 *v33; // rax
  LARGE_INTEGER v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  LARGE_INTEGER v38; // rcx
  unsigned __int128 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int128 v41; // rtt
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 v45; // rcx
  __int64 **v46; // rax
  void *v47; // rcx
  void (__fastcall *v48)(_QWORD); // rax
  void (__fastcall *v49)(_QWORD); // rax
  _QWORD *v50; // rax
  __int64 *v51; // rax
  __int64 v52; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER v53; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v55; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = 1;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v7 + 2820) || (*(_BYTE *)(v7 + 2844) & 1) != 0 )
    goto LABEL_8;
  v8 = *(_QWORD *)(a1 + 656);
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
  if ( !*(_BYTE *)(v10 + 164)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 160), 0, 0)
    && !*(_DWORD *)(v11 + 2820)
    && !*(_DWORD *)(v8 + 48)
    && (*(_DWORD *)(v8 + 64) & 8) == 0 )
  {
    if ( *(_DWORD *)(v10 + 1192) || *(_BYTE *)(v11 + 51) )
      LOBYTE(a4) = 0;
    else
      a4 = 1LL;
    v19 = *(_DWORD *)(v8 + 456);
    if ( v19 > 0x10 )
    {
      if ( *(_DWORD *)(v11 + 964) )
      {
LABEL_61:
        if ( !*(_QWORD *)(a1 + 48) )
        {
          v44 = (__int64 *)(a1 + 40);
          v45 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3120LL;
          v46 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3128LL);
          if ( *v46 != (__int64 *)v45 )
            __fastfail(3u);
          *v44 = v45;
          *(_QWORD *)(a1 + 48) = v46;
          *v46 = v44;
          *(_QWORD *)(v45 + 8) = v44;
        }
        VidSchiUpdateContextStatus(a1, 3LL, 13866LL);
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
          if ( (v20 = *(_QWORD *)(*(_QWORD *)(v8 + 8LL * (unsigned int)v11 + 464) + 96LL), !(_BYTE)a4)
            || (v21 = *(_DWORD *)v20, (*(_DWORD *)v20 & 0x20000000) != 0) && v21 >= 0x80000000
            || (v21 & 0x80000) != 0
            || (v21 & 0x100) != 0 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v20 + 16) + 8LL) )
              goto LABEL_61;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *(_DWORD *)(v8 + 456) );
      }
    }
  }
  v12 = *(_DWORD *)(v4 + 2792) != -1;
  v52 = 0LL;
  if ( (*(_DWORD *)(a1 + 652) & 0xF) != 0
    || (*(_DWORD *)(a1 + 112) & 0x10) == 0
    || (v16 = *(_QWORD *)(a1 + 104), *(_BYTE *)(v16 + 164))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 160), 0, 0) )
  {
LABEL_8:
    v13 = *(_QWORD *)(a1 + 96);
    v14 = *(_QWORD *)(v13 + 216);
    if ( v14 != a1 )
    {
      VidSchiProfilePerformanceTick(
        3LL,
        *(_QWORD *)(v13 + 24),
        *(_QWORD *)(a1 + 96),
        a4,
        a1,
        0LL,
        0LL,
        *(_QWORD *)(v13 + 216));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 908) )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
          v50[3] = 281LL;
          v50[4] = 3840LL;
          v50[5] = a1;
          v50[6] = 0LL;
          v50[7] = 0LL;
          WdLogEvent5_WdCriticalError(v50);
          JUMPOUT(0x1C001A29FLL);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v13 + 216) = a1;
      if ( v14 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 72), 0xFFFFFFFF) == 1 )
        {
          v27 = *(_QWORD *)(v14 + 96);
          if ( *(_QWORD *)(v27 + 224) == v14 )
            *(_QWORD *)(v27 + 224) = 0LL;
          v28 = *(_QWORD *)(v14 + 8);
          v29 = *(_QWORD **)(v14 + 16);
          if ( *(_QWORD *)(v28 + 8) != v14 + 8 || *v29 != v14 + 8 )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          v30 = *(_QWORD *)(v14 + 24);
          v31 = *(_QWORD **)(v14 + 32);
          if ( *(_QWORD *)(v30 + 8) != v14 + 24 || *v31 != v14 + 24 )
            __fastfail(3u);
          *v31 = v30;
          v32 = (KSPIN_LOCK *)(v26 + 1888);
          *(_QWORD *)(v30 + 8) = v31;
          while ( 1 )
          {
            v33 = VidSchiInterlockedRemoveHeadListIfExist(v32, (__int64 **)(v14 + 720), (_DWORD *)(v14 + 736));
            if ( !v33 )
              break;
            ExFreePoolWithTag(v33 - 1, 0);
          }
          if ( (*(_DWORD *)(v14 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v51 = VidSchiInterlockedRemoveHeadListIfExist(v32, (__int64 **)(v14 + 744), (_DWORD *)(v14 + 760));
              if ( !v51 )
                break;
              ExFreePoolWithTag(v51 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v14);
          v47 = *(void **)(v14 + 992);
          if ( v47 )
            ExFreePoolWithTag(v47, 0);
          VidSchiDecrementDeviceReference(*(PVOID *)(v14 + 104));
          ExFreePoolWithTag((PVOID)v14, 0);
        }
      }
    }
    return v6;
  }
  if ( VidSchiCheckPreemptionPolicy(a1, &v52, v11, a4) )
  {
    v6 = 4;
    goto LABEL_23;
  }
  v17 = v52;
  if ( v52 != -1 )
  {
    v38 = KeQueryPerformanceCounter(&v53);
    v39 = (unsigned __int64)v38.QuadPart * (unsigned __int128)0x989680uLL;
    v55 = *((_QWORD *)&v39 + 1);
    if ( is_mul_ok(v38.QuadPart, 0x989680uLL) )
    {
      v41 = v39;
      v40 = v39 % (unsigned __int64)v53.QuadPart;
      v42 = v41 / (unsigned __int64)v53.QuadPart;
    }
    else
    {
      v40 = 10000000 * (v38.QuadPart % (unsigned __int64)v53.QuadPart) % v53.QuadPart;
      v42 = 10000000 * (v38.QuadPart / (unsigned __int64)v53.QuadPart)
          + 10000000 * (v38.QuadPart % (unsigned __int64)v53.QuadPart) / v53.QuadPart;
    }
    *(_QWORD *)(v4 + 128) = v42 + v17;
    *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 96);
    v43 = WdLogNewEntry5_WdEvent(v42, v40);
    *(_QWORD *)(v43 + 24) = *(unsigned __int16 *)(v4 + 4);
    *(_QWORD *)(v43 + 32) = *(_QWORD *)(v4 + 136);
    WdLogEvent5_WdEvent(v43);
  }
  v18 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
  if ( v17 == -1 && !*(_DWORD *)(v4 + 2776) && (*(_DWORD *)(v4 + 2756) > 1u || v18 && a1 != v18) )
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
      v35 = 10000000 * (v34.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
      v36 = 10000000 * (v34.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
          + 10000000 * (v34.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    }
    *(_QWORD *)(v4 + 128) = v36 + *(_QWORD *)(a1 + 488);
    *(_QWORD *)(v4 + 144) = *(_QWORD *)(v4 + 96);
    v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdEvent)((LARGE_INTEGER)v34.QuadPart, v35);
    *(_QWORD *)(v37 + 24) = *(unsigned __int16 *)(v4 + 4);
    *(_QWORD *)(v37 + 32) = *(_QWORD *)(v4 + 144);
    WdLogEvent5_WdEvent(v37);
  }
  if ( *(int *)(v4 + 2752) > 0 && *(_DWORD *)(v4 + 2768) < 0xEu && !*(_DWORD *)(v4 + 2776) )
  {
LABEL_23:
    if ( v12 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 2792) != -1 )
        {
          v48 = *(void (__fastcall **)(_QWORD))(v7 + 2872);
          if ( v48 )
            v48(*(_QWORD *)(v7 + 2912));
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) |= 0x10u;
      }
      if ( !*(_BYTE *)(v4 + 2796) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 14030LL);
        return 3LL;
      }
    }
    goto LABEL_8;
  }
  v22 = *(_QWORD *)(v7 + 400) & ~(1LL << *(_WORD *)(v4 + 4));
  *(_QWORD *)(v7 + 400) = v22;
  if ( (v22 & *(_QWORD *)(v7 + 392)) != 0 )
    return 3LL;
  if ( v12 && (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) & 0x10) == 0 )
  {
    if ( *(_DWORD *)(v4 + 2792) != -1 )
    {
      v49 = *(void (__fastcall **)(_QWORD))(v7 + 2872);
      if ( v49 )
        v49(*(_QWORD *)(v7 + 2912));
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 656) + 80LL) |= 0x10u;
  }
  return 2LL;
}
