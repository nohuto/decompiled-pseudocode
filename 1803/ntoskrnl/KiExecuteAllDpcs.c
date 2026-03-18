/*
 * XREFs of KiExecuteAllDpcs @ 0x140107C40
 * Callers:
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x140179020 (KiExecuteDpc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     RtlGetSystemTimePrecise @ 0x140132A80 (RtlGetSystemTimePrecise.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // r13
  _DWORD *v5; // r11
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  __int16 v11; // ax
  __int16 *v12; // r12
  volatile signed __int32 *v13; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  __int64 **v16; // rcx
  __int64 *v17; // rax
  unsigned __int64 v18; // rsi
  __int64 *v19; // r15
  __int64 *v20; // r10
  __int64 *v21; // r8
  __int64 *v22; // r9
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rdx
  int v26; // r14d
  unsigned int v27; // r8d
  bool v28; // zf
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  _DWORD *v32; // r14
  void *v33; // rcx
  ULONG_PTR v34; // r12
  unsigned __int64 v35; // rax
  int v36; // r14d
  __int16 v37; // r15
  unsigned int v38; // esi
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  int v45; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 SystemTimePrecise; // rax
  size_t v48; // r8
  __int64 *v49; // [rsp+30h] [rbp-D0h]
  __int64 *v50; // [rsp+38h] [rbp-C8h]
  __int64 *v52; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v54; // [rsp+58h] [rbp-A8h] BYREF
  int v55; // [rsp+5Ch] [rbp-A4h]
  int v56; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+64h] [rbp-9Ch]
  __int64 v58; // [rsp+68h] [rbp-98h] BYREF
  __int64 v59; // [rsp+70h] [rbp-90h]
  __int16 *v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  _QWORD v62[2]; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER v63; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  _QWORD v67[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v68[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v4 = a4;
  v5 = a3;
  v59 = a2;
  v7 = a4;
  v8 = a4 + 4LL * a4 + 1472;
  result = *(unsigned int *)(a1 + 8 * v8 + 24);
  v10 = (volatile signed __int32 *)(a1 + 8 * v8);
  if ( !(_DWORD)result )
    return result;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      v11 = 3906;
      v55 = 4200450;
    }
    else
    {
      v11 = 3908;
      v55 = 4196866;
    }
    v54 = v11;
    v12 = &v54;
  }
  v61 = *(_QWORD *)(a1 + 11664);
  v60 = v12;
  while ( 1 )
  {
    v13 = v10 + 4;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v10 + 4);
      goto LABEL_61;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v44 = SchedulerAssist[5];
        SchedulerAssist[5] = v44 + 1;
        if ( v44 == -1 )
        {
          if ( !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
          v7 = v4;
        }
      }
    }
    if ( _interlockedbittestandset64(v13, 0LL) )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      KxWaitForSpinLockAndAcquire(v10 + 4, v43);
LABEL_61:
      v5 = a3;
      v7 = v4;
    }
    if ( *((int *)v10 + 6) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(a1 + 2 * v7 + 11884), 0xFFEDu);
      if ( !*((_DWORD *)v10 + 6) )
        break;
    }
    v16 = *(__int64 ***)v10;
    v17 = **(__int64 ***)v10;
    *(_QWORD *)v10 = v17;
    if ( !v17 )
      *((_QWORD *)v10 + 1) = v10;
    v18 = (unsigned __int64)(v16 - 1);
    BugCheckParameter2 = (ULONG_PTR)v16[2];
    v19 = v16[6];
    v20 = v16[3];
    v21 = v16[4];
    v22 = v16[5];
    v16[6] = 0LL;
    v52 = v20;
    --*((_DWORD *)v10 + 6);
    *((_QWORD *)v10 + 4) = v16 - 1;
    v49 = v21;
    v50 = v22;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v10 + 4, retaddr);
      v20 = v52;
      v21 = v49;
      v22 = v50;
      v5 = a3;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    }
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v45 = v24[5] - 1;
        v24[5] = v45;
        if ( !v45 )
        {
          if ( !*((_BYTE *)v24 + 25) && !*((_BYTE *)v24 + 27) )
          {
            KiPerformUnboostKick(v23);
            v22 = v50;
          }
          v21 = v49;
        }
      }
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v62[0] = BugCheckParameter2;
      v67[1] = 16LL;
      v62[1] = 0x7E35C6C7F3DD7277LL
             * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v18 ^ KiWaitAlways), KiWaitNever));
      v67[0] = v62;
      EtwTraceKernelEvent((int)v67, 1, 0x20040000u, 3941, 4196866);
      v20 = v52;
      v21 = v49;
      v22 = v50;
      v5 = a3;
    }
    if ( v12 )
    {
      v25 = qword_1404668A0;
      v26 = 0;
      if ( qword_1404668A0 )
      {
        v27 = *(_DWORD *)(qword_1404668A0 + 4188);
        v28 = !_BitScanForward((unsigned int *)&v23, v27);
        v56 = (int)v23;
        if ( !v28 )
        {
          do
          {
            v27 &= v27 - 1;
            v29 = qword_1404668A0 + 32LL * ((_QWORD)&v23->HalReserved[7] + 4);
            if ( v29 && (*(_DWORD *)(v29 + 4) & 0x80u) != 0 )
              v26 |= 1 << *(_BYTE *)(qword_1404668A0 + 2LL * (_QWORD)v23 + 4173);
            v28 = !_BitScanForward((unsigned int *)&v23, v27);
          }
          while ( !v28 );
          v22 = v50;
          v56 = (int)v23;
        }
        v21 = v49;
      }
      else
      {
        LOBYTE(v26) = 30;
      }
      if ( (v26 & 2) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v20 = v52;
        v21 = v49;
        v22 = v50;
        v5 = a3;
        v63 = PerformanceCounter;
      }
      else
      {
        v63.QuadPart = 0LL;
      }
      if ( (v26 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise(v23);
        v20 = v52;
        v21 = v49;
        v22 = v50;
        v5 = a3;
        v64 = SystemTimePrecise;
      }
      else
      {
        v64 = 0LL;
      }
      if ( (v26 & 8) != 0 )
      {
        v30 = __rdtsc();
        v25 = (unsigned __int64)HIDWORD(v30) << 32;
        v65 = v30;
      }
      else
      {
        v65 = 0LL;
      }
      if ( (v26 & 0x10) != 0 )
      {
        v58 = 0LL;
        ((void (__fastcall *)(__int64 *, unsigned __int64, __int64 *, __int64 *))off_140398AC0)(&v58, v25, v21, v22);
        v20 = v52;
        v5 = a3;
        v66 = v58;
      }
      else
      {
        v66 = 0LL;
      }
    }
    v31 = ((*v5)++ & 0xF) + 1LL;
    v32 = &v5[4 * v31];
    *(_QWORD *)v32 = BugCheckParameter2;
    v32[2] = MEMORY[0xFFFFF78000000320];
    v33 = *(void **)(a1 + 25000);
    v34 = *(unsigned int *)(v59 + 484);
    *(_DWORD *)(a1 + 23452) = 0;
    if ( v33 && *(void **)(a1 + 25008) != v33 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
    {
      v48 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v33;
      memset(v33, 0, v48);
      v20 = v52;
    }
    *(_QWORD *)(a1 + 11664) = v19;
    if ( v19 != (__int64 *)1 )
      v19[4] = __rdtsc();
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 1;
    ((void (__fastcall *)(unsigned __int64, __int64 *))BugCheckParameter2)(v18, v20);
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 0;
    if ( v19 != (__int64 *)1 )
    {
      v35 = __rdtsc();
      v19[3] += (((unsigned __int64)HIDWORD(v35) << 32) | (unsigned int)v35) - v19[4];
      ++v19[5];
    }
    v32[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v34 != *(_DWORD *)(v59 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v34, *(unsigned int *)(v59 + 484));
    v12 = v60;
    if ( v60 )
    {
      v36 = *((_DWORD *)v60 + 1);
      v37 = *v60;
      v68[2] = &BugCheckParameter2;
      v68[3] = 8LL;
      v38 = *(_DWORD *)(EtwpHostSiloState + 4188);
      v28 = !_BitScanForward((unsigned int *)&v39, v38);
      v57 = v39;
      if ( !v28 )
      {
        do
        {
          v38 &= v38 - 1;
          v40 = EtwpHostSiloState + 32 * (v39 + 132);
          if ( v40 )
          {
            if ( (*(_DWORD *)(v40 + 4) & 0x80u) != 0 )
            {
              v41 = *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v39 + 4172);
              v42 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v39 + 4173) - 1;
              v68[1] = 8LL;
              v68[0] = &v63 + v42;
              EtwpLogKernelEvent((unsigned int)v68, EtwpHostSiloState, v41, 2, v37, v36);
            }
          }
          v28 = !_BitScanForward((unsigned int *)&v39, v38);
        }
        while ( !v28 );
        v57 = v39;
      }
    }
    _disable();
    if ( !*((_DWORD *)v10 + 6) )
      goto LABEL_55;
    v5 = a3;
    v7 = v4;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v10 + 2);
LABEL_55:
  result = v61;
  *(_QWORD *)(a1 + 11664) = v61;
  return result;
}
