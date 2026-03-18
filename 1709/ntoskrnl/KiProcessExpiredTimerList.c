/*
 * XREFs of KiProcessExpiredTimerList @ 0x1400939C0
 * Callers:
 *     KiRetireDpcList @ 0x140094770 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x14020BD88 (KiExpireTimerTable.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x140008074 (EtwTraceTimedEvent.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x1400932D0 (KiReadyThread.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwTraceReadyThread @ 0x14027B7EC (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessExpiredTimerList(__int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v7; // r14d
  ULONG_PTR v9; // rdx
  bool v10; // bp
  __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // ebx
  ULONG_PTR v14; // rcx
  __int64 v15; // rbx
  void *v16; // rcx
  void (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD); // rax
  __int64 **v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 *v21; // rbx
  __int64 *v22; // rbp
  volatile signed __int32 *v23; // r15
  __int64 *v24; // rax
  __int64 **v25; // rcx
  unsigned __int64 v26; // rdx
  size_t v27; // r8
  int v29; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-B4h]
  unsigned int BugCheckParameter3_4; // [rsp+38h] [rbp-B0h]
  int v32; // [rsp+3Ch] [rbp-ACh] BYREF
  __int64 v33; // [rsp+40h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-98h]
  _QWORD v36[2]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v37[2]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v38; // [rsp+78h] [rbp-70h]
  char v39; // [rsp+80h] [rbp-68h]
  __int64 v40[3]; // [rsp+88h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v7 = BYTE4(PerfGlobalGroupMask) & 0x80;
  BugCheckParameter3_4 = a4;
  v9 = *(unsigned int *)(v4 + 484);
  BugCheckParameter3 = *(_DWORD *)(v4 + 484);
  v33 = a3;
  v35 = v4;
  v10 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  do
  {
    v11 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * v5), 0LL);
    v5 = (unsigned int)(v5 + 1);
    if ( v11 )
    {
      v29 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( (*(_DWORD *)v11 & 0x80u) != 0 );
      }
      if ( v10 )
      {
        v37[0] = *(_QWORD *)(v11 + 24);
        v26 = KiWaitAlways ^ _byteswap_uint64(v11 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v11 + 48), KiWaitNever));
        if ( v26 )
          v38 = *(_QWORD *)(v26 + 24);
        else
          v38 = 0LL;
      }
      v4 = KiTimerWaitTest(a1, v11, a2 + 2);
      v12 = v4;
      if ( v10 )
      {
        v37[1] = v11;
        v39 = *(_BYTE *)(v11 + 1) >> 2;
        v36[0] = v37;
        v36[1] = 32LL;
        LODWORD(v4) = EtwTraceKernelEvent((unsigned int)v36, 1, 1073872896, 3921, 1538);
      }
      if ( v12 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
        if ( v7 )
          EtwGetKernelTraceTimestamp(v40, 0x20000080u);
        v13 = *a2;
        BugCheckParameter2 = *(_QWORD *)(v12 + 24);
        v14 = BugCheckParameter2;
        *a2 = v13 + 1;
        v15 = 2 * ((v13 & 0xF) + 1LL);
        *(_QWORD *)&a2[2 * v15] = v14;
        a2[2 * v15 + 2] = MEMORY[0xFFFFF78000000320];
        v16 = *(void **)(a1 + 25000);
        *(_DWORD *)(a1 + 23452) = 0;
        if ( v16 && *(void **)(a1 + 25008) != v16 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
        {
          v27 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
          *(_QWORD *)(a1 + 25008) = v16;
          memset(v16, 0, v27);
        }
        v17 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))BugCheckParameter2;
        *(_BYTE *)(a1 + 11882) = 1;
        v17(v12, *(_QWORD *)(v12 + 32), (unsigned int)a2[2], (unsigned int)a2[3]);
        v9 = BugCheckParameter3;
        *(_BYTE *)(a1 + 11882) = 0;
        a2[2 * v15 + 3] = MEMORY[0xFFFFF78000000320];
        LODWORD(v4) = v35;
        if ( (_DWORD)v9 != *(_DWORD *)(v35 + 484) )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v9, *(unsigned int *)(v35 + 484));
        if ( v7 )
          LODWORD(v4) = EtwTraceTimedEvent(3909, 0x20000080u, (__int64)&BugCheckParameter2, 8, 4196866, (__int64)v40);
      }
      a3 = v33;
    }
  }
  while ( (unsigned int)v5 < BugCheckParameter3_4 );
  v18 = *(__int64 ***)(a1 + 11528);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v19 = *((unsigned __int8 *)v18 + 371);
      v20 = (__int64)(v18 - 27);
      v21 = *(v18 - 1);
      v18 = (__int64 **)*v18;
      v22 = &v21[6 * v19];
      do
      {
        if ( *((_BYTE *)v21 + 17) < 5u )
        {
          v23 = (volatile signed __int32 *)v21[4];
          v32 = 0;
          while ( _interlockedbittestandset(v23, 7u) )
          {
            do
              KeYieldProcessorEx(&v32);
            while ( (*v23 & 0x80u) != 0 );
          }
          if ( *((_BYTE *)v21 + 17) == 4 )
          {
            v24 = (__int64 *)*v21;
            if ( *(__int64 **)(*v21 + 8) != v21 || (v25 = (__int64 **)v21[1], *v25 != v21) )
              __fastfail(3u);
            *v25 = v24;
            v24[1] = (__int64)v25;
          }
          _InterlockedAnd(v23, 0xFFFFFF7F);
        }
        v21 += 6;
      }
      while ( v21 != v22 );
      *(_WORD *)(v20 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(v9) = 1;
        EtwTraceReadyThread(v20, v9, 0LL, 2LL);
      }
      LODWORD(v4) = KiReadyThread(a1, v20, a3);
    }
    while ( v18 );
  }
  return v4;
}
