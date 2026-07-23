/*
 * XREFs of KiExecuteAllDpcs @ 0x1400F1ED0
 * Callers:
 *     KiRetireDpcList @ 0x1400F18D0 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x14015D830 (KiExecuteDpc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // r13
  __int64 v5; // r11
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 **v10; // rbx
  __int16 *v11; // r14
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // rsi
  __int64 *v14; // rax
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // rsi
  _QWORD *v17; // r15
  __int64 v18; // r10
  _DWORD *v19; // rdx
  __int64 v20; // r14
  _DWORD *v21; // r14
  void *v22; // rcx
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // rcx
  unsigned int v25; // esi
  int v26; // r14d
  bool v27; // zf
  __int64 v28; // rcx
  __int16 v29; // r15
  char *v30; // rax
  int v31; // r8d
  int v32; // eax
  unsigned int v33; // edx
  int v34; // r14d
  __int64 v35; // rcx
  char *v36; // rax
  unsigned __int64 v37; // rax
  __int16 v38; // ax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  size_t v41; // r8
  __int64 v43; // [rsp+40h] [rbp-C0h]
  __int16 *v44; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v46; // [rsp+60h] [rbp-A0h] BYREF
  int v47; // [rsp+64h] [rbp-9Ch]
  int v48; // [rsp+68h] [rbp-98h]
  unsigned int BugCheckParameter3; // [rsp+6Ch] [rbp-94h]
  int BugCheckParameter3_4; // [rsp+70h] [rbp-90h]
  __int64 **v51; // [rsp+78h] [rbp-88h]
  _DWORD *v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  _QWORD v54[2]; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER v55; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER v56; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-50h]
  _QWORD v58[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v59[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v4 = a4;
  v5 = a2;
  v52 = a3;
  v7 = a4;
  v8 = a4 + 4LL * a4 + 1472;
  result = *(unsigned int *)(a1 + 8 * v8 + 24);
  v10 = (__int64 **)(a1 + 8 * v8);
  v51 = v10;
  if ( !(_DWORD)result )
    return result;
  if ( SBYTE4(PerfGlobalGroupMask) < 0 )
  {
    if ( a4 )
    {
      v38 = 3906;
      v47 = 4200450;
    }
    else
    {
      v38 = 3908;
      v47 = 4196866;
    }
    v46 = v38;
    v11 = &v46;
  }
  else
  {
    v11 = 0LL;
  }
  v53 = *(_QWORD *)(a1 + 11664);
  v44 = v11;
  while ( 1 )
  {
    v12 = (volatile signed __int32 *)(v10 + 2);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v12);
      goto LABEL_56;
    }
    if ( _interlockedbittestandset64(v12, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v12);
LABEL_56:
      v5 = a2;
      v12 = (volatile signed __int32 *)(v10 + 2);
    }
    if ( *((int *)v10 + 6) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(a1 + 2 * v7 + 11884), 0xFFEDu);
      if ( !*((_DWORD *)v10 + 6) )
        break;
    }
    v13 = *v10;
    v14 = (__int64 *)**v10;
    *v10 = v14;
    if ( !v14 )
      v10[1] = (__int64 *)v10;
    v15 = v13[2];
    v16 = (unsigned __int64)(v13 - 1);
    BugCheckParameter2 = v15;
    v17 = *(_QWORD **)(v16 + 56);
    v18 = *(_QWORD *)(v16 + 32);
    *(_QWORD *)(v16 + 56) = 0LL;
    --*((_DWORD *)v10 + 6);
    v10[4] = (__int64 *)v16;
    v43 = v18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v12, retaddr);
      v18 = v43;
      v5 = a2;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v54[0] = BugCheckParameter2;
      v58[1] = 16LL;
      v54[1] = 0x7E35C6C7F3DD7277LL
             * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever));
      v58[0] = v54;
      EtwTraceKernelEvent((int)v58, 1, 0x20040000u, 3941, 4196866);
      v18 = v43;
      v5 = a2;
    }
    if ( v11 )
    {
      v33 = EtwpActiveSystemLoggers;
      v34 = 0;
      v27 = !_BitScanForward((unsigned int *)&v35, EtwpActiveSystemLoggers);
      v48 = v35;
      if ( !v27 )
      {
        do
        {
          v33 &= v33 - 1;
          v36 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v35;
          if ( v36 && (*((_DWORD *)v36 + 1) & 0x80u) != 0 )
            v34 |= 1 << EtwpSystemLogger[2 * v35 + 1];
          v27 = !_BitScanForward((unsigned int *)&v35, v33);
        }
        while ( !v27 );
        v10 = v51;
        v7 = v4;
        v48 = v35;
      }
      if ( (v34 & 2) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v18 = v43;
        v5 = a2;
        v55 = PerformanceCounter;
        v37 = 0LL;
      }
      else
      {
        v37 = 0LL;
        v55.QuadPart = 0LL;
      }
      if ( (v34 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v18 = v43;
        v5 = a2;
        v56 = SystemTimePrecise;
        v37 = 0LL;
      }
      else
      {
        v56.QuadPart = 0LL;
      }
      if ( (v34 & 8) != 0 )
        v37 = __rdtsc();
      v57 = v37;
    }
    v19 = v52;
    v20 = ((*v52)++ & 0xF) + 1LL;
    v21 = &v19[4 * v20];
    *(_QWORD *)v21 = BugCheckParameter2;
    v21[2] = MEMORY[0xFFFFF78000000320];
    v22 = *(void **)(a1 + 25256);
    BugCheckParameter3 = *(_DWORD *)(v5 + 484);
    *(_DWORD *)(a1 + 23456) = 0;
    if ( v22 && *(void **)(a1 + 25264) != v22 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
    {
      v41 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25264) = v22;
      memset(v22, 0, v41);
      v18 = v43;
    }
    *(_QWORD *)(a1 + 11664) = v17;
    if ( v17 != (_QWORD *)1 )
      v17[4] = __rdtsc();
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 1;
    ((void (__fastcall *)(unsigned __int64, __int64))BugCheckParameter2)(v16, v18);
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 0;
    if ( v17 != (_QWORD *)1 )
    {
      v23 = __rdtsc();
      v17[3] += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v17[4];
      ++v17[5];
    }
    v5 = a2;
    v24 = BugCheckParameter3;
    v21[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v24 != *(_DWORD *)(a2 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v24, *(unsigned int *)(a2 + 484));
    v11 = v44;
    if ( v44 )
    {
      v25 = EtwpActiveSystemLoggers;
      v26 = *((_DWORD *)v44 + 1);
      v27 = !_BitScanForward((unsigned int *)&v28, EtwpActiveSystemLoggers);
      v29 = *v44;
      BugCheckParameter3_4 = v28;
      v59[2] = &BugCheckParameter2;
      v59[3] = 8LL;
      if ( !v27 )
      {
        do
        {
          v25 &= v25 - 1;
          v30 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v28;
          if ( v30 )
          {
            if ( (*((_DWORD *)v30 + 1) & 0x80u) != 0 )
            {
              v31 = (unsigned __int8)EtwpSystemLogger[2 * (unsigned int)v28];
              v32 = (unsigned __int8)EtwpSystemLogger[2 * v28 + 1] - 1;
              v59[1] = 8LL;
              v59[0] = &v55 + v32;
              EtwpLogKernelEvent((unsigned int)v59, v28, v31, 2, v29, v26);
            }
          }
          v27 = !_BitScanForward((unsigned int *)&v28, v25);
        }
        while ( !v27 );
        v10 = v51;
        v7 = v4;
        v5 = a2;
        BugCheckParameter3_4 = v28;
      }
      v11 = v44;
    }
    _disable();
    if ( !*((_DWORD *)v10 + 6) )
      goto LABEL_29;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v12);
LABEL_29:
  result = v53;
  *(_QWORD *)(a1 + 11664) = v53;
  return result;
}
