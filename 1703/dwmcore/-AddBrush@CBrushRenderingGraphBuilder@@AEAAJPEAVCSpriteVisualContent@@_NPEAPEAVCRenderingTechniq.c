/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180004054 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAXXZ @ 0x180003624 (-_Tidy@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrush.c)
 *     ?resize@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAAX_K@Z @ 0x1800037B4 (-resize@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrus.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800039B0 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180003A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180003B48 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180005CA0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800156B4 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800157C0 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x180020814 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180022D08 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180022D18 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddBrush(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent **a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CSpriteVisualContent *v4; // rax
  void **v6; // rbx
  unsigned __int8 (__fastcall *v8)(struct CSpriteVisualContent **, __int64); // rax
  CCompiledEffectTemplate *v9; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v11; // rdi
  struct _TP_WORK *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edi
  LPVOID v15; // rax
  unsigned int v16; // edx
  bool v17; // cl
  void **v18; // rdi
  unsigned int v19; // edi
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  char *v26; // rcx
  int v27; // eax
  unsigned int v28; // edx
  CRenderingTechniqueFragment *v29; // rcx
  int v30; // eax
  int v31; // eax
  struct CRenderingTechniqueFragment *v32; // rcx
  unsigned int v33; // edx
  CRenderingTechniqueFragment *v34; // rax
  struct CRenderingTechniqueFragment *v35; // rax
  unsigned int v36; // edx
  struct CSpriteVisualContent *v37; // rdx
  unsigned int v38; // edx
  struct CRenderingTechniqueFragment *v39; // rax
  struct CRenderingTechniqueFragment *v40; // rbx
  CRenderingTechniqueFragment *v41; // rcx
  void **v42; // rax
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // edx
  char *v46; // rsi
  char *v47; // rdi
  int v48; // [rsp+28h] [rbp-D8h]
  char v50[3]; // [rsp+31h] [rbp-CFh] BYREF
  int i; // [rsp+34h] [rbp-CCh]
  unsigned int v52; // [rsp+38h] [rbp-C8h]
  unsigned int v53; // [rsp+3Ch] [rbp-C4h]
  CRenderingTechniqueFragment *v54; // [rsp+40h] [rbp-C0h] BYREF
  void *lpMem; // [rsp+48h] [rbp-B8h] BYREF
  int v56; // [rsp+50h] [rbp-B0h]
  CBrushRenderingGraphBuilder *v57; // [rsp+58h] [rbp-A8h]
  struct CRenderingTechniqueFragment *v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+70h] [rbp-90h]
  struct CRenderingTechniqueFragment *v60; // [rsp+78h] [rbp-88h]
  unsigned int v61; // [rsp+80h] [rbp-80h]
  unsigned int v62; // [rsp+84h] [rbp-7Ch]
  const struct Windows::UI::Composition::ICompiledEffect *v63; // [rsp+88h] [rbp-78h]
  struct CRenderingTechniqueFragment *v64; // [rsp+90h] [rbp-70h]
  struct CRenderingTechniqueFragment **v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  struct CSpriteVisualContent *v67; // [rsp+A8h] [rbp-58h]
  char v68[8]; // [rsp+B0h] [rbp-50h] BYREF
  CRenderingTechniqueFragment *v69; // [rsp+B8h] [rbp-48h]
  int v70; // [rsp+C0h] [rbp-40h] BYREF
  char v71; // [rsp+C4h] [rbp-3Ch]
  CRenderingTechniqueFragment *v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+D0h] [rbp-30h]
  CRenderingTechniqueFragment *v74; // [rsp+D8h] [rbp-28h] BYREF
  int v75; // [rsp+E0h] [rbp-20h]
  CRenderingTechniqueFragment *v76; // [rsp+E8h] [rbp-18h] BYREF
  struct CSpriteVisualContent *v77; // [rsp+F0h] [rbp-10h] BYREF
  struct CSpriteVisualContent *v78; // [rsp+F8h] [rbp-8h]
  unsigned int v79; // [rsp+100h] [rbp+0h]

  v4 = *a2;
  v6 = 0LL;
  v57 = this;
  v65 = a4;
  v8 = (unsigned __int8 (__fastcall *)(struct CSpriteVisualContent **, __int64))*((_QWORD *)v4 + 6);
  lpMem = 0LL;
  if ( !v8(a2, 85LL) )
  {
    if ( !(*((unsigned __int8 (__fastcall **)(struct CSpriteVisualContent **, __int64))*a2 + 6))(a2, 86LL) )
    {
      v24 = -2147467263;
      i = -2147467263;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x112u);
LABEL_72:
      if ( v6 )
      {
        WPF::ProcessHeapImpl::Free(v6[14]);
        v46 = (char *)v6[4];
        if ( v46 )
        {
          if ( v46 != v6[5] )
          {
            v47 = (char *)v6[5];
            do
            {
              std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v46 + 8);
              v46 += 16;
            }
            while ( v46 != v47 );
            v24 = i;
          }
          WPF::ProcessHeapImpl::Free(v6[4]);
          v6[4] = 0LL;
          v6[5] = 0LL;
          v6[6] = 0LL;
        }
        Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v6);
        WPF::ProcessHeapImpl::Free(v6);
      }
      return v24;
    }
    v37 = a2[11];
    v54 = 0LL;
    v58[1] = 0LL;
    v58[0] = (struct CRenderingTechniqueFragment *)&v54;
    LOBYTE(v59) = 1;
    v24 = CBrushRenderingGraphBuilder::AddBrush(this, v37, a3, &v58[1]);
    if ( (_BYTE)v59 )
    {
      v39 = v58[0];
      v40 = v58[1];
      v64 = v58[0];
      v41 = *(CRenderingTechniqueFragment **)v58[0];
      if ( v58[1] != *(struct CRenderingTechniqueFragment **)v58[0] )
      {
        if ( v41 )
        {
          CRenderingTechniqueFragment::`scalar deleting destructor'(v41, v38);
          v39 = v64;
        }
        *(_QWORD *)v39 = v40;
      }
    }
    if ( (v24 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xFBu);
    }
    else
    {
      if ( !a2[10] )
      {
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(&lpMem, &v54);
        v6 = (void **)lpMem;
LABEL_68:
        if ( v54 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v54, v44);
        goto LABEL_24;
      }
      v42 = (void **)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
      v6 = v42;
      if ( v42 )
      {
        *v42 = 0LL;
        v42[1] = 0LL;
        v42[2] = 0LL;
        v42[3] = 0LL;
        v42[4] = 0LL;
        v42[5] = 0LL;
        v42[6] = 0LL;
        *((_DWORD *)v42 + 16) = 0;
        v42[7] = 0LL;
        *((_DWORD *)v42 + 20) = 0;
        v42[9] = 0LL;
        v42[14] = 0LL;
        *((_BYTE *)v42 + 120) = a3;
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
      {
        v69 = v54;
        v54 = 0LL;
        std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
          v6 + 4,
          v68);
        if ( v69 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v69, v43);
        v77 = a2[10];
        v78 = 0LL;
        v79 = 0;
        CBrushRenderingGraphBuilder::AddNamedInputToFragment(
          v57,
          (struct CRenderingTechniqueFragment *)v6,
          (const struct CBrushRenderingGraph::GraphInputParameters *)&v77);
        goto LABEL_68;
      }
      v24 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x100u);
    }
    if ( v54 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v54, v45);
    return v24;
  }
  v9 = a2[11];
  v66 = *(_QWORD *)(*((_QWORD *)v9 + 9) + 48LL);
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v9);
  v11 = *((_QWORD *)v9 + 9);
  v63 = CompiledEffectNoRef;
  v12 = *(struct _TP_WORK **)(v11 + 56);
  if ( v12 )
  {
    WaitForThreadpoolWorkCallbacks(v12, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v11 + 56));
    *(_QWORD *)(v11 + 56) = 0LL;
  }
  v64 = *(struct CRenderingTechniqueFragment **)(v11 + 72);
  v67 = a2[13];
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 48LL))(v66);
  v59 = 0LL;
  v53 = v13;
  *(_OWORD *)v58 = 0LL;
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::resize(v58, v13 - 1);
  v14 = 0;
  v52 = 0;
  if ( !v53 )
  {
LABEL_23:
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy((__int64)v58);
LABEL_24:
    v23 = CBrushRenderingGraphBuilder::CheckFragmentSize(v57, (struct CRenderingTechniqueFragment *)v6);
    i = v23;
    v24 = v23;
    if ( v23 >= 0 )
    {
      v24 = 0;
      *v65 = (struct CRenderingTechniqueFragment *)v6;
      return v24;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x116u);
    goto LABEL_72;
  }
  v60 = v58[0];
  while ( 1 )
  {
    v56 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v63 + 40LL))(
            v63,
            v14);
    v15 = HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    if ( v15 )
    {
      v17 = a3 && v14 == v53 - 1;
      LOBYTE(v48) = v17;
      v18 = (void **)CRenderingTechniqueFragment::CRenderingTechniqueFragment(v15, v67, v64, v14, v56, v48);
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 != v6 )
    {
      if ( v6 )
        CRenderingTechniqueFragment::`scalar deleting destructor'((CRenderingTechniqueFragment *)v6, v16);
      v6 = v18;
      lpMem = v18;
    }
    if ( !v6 )
      break;
    v19 = v52;
    v20 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v63 + 32LL))(
            v63,
            v52);
    v21 = 0;
    v62 = v20;
    for ( i = 0; v21 < v62; i = v21 )
    {
      v22 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v63 + 48LL))(
              v63,
              v19,
              v21,
              v50);
      v61 = v22;
      if ( v50[0] )
      {
        v26 = (char *)v58[0] + 16 * v22;
        v27 = *(_DWORD *)v26;
        if ( *(_DWORD *)v26 == -1 )
        {
          v34 = (CRenderingTechniqueFragment *)*((_QWORD *)v26 + 1);
          *((_QWORD *)v26 + 1) = 0LL;
          v69 = v34;
          std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
            v6 + 4,
            v68);
          v29 = v69;
        }
        else
        {
          v72 = 0LL;
          v70 = v27;
          v71 = 1;
          std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
            v6 + 4,
            &v70);
          v29 = v72;
        }
        if ( v29 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v29, v28);
      }
      else
      {
        v77 = (struct CSpriteVisualContent *)*((_QWORD *)a2[14] + v22);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v66 + 80LL))(v66) )
        {
          v78 = v67;
          v79 = v61;
        }
        else
        {
          v78 = 0LL;
          v79 = 0;
        }
        CBrushRenderingGraphBuilder::AddNamedInputToFragment(
          v57,
          (struct CRenderingTechniqueFragment *)v6,
          (const struct CBrushRenderingGraph::GraphInputParameters *)&v77);
      }
      v21 = i + 1;
    }
    if ( v19 != v53 - 1 )
    {
      v30 = CBrushRenderingGraphBuilder::CheckFragmentSize(v57, (struct CRenderingTechniqueFragment *)v6);
      i = v30;
      v24 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xE3u);
        std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy((__int64)v58);
        goto LABEL_72;
      }
      if ( (v56 & 8) != 0 )
      {
        v75 = -1;
        v76 = (CRenderingTechniqueFragment *)v6;
        v6 = 0LL;
        v35 = v60;
        lpMem = 0LL;
        *(_DWORD *)v60 = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=((char *)v35 + 8, &v76);
        if ( v76 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v76, v36);
      }
      else
      {
        v31 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(v57, (__int64)&lpMem, &v54);
        i = v31;
        v24 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xE8u);
          std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy((__int64)v58);
          v6 = (void **)lpMem;
          goto LABEL_72;
        }
        v32 = v60;
        v74 = 0LL;
        v73 = (int)v54;
        *(_DWORD *)v60 = (_DWORD)v54;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=((char *)v32 + 8, &v74);
        if ( v74 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v74, v33);
        v6 = (void **)lpMem;
      }
      v19 = v52;
    }
    v60 = (struct CRenderingTechniqueFragment *)((char *)v60 + 16);
    v14 = v19 + 1;
    v52 = v14;
    if ( v14 >= v53 )
      goto LABEL_23;
  }
  v24 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xACu);
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy((__int64)v58);
  return v24;
}
