/*
 * XREFs of MiGetPageChain @ 0x1400484F0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiPerformFinalZeroing @ 0x14022A6E0 (MiPerformFinalZeroing.c)
 *     EtwTraceShouldYieldProcessor @ 0x14027B8F8 (EtwTraceShouldYieldProcessor.c)
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
  __int64 v8; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int16 NodeShiftedColor; // r12
  __int16 v11; // si
  unsigned int *p_PageColor; // r8
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rbp
  unsigned int v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  unsigned int v19; // ebp
  ULONG_PTR v20; // r15
  __int64 v21; // rax
  unsigned int v22; // ebp
  int v23; // ecx
  signed __int64 v24; // rdx
  signed __int64 v25; // r8
  signed __int64 v26; // rdx
  __int64 v27; // r9
  signed __int64 v28; // r8
  LONG *v29; // rax
  struct _KPRCB *v30; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcTimeCount; // r9d
  unsigned int DpcWatchdogCount; // ebp
  int v34; // r8d
  _KTHREAD *NextThread; // rax
  unsigned int v36; // edi
  signed __int64 v38; // rdx
  unsigned __int64 v39; // r9
  signed __int64 v40; // r8
  char v41; // cl
  unsigned int v42; // eax
  unsigned int v43; // r15d
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 Page; // rax
  unsigned int v47; // ecx
  signed __int64 v48; // rcx
  signed __int64 v49; // rcx
  signed __int64 v50; // rcx
  signed __int32 v51[8]; // [rsp+0h] [rbp-118h] BYREF
  unsigned int v52; // [rsp+20h] [rbp-F8h]
  int v53; // [rsp+24h] [rbp-F4h]
  unsigned int v54; // [rsp+28h] [rbp-F0h]
  __int64 v55; // [rsp+30h] [rbp-E8h]
  __int64 v56; // [rsp+38h] [rbp-E0h]
  __int64 v57; // [rsp+40h] [rbp-D8h]
  unsigned int *v58; // [rsp+48h] [rbp-D0h]
  __int64 v59; // [rsp+50h] [rbp-C8h]
  _QWORD v60[16]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+148h] [rbp+30h]

  v59 = a1;
  v8 = a1;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)a3 - 1) << byte_140388501;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v11 = (1 << byte_140388502) - 1;
  if ( a2 && (*(_BYTE *)(a2 + 192) & 7u) < 2 )
    p_PageColor = (unsigned int *)a2;
  else
    p_PageColor = &CurrentPrcb->PageColor;
  v58 = p_PageColor;
  v53 = 1;
  if ( a4 == 31 )
  {
    v53 = 1;
  }
  else if ( a4 >> 3 == 3 && (a4 & 7) != 0 )
  {
    v53 = 2;
  }
  else if ( a4 >> 3 == 1 )
  {
    v53 = 0;
  }
  v13 = a6;
  v14 = a5 & 0xFFFFFC3F;
  v15 = 0LL;
  v57 = 0xFFFFFFFFFLL;
  v16 = 0;
  v52 = a5 & 0xFFFFFC3F;
  v17 = 0LL;
  v56 = 0LL;
  v54 = 0;
  if ( a6 != -1 )
  {
    v14 = a5 & 0xFFFFEC3F | 0x1000;
    v52 = v14;
  }
  v18 = 0LL;
  if ( *a7 )
  {
    while ( 1 )
    {
      v19 = NodeShiftedColor | (unsigned __int16)(++*(_WORD *)p_PageColor & v11);
      if ( v13 != -1 )
      {
        v44 = 15LL;
        if ( (unsigned int)dword_140388540 < 0xFuLL )
          v44 = (unsigned int)dword_140388540;
        v45 = v44 & v13;
        v55 = v44;
        v19 = v45 | v19 & 0xFFFFFFF0;
        v61 = v45;
        Page = MiGetPage(v8, v19, v14);
        v14 = v52;
        v20 = Page;
        if ( Page == -1 )
        {
          v14 = v52 & 0xFFFFEFFF;
          v52 &= ~0x1000u;
        }
        v21 = v55 & (v61 + 1);
        a6 = v21;
        if ( v20 != -1LL )
          goto LABEL_16;
        v8 = v59;
      }
      v20 = MiGetPage(v8, v19, v14);
      if ( v20 == -1LL )
        goto LABEL_33;
      v14 = v52;
      v21 = a6;
LABEL_16:
      if ( v21 != -1 )
        v52 = v14 | 0x1000;
      v22 = v53;
      v17 = 48 * v20 - 0x58000000000LL;
      v23 = *(unsigned __int8 *)(v17 + 34) >> 6;
      if ( v23 != v53 && ((unsigned __int8)((1 << v23) | (1 << v53)) & (unsigned __int8)byte_1403885B0) != 0 )
      {
        v47 = v54;
        v60[v54] = v20;
        v54 = v47 + 1;
        if ( v47 == 15 )
        {
          MiPerformFinalZeroing(v60, 16LL, v22);
          v54 = 0;
        }
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(v17 + 16) & 0x3E0LL) != 0 && (a5 & 0x40) != 0 )
      {
        MiZeroPhysicalPage(v20);
        *(_QWORD *)(v17 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        _InterlockedOr(v51, 0);
        v38 = *(_QWORD *)(v17 + 24);
        v39 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
        v40 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v17 + 24),
                v39 | v38 & 0xF0FFFFFFFFFFFFFFuLL,
                v38);
        if ( v38 != v40 )
        {
          do
          {
            v48 = v40;
            v40 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v17 + 24),
                    v39 | v40 & 0xF0FFFFFFFFFFFFFFuLL,
                    v40);
          }
          while ( v48 != v40 );
        }
      }
      if ( *(unsigned __int8 *)(v17 + 34) >> 6 == v22 )
        goto LABEL_21;
      if ( v22 == 1 )
      {
        if ( (*(_BYTE *)(v17 + 34) & 0xC0) == 0xC0
          || (v41 = *(_BYTE *)(v17 + 31) & 0xF,
              _InterlockedOr(v51, 0),
              v42 = ((_BYTE)KiTbFlushTimeStamp - v41) & 0xF,
              v42 > 2)
          || (v41 & 1) == 0 && v42 >= 2 )
        {
          MiChangePageAttribute(48 * v20 - 0x58000000000LL, 1LL, 4LL);
LABEL_21:
          v24 = *(_QWORD *)(v17 + 24);
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v24 & 0xF0FFFFFFFFFFFFFFuLL, v24);
          if ( v24 != v25 )
          {
            do
            {
              v49 = v25;
              v25 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v17 + 24),
                      v25 & 0xF0FFFFFFFFFFFFFFuLL,
                      v25);
            }
            while ( v49 != v25 );
          }
          goto LABEL_22;
        }
      }
      if ( (*(_DWORD *)(v17 + 16) & 0x3E0LL) != 0 )
        MiZeroPhysicalPage(v20);
      *(_QWORD *)(v17 + 16) = v56;
      v56 = 48 * v20 - 0x58000000000LL;
LABEL_22:
      v26 = *(_QWORD *)(v17 + 24);
      v27 = v57 & 0xFFFFFFFFFLL;
      v28 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v17 + 24),
              v57 & 0xFFFFFFFFFLL | v26 & 0xFFFFFFF000000000uLL,
              v26);
      if ( v26 != v28 )
      {
        do
        {
          v50 = v28;
          v28 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v17 + 24),
                  v27 | v28 & 0xFFFFFFF000000000uLL,
                  v28);
        }
        while ( v50 != v28 );
      }
      ++v18;
      v57 = v20;
      if ( a2 )
      {
        v29 = (*(_BYTE *)(a2 + 192) & 7) == 2 ? &dword_140389780 : (LONG *)(a2 + 200);
        if ( (*v29 & 0x40000000) != 0 )
        {
LABEL_33:
          v15 = v56;
          v16 = v54;
          break;
        }
      }
      v30 = KeGetCurrentPrcb();
      DpcRequestSummary = v30->DpcRequestSummary;
      DpcTimeCount = v30->DpcTimeCount;
      DpcWatchdogCount = v30->DpcWatchdogCount;
      LODWORD(v55) = DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v34 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v43 = 2;
          goto LABEL_55;
        }
        if ( v30->QuantumEnd )
        {
          v43 = 3;
          goto LABEL_55;
        }
        NextThread = v30->NextThread;
        if ( NextThread && NextThread != v30->CurrentThread )
        {
          v43 = 4;
          goto LABEL_55;
        }
LABEL_31:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_32;
        if ( !v34 )
        {
LABEL_67:
          _disable();
          v30->DpcWatchdogCount = 0;
          v30->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler();
          _enable();
          DpcTimeCount = v55;
          v43 = 0;
          goto LABEL_55;
        }
        goto LABEL_87;
      }
      v34 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_31;
      if ( v30->QuantumEnd )
      {
        v43 = 1;
        goto LABEL_55;
      }
LABEL_87:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v43 = 5;
      }
      else
      {
        if ( v30->CurrentThread == v30->IdleThread )
          goto LABEL_67;
        v43 = 6;
      }
LABEL_55:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v43, DpcWatchdogCount, DpcTimeCount);
      if ( v43 )
        goto LABEL_33;
LABEL_32:
      v14 = v52;
      v13 = a6;
      p_PageColor = v58;
      v8 = v59;
      if ( v18 >= *a7 )
        goto LABEL_33;
    }
  }
  v36 = v53;
  *a7 = v18;
  if ( v16 )
    MiPerformFinalZeroing(v60, v16, v36);
  if ( v15 )
    MiChangePageAttributeBatch(v15, v36, ZeroPte);
  return v17;
}
