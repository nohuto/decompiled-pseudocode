/*
 * XREFs of KiExecuteAllDpcs @ 0x140094F80
 * Callers:
 *     KiRetireDpcList @ 0x140094770 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x140143540 (KiExecuteDpc.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     RtlGetSystemTimePrecise @ 0x140155590 (RtlGetSystemTimePrecise.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 **v9; // rbx
  int v10; // r14d
  int *v11; // r13
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // rsi
  __int64 *v14; // rax
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // rsi
  _QWORD *v17; // r15
  __int64 v18; // r11
  _DWORD *v19; // rcx
  __int64 v20; // r14
  _DWORD *v21; // r14
  void *v22; // rcx
  ULONG_PTR v23; // r13
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  bool v26; // zf
  unsigned int v27; // ecx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned int v30; // r14d
  unsigned __int16 v31; // r15
  unsigned int v32; // esi
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r8d
  __int16 v38; // ax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  size_t v41; // r8
  __int64 v43; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h] BYREF
  int v45; // [rsp+60h] [rbp-A8h] BYREF
  int v46; // [rsp+64h] [rbp-A4h]
  unsigned int v47; // [rsp+68h] [rbp-A0h]
  unsigned int v48; // [rsp+6Ch] [rbp-9Ch]
  __int64 v49; // [rsp+70h] [rbp-98h]
  int *v50; // [rsp+78h] [rbp-90h]
  _DWORD *v51; // [rsp+80h] [rbp-88h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  ULONG_PTR v53; // [rsp+90h] [rbp-78h] BYREF
  __int64 v54; // [rsp+98h] [rbp-70h] BYREF
  LARGE_INTEGER v55; // [rsp+A0h] [rbp-68h]
  LARGE_INTEGER v56; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-58h]
  _QWORD v58[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v59[4]; // [rsp+C8h] [rbp-40h] BYREF
  void *retaddr; // [rsp+140h] [rbp+38h]

  v4 = a4;
  v51 = a3;
  v49 = a2;
  v6 = a4;
  v7 = a4 + 4 * (a4 + 368LL);
  result = *(unsigned int *)(a1 + 8 * v7 + 24);
  v9 = (__int64 **)(a1 + 8 * v7);
  if ( !(_DWORD)result )
    return result;
  v10 = 0;
  if ( SBYTE4(PerfGlobalGroupMask) < 0 )
  {
    if ( a4 )
    {
      v38 = 3906;
      v46 = 4200450;
    }
    else
    {
      v38 = 3908;
      v46 = 4196866;
    }
    LOWORD(v45) = v38;
    v11 = &v45;
  }
  else
  {
    v11 = 0LL;
  }
  v52 = *(_QWORD *)(a1 + 11664);
  v50 = v11;
  while ( 1 )
  {
    v12 = (volatile signed __int32 *)(v9 + 2);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v12);
      goto LABEL_56;
    }
    if ( _interlockedbittestandset64(v12, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v12);
LABEL_56:
      v4 = a4;
      v12 = (volatile signed __int32 *)(v9 + 2);
    }
    if ( *((int *)v9 + 6) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(a1 + 2 * v6 + 11884), 0xFFEDu);
      if ( !*((_DWORD *)v9 + 6) )
        break;
    }
    v13 = *v9;
    v14 = (__int64 *)**v9;
    *v9 = v14;
    if ( !v14 )
      v9[1] = (__int64 *)v9;
    v15 = v13[2];
    v16 = (unsigned __int64)(v13 - 1);
    BugCheckParameter2 = v15;
    v17 = *(_QWORD **)(v16 + 56);
    v18 = *(_QWORD *)(v16 + 32);
    *(_QWORD *)(v16 + 56) = 0LL;
    --*((_DWORD *)v9 + 6);
    v9[4] = (__int64 *)v16;
    v43 = v18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v12, retaddr);
      v4 = a4;
      v18 = v43;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v53 = BugCheckParameter2;
      v58[1] = 16LL;
      v54 = 0x7E35C6C7F3DD7277LL
          * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever));
      v58[0] = &v53;
      EtwTraceKernelEvent((unsigned int)v58, 1, 537133056, 3941, 4196866);
      v4 = a4;
      v18 = v43;
    }
    if ( v11 )
    {
      v25 = *(_DWORD *)(EtwpHostSiloState + 4172);
      v26 = !_BitScanForward(&v27, v25);
      v47 = v27;
      if ( !v26 )
      {
        do
        {
          v25 &= v25 - 1;
          v28 = 32LL * v27 + EtwpHostSiloState + 4208;
          if ( v28 && (*(_DWORD *)(v28 + 4) & 0x80u) != 0 )
            v10 |= 1 << *(_BYTE *)(EtwpHostSiloState + 2LL * v27 + 4157);
          v26 = !_BitScanForward(&v27, v25);
        }
        while ( !v26 );
        v47 = v27;
      }
      if ( (v10 & 2) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v4 = a4;
        v18 = v43;
        v55 = PerformanceCounter;
        v29 = 0LL;
      }
      else
      {
        v29 = 0LL;
        v55.QuadPart = 0LL;
      }
      if ( (v10 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v4 = a4;
        v18 = v43;
        v56 = SystemTimePrecise;
        v29 = 0LL;
      }
      else
      {
        v56.QuadPart = 0LL;
      }
      if ( (v10 & 8) != 0 )
        v29 = __rdtsc();
      v57 = v29;
    }
    v19 = v51;
    v20 = (*v51)++ & 0xF;
    v21 = &v19[4 * v20 + 4];
    *(_QWORD *)v21 = BugCheckParameter2;
    v21[2] = MEMORY[0xFFFFF78000000320];
    v22 = *(void **)(a1 + 25000);
    v23 = *(unsigned int *)(v49 + 484);
    *(_DWORD *)(a1 + 23452) = 0;
    if ( v22 && *(void **)(a1 + 25008) != v22 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
    {
      v41 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v22;
      memset(v22, 0, v41);
      v4 = a4;
      v18 = v43;
    }
    *(_QWORD *)(a1 + 11664) = v17;
    if ( v17 != (_QWORD *)1 )
      v17[4] = __rdtsc();
    if ( !v4 )
      *(_BYTE *)(a1 + 11882) = 1;
    ((void (__fastcall *)(unsigned __int64, __int64))BugCheckParameter2)(v16, v18);
    v4 = a4;
    if ( !a4 )
      *(_BYTE *)(a1 + 11882) = 0;
    if ( v17 != (_QWORD *)1 )
    {
      v24 = __rdtsc();
      v17[3] += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v17[4];
      ++v17[5];
    }
    v21[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v23 != *(_DWORD *)(v49 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v23, *(unsigned int *)(v49 + 484));
    v11 = v50;
    if ( v50 )
    {
      v30 = v50[1];
      v31 = *(_WORD *)v50;
      v59[2] = &BugCheckParameter2;
      v59[3] = 8LL;
      v32 = *(_DWORD *)(EtwpHostSiloState + 4172);
      v26 = !_BitScanForward(&v33, v32);
      v48 = v33;
      if ( !v26 )
      {
        do
        {
          v32 &= v32 - 1;
          v34 = v33;
          v35 = 32LL * v33 + EtwpHostSiloState + 4208;
          if ( v35 )
          {
            if ( (*(_DWORD *)(v35 + 4) & 0x80u) != 0 )
            {
              v36 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v34 + 4157);
              v37 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v34 + 4156);
              v59[1] = 8LL;
              v59[0] = &v54 + v36;
              EtwpLogKernelEvent((__int64)v59, EtwpHostSiloState, v37, 2u, v31, v30);
            }
          }
          v26 = !_BitScanForward(&v33, v32);
        }
        while ( !v26 );
        v4 = a4;
        v48 = v33;
      }
    }
    _disable();
    if ( !*((_DWORD *)v9 + 6) )
      goto LABEL_29;
    v10 = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v12);
LABEL_29:
  result = v52;
  *(_QWORD *)(a1 + 11664) = v52;
  return result;
}
