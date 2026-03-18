/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006C824 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024790 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18006BC34 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18006BD5C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006BF4C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C034 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18006C0E4 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800825B0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180084604 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x1800B6CD8 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B6D24 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6D34 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?_Tidy@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAXXZ @ 0x1800B9118 (-_Tidy@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrush.c)
 *     ?resize@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAAX_K@Z @ 0x1800B92A8 (-resize@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrus.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddBrush(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent **a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CSpriteVisualContent *v4; // rax
  void **v6; // rdi
  bool (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  CCompiledEffectTemplate *v10; // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v12; // rbx
  struct _TP_WORK *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  LPVOID v16; // rax
  char v17; // cl
  void **v18; // rbx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  char *v23; // rcx
  int v24; // eax
  CRenderingTechniqueFragment *v25; // rax
  void **v26; // rcx
  int v27; // eax
  unsigned int v28; // ebx
  struct CRenderingTechniqueFragment *v29; // rax
  int v30; // eax
  bool (__fastcall *v32)(__int64, int); // rax
  bool v33; // al
  struct CSpriteVisualContent *v34; // rdx
  struct CRenderingTechniqueFragment *v35; // rax
  struct CRenderingTechniqueFragment *v36; // rdi
  void **v37; // rcx
  void **v38; // rax
  int v39; // eax
  struct CRenderingTechniqueFragment *v40; // rcx
  char *v41; // rsi
  char *v42; // rbx
  char v44[3]; // [rsp+31h] [rbp-CFh] BYREF
  int i; // [rsp+34h] [rbp-CCh]
  unsigned int v46; // [rsp+38h] [rbp-C8h]
  unsigned int v47; // [rsp+3Ch] [rbp-C4h]
  CRenderingTechniqueFragment *v48; // [rsp+40h] [rbp-C0h] BYREF
  void *lpMem; // [rsp+48h] [rbp-B8h] BYREF
  int v50; // [rsp+50h] [rbp-B0h]
  CBrushRenderingGraphBuilder *v51; // [rsp+58h] [rbp-A8h]
  struct CRenderingTechniqueFragment *v52[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h]
  struct CRenderingTechniqueFragment *v54; // [rsp+78h] [rbp-88h]
  unsigned int v55; // [rsp+80h] [rbp-80h]
  unsigned int v56; // [rsp+84h] [rbp-7Ch]
  const struct Windows::UI::Composition::ICompiledEffect *v57; // [rsp+88h] [rbp-78h]
  struct CRenderingTechniqueFragment *v58; // [rsp+90h] [rbp-70h]
  struct CRenderingTechniqueFragment **v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  struct CSpriteVisualContent *v61; // [rsp+A8h] [rbp-58h]
  char v62[8]; // [rsp+B0h] [rbp-50h] BYREF
  CRenderingTechniqueFragment *v63; // [rsp+B8h] [rbp-48h]
  int v64; // [rsp+C0h] [rbp-40h] BYREF
  char v65; // [rsp+C4h] [rbp-3Ch]
  void **v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+D0h] [rbp-30h]
  CRenderingTechniqueFragment *v68; // [rsp+D8h] [rbp-28h] BYREF
  int v69; // [rsp+E0h] [rbp-20h]
  CRenderingTechniqueFragment *v70; // [rsp+E8h] [rbp-18h] BYREF
  struct CSpriteVisualContent *v71; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-8h]
  unsigned int v73; // [rsp+100h] [rbp+0h]

  v4 = *a2;
  v51 = this;
  v6 = 0LL;
  v59 = a4;
  v8 = (bool (__fastcall *)(__int64, int))*((_QWORD *)v4 + 6);
  lpMem = 0LL;
  if ( (char *)v8 == (char *)CEffectBrush::IsOfType )
  {
    v9 = CEffectBrush::IsOfType(a2, 46LL);
  }
  else if ( v8 == CMaskBrush::IsOfType )
  {
    v9 = CMaskBrush::IsOfType((__int64)a2, 46);
  }
  else
  {
    v9 = v8((__int64)a2, 46);
  }
  if ( !v9 )
  {
    v32 = (bool (__fastcall *)(__int64, int))*((_QWORD *)*a2 + 6);
    if ( v32 == CMaskBrush::IsOfType )
      v33 = CMaskBrush::IsOfType((__int64)a2, 87);
    else
      v33 = v32((__int64)a2, 87);
    if ( !v33 )
    {
      v28 = -2147467263;
      i = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467263, 0x112u);
LABEL_80:
      if ( v6 )
      {
        WPF::ProcessHeapImpl::Free(v6[14]);
        v41 = (char *)v6[4];
        if ( v41 )
        {
          if ( v41 != v6[5] )
          {
            v42 = (char *)v6[5];
            do
            {
              std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v41 + 8);
              v41 += 16;
            }
            while ( v41 != v42 );
            v28 = i;
          }
          WPF::ProcessHeapImpl::Free(v6[4]);
          v6[4] = 0LL;
          v6[5] = 0LL;
          v6[6] = 0LL;
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v6);
        WPF::ProcessHeapImpl::Free(v6);
      }
      return v28;
    }
    v34 = a2[11];
    v48 = 0LL;
    v52[1] = 0LL;
    v52[0] = (struct CRenderingTechniqueFragment *)&v48;
    LOBYTE(v53) = 1;
    v28 = CBrushRenderingGraphBuilder::AddBrush(this, v34, a3, &v52[1]);
    if ( (_BYTE)v53 )
    {
      v35 = v52[0];
      v36 = v52[1];
      v58 = v52[0];
      v37 = *(void ***)v52[0];
      if ( v52[1] != *(struct CRenderingTechniqueFragment **)v52[0] )
      {
        if ( v37 )
        {
          CRenderingTechniqueFragment::`scalar deleting destructor'(v37);
          v35 = v58;
        }
        *(_QWORD *)v35 = v36;
      }
    }
    if ( (v28 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xFBu);
    }
    else
    {
      if ( !a2[10] )
      {
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(&lpMem, &v48);
        v6 = (void **)lpMem;
LABEL_53:
        if ( v48 )
          CRenderingTechniqueFragment::`scalar deleting destructor'((void **)v48);
        goto LABEL_32;
      }
      v38 = (void **)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
      v6 = v38;
      if ( v38 )
      {
        *v38 = 0LL;
        v38[1] = 0LL;
        v38[2] = 0LL;
        v38[3] = 0LL;
        v38[4] = 0LL;
        v38[5] = 0LL;
        v38[6] = 0LL;
        v38[7] = 0LL;
        v38[8] = 0LL;
        v38[9] = 0LL;
        v38[10] = 0LL;
        v38[14] = 0LL;
        *((_BYTE *)v38 + 120) = a3;
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
      {
        v63 = v48;
        v48 = 0LL;
        std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
          v6 + 4,
          v62);
        if ( v63 )
          CRenderingTechniqueFragment::`scalar deleting destructor'((void **)v63);
        v71 = a2[10];
        v72 = 0LL;
        v73 = 0;
        CBrushRenderingGraphBuilder::AddNamedInputToFragment(
          v51,
          (struct CRenderingTechniqueFragment *)v6,
          (const struct CBrushRenderingGraph::GraphInputParameters *)&v71);
        goto LABEL_53;
      }
      v28 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x100u);
    }
    if ( v48 )
      CRenderingTechniqueFragment::`scalar deleting destructor'((void **)v48);
    return v28;
  }
  v10 = a2[11];
  v60 = *(_QWORD *)(*((_QWORD *)v10 + 9) + 48LL);
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v10);
  v12 = *((_QWORD *)v10 + 9);
  v57 = CompiledEffectNoRef;
  v13 = *(struct _TP_WORK **)(v12 + 56);
  if ( v13 )
  {
    WaitForThreadpoolWorkCallbacks(v13, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v12 + 56));
    *(_QWORD *)(v12 + 56) = 0LL;
  }
  v58 = *(struct CRenderingTechniqueFragment **)(v12 + 72);
  v61 = a2[13];
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60);
  v53 = 0LL;
  v47 = v14;
  *(_OWORD *)v52 = 0LL;
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::resize(v52, v14 - 1);
  v15 = 0;
  v46 = 0;
  if ( !v47 )
  {
LABEL_31:
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy(v52);
LABEL_32:
    v30 = CBrushRenderingGraphBuilder::CheckFragmentSize(
            (struct CBrushRenderingGraph **)v51,
            (struct CRenderingTechniqueFragment *)v6);
    i = v30;
    v28 = v30;
    if ( v30 >= 0 )
    {
      v28 = 0;
      *v59 = (struct CRenderingTechniqueFragment *)v6;
      return v28;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x116u);
    goto LABEL_80;
  }
  v54 = v52[0];
  while ( 1 )
  {
    v50 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v57 + 40LL))(
            v57,
            v15);
    v16 = HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    if ( v16 )
    {
      v17 = a3 && v15 == v47 - 1;
      v18 = (void **)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                       (__int64)v16,
                       (__int64)v61,
                       (__int64)v58,
                       v15,
                       v50,
                       v17);
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 != v6 )
    {
      if ( v6 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v6);
      v6 = v18;
      lpMem = v18;
    }
    if ( !v6 )
      break;
    v19 = v46;
    v20 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v57 + 32LL))(
            v57,
            v46);
    v21 = 0;
    v56 = v20;
    for ( i = 0; v21 < v56; i = v21 )
    {
      v22 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v57 + 48LL))(
              v57,
              v19,
              v21,
              v44);
      v55 = v22;
      if ( v44[0] )
      {
        v23 = (char *)v52[0] + 16 * v22;
        v24 = *(_DWORD *)v23;
        if ( *(_DWORD *)v23 == -1 )
        {
          v25 = (CRenderingTechniqueFragment *)*((_QWORD *)v23 + 1);
          *((_QWORD *)v23 + 1) = 0LL;
          v63 = v25;
          std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
            v6 + 4,
            v62);
          v26 = (void **)v63;
        }
        else
        {
          v66 = 0LL;
          v64 = v24;
          v65 = 1;
          std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
            v6 + 4,
            &v64);
          v26 = v66;
        }
        if ( v26 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v26);
      }
      else
      {
        v71 = (struct CSpriteVisualContent *)*((_QWORD *)a2[14] + v22);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v60 + 80LL))(v60) )
        {
          v72 = (__int64)v61;
          v73 = v55;
        }
        else
        {
          v72 = 0LL;
          v73 = 0;
        }
        CBrushRenderingGraphBuilder::AddNamedInputToFragment(
          v51,
          (struct CRenderingTechniqueFragment *)v6,
          (const struct CBrushRenderingGraph::GraphInputParameters *)&v71);
      }
      v21 = i + 1;
    }
    if ( v19 != v47 - 1 )
    {
      v27 = CBrushRenderingGraphBuilder::CheckFragmentSize(
              (struct CBrushRenderingGraph **)v51,
              (struct CRenderingTechniqueFragment *)v6);
      i = v27;
      v28 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xE3u);
        std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy(v52);
        goto LABEL_80;
      }
      if ( (v50 & 8) != 0 )
      {
        v69 = -1;
        v70 = (CRenderingTechniqueFragment *)v6;
        v6 = 0LL;
        v29 = v54;
        lpMem = 0LL;
        *(_DWORD *)v54 = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=((char *)v29 + 8, &v70);
        if ( v70 )
          CRenderingTechniqueFragment::`scalar deleting destructor'((void **)v70);
      }
      else
      {
        v39 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(v51, (__int64)&lpMem, &v48);
        i = v39;
        v28 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xE8u);
          std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy(v52);
          v6 = (void **)lpMem;
          goto LABEL_80;
        }
        v40 = v54;
        v68 = 0LL;
        v67 = (int)v48;
        *(_DWORD *)v54 = (_DWORD)v48;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=((char *)v40 + 8, &v68);
        if ( v68 )
          CRenderingTechniqueFragment::`scalar deleting destructor'((void **)v68);
        v6 = (void **)lpMem;
      }
      v19 = v46;
    }
    v54 = (struct CRenderingTechniqueFragment *)((char *)v54 + 16);
    v15 = v19 + 1;
    v46 = v15;
    if ( v15 >= v47 )
      goto LABEL_31;
  }
  v28 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xACu);
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy(v52);
  return v28;
}
