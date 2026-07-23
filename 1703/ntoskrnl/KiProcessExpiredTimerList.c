/*
 * XREFs of KiProcessExpiredTimerList @ 0x1400E40B0
 * Callers:
 *     KiRetireDpcList @ 0x1400F18D0 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x14013B878 (KiExpireTimerTable.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     EtwTraceTimedEvent @ 0x140020870 (EtwTraceTimedEvent.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiReadyThread @ 0x1400E2E20 (KiReadyThread.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwTraceReadyThread @ 0x140253B0C (EtwTraceReadyThread.c)
 */

void __fastcall KiProcessExpiredTimerList(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  char v7; // di
  ULONG_PTR v9; // rdx
  bool v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 **v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // rbx
  __int64 *v17; // rdi
  volatile signed __int32 *v18; // r15
  __int64 *v19; // rcx
  __int64 **v20; // rax
  ULONG_PTR v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rbx
  void *v25; // rcx
  void (__fastcall *v26)(__int64, _QWORD, _QWORD, _QWORD); // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  size_t v29; // r8
  int v30; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-B4h]
  unsigned int BugCheckParameter3_4; // [rsp+38h] [rbp-B0h]
  int v33; // [rsp+3Ch] [rbp-ACh] BYREF
  __int64 v34; // [rsp+40h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-98h]
  _QWORD v37[2]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v38[2]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v39; // [rsp+78h] [rbp-70h]
  char v40; // [rsp+80h] [rbp-68h]
  LARGE_INTEGER v41[3]; // [rsp+88h] [rbp-60h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0LL;
  v7 = BYTE4(PerfGlobalGroupMask) >> 7;
  BugCheckParameter3_4 = a4;
  v9 = *(unsigned int *)(v5 + 484);
  BugCheckParameter3 = *(_DWORD *)(v5 + 484);
  v34 = a3;
  v36 = v5;
  v10 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  do
  {
    v11 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * v6), 0LL);
    v6 = (unsigned int)(v6 + 1);
    if ( v11 )
    {
      v30 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( (*(_DWORD *)v11 & 0x80u) != 0 );
      }
      if ( v10 )
      {
        v38[0] = *(_QWORD *)(v11 + 24);
        v28 = KiWaitAlways ^ _byteswap_uint64(v11 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v11 + 48), KiWaitNever));
        if ( v28 )
          v39 = *(_QWORD *)(v28 + 24);
        else
          v39 = 0LL;
      }
      v12 = KiTimerWaitTest(a1, v11, a2 + 2);
      if ( v10 )
      {
        v38[1] = v11;
        v40 = *(_BYTE *)(v11 + 1) >> 2;
        v37[0] = v38;
        v37[1] = 32LL;
        EtwTraceKernelEvent((int)v37, 1, 0x40020000u, 3921, 1538);
      }
      if ( v12 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          KiProcessThreadWaitList(a1, 1u, 0, 2u);
        if ( v7 )
          EtwGetKernelTraceTimestamp(v41, 0x20000080u);
        v22 = *a2 & 0xF;
        v23 = *a2 + 1;
        BugCheckParameter2 = *(_QWORD *)(v12 + 24);
        v21 = BugCheckParameter2;
        *a2 = v23;
        v24 = 2 * (v22 + 1);
        *(_QWORD *)&a2[2 * v24] = v21;
        a2[2 * v24 + 2] = MEMORY[0xFFFFF78000000320];
        v25 = *(void **)(a1 + 25256);
        *(_DWORD *)(a1 + 23456) = 0;
        if ( v25 && *(void **)(a1 + 25264) != v25 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
        {
          v29 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
          *(_QWORD *)(a1 + 25264) = v25;
          memset(v25, 0, v29);
        }
        v26 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))BugCheckParameter2;
        *(_BYTE *)(a1 + 11882) = 1;
        v26(v12, *(_QWORD *)(v12 + 32), (unsigned int)a2[2], (unsigned int)a2[3]);
        v27 = v36;
        v9 = BugCheckParameter3;
        *(_BYTE *)(a1 + 11882) = 0;
        a2[2 * v24 + 3] = MEMORY[0xFFFFF78000000320];
        if ( (_DWORD)v9 != *(_DWORD *)(v27 + 484) )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v9, *(unsigned int *)(v27 + 484));
        if ( v7 )
          EtwTraceTimedEvent(3909, 0x20000080u, (__int64)&BugCheckParameter2, 8, 4196866, (__int64)v41);
      }
      a3 = v34;
    }
  }
  while ( (unsigned int)v6 < BugCheckParameter3_4 );
  v13 = *(__int64 ***)(a1 + 11528);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v14 = *((unsigned __int8 *)v13 + 371);
      v15 = (__int64)(v13 - 27);
      v16 = *(v13 - 1);
      v13 = (__int64 **)*v13;
      v17 = &v16[6 * v14];
      do
      {
        if ( *((_BYTE *)v16 + 17) < 5u )
        {
          v18 = (volatile signed __int32 *)v16[4];
          v33 = 0;
          while ( _interlockedbittestandset(v18, 7u) )
          {
            do
              KeYieldProcessorEx(&v33);
            while ( (*v18 & 0x80u) != 0 );
          }
          if ( *((_BYTE *)v16 + 17) == 4 )
          {
            v19 = (__int64 *)*v16;
            v20 = (__int64 **)v16[1];
            if ( *(__int64 **)(*v16 + 8) != v16 || *v20 != v16 )
              __fastfail(3u);
            *v20 = v19;
            v19[1] = (__int64)v20;
          }
          _InterlockedAnd(v18, 0xFFFFFF7F);
        }
        v16 += 6;
      }
      while ( v16 != v17 );
      *(_WORD *)(v15 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(v9) = 1;
        EtwTraceReadyThread(v15, v9, 0LL, 2LL);
      }
      KiReadyThread(a1, v15, a3, a4);
    }
    while ( v13 );
  }
}
