/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009FBE0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18009F160 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800C05AC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        COcclusionContext *a4,
        int a5)
{
  int v9; // eax
  int v10; // esi
  void *v11; // rbp
  int v12; // eax
  __int64 v13; // r9
  CVisual *v14; // rdi
  __int64 v15; // r14
  int v16; // ebp
  void *v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *Value; // r14
  __int64 v40; // r15
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  int v44; // eax
  __int64 v46; // rbp
  unsigned int v47; // r15d
  SIZE_T v48; // r8
  unsigned __int64 v49; // rax
  _QWORD *v50; // r15
  unsigned __int64 v51; // rdi
  _QWORD *v52; // rcx
  __int64 v53; // rdi
  __int64 *v54; // rax
  DWORD v55; // ecx
  SIZE_T v56; // r8
  LPVOID v57; // rdi
  int v58; // eax
  __int128 v59; // [rsp+30h] [rbp-58h]
  bool v60; // [rsp+90h] [rbp+8h] BYREF
  void *v61; // [rsp+98h] [rbp+10h]
  struct CTreeData *v62; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v61 = 0LL;
  v9 = CThreadContext::RegisterGraphWalkRoot(a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x40u);
    v11 = v61;
  }
  else
  {
    v11 = a3;
    v61 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC1u);
    goto LABEL_54;
  }
  v10 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), a2, &v62);
  if ( v10 < 0 )
    goto LABEL_121;
  do
  {
    v12 = COcclusionContext::PreSubgraph(a4, a2, &v60);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD3u);
      goto LABEL_53;
    }
    if ( !v60 )
      goto LABEL_28;
    v14 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v15 & 2) != 0 )
      v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v15) = v15 & 1;
    if ( !(_DWORD)v15 )
    {
      v10 = 1;
      goto LABEL_26;
    }
    v16 = 0;
    *(_QWORD *)&v59 = *(_QWORD *)(a1 + 16);
    v17 = 0LL;
    DWORD2(v59) = *(_DWORD *)(a1 + 24);
    v18 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v18 )
      goto LABEL_11;
    v47 = 2 * v18;
    if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v10 = -2147024362;
LABEL_103:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x87u);
      goto LABEL_26;
    }
    if ( v47 <= 0x40 )
      v47 = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v47 <= 0x10 )
    {
      v16 = -2147024809;
    }
    else
    {
      v48 = 16LL * v47;
      if ( !v48 )
        v48 = 1LL;
      v17 = HeapAlloc(WPF::g_processHeap, 0, v48);
      if ( !v17 )
        v16 = -2147024882;
    }
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x54u);
    }
    else
    {
      v49 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v49 <= 0xFFFFFFFF )
      {
        v16 = 0;
        memcpy_0(v17, *(const void **)(a1 + 48), (unsigned int)v49);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v47;
        *(_QWORD *)(a1 + 48) = v17;
LABEL_11:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v59;
        v19 = *(_DWORD *)(a1 + 56);
        if ( v19 <= *(_DWORD *)(a1 + 32) )
          v19 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v19;
        goto LABEL_14;
      }
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v17 )
      HeapFree(WPF::g_processHeap, 0, v17);
LABEL_14:
    v10 = v16;
    if ( v16 < 0 )
      goto LABEL_103;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      *(_DWORD *)(a1 + 24) = 0;
    else
      *(_DWORD *)(a1 + 24) = v15 - 1;
    v20 = *(_QWORD *)(a1 + 8);
    v21 = *(_QWORD *)(v20 + 72);
    if ( (v21 & 2) != 0 )
      v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v22 = *(_QWORD *)(v20 + 72) & 1LL;
    v23 = *(unsigned int *)(a1 + 24);
    if ( v22 > v23 )
    {
      v24 = *(_QWORD *)(v20 + 72);
      if ( (v24 & 2) != 0 )
        v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v25 = *(_QWORD *)(v20 + 72) & 1LL;
      if ( v23 >= v25 )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = (CVisual *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v25 != 1 )
          v14 = (CVisual *)*((_QWORD *)v14 + v23 + 2);
      }
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 8) = v14;
LABEL_26:
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xDAu);
LABEL_53:
      v11 = v61;
      goto LABEL_54;
    }
    if ( !v14 )
    {
LABEL_28:
      while ( 1 )
      {
        LOBYTE(a5) = 1;
        v26 = COcclusionContext::PostSubgraph(a4, a2, (bool *)&a5, v13);
        v10 = v26;
        if ( v26 < 0 )
          break;
        if ( (_BYTE)a5 )
        {
          v27 = *(_QWORD *)(a1 + 16);
          v10 = 0;
          v14 = 0LL;
          if ( !v27 )
            goto LABEL_48;
          if ( (v28 = *(_DWORD *)(a1 + 28), v28 == 1)
            && (v29 = *(_DWORD *)(a1 + 24), v29 != -1)
            && ((v13 = *(_QWORD *)(v27 + 72), (v13 & 2) == 0)
              ? (LODWORD(v13) = v13 & 1)
              : (v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCuLL)),
                v29 + 1 < (unsigned int)v13)
            || !v28 && (v29 = *(_DWORD *)(a1 + 24)) != 0 )
          {
            if ( v28 == 1 )
              v13 = (unsigned int)(v29 + 1);
            else
              v13 = (unsigned int)(v29 - 1);
            v30 = *(_QWORD *)(v27 + 72);
            if ( (v30 & 2) != 0 )
              v31 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v31 = *(_QWORD *)(v27 + 72) & 1LL;
            if ( v31 > (unsigned int)v13 )
            {
              v32 = *(_QWORD *)(v27 + 72);
              if ( (v32 & 2) != 0 )
                v33 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCuLL);
              else
                v33 = *(_QWORD *)(v27 + 72) & 1LL;
              if ( (unsigned int)v13 >= v33 )
              {
                v14 = 0LL;
              }
              else
              {
                v14 = (CVisual *)(v32 & 0xFFFFFFFFFFFFFFFCuLL);
                if ( v33 != 1 )
                  v14 = (CVisual *)*((_QWORD *)v14 + v13 + 2);
              }
            }
            *(_QWORD *)(a1 + 8) = v14;
            *(_DWORD *)(a1 + 24) = v13;
          }
          else
          {
LABEL_48:
            v10 = 1;
          }
          if ( v14 )
            goto LABEL_46;
        }
        if ( *(_DWORD *)(a1 + 4) )
        {
          v34 = *(_DWORD *)(a1 + 32);
          v35 = 0LL;
          v36 = 0;
          if ( v34 )
          {
            v37 = (unsigned int)(v34 - 1);
            *(_DWORD *)(a1 + 32) = v37;
            v36 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v37 + 8);
            v35 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v37);
          }
          v38 = *(_QWORD *)(a1 + 16);
          --*(_DWORD *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = v38;
          *(_QWORD *)(a1 + 16) = v35;
          *(_DWORD *)(a1 + 24) = v36;
          if ( v38 )
            continue;
        }
        goto LABEL_53;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xF4u);
      goto LABEL_53;
    }
LABEL_46:
    v10 = CVisual::EnsureTreeData(v14, a2, &v62);
  }
  while ( v10 >= 0 );
  v11 = v61;
LABEL_121:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xCFu);
LABEL_54:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 )
  {
    Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( Value )
    {
LABEL_58:
      v40 = *Value;
      if ( (*Value & 2) != 0 )
        v41 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v41 = *Value & 1;
      v42 = v41 - 1;
      if ( (*Value & 2) != 0 )
        v43 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v43 = *Value & 1;
      if ( v42 < v43 )
      {
        if ( v43 == 1 )
        {
          *Value = 0LL;
        }
        else
        {
          v50 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCuLL);
          v51 = v43 - 1;
          v52 = v50 + 2;
          if ( v51 == 1 )
          {
            v53 = v52[-v42 + 1];
            WPF::ProcessHeapImpl::Free(v50);
            *Value = v53 | 1;
          }
          else
          {
            if ( v42 < v51 )
              memmove(&v52[v42], &v52[v42 + 1], 8 * (v51 - v42));
            *v50 = v51;
          }
        }
      }
    }
    else
    {
      v54 = (__int64 *)operator new(0x98uLL);
      Value = v54;
      if ( v54 )
      {
        v55 = CThreadContext::s_dwTlsIndex;
        *v54 = 0LL;
        v54[1] = 0LL;
        v54[2] = 0LL;
        v54[3] = 0LL;
        v54[4] = 0LL;
        v54[5] = 0LL;
        v54[6] = 0LL;
        v54[7] = 0LL;
        v54[8] = 0LL;
        v54[9] = 0LL;
        v54[10] = 0LL;
        v54[11] = 0LL;
        v54[12] = 0LL;
        v54[13] = 0LL;
        v54[14] = 0LL;
        v54[15] = 0LL;
        v54[16] = 0LL;
        v54[17] = 0LL;
        v54[18] = 0LL;
        TlsSetValue(v55, v54);
        goto LABEL_58;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Du);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v44 = *(_DWORD *)(a1 + 40);
  if ( v44 == 10 )
  {
    v46 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v46 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v46) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v46) <= *(_DWORD *)(a1 + 36) )
    {
      if ( (_DWORD)v46 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 > 0x10 )
      {
        v56 = 16LL * (unsigned int)v46;
        if ( !v56 )
          v56 = 1LL;
        v57 = HeapAlloc(WPF::g_processHeap, 0, v56);
        if ( v57 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v57;
          *(_DWORD *)(a1 + 36) = v46;
          goto LABEL_76;
        }
        v58 = -2147024882;
      }
      else
      {
        v58 = -2147024809;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0xF3u);
    }
LABEL_76:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v10;
  }
  *(_DWORD *)(a1 + 40) = v44 + 1;
  return (unsigned int)v10;
}
