/*
 * XREFs of MiGetPageChain @ 0x140017C10
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140017760 (MiResolvePrivateZeroFault.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiPerformFinalZeroing @ 0x1402652E4 (MiPerformFinalZeroing.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402AF2A8 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rsi
  __int64 v9; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int16 NodeShiftedColor; // r8
  unsigned __int16 v12; // bx
  volatile signed __int32 *p_PageColor; // r9
  int v14; // edx
  unsigned int v15; // r14d
  unsigned int v16; // r13d
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  int v21; // r8d
  unsigned __int32 v22; // ebx
  ULONG_PTR v23; // r14
  unsigned int v24; // ebx
  int v25; // ecx
  signed __int64 v26; // rdx
  signed __int64 v27; // r8
  signed __int64 v28; // rdx
  __int64 v29; // r9
  signed __int64 v30; // r8
  LONG *v31; // rax
  struct _KPRCB *v32; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcTimeCount; // r9d
  unsigned int DpcWatchdogCount; // ebx
  int v36; // r8d
  _KTHREAD *NextThread; // rax
  unsigned int v38; // ebx
  signed __int64 v40; // rdx
  unsigned __int64 v41; // r9
  signed __int64 v42; // r8
  char v43; // cl
  unsigned int v44; // eax
  unsigned int v45; // r14d
  int v46; // esi
  unsigned int v47; // r13d
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rbp
  __int64 Page; // rax
  unsigned int v54; // ecx
  signed __int64 v55; // rcx
  signed __int64 v56; // rcx
  signed __int64 v57; // rcx
  signed __int32 v58[8]; // [rsp+0h] [rbp-128h] BYREF
  int v59; // [rsp+20h] [rbp-108h]
  unsigned int v60; // [rsp+24h] [rbp-104h]
  int v61; // [rsp+28h] [rbp-100h]
  int v62; // [rsp+2Ch] [rbp-FCh]
  unsigned int v63; // [rsp+30h] [rbp-F8h]
  __int64 v64; // [rsp+38h] [rbp-F0h]
  __int64 v65; // [rsp+40h] [rbp-E8h]
  volatile signed __int32 *v66; // [rsp+48h] [rbp-E0h]
  __int64 v67; // [rsp+50h] [rbp-D8h]
  __int64 v68; // [rsp+58h] [rbp-D0h]
  _QWORD v69[16]; // [rsp+60h] [rbp-C8h] BYREF

  v68 = a2;
  v8 = a2;
  v65 = a1;
  v9 = a1;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)a3 - 1) << byte_1403CB699;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v12 = (1 << byte_1403CB69A) - 1;
  v62 = v12;
  if ( v8 && (*(_BYTE *)(v8 + 184) & 7u) < 2 )
    p_PageColor = (volatile signed __int32 *)v8;
  else
    p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
  v14 = NodeShiftedColor;
  v66 = p_PageColor;
  v15 = NodeShiftedColor >> byte_1403CB699;
  v61 = NodeShiftedColor;
  v59 = 1;
  if ( a4 == 31 )
  {
    v59 = 1;
  }
  else if ( a4 >> 3 == 3 && (a4 & 7) != 0 )
  {
    v59 = 2;
  }
  else if ( a4 >> 3 == 1 )
  {
    v59 = 0;
  }
  v16 = a5 & 0xFFFFF0FF;
  v64 = 0xFFFFFFFFFLL;
  v17 = 0;
  v63 = a5 & 0xFFFFF0FF;
  v18 = 0LL;
  v60 = 0;
  v19 = 0LL;
  v67 = 0LL;
  if ( a6 == -1 )
  {
    if ( *a7 >= 0x10 )
    {
      v46 = v12;
      v47 = NodeShiftedColor;
      v48 = v64;
      do
      {
        v49 = MiGet64KPage(v9, v15, a4, v46 & _InterlockedExchangeAdd(p_PageColor, 1u) | v47);
        v64 = v49;
        if ( !v49 )
          break;
        v50 = (v49 + 0x58000000000LL) / 48;
        MiSetPfnBlink(48 * v50 - 0x57FFFFFFD30LL, v48, 0);
        v19 += 16LL;
        p_PageColor = v66;
        v9 = v65;
        v48 = v50;
        v18 = v64;
      }
      while ( *a7 - v19 >= 0x10 );
      v8 = v68;
      v16 = v63;
      v14 = v61;
      v17 = v60;
      v9 = v65;
      v64 = v48;
      v12 = v62;
    }
  }
  else
  {
    v16 = a5 & 0xFFFFB0FF | 0x4000;
  }
  if ( v19 < *a7 )
  {
    v20 = a6;
    v21 = v12;
    v62 = v12;
    while ( 1 )
    {
      v22 = v21 & _InterlockedExchangeAdd(v66, 1u) | v14;
      if ( v20 != -1 )
      {
        v51 = 15LL;
        if ( (unsigned int)dword_1403CB6D8 < 0xFuLL )
          v51 = (unsigned int)dword_1403CB6D8;
        v52 = v51 & v20;
        v68 = v51;
        v22 = v52 | v22 & 0xFFFFFFF0;
        Page = MiGetPage(v9, v22, v16);
        v23 = Page;
        if ( Page == -1 )
          v16 &= ~0x4000u;
        v20 = v68 & (v52 + 1);
        if ( Page != -1 )
          goto LABEL_16;
        v9 = v65;
      }
      v23 = MiGetPage(v9, v22, v16);
      if ( v23 == -1LL )
        goto LABEL_33;
LABEL_16:
      if ( v20 != -1 )
        v16 |= 0x4000u;
      v24 = v59;
      v18 = 48 * v23 - 0x58000000000LL;
      v25 = *(unsigned __int8 *)(v18 + 34) >> 6;
      if ( v25 != v59 && ((unsigned __int8)((1 << v25) | (1 << v59)) & (unsigned __int8)byte_1403CB750) != 0 )
      {
        v54 = v60;
        v69[v60] = v23;
        v60 = v54 + 1;
        if ( v54 == 15 )
        {
          MiPerformFinalZeroing(v69, 16LL, v24);
          v60 = 0;
        }
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(v18 + 16) & 0x3E0LL) != 0 && (a5 & 0x100) != 0 )
      {
        MiZeroPhysicalPage(v23);
        *(_QWORD *)(v18 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        _InterlockedOr(v58, 0);
        v40 = *(_QWORD *)(v18 + 24);
        v41 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
        v42 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v18 + 24),
                v41 | v40 & 0xF0FFFFFFFFFFFFFFuLL,
                v40);
        if ( v40 != v42 )
        {
          do
          {
            v55 = v42;
            v42 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v18 + 24),
                    v41 | v42 & 0xF0FFFFFFFFFFFFFFuLL,
                    v42);
          }
          while ( v55 != v42 );
        }
      }
      if ( *(unsigned __int8 *)(v18 + 34) >> 6 == v24 )
        goto LABEL_21;
      if ( v24 == 1 )
      {
        if ( (*(_BYTE *)(v18 + 34) & 0xC0) == 0xC0
          || (v43 = *(_BYTE *)(v18 + 31) & 0xF,
              _InterlockedOr(v58, 0),
              v44 = ((_BYTE)KiTbFlushTimeStamp - v43) & 0xF,
              v44 > 2)
          || (v43 & 1) == 0 && v44 >= 2 )
        {
          MiChangePageAttribute(48 * v23 - 0x58000000000LL, 1LL, 4LL);
LABEL_21:
          v26 = *(_QWORD *)(v18 + 24);
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v26 & 0xF0FFFFFFFFFFFFFFuLL, v26);
          if ( v26 != v27 )
          {
            do
            {
              v56 = v27;
              v27 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v18 + 24),
                      v27 & 0xF0FFFFFFFFFFFFFFuLL,
                      v27);
            }
            while ( v56 != v27 );
          }
          goto LABEL_22;
        }
      }
      if ( (*(_DWORD *)(v18 + 16) & 0x3E0LL) != 0 )
        MiZeroPhysicalPage(v23);
      *(_QWORD *)(v18 + 16) = v67;
      v67 = 48 * v23 - 0x58000000000LL;
LABEL_22:
      v28 = *(_QWORD *)(v18 + 24);
      v29 = v64 & 0xFFFFFFFFFLL;
      v30 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v18 + 24),
              v64 & 0xFFFFFFFFFLL | v28 & 0xFFFFFFF000000000uLL,
              v28);
      if ( v28 != v30 )
      {
        do
        {
          v57 = v30;
          v30 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v18 + 24),
                  v29 | v30 & 0xFFFFFFF000000000uLL,
                  v30);
        }
        while ( v57 != v30 );
      }
      ++v19;
      v64 = v23;
      if ( v8 )
      {
        v31 = (*(_BYTE *)(v8 + 184) & 7) == 2 ? &dword_1403CCD40 : (LONG *)(v8 + 192);
        if ( (*v31 & 0x40000000) != 0 )
        {
LABEL_33:
          v17 = v60;
          break;
        }
      }
      v32 = KeGetCurrentPrcb();
      DpcRequestSummary = v32->DpcRequestSummary;
      DpcTimeCount = v32->DpcTimeCount;
      DpcWatchdogCount = v32->DpcWatchdogCount;
      v63 = DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v36 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v45 = 2;
          goto LABEL_57;
        }
        if ( v32->QuantumEnd )
        {
          v45 = 3;
          goto LABEL_57;
        }
        NextThread = v32->NextThread;
        if ( NextThread && NextThread != v32->CurrentThread )
        {
          v45 = 4;
          goto LABEL_57;
        }
LABEL_31:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_32;
        if ( !v36 )
        {
LABEL_66:
          _disable();
          v32->DpcWatchdogCount = 0;
          v32->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler();
          _enable();
          DpcTimeCount = v63;
          v45 = 0;
          goto LABEL_57;
        }
        goto LABEL_91;
      }
      v36 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_31;
      if ( v32->QuantumEnd )
      {
        v45 = 1;
        goto LABEL_57;
      }
LABEL_91:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v45 = 5;
      }
      else
      {
        if ( v32->CurrentThread == v32->IdleThread )
          goto LABEL_66;
        v45 = 6;
      }
LABEL_57:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v45, DpcWatchdogCount, DpcTimeCount);
      if ( v45 )
        goto LABEL_33;
LABEL_32:
      v14 = v61;
      v9 = v65;
      v21 = v62;
      if ( v19 >= *a7 )
        goto LABEL_33;
    }
  }
  v38 = v59;
  *a7 = v19;
  if ( v17 )
    MiPerformFinalZeroing(v69, v17, v38);
  if ( v67 )
    MiChangePageAttributeBatch(v67, v38, ZeroPte);
  return v18;
}
