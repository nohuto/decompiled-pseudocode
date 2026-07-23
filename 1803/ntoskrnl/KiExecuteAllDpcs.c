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
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  _DWORD *v33; // r14
  void *v34; // rcx
  ULONG_PTR v35; // r12
  unsigned __int64 v36; // rax
  int v37; // r14d
  __int16 v38; // r15
  unsigned int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  int v46; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  size_t v49; // r8
  __int64 *v50; // [rsp+30h] [rbp-D0h]
  __int64 *v51; // [rsp+38h] [rbp-C8h]
  __int64 *v53; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v55; // [rsp+58h] [rbp-A8h] BYREF
  int v56; // [rsp+5Ch] [rbp-A4h]
  int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+64h] [rbp-9Ch]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h]
  __int16 *v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  _QWORD v63[2]; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER v64; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER v65; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-58h]
  __int64 v67; // [rsp+B0h] [rbp-50h]
  _QWORD v68[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v69[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v4 = a4;
  v5 = a3;
  v60 = a2;
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
      v56 = 4200450;
    }
    else
    {
      v11 = 3908;
      v56 = 4196866;
    }
    v55 = v11;
    v12 = &v55;
  }
  v62 = *(_QWORD *)(a1 + 11664);
  v61 = v12;
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
        v45 = SchedulerAssist[5];
        SchedulerAssist[5] = v45 + 1;
        if ( v45 == -1 )
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
      KxWaitForSpinLockAndAcquire(v10 + 4, v44);
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
    v53 = v20;
    --*((_DWORD *)v10 + 6);
    *((_QWORD *)v10 + 4) = v16 - 1;
    v50 = v21;
    v51 = v22;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v10 + 4, retaddr);
      v20 = v53;
      v21 = v50;
      v22 = v51;
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
        v46 = v24[5] - 1;
        v24[5] = v46;
        if ( !v46 )
        {
          if ( !*((_BYTE *)v24 + 25) && !*((_BYTE *)v24 + 27) )
          {
            KiPerformUnboostKick(v23);
            v22 = v51;
          }
          v21 = v50;
        }
      }
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v63[0] = BugCheckParameter2;
      v68[1] = 16LL;
      v63[1] = 0x7E35C6C7F3DD7277LL
             * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v18 ^ KiWaitAlways), KiWaitNever));
      v68[0] = v63;
      EtwTraceKernelEvent((int)v68, 1, 0x20040000u, 3941, 4196866);
      v20 = v53;
      v21 = v50;
      v22 = v51;
      v5 = a3;
    }
    if ( v12 )
    {
      v25 = qword_1404668A0;
      v26 = 0;
      if ( qword_1404668A0 )
      {
        v27 = *(_DWORD *)(qword_1404668A0 + 4188);
        v28 = !_BitScanForward((unsigned int *)&v29, v27);
        v57 = v29;
        if ( !v28 )
        {
          do
          {
            v27 &= v27 - 1;
            v30 = qword_1404668A0 + 32 * (v29 + 132);
            if ( v30 && (*(_DWORD *)(v30 + 4) & 0x80u) != 0 )
              v26 |= 1 << *(_BYTE *)(qword_1404668A0 + 2 * v29 + 4173);
            v28 = !_BitScanForward((unsigned int *)&v29, v27);
          }
          while ( !v28 );
          v22 = v51;
          v57 = v29;
        }
        v21 = v50;
      }
      else
      {
        LOBYTE(v26) = 30;
      }
      if ( (v26 & 2) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v20 = v53;
        v21 = v50;
        v22 = v51;
        v5 = a3;
        v64 = PerformanceCounter;
      }
      else
      {
        v64.QuadPart = 0LL;
      }
      if ( (v26 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v20 = v53;
        v21 = v50;
        v22 = v51;
        v5 = a3;
        v65 = SystemTimePrecise;
      }
      else
      {
        v65.QuadPart = 0LL;
      }
      if ( (v26 & 8) != 0 )
      {
        v31 = __rdtsc();
        v25 = (unsigned __int64)HIDWORD(v31) << 32;
        v66 = v31;
      }
      else
      {
        v66 = 0LL;
      }
      if ( (v26 & 0x10) != 0 )
      {
        v59 = 0LL;
        ((void (__fastcall *)(__int64 *, unsigned __int64, __int64 *, __int64 *))off_140398AC0)(&v59, v25, v21, v22);
        v20 = v53;
        v5 = a3;
        v67 = v59;
      }
      else
      {
        v67 = 0LL;
      }
    }
    v32 = ((*v5)++ & 0xF) + 1LL;
    v33 = &v5[4 * v32];
    *(_QWORD *)v33 = BugCheckParameter2;
    v33[2] = MEMORY[0xFFFFF78000000320];
    v34 = *(void **)(a1 + 25000);
    v35 = *(unsigned int *)(v60 + 484);
    *(_DWORD *)(a1 + 23452) = 0;
    if ( v34 && *(void **)(a1 + 25008) != v34 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
    {
      v49 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v34;
      memset(v34, 0, v49);
      v20 = v53;
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
      v36 = __rdtsc();
      v19[3] += (((unsigned __int64)HIDWORD(v36) << 32) | (unsigned int)v36) - v19[4];
      ++v19[5];
    }
    v33[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v35 != *(_DWORD *)(v60 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v35, *(unsigned int *)(v60 + 484));
    v12 = v61;
    if ( v61 )
    {
      v37 = *((_DWORD *)v61 + 1);
      v38 = *v61;
      v69[2] = &BugCheckParameter2;
      v69[3] = 8LL;
      v39 = *(_DWORD *)(EtwpHostSiloState + 4188);
      v28 = !_BitScanForward((unsigned int *)&v40, v39);
      v58 = v40;
      if ( !v28 )
      {
        do
        {
          v39 &= v39 - 1;
          v41 = EtwpHostSiloState + 32 * (v40 + 132);
          if ( v41 )
          {
            if ( (*(_DWORD *)(v41 + 4) & 0x80u) != 0 )
            {
              v42 = *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v40 + 4172);
              v43 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v40 + 4173) - 1;
              v69[1] = 8LL;
              v69[0] = &v64 + v43;
              EtwpLogKernelEvent((unsigned int)v69, EtwpHostSiloState, v42, 2, v38, v37);
            }
          }
          v28 = !_BitScanForward((unsigned int *)&v40, v39);
        }
        while ( !v28 );
        v58 = v40;
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
  result = v62;
  *(_QWORD *)(a1 + 11664) = v62;
  return result;
}
