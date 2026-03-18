/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18009F610
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800BBE48 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        unsigned __int64 a3,
        CPreComputeContext *a4,
        int a5)
{
  CPtrArrayBase *Value; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // esi
  unsigned __int64 v14; // rbp
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  CVisual *v18; // rdi
  int v19; // r9d
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  int v28; // ebp
  void *v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rdi
  unsigned __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // r14
  __int64 v44; // r15
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  int v48; // eax
  __int64 v50; // rbp
  unsigned int v51; // r15d
  SIZE_T v52; // r8
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // r15
  unsigned __int64 v56; // rdi
  _QWORD *v57; // rcx
  __int64 v58; // rdi
  CPtrArrayBase *v59; // rax
  DWORD v60; // ecx
  __int64 *v61; // rax
  DWORD v62; // ecx
  SIZE_T v63; // r8
  LPVOID v64; // rdi
  int v65; // eax
  __int128 v66; // [rsp+30h] [rbp-58h]
  bool v67; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v68; // [rsp+98h] [rbp+10h]
  struct CTreeData *v69; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v68 = 0LL;
  Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v59 = (CPtrArrayBase *)operator new(0x98uLL);
    Value = v59;
    if ( !v59 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Cu);
      goto LABEL_110;
    }
    v60 = CThreadContext::s_dwTlsIndex;
    *(_QWORD *)v59 = 0LL;
    *((_QWORD *)v59 + 1) = 0LL;
    *((_QWORD *)v59 + 2) = 0LL;
    *((_QWORD *)v59 + 3) = 0LL;
    *((_QWORD *)v59 + 4) = 0LL;
    *((_QWORD *)v59 + 5) = 0LL;
    *((_QWORD *)v59 + 6) = 0LL;
    *((_QWORD *)v59 + 7) = 0LL;
    *((_QWORD *)v59 + 8) = 0LL;
    *((_QWORD *)v59 + 9) = 0LL;
    *((_QWORD *)v59 + 10) = 0LL;
    *((_QWORD *)v59 + 11) = 0LL;
    *((_QWORD *)v59 + 12) = 0LL;
    *((_QWORD *)v59 + 13) = 0LL;
    *((_QWORD *)v59 + 14) = 0LL;
    *((_QWORD *)v59 + 15) = 0LL;
    *((_QWORD *)v59 + 16) = 0LL;
    *((_QWORD *)v59 + 17) = 0LL;
    *((_QWORD *)v59 + 18) = 0LL;
    TlsSetValue(v60, v59);
  }
  if ( (*(_QWORD *)Value & 2) != 0 )
    v10 = *(_QWORD *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v10 = *(_QWORD *)Value & 1LL;
  v11 = 0LL;
  if ( v10 )
  {
    while ( a3 != CPtrArrayBase::operator[](Value, v11) )
    {
      v11 = v54 + 1;
      if ( v11 >= v10 )
        goto LABEL_5;
    }
    v13 = -2147467260;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x77u);
  }
  else
  {
LABEL_5:
    v12 = CPtrArrayBase::InsertAt(Value, a3, v10);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = a3;
      v68 = a3;
      *(_DWORD *)(a1 + 4) = 0;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 24) = 0;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7Cu);
  }
LABEL_110:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x40u);
  v14 = 0LL;
LABEL_7:
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC1u);
    goto LABEL_62;
  }
  v13 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), a2, &v69);
  if ( v13 < 0 )
  {
LABEL_131:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xCFu);
    goto LABEL_62;
  }
  while ( 1 )
  {
    v15 = CPreComputeContext::PreSubgraph(a4, a2, &v67);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xD3u);
      goto LABEL_61;
    }
    if ( !v67 )
      break;
    v18 = 0LL;
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v27 & 2) != 0 )
      v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v27) = v27 & 1;
    if ( !(_DWORD)v27 )
    {
      v13 = 1;
      goto LABEL_52;
    }
    v28 = 0;
    *(_QWORD *)&v66 = *(_QWORD *)(a1 + 16);
    v29 = 0LL;
    DWORD2(v66) = *(_DWORD *)(a1 + 24);
    v30 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v30 )
      goto LABEL_37;
    v51 = 2 * v30;
    if ( (unsigned __int64)(2 * v30) > 0xFFFFFFFF )
    {
      v28 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v13 = -2147024362;
LABEL_118:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x87u);
      goto LABEL_52;
    }
    if ( v51 <= 0x40 )
      v51 = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v51 <= 0x10 )
    {
      v28 = -2147024809;
    }
    else
    {
      v52 = 16LL * v51;
      if ( !v52 )
        v52 = 1LL;
      v29 = HeapAlloc(WPF::g_processHeap, 0, v52);
      if ( !v29 )
        v28 = -2147024882;
    }
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x54u);
    }
    else
    {
      v53 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v53 <= 0xFFFFFFFF )
      {
        v28 = 0;
        memcpy_0(v29, *(const void **)(a1 + 48), (unsigned int)v53);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v51;
        *(_QWORD *)(a1 + 48) = v29;
LABEL_37:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v66;
        v31 = *(_DWORD *)(a1 + 32);
        if ( *(_DWORD *)(a1 + 56) > v31 )
          v31 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 56) = v31;
        goto LABEL_40;
      }
      v28 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v29 )
      HeapFree(WPF::g_processHeap, 0, v29);
LABEL_40:
    v13 = v28;
    if ( v28 < 0 )
      goto LABEL_118;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v27 - 1;
    v32 = *(_QWORD *)(a1 + 8);
    v33 = *(_QWORD *)(v32 + 72);
    v34 = (v33 & 2) != 0 ? *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(v32 + 72) & 1LL;
    v35 = *(unsigned int *)(a1 + 24);
    if ( v34 <= v35
      || ((v36 = *(_QWORD *)(v32 + 72), (v36 & 2) != 0)
        ? (v37 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCuLL))
        : (v37 = *(_QWORD *)(v32 + 72) & 1LL),
          v35 >= v37) )
    {
      v18 = 0LL;
    }
    else
    {
      v18 = (CVisual *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v37 != 1 )
        v18 = (CVisual *)*((_QWORD *)v18 + v35 + 2);
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v32;
    *(_QWORD *)(a1 + 8) = v18;
LABEL_52:
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xDAu);
      goto LABEL_61;
    }
    if ( !v18 )
      break;
LABEL_31:
    v13 = CVisual::EnsureTreeData(v18, a2, &v69);
    if ( v13 < 0 )
    {
      v14 = v68;
      goto LABEL_131;
    }
  }
  while ( 1 )
  {
    LOBYTE(a5) = 1;
    v16 = CPreComputeContext::PostSubgraph(a4, a2, (bool *)&a5);
    v13 = v16;
    if ( v16 < 0 )
      break;
    if ( (_BYTE)a5 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      v13 = 0;
      v18 = 0LL;
      if ( !v17 )
        goto LABEL_56;
      if ( (v19 = *(_DWORD *)(a1 + 28), v19 == 1)
        && (v20 = *(_DWORD *)(a1 + 24), v20 != -1)
        && ((v21 = *(_QWORD *)(v17 + 72), (v21 & 2) == 0)
          ? (LODWORD(v21) = v21 & 1)
          : (v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL)),
            v20 + 1 < (unsigned int)v21)
        || !v19 && (v20 = *(_DWORD *)(a1 + 24)) != 0 )
      {
        if ( v19 == 1 )
          v22 = (unsigned int)(v20 + 1);
        else
          v22 = (unsigned int)(v20 - 1);
        v23 = *(_QWORD *)(v17 + 72);
        if ( (v23 & 2) != 0 )
          v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v24 = *(_QWORD *)(v17 + 72) & 1LL;
        if ( v24 > (unsigned int)v22 )
        {
          v25 = *(_QWORD *)(v17 + 72);
          if ( (v25 & 2) != 0 )
            v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v26 = *(_QWORD *)(v17 + 72) & 1LL;
          if ( (unsigned int)v22 >= v26 )
          {
            v18 = 0LL;
          }
          else
          {
            v18 = (CVisual *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v26 != 1 )
              v18 = (CVisual *)*((_QWORD *)v18 + v22 + 2);
          }
        }
        *(_QWORD *)(a1 + 8) = v18;
        *(_DWORD *)(a1 + 24) = v22;
      }
      else
      {
LABEL_56:
        v13 = 1;
      }
      if ( v18 )
        goto LABEL_31;
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v38 = *(_DWORD *)(a1 + 32);
      v39 = 0LL;
      v40 = 0;
      if ( v38 )
      {
        v41 = (unsigned int)(v38 - 1);
        *(_DWORD *)(a1 + 32) = v41;
        v40 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v41 + 8);
        v39 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v41);
      }
      v42 = *(_QWORD *)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v42;
      *(_QWORD *)(a1 + 16) = v39;
      *(_DWORD *)(a1 + 24) = v40;
      if ( v42 )
        continue;
    }
    goto LABEL_61;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xF4u);
LABEL_61:
  v14 = v68;
LABEL_62:
  if ( v13 == 1 || v13 == -2147467260 )
    v13 = 0;
  if ( v14 )
  {
    v43 = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v43 )
    {
LABEL_66:
      v44 = *v43;
      if ( (*v43 & 2) != 0 )
        v45 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v45 = *v43 & 1;
      v46 = v45 - 1;
      if ( (*v43 & 2) != 0 )
        v47 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v47 = *v43 & 1;
      if ( v46 < v47 )
      {
        if ( v47 == 1 )
        {
          *v43 = 0LL;
        }
        else
        {
          v55 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCuLL);
          v56 = v47 - 1;
          v57 = v55 + 2;
          if ( v56 == 1 )
          {
            v58 = v57[-v46 + 1];
            WPF::ProcessHeapImpl::Free(v55);
            *v43 = v58 | 1;
          }
          else
          {
            if ( v46 < v56 )
              memmove(&v57[v46], &v57[v46 + 1], 8 * (v56 - v46));
            *v55 = v56;
          }
        }
      }
    }
    else
    {
      v61 = (__int64 *)operator new(0x98uLL);
      v43 = v61;
      if ( v61 )
      {
        v62 = CThreadContext::s_dwTlsIndex;
        *v61 = 0LL;
        v61[1] = 0LL;
        v61[2] = 0LL;
        v61[3] = 0LL;
        v61[4] = 0LL;
        v61[5] = 0LL;
        v61[6] = 0LL;
        v61[7] = 0LL;
        v61[8] = 0LL;
        v61[9] = 0LL;
        v61[10] = 0LL;
        v61[11] = 0LL;
        v61[12] = 0LL;
        v61[13] = 0LL;
        v61[14] = 0LL;
        v61[15] = 0LL;
        v61[16] = 0LL;
        v61[17] = 0LL;
        v61[18] = 0LL;
        TlsSetValue(v62, v61);
        goto LABEL_66;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Du);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v48 = *(_DWORD *)(a1 + 40);
  if ( v48 == 10 )
  {
    v50 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v50 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v50) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v50) <= *(_DWORD *)(a1 + 36) )
    {
      if ( (_DWORD)v50 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v50 > 0x10 )
      {
        v63 = 16LL * (unsigned int)v50;
        if ( !v63 )
          v63 = 1LL;
        v64 = HeapAlloc(WPF::g_processHeap, 0, v63);
        if ( v64 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v64;
          *(_DWORD *)(a1 + 36) = v50;
          goto LABEL_85;
        }
        v65 = -2147024882;
      }
      else
      {
        v65 = -2147024809;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0xF3u);
    }
LABEL_85:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v13;
  }
  *(_DWORD *)(a1 + 40) = v48 + 1;
  return (unsigned int)v13;
}
