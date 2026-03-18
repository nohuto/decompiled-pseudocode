/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005C710
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180060F58 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EA40 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800B336C (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
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
  CVisual *v13; // rdi
  __int64 v14; // r14
  void *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // ebp
  __int64 v19; // r9
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // r10
  __int64 v29; // rdi
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *Value; // r14
  __int64 v38; // r15
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  int v42; // eax
  __int64 v44; // rbp
  unsigned int v45; // r15d
  SIZE_T v46; // r8
  unsigned __int64 v47; // rax
  _QWORD *v48; // r15
  unsigned __int64 v49; // rdi
  _QWORD *v50; // rcx
  __int64 v51; // rdi
  int v52; // r10d
  __int64 v53; // rax
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x40u);
    v11 = 0LL;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC1u);
    goto LABEL_53;
  }
  v10 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), a2, &v62);
  if ( v10 < 0 )
    goto LABEL_118;
  while ( 1 )
  {
    v12 = COcclusionContext::PreSubgraph(a4, a2, &v60);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xD3u);
      goto LABEL_52;
    }
    if ( !v60 )
      break;
    v13 = 0LL;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v14 & 2) != 0 )
      v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v14) = v14 & 1;
    if ( !(_DWORD)v14 )
    {
      v10 = 1;
      goto LABEL_26;
    }
    v15 = 0LL;
    *(_QWORD *)&v59 = *(_QWORD *)(a1 + 16);
    DWORD2(v59) = *(_DWORD *)(a1 + 24);
    v16 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v16 )
      goto LABEL_11;
    v45 = 2 * v16;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v10 = -2147024362;
LABEL_100:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x87u);
      goto LABEL_26;
    }
    if ( v45 <= 0x40 )
      v45 = 64;
    v18 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v45 <= 0x10 )
    {
      v18 = -2147024809;
    }
    else
    {
      v46 = 16LL * v45;
      if ( !v46 )
        v46 = 1LL;
      v15 = HeapAlloc(WPF::g_processHeap, 0, v46);
      if ( !v15 )
        v18 = -2147024882;
    }
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x54u);
    }
    else
    {
      v47 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v47 <= 0xFFFFFFFF )
      {
        memcpy_0(v15, *(const void **)(a1 + 48), (unsigned int)v47);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v45;
        *(_QWORD *)(a1 + 48) = v15;
LABEL_11:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v59;
        v17 = *(_DWORD *)(a1 + 56);
        if ( v17 <= *(_DWORD *)(a1 + 32) )
          v17 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v17;
        v18 = 0;
        goto LABEL_14;
      }
      v18 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
LABEL_14:
    v10 = v18;
    if ( v18 < 0 )
      goto LABEL_100;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v14 - 1;
    v19 = *(_QWORD *)(a1 + 8);
    v20 = *(_QWORD *)(v19 + 72);
    v21 = (v20 & 2) != 0 ? *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) : v20 & 1;
    v22 = *(unsigned int *)(a1 + 24);
    if ( v21 <= v22
      || ((*(_QWORD *)(v19 + 72) & 2LL) != 0 ? (v23 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL)) : (v23 = v20 & 1),
          v22 >= v23) )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = v23 == 1
          ? (CVisual *)(v20 & 0xFFFFFFFFFFFFFFFCuLL)
          : *(CVisual **)((v20 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v22 + 16);
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)(a1 + 8) = v13;
LABEL_26:
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xDAu);
      goto LABEL_52;
    }
    if ( !v13 )
      break;
LABEL_45:
    v10 = CVisual::EnsureTreeData(v13, a2, &v62);
    if ( v10 < 0 )
    {
      v11 = v61;
LABEL_118:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xCFu);
      goto LABEL_53;
    }
  }
  while ( 1 )
  {
    LOBYTE(a5) = 1;
    v24 = COcclusionContext::PostSubgraph(a4, a2, (bool *)&a5);
    v10 = v24;
    if ( v24 < 0 )
      break;
    if ( (_BYTE)a5 )
    {
      v25 = *(_QWORD *)(a1 + 16);
      v10 = 0;
      v13 = 0LL;
      if ( !v25 )
        goto LABEL_47;
      v26 = *(_DWORD *)(a1 + 28);
      if ( v26 == 1 )
      {
        v52 = *(_DWORD *)(a1 + 24);
        if ( v52 == -1 )
          goto LABEL_47;
        v53 = *(_QWORD *)(v25 + 72);
        if ( (v53 & 2) != 0 )
          v53 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v53) = v53 & 1;
        v28 = (unsigned int)(v52 + 1);
        if ( (unsigned int)v28 >= (unsigned int)v53 )
          goto LABEL_47;
LABEL_35:
        v29 = *(_QWORD *)(v25 + 72);
        if ( (v29 & 2) != 0 )
          v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v30 = v29 & 1;
        if ( v30 <= (unsigned int)v28
          || ((*(_QWORD *)(v25 + 72) & 2LL) == 0 ? (v31 = v29 & 1) : (v31 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL)),
              (unsigned int)v28 >= v31) )
        {
          v13 = 0LL;
        }
        else if ( v31 == 1 )
        {
          v13 = (CVisual *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        else
        {
          v13 = *(CVisual **)((v29 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v28 + 16);
        }
        *(_QWORD *)(a1 + 8) = v13;
        *(_DWORD *)(a1 + 24) = v28;
      }
      else
      {
        if ( !v26 )
        {
          v27 = *(_DWORD *)(a1 + 24);
          if ( v27 )
          {
            v28 = (unsigned int)(v27 - 1);
            goto LABEL_35;
          }
        }
LABEL_47:
        v10 = 1;
      }
      if ( v13 )
        goto LABEL_45;
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v32 = *(_DWORD *)(a1 + 32);
      v33 = 0LL;
      v34 = 0;
      if ( v32 )
      {
        v35 = (unsigned int)(v32 - 1);
        *(_DWORD *)(a1 + 32) = v35;
        v34 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v35 + 8);
        v33 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v35);
      }
      v36 = *(_QWORD *)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v36;
      *(_QWORD *)(a1 + 16) = v33;
      *(_DWORD *)(a1 + 24) = v34;
      if ( v36 )
        continue;
    }
    goto LABEL_52;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xF4u);
LABEL_52:
  v11 = v61;
LABEL_53:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 )
  {
    Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( Value )
    {
LABEL_57:
      v38 = *Value;
      if ( (*Value & 2) != 0 )
        v39 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v39 = *Value & 1;
      v40 = v39 - 1;
      if ( (*Value & 2) != 0 )
        v41 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v41 = *Value & 1;
      if ( v40 < v41 )
      {
        if ( v41 == 1 )
        {
          *Value = 0LL;
        }
        else
        {
          v48 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
          v49 = v41 - 1;
          v50 = v48 + 2;
          if ( v49 == 1 )
          {
            v51 = v50[-v40 + 1];
            WPF::ProcessHeapImpl::Free(v48);
            *Value = v51 | 1;
          }
          else
          {
            if ( v40 < v49 )
              memmove(&v50[v40], &v50[v40 + 1], 8 * (v49 - v40));
            *v48 = v49;
          }
        }
      }
    }
    else
    {
      v54 = (__int64 *)operator new(0xA8uLL);
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
        v54[19] = 0LL;
        v54[20] = 0LL;
        TlsSetValue(v55, v54);
        goto LABEL_57;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v42 = *(_DWORD *)(a1 + 40);
  if ( v42 == 10 )
  {
    v44 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v44 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v44) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
    }
    else if ( (unsigned int)(3 * v44) <= *(_DWORD *)(a1 + 36) )
    {
      if ( (_DWORD)v44 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v44 > 0x10 )
      {
        v56 = 16LL * (unsigned int)v44;
        if ( !v56 )
          v56 = 1LL;
        v57 = HeapAlloc(WPF::g_processHeap, 0, v56);
        if ( v57 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v57;
          *(_DWORD *)(a1 + 36) = v44;
          goto LABEL_76;
        }
        v58 = -2147024882;
      }
      else
      {
        v58 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x100u);
    }
LABEL_76:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v10;
  }
  *(_DWORD *)(a1 + 40) = v42 + 1;
  return (unsigned int)v10;
}
