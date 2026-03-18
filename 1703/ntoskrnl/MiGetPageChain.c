/*
 * XREFs of MiGetPageChain @ 0x1400BB6F0
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPerformFinalZeroing @ 0x14021F1F8 (MiPerformFinalZeroing.c)
 *     EtwTraceShouldYieldProcessor @ 0x140253C08 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  __int64 v8; // r11
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int16 v10; // dx
  _WORD *p_PageColor; // rcx
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned int v15; // r10d
  unsigned int v16; // r12d
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  ULONG_PTR v19; // r14
  unsigned int v20; // ebp
  unsigned int v21; // ebp
  int v22; // ecx
  signed __int64 v23; // rdx
  signed __int64 v24; // r8
  signed __int64 v25; // rdx
  __int64 v26; // r9
  signed __int64 v27; // r8
  struct _KPRCB *v28; // rcx
  unsigned int DpcWatchdogCount; // ebp
  unsigned int DpcTimeCount; // r10d
  volatile int DpcRequestSummary; // edx
  _KTHREAD *NextThread; // rax
  unsigned int v33; // edi
  signed __int64 v35; // rdx
  unsigned __int64 v36; // r9
  signed __int64 v37; // r8
  unsigned int v38; // r14d
  char v39; // cl
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r13
  __int64 Page; // rax
  __int64 v45; // rax
  unsigned int v46; // r10d
  signed __int64 v47; // rcx
  signed __int64 v48; // rcx
  signed __int64 v49; // rcx
  signed __int32 v50[8]; // [rsp+0h] [rbp-128h] BYREF
  unsigned int v51; // [rsp+20h] [rbp-108h]
  unsigned int v52; // [rsp+24h] [rbp-104h]
  unsigned int v53; // [rsp+28h] [rbp-100h]
  unsigned int v54; // [rsp+2Ch] [rbp-FCh]
  int v55; // [rsp+30h] [rbp-F8h]
  int v56; // [rsp+34h] [rbp-F4h]
  __int64 v57; // [rsp+38h] [rbp-F0h]
  __int64 v58; // [rsp+40h] [rbp-E8h]
  __int64 v59; // [rsp+48h] [rbp-E0h]
  __int64 v60; // [rsp+50h] [rbp-D8h]
  _WORD *v61; // [rsp+58h] [rbp-D0h]
  _QWORD v62[16]; // [rsp+60h] [rbp-C8h] BYREF

  v57 = a1;
  v8 = a1;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    LOWORD(a3) = ((_WORD)a3 - 1) << byte_14036C1B9;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    LOWORD(a3) = CurrentPrcb->NodeShiftedColor;
  }
  v10 = (1 << byte_14036C1BA) - 1;
  if ( a2 && (*(_BYTE *)(a2 + 192) & 7u) < 2 )
    p_PageColor = (_WORD *)a2;
  else
    p_PageColor = &CurrentPrcb->PageColor;
  v61 = p_PageColor;
  v52 = 1;
  if ( a4 == 31 )
  {
    v52 = 1;
  }
  else if ( a4 >> 3 == 3 )
  {
    if ( (a4 & 7) != 0 )
      v52 = 2;
  }
  else
  {
    v52 = a4 >> 3 != 1;
  }
  v12 = a5;
  v13 = 0LL;
  v14 = a6;
  v15 = 0;
  v54 = 1;
  v16 = a5 & 0xFFFFFC3F;
  v58 = 0LL;
  v17 = 0LL;
  v51 = 0;
  v60 = 0xFFFFFFFFFLL;
  if ( a6 != -1 )
  {
    v16 = a5 & 0xFFFFEC3F | 0x1000;
    v41 = (unsigned int)(dword_14036C1F8 + 1) >> 4;
    if ( !v41 )
      v41 = 1;
    v54 = v41;
  }
  v18 = 0LL;
  if ( *a7 )
  {
    a3 = (unsigned __int16)a3;
    v55 = v10;
    v56 = (unsigned __int16)a3;
    while ( 1 )
    {
      ++*p_PageColor;
      v19 = -1LL;
      v20 = (unsigned __int16)(v10 & *p_PageColor) | a3;
      if ( v14 == -1 )
        goto LABEL_13;
      v42 = 15LL;
      v53 = 0;
      if ( (unsigned int)dword_14036C1F8 < 0xFuLL )
        v42 = (unsigned int)dword_14036C1F8;
      v43 = v42 & v14;
      v59 = v42;
      v20 = v43 | v20 & 0xFFFFFFF0;
      if ( v54 )
      {
        while ( 1 )
        {
          Page = MiGetPage(v8, v20, v16);
          v8 = v57;
          v19 = Page;
          if ( Page != -1 )
            break;
          v20 = v20 & ~dword_14036C1F8 | dword_14036C1F8 & (v20 + 16);
          if ( ++v53 >= v54 )
          {
            v42 = v59;
            v15 = v51;
            v12 = a5;
            goto LABEL_77;
          }
        }
        v42 = v59;
        v15 = v51;
        v12 = a5;
      }
      else
      {
LABEL_77:
        v16 &= ~0x1000u;
      }
      v14 = v42 & (v43 + 1);
      if ( v19 == -1LL )
      {
LABEL_13:
        v19 = MiGetPage(v8, v20, v16);
        if ( v19 == -1LL )
          goto LABEL_29;
        v15 = v51;
        v12 = a5;
      }
      if ( v14 != -1 )
        v16 |= 0x1000u;
      v21 = v52;
      v17 = 48 * v19 - 0x58000000000LL;
      v22 = *(unsigned __int8 *)(v17 + 34) >> 6;
      if ( v22 != v52 && ((unsigned __int8)((1 << v22) | (1 << v52)) & (unsigned __int8)byte_14036C260) != 0 )
      {
        v45 = v15;
        v46 = v15 + 1;
        v51 = v46;
        v62[v45] = v19;
        if ( v46 == 16 )
        {
          MiPerformFinalZeroing(v62, 16LL, v21, v12);
          v51 = 0;
        }
        goto LABEL_21;
      }
      if ( *(_QWORD *)(v17 + 16) )
      {
        if ( (v12 & 0x40) != 0 )
        {
          MiZeroPhysicalPage(v19, 1, v52);
          *(_QWORD *)(v17 + 16) = 0LL;
          _InterlockedOr(v50, 0);
          v35 = *(_QWORD *)(v17 + 24);
          v36 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
          v37 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v17 + 24),
                  v36 | v35 & 0xF0FFFFFFFFFFFFFFuLL,
                  v35);
          if ( v35 != v37 )
          {
            do
            {
              v47 = v37;
              v37 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v17 + 24),
                      v36 | v37 & 0xF0FFFFFFFFFFFFFFuLL,
                      v37);
            }
            while ( v47 != v37 );
          }
        }
      }
      if ( *(unsigned __int8 *)(v17 + 34) >> 6 == v21 )
        goto LABEL_20;
      if ( v21 == 1 )
      {
        if ( (*(_BYTE *)(v17 + 34) & 0xC0) == 0xC0 )
          break;
        v39 = *(_BYTE *)(v17 + 31) & 0xF;
        _InterlockedOr(v50, 0);
        v40 = ((_BYTE)KiTbFlushTimeStamp - v39) & 0xF;
        if ( v40 > 2 || (v39 & 1) == 0 && v40 >= 2 )
          break;
      }
      if ( *(_QWORD *)(v17 + 16) )
        MiZeroPhysicalPage(v19, 1, v21);
      *(_QWORD *)(v17 + 16) = v58;
      v58 = 48 * v19 - 0x58000000000LL;
LABEL_21:
      v25 = *(_QWORD *)(v17 + 24);
      v26 = v60 & 0xFFFFFFFFFLL;
      v27 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v17 + 24),
              v60 & 0xFFFFFFFFFLL | v25 & 0xFFFFFFF000000000uLL,
              v25);
      if ( v25 != v27 )
      {
        do
        {
          v49 = v27;
          v27 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v17 + 24),
                  v26 | v27 & 0xFFFFFFF000000000uLL,
                  v27);
        }
        while ( v49 != v27 );
      }
      ++v18;
      v60 = v19;
      if ( (v18 & 0xF) == 0 && a2 && (unsigned int)MiWorkingSetIsContended(a2) )
      {
LABEL_29:
        v13 = v58;
        v15 = v51;
        goto LABEL_30;
      }
      v28 = KeGetCurrentPrcb();
      DpcWatchdogCount = v28->DpcWatchdogCount;
      DpcTimeCount = v28->DpcTimeCount;
      v53 = DpcTimeCount;
      DpcRequestSummary = v28->DpcRequestSummary;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v12 = 0LL;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v38 = 2;
          goto LABEL_46;
        }
        if ( v28->QuantumEnd )
        {
          v38 = 3;
          goto LABEL_46;
        }
        NextThread = v28->NextThread;
        if ( NextThread && NextThread != v28->CurrentThread )
        {
          v38 = 4;
          goto LABEL_46;
        }
LABEL_27:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_28;
        if ( !(_DWORD)v12 )
        {
LABEL_66:
          _disable();
          v28->DpcWatchdogCount = 0;
          v28->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler((__int64)v28);
          _enable();
          DpcTimeCount = v53;
          v38 = 0;
          goto LABEL_46;
        }
        goto LABEL_92;
      }
      v12 = 1LL;
      if ( DpcTimeCount <= 7 )
        goto LABEL_27;
      if ( v28->QuantumEnd )
      {
        v38 = 1;
        goto LABEL_46;
      }
LABEL_92:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v38 = 5;
      }
      else
      {
        if ( v28->CurrentThread == v28->IdleThread )
          goto LABEL_66;
        v38 = 6;
      }
LABEL_46:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v38, DpcWatchdogCount, DpcTimeCount, v12);
      if ( v38 )
        goto LABEL_29;
LABEL_28:
      p_PageColor = v61;
      v15 = v51;
      v12 = a5;
      v8 = v57;
      v10 = v55;
      a3 = v56;
      if ( v18 >= *a7 )
        goto LABEL_29;
    }
    MiChangePageAttribute(48 * v19 - 0x58000000000LL, 1LL, 4LL);
LABEL_20:
    v23 = *(_QWORD *)(v17 + 24);
    v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v23 & 0xF0FFFFFFFFFFFFFFuLL, v23);
    if ( v23 != v24 )
    {
      do
      {
        v48 = v24;
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v24 & 0xF0FFFFFFFFFFFFFFuLL, v24);
      }
      while ( v48 != v24 );
    }
    goto LABEL_21;
  }
LABEL_30:
  *a7 = v18;
  v33 = v52;
  if ( v15 )
    MiPerformFinalZeroing(v62, v15, v52, v12);
  if ( v13 )
    MiChangePageAttributeBatch(v13, v33, ZeroPte);
  return v17;
}
