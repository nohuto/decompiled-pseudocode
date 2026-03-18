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
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rdx
  __int64 v22; // r14
  _DWORD *v23; // r14
  void *v24; // rcx
  unsigned __int64 v25; // rax
  ULONG_PTR v26; // rcx
  unsigned int v27; // esi
  int v28; // r14d
  bool v29; // zf
  __int64 v30; // rcx
  __int16 v31; // r15
  char *v32; // rax
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rdx
  int v36; // r14d
  __int64 v37; // rcx
  char *v38; // rax
  unsigned __int64 v39; // rax
  __int16 v40; // ax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 SystemTimePrecise; // rax
  size_t v43; // r8
  __int64 v45; // [rsp+38h] [rbp-C8h]
  __int64 v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  __int16 *v48; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+68h] [rbp-98h]
  unsigned int BugCheckParameter3; // [rsp+6Ch] [rbp-94h]
  int BugCheckParameter3_4; // [rsp+70h] [rbp-90h]
  __int64 **v55; // [rsp+78h] [rbp-88h]
  _DWORD *v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  _QWORD v58[2]; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-50h]
  _QWORD v62[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v63[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v4 = a4;
  v5 = a2;
  v56 = a3;
  v7 = a4;
  v8 = a4 + 4LL * a4 + 1472;
  result = *(unsigned int *)(a1 + 8 * v8 + 24);
  v10 = (__int64 **)(a1 + 8 * v8);
  v55 = v10;
  if ( !(_DWORD)result )
    return result;
  if ( SBYTE4(PerfGlobalGroupMask) < 0 )
  {
    if ( a4 )
    {
      v40 = 3906;
      v51 = 4200450;
    }
    else
    {
      v40 = 3908;
      v51 = 4196866;
    }
    v50 = v40;
    v11 = &v50;
  }
  else
  {
    v11 = 0LL;
  }
  v57 = *(_QWORD *)(a1 + 11664);
  v48 = v11;
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
    v19 = *(_QWORD *)(v16 + 40);
    v20 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 56) = 0LL;
    --*((_DWORD *)v10 + 6);
    v10[4] = (__int64 *)v16;
    v46 = v18;
    v45 = v19;
    v47 = v20;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v12, retaddr);
      v18 = v46;
      v19 = v45;
      v20 = v47;
      v5 = a2;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v58[0] = BugCheckParameter2;
      v62[1] = 16LL;
      v58[1] = 0x7E35C6C7F3DD7277LL
             * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever));
      v62[0] = v58;
      EtwTraceKernelEvent((int)v62, 1, 0x20040000u, 3941, 4196866);
      v18 = v46;
      v19 = v45;
      v20 = v47;
      v5 = a2;
    }
    if ( v11 )
    {
      v35 = (unsigned int)EtwpActiveSystemLoggers;
      v36 = 0;
      v29 = !_BitScanForward((unsigned int *)&v37, EtwpActiveSystemLoggers);
      v52 = v37;
      if ( !v29 )
      {
        do
        {
          v35 = ((_DWORD)v35 - 1) & (unsigned int)v35;
          v38 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v37;
          if ( v38 && (*((_DWORD *)v38 + 1) & 0x80u) != 0 )
            v36 |= 1 << EtwpSystemLogger[2 * v37 + 1];
          v29 = !_BitScanForward((unsigned int *)&v37, v35);
        }
        while ( !v29 );
        v10 = v55;
        v7 = v4;
        v19 = v45;
        v52 = v37;
      }
      if ( (v36 & 2) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v18 = v46;
        v19 = v45;
        v20 = v47;
        v5 = a2;
        v59 = PerformanceCounter;
        v39 = 0LL;
      }
      else
      {
        v39 = 0LL;
        v59.QuadPart = 0LL;
      }
      if ( (v36 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise(v37, v35, v19, v20);
        v18 = v46;
        v5 = a2;
        v60 = SystemTimePrecise;
        v39 = 0LL;
      }
      else
      {
        v60 = 0LL;
      }
      if ( (v36 & 8) != 0 )
        v39 = __rdtsc();
      v61 = v39;
    }
    v21 = v56;
    v22 = ((*v56)++ & 0xF) + 1LL;
    v23 = &v21[4 * v22];
    *(_QWORD *)v23 = BugCheckParameter2;
    v23[2] = MEMORY[0xFFFFF78000000320];
    v24 = *(void **)(a1 + 25256);
    BugCheckParameter3 = *(_DWORD *)(v5 + 484);
    *(_DWORD *)(a1 + 23456) = 0;
    if ( v24 && *(void **)(a1 + 25264) != v24 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
    {
      v43 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25264) = v24;
      memset(v24, 0, v43);
      v18 = v46;
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
      v25 = __rdtsc();
      v17[3] += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v17[4];
      ++v17[5];
    }
    v5 = a2;
    v26 = BugCheckParameter3;
    v23[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v26 != *(_DWORD *)(a2 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v26, *(unsigned int *)(a2 + 484));
    v11 = v48;
    if ( v48 )
    {
      v27 = EtwpActiveSystemLoggers;
      v28 = *((_DWORD *)v48 + 1);
      v29 = !_BitScanForward((unsigned int *)&v30, EtwpActiveSystemLoggers);
      v31 = *v48;
      BugCheckParameter3_4 = v30;
      v63[2] = &BugCheckParameter2;
      v63[3] = 8LL;
      if ( !v29 )
      {
        do
        {
          v27 &= v27 - 1;
          v32 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v30;
          if ( v32 )
          {
            if ( (*((_DWORD *)v32 + 1) & 0x80u) != 0 )
            {
              v33 = (unsigned __int8)EtwpSystemLogger[2 * (unsigned int)v30];
              v34 = (unsigned __int8)EtwpSystemLogger[2 * v30 + 1] - 1;
              v63[1] = 8LL;
              v63[0] = &v59 + v34;
              EtwpLogKernelEvent((unsigned int)v63, v30, v33, 2, v31, v28);
            }
          }
          v29 = !_BitScanForward((unsigned int *)&v30, v27);
        }
        while ( !v29 );
        v10 = v55;
        v7 = v4;
        v5 = a2;
        BugCheckParameter3_4 = v30;
      }
      v11 = v48;
    }
    _disable();
    if ( !*((_DWORD *)v10 + 6) )
      goto LABEL_29;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v12);
LABEL_29:
  result = v57;
  *(_QWORD *)(a1 + 11664) = v57;
  return result;
}
