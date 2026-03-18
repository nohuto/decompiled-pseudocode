/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C000ADA0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006EA0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C000EC50 (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000EF38 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
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
  LARGE_INTEGER v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // r8
  __int64 v34; // r8
  _QWORD *v35; // rdx
  KSPIN_LOCK *v36; // rdi
  _QWORD *v37; // rax
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
  void (__fastcall *v48)(_QWORD); // rax
  void (__fastcall *v49)(_QWORD); // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER v53; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v55; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = 1;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v7 + 2836) || (*(_BYTE *)(v7 + 2860) & 1) != 0 )
    goto LABEL_20;
  v8 = *(_QWORD *)(a1 + 632);
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
  if ( !*(_BYTE *)(v10 + 164)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 160), 0, 0)
    && !*(_DWORD *)(v11 + 2836)
    && !*(_DWORD *)(v8 + 48)
    && (*(_DWORD *)(v8 + 64) & 8) == 0 )
  {
    if ( *(_DWORD *)(v10 + 1192) || *(_BYTE *)(v11 + 51) )
      LOBYTE(a4) = 0;
    else
      a4 = 1LL;
    v19 = *(_DWORD *)(v8 + 480);
    if ( v19 > 0x10 )
    {
      if ( *(_DWORD *)(v11 + 964) )
      {
LABEL_55:
        if ( !*(_QWORD *)(a1 + 48) )
        {
          v38 = (__int64 *)(a1 + 40);
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3136LL;
          v40 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3144LL);
          if ( *v40 != (__int64 *)v39 )
            __fastfail(3u);
          *v38 = v39;
          *(_QWORD *)(a1 + 48) = v40;
          *v40 = v38;
          *(_QWORD *)(v39 + 8) = v38;
        }
        VidSchiUpdateContextStatus(a1, 3LL, 14176LL);
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
          if ( (v20 = *(_QWORD *)(*(_QWORD *)(v8 + 8LL * (unsigned int)v11 + 488) + 96LL), !(_BYTE)a4)
            || (v21 = *(_DWORD *)v20, (*(_DWORD *)v20 & 0x20000000) != 0) && v21 < 0
            || (v21 & 0x80000) != 0
            || (v21 & 0x100) != 0 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v20 + 16) + 8LL) )
              goto LABEL_55;
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *(_DWORD *)(v8 + 480) );
      }
    }
  }
  v12 = *(_DWORD *)(v4 + 5904) != -1;
  v52 = 0LL;
  if ( (*(_DWORD *)(a1 + 628) & 0xF) != 0
    || (*(_DWORD *)(a1 + 112) & 0x10) == 0
    || (v13 = *(_QWORD *)(a1 + 104), *(_BYTE *)(v13 + 164))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 160), 0, 0) )
  {
LABEL_20:
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
        if ( !*(_BYTE *)(a1 + 884) )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
          v50[3] = 281LL;
          v50[4] = 3840LL;
          v50[5] = a1;
          v50[6] = 0LL;
          v50[7] = 0LL;
          WdLogEvent5_WdCriticalError(v50);
          JUMPOUT(0x1C001C449LL);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v16 + 216) = a1;
      if ( v17 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v17 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 72), 0xFFFFFFFF) == 1 )
        {
          v31 = *(_QWORD *)(v17 + 96);
          if ( *(_QWORD *)(v31 + 224) == v17 )
            *(_QWORD *)(v31 + 224) = 0LL;
          v32 = *(_QWORD *)(v17 + 8);
          if ( *(_QWORD *)(v32 + 8) != v17 + 8 || (v33 = *(_QWORD **)(v17 + 16), *v33 != v17 + 8) )
            __fastfail(3u);
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
          v34 = *(_QWORD *)(v17 + 24);
          if ( *(_QWORD *)(v34 + 8) != v17 + 24 || (v35 = *(_QWORD **)(v17 + 32), *v35 != v17 + 24) )
            __fastfail(3u);
          *v35 = v34;
          v36 = (KSPIN_LOCK *)(v30 + 1896);
          *(_QWORD *)(v34 + 8) = v35;
          while ( 1 )
          {
            v37 = VidSchiInterlockedRemoveHeadListIfExist(v36, (_QWORD **)(v17 + 696), (_DWORD *)(v17 + 712));
            if ( !v37 )
              break;
            ExFreePoolWithTag(v37 - 1, 0);
          }
          if ( (*(_DWORD *)(v17 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v51 = VidSchiInterlockedRemoveHeadListIfExist(v36, (_QWORD **)(v17 + 720), (_DWORD *)(v17 + 736));
              if ( !v51 )
                break;
              ExFreePoolWithTag(v51 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v17);
          v47 = *(void **)(v17 + 968);
          if ( v47 )
            ExFreePoolWithTag(v47, 0);
          VidSchiDecrementDeviceReference(*(PVOID *)(v17 + 104));
          ExFreePoolWithTag((PVOID)v17, 0);
        }
      }
    }
    return v6;
  }
  if ( (unsigned int)VidSchiCheckPreemptionPolicy(a1, &v52, v11, a4) )
  {
    v6 = 4;
    goto LABEL_19;
  }
  v14 = v52;
  if ( v52 == -1 )
  {
    if ( !*(_DWORD *)(v4 + 2800)
      && (*(_DWORD *)(v4 + 2780) > 1u
       || (v15 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560)) != 0 && a1 != v15) )
    {
      v22 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( is_mul_ok(v22.QuadPart, 0x989680uLL) )
      {
        v23 = (unsigned __int64)v22.QuadPart * (unsigned __int128)0x989680uLL
            % (unsigned __int64)PerformanceFrequency.QuadPart;
        v24 = (unsigned __int64)v22.QuadPart
            * (unsigned __int128)0x989680uLL
            / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v23 = 10000000 * (v22.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            % PerformanceFrequency.QuadPart;
        v24 = 10000000 * (v22.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
            + 10000000
            * (v22.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart;
      }
      *(_QWORD *)(v4 + 128) = v24 + *(_QWORD *)(a1 + 464);
      *(_QWORD *)(v4 + 144) = *(_QWORD *)(v4 + 96);
      v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdEvent)((LARGE_INTEGER)v22.QuadPart, v23);
      *(_QWORD *)(v25 + 24) = *(unsigned __int16 *)(v4 + 4);
      *(_QWORD *)(v25 + 32) = *(_QWORD *)(v4 + 144);
      WdLogEvent5_WdEvent(v25);
    }
  }
  else
  {
    v41 = KeQueryPerformanceCounter(&v53);
    v42 = (unsigned __int64)v41.QuadPart * (unsigned __int128)0x989680uLL;
    v55 = *((_QWORD *)&v42 + 1);
    if ( is_mul_ok(v41.QuadPart, 0x989680uLL) )
    {
      v44 = v42;
      v43 = v42 % (unsigned __int64)v53.QuadPart;
      v45 = v44 / (unsigned __int64)v53.QuadPart;
    }
    else
    {
      v43 = 10000000 * (v41.QuadPart % (unsigned __int64)v53.QuadPart) % v53.QuadPart;
      v45 = 10000000 * (v41.QuadPart / (unsigned __int64)v53.QuadPart)
          + 10000000 * (v41.QuadPart % (unsigned __int64)v53.QuadPart) / v53.QuadPart;
    }
    *(_QWORD *)(v4 + 128) = v45 + v14;
    *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 96);
    v46 = WdLogNewEntry5_WdEvent(v45, v43);
    *(_QWORD *)(v46 + 24) = *(unsigned __int16 *)(v4 + 4);
    *(_QWORD *)(v46 + 32) = *(_QWORD *)(v4 + 136);
    WdLogEvent5_WdEvent(v46);
  }
  if ( *(int *)(v4 + 2776) > 0 && *(_DWORD *)(v4 + 2792) < *(_DWORD *)(v7 + 204) && !*(_DWORD *)(v4 + 2800) )
  {
LABEL_19:
    if ( v12 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 632) + 80LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 5904) != -1 )
        {
          v48 = *(void (__fastcall **)(_QWORD))(v7 + 2888);
          if ( v48 )
            v48(*(_QWORD *)(v7 + 2928));
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 632) + 80LL) |= 0x10u;
      }
      if ( !*(_BYTE *)(v4 + 5908) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 14340LL);
        return 3LL;
      }
    }
    goto LABEL_20;
  }
  v26 = *(_QWORD *)(v7 + 408) & ~(1LL << *(_WORD *)(v4 + 4));
  *(_QWORD *)(v7 + 408) = v26;
  if ( (v26 & *(_QWORD *)(v7 + 400)) != 0 )
    return 3LL;
  if ( v12 && (*(_DWORD *)(*(_QWORD *)(a1 + 632) + 80LL) & 0x10) == 0 )
  {
    if ( *(_DWORD *)(v4 + 5904) != -1 )
    {
      v49 = *(void (__fastcall **)(_QWORD))(v7 + 2888);
      if ( v49 )
        v49(*(_QWORD *)(v7 + 2928));
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 632) + 80LL) |= 0x10u;
  }
  return 2LL;
}
