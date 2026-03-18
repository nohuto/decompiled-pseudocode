/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18005B220
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EA40 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800B336C (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        CPreComputeContext *a4,
        int a5)
{
  int v9; // eax
  int v10; // esi
  void *v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  CVisual *v16; // rdi
  int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned __int64 v22; // r10
  int v23; // eax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *Value; // r14
  __int64 v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  int v33; // eax
  __int64 v35; // r14
  void *v36; // rsi
  __int64 v37; // rax
  int v38; // ebp
  unsigned int v39; // ecx
  __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // rbp
  unsigned int v45; // r15d
  SIZE_T v46; // r8
  unsigned __int64 v47; // rax
  _QWORD *v48; // r15
  unsigned __int64 v49; // rdi
  _QWORD *v50; // rcx
  __int64 v51; // rdi
  int v52; // edx
  __int64 *v53; // rax
  DWORD v54; // ecx
  SIZE_T v55; // r8
  LPVOID v56; // rdi
  int v57; // eax
  __int128 v58; // [rsp+30h] [rbp-58h]
  bool v59; // [rsp+90h] [rbp+8h] BYREF
  void *v60; // [rsp+98h] [rbp+10h]
  struct CTreeData *v61; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v60 = 0LL;
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
    v60 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC1u);
    goto LABEL_33;
  }
  v10 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), a2, &v61);
  if ( v10 < 0 )
    goto LABEL_117;
  while ( 1 )
  {
    v12 = CPreComputeContext::PreSubgraph(a4, a2, &v59);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xD3u);
      goto LABEL_32;
    }
    if ( !v59 )
      break;
    v16 = 0LL;
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v35 & 2) != 0 )
      v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v35) = v35 & 1;
    if ( !(_DWORD)v35 )
    {
      v10 = 1;
      goto LABEL_66;
    }
    v36 = 0LL;
    *(_QWORD *)&v58 = *(_QWORD *)(a1 + 16);
    DWORD2(v58) = *(_DWORD *)(a1 + 24);
    v37 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v37 )
      goto LABEL_51;
    v45 = 2 * v37;
    if ( (unsigned __int64)(2 * v37) > 0xFFFFFFFF )
    {
      v38 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v10 = -2147024362;
LABEL_103:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x87u);
      goto LABEL_66;
    }
    if ( v45 <= 0x40 )
      v45 = 64;
    v38 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v45 <= 0x10 )
    {
      v38 = -2147024809;
    }
    else
    {
      v46 = 16LL * v45;
      if ( !v46 )
        v46 = 1LL;
      v36 = HeapAlloc(WPF::g_processHeap, 0, v46);
      if ( !v36 )
        v38 = -2147024882;
    }
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x54u);
    }
    else
    {
      v47 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v47 <= 0xFFFFFFFF )
      {
        memcpy_0(v36, *(const void **)(a1 + 48), (unsigned int)v47);
        WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v45;
        *(_QWORD *)(a1 + 48) = v36;
LABEL_51:
        v38 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v58;
        v39 = *(_DWORD *)(a1 + 32);
        if ( *(_DWORD *)(a1 + 56) > v39 )
          v39 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 56) = v39;
        goto LABEL_54;
      }
      v38 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v36 )
      HeapFree(WPF::g_processHeap, 0, v36);
LABEL_54:
    v10 = v38;
    if ( v38 < 0 )
      goto LABEL_103;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v35 - 1;
    v13 = *(_QWORD *)(a1 + 8);
    v40 = *(_QWORD *)(v13 + 72);
    v41 = (v40 & 2) != 0 ? *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCuLL) : v40 & 1;
    v42 = *(unsigned int *)(a1 + 24);
    if ( v41 <= v42
      || ((*(_QWORD *)(v13 + 72) & 2LL) != 0 ? (v43 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCuLL)) : (v43 = v40 & 1),
          v42 >= v43) )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = v43 == 1
          ? (CVisual *)(v40 & 0xFFFFFFFFFFFFFFFCuLL)
          : *(CVisual **)((v40 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v42 + 16);
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)(a1 + 8) = v16;
LABEL_66:
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xDAu);
      goto LABEL_32;
    }
    if ( !v16 )
      break;
LABEL_25:
    v10 = CVisual::EnsureTreeData(v16, a2, &v61);
    if ( v10 < 0 )
    {
      v11 = v60;
LABEL_117:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xCFu);
      goto LABEL_33;
    }
  }
  while ( 1 )
  {
    LOBYTE(a5) = 1;
    v14 = CPreComputeContext::PostSubgraph(a4, (__int64)a2, (bool *)&a5, v13);
    v10 = v14;
    if ( v14 < 0 )
      break;
    if ( (_BYTE)a5 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      v10 = 0;
      v16 = 0LL;
      if ( v15 )
      {
        v17 = *(_DWORD *)(a1 + 28);
        if ( v17 == 1 )
        {
          v18 = *(_DWORD *)(a1 + 24);
          if ( v18 != -1 )
          {
            v19 = *(_QWORD *)(v15 + 72);
            if ( (v19 & 2) != 0 )
              v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v19) = v19 & 1;
            v20 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v20 < (unsigned int)v19 )
            {
LABEL_15:
              v21 = *(_QWORD *)(v15 + 72);
              v13 = v21 & 2;
              if ( (v21 & 2) != 0 )
                v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
              else
                v22 = v21 & 1;
              if ( v22 <= (unsigned int)v20
                || ((v21 & 2) == 0 ? (v13 = v21 & 1) : (v13 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL)),
                    (unsigned int)v20 >= v13) )
              {
                v16 = 0LL;
              }
              else if ( v13 == 1 )
              {
                v16 = (CVisual *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              else
              {
                v16 = *(CVisual **)((v21 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v20 + 16);
              }
              *(_QWORD *)(a1 + 8) = v16;
              *(_DWORD *)(a1 + 24) = v20;
LABEL_24:
              if ( v16 )
                goto LABEL_25;
              goto LABEL_28;
            }
          }
        }
        else if ( !v17 )
        {
          v52 = *(_DWORD *)(a1 + 24);
          if ( v52 )
          {
            v20 = (unsigned int)(v52 - 1);
            goto LABEL_15;
          }
        }
      }
      v10 = 1;
      goto LABEL_24;
    }
LABEL_28:
    if ( *(_DWORD *)(a1 + 4) )
    {
      v23 = *(_DWORD *)(a1 + 32);
      v24 = 0LL;
      v25 = 0;
      if ( v23 )
      {
        v26 = (unsigned int)(v23 - 1);
        *(_DWORD *)(a1 + 32) = v26;
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v26 + 8);
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v26);
      }
      v27 = *(_QWORD *)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v27;
      *(_QWORD *)(a1 + 16) = v24;
      *(_DWORD *)(a1 + 24) = v25;
      if ( v27 )
        continue;
    }
    goto LABEL_32;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xF4u);
LABEL_32:
  v11 = v60;
LABEL_33:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 )
  {
    Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( Value )
    {
LABEL_37:
      v29 = *Value;
      if ( (*Value & 2) != 0 )
        v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v30 = *Value & 1;
      v31 = v30 - 1;
      if ( (*Value & 2) != 0 )
        v32 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v32 = *Value & 1;
      if ( v31 < v32 )
      {
        if ( v32 == 1 )
        {
          *Value = 0LL;
        }
        else
        {
          v48 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
          v49 = v32 - 1;
          v50 = v48 + 2;
          if ( v49 == 1 )
          {
            v51 = v50[-v31 + 1];
            WPF::ProcessHeapImpl::Free(v48);
            *Value = v51 | 1;
          }
          else
          {
            if ( v31 < v49 )
              memmove(&v50[v31], &v50[v31 + 1], 8 * (v49 - v31));
            *v48 = v49;
          }
        }
      }
    }
    else
    {
      v53 = (__int64 *)operator new(0xA8uLL);
      Value = v53;
      if ( v53 )
      {
        v54 = CThreadContext::s_dwTlsIndex;
        *v53 = 0LL;
        v53[1] = 0LL;
        v53[2] = 0LL;
        v53[3] = 0LL;
        v53[4] = 0LL;
        v53[5] = 0LL;
        v53[6] = 0LL;
        v53[7] = 0LL;
        v53[8] = 0LL;
        v53[9] = 0LL;
        v53[10] = 0LL;
        v53[11] = 0LL;
        v53[12] = 0LL;
        v53[13] = 0LL;
        v53[14] = 0LL;
        v53[15] = 0LL;
        v53[16] = 0LL;
        v53[17] = 0LL;
        v53[18] = 0LL;
        v53[19] = 0LL;
        v53[20] = 0LL;
        TlsSetValue(v54, v53);
        goto LABEL_37;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v33 = *(_DWORD *)(a1 + 40);
  if ( v33 == 10 )
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
        v55 = 16LL * (unsigned int)v44;
        if ( !v55 )
          v55 = 1LL;
        v56 = HeapAlloc(WPF::g_processHeap, 0, v55);
        if ( v56 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v56;
          *(_DWORD *)(a1 + 36) = v44;
          goto LABEL_79;
        }
        v57 = -2147024882;
      }
      else
      {
        v57 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x100u);
    }
LABEL_79:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v10;
  }
  *(_DWORD *)(a1 + 40) = v33 + 1;
  return (unsigned int)v10;
}
