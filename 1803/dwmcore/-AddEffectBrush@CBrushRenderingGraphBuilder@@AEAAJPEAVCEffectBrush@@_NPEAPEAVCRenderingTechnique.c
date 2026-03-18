/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180035A50 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180035B00 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180035BE0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18003661C (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036F54 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x18003701C (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1800372EC (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x1800376E8 (std--vector_CBrushRenderingGraphBuilder--SubgraphOutput_std--allocator_CBrushRenderingGraphBuild.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        CBrushRenderingGraphBuilder *this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rdi
  CBrushRenderingGraphBuilder *v5; // rsi
  CRenderingTechniqueFragment *v7; // rbx
  __int64 v8; // r15
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v10; // rdi
  const struct Windows::UI::Composition::ICompiledEffect *v11; // r12
  struct _TP_WORK *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r14d
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // r15d
  __int64 v18; // r13
  int v19; // r14d
  LPVOID v20; // rax
  unsigned int v21; // edx
  bool v22; // cl
  struct CRenderingTechniqueFragment *v23; // rdi
  CRenderingTechniqueFragment *v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // r12d
  unsigned int v27; // eax
  __int64 v28; // r14
  char *v29; // rcx
  char *v30; // rdx
  int v31; // eax
  CRenderingTechniqueFragment *v32; // rax
  CRenderingTechniqueFragment *v33; // rcx
  struct CRenderingTechniqueFragment *v34; // rax
  int v35; // esi
  _QWORD *v36; // rdi
  _QWORD *v37; // r14
  CRenderingTechniqueFragment *v38; // rcx
  int v40; // eax
  char *v41; // rax
  __int64 v42; // rax
  struct CSpriteVisualContent *v43; // rsi
  int v44; // eax
  char *v45; // rax
  bool v46; // r8
  unsigned int v47; // edx
  CRenderingTechniqueFragment *v48; // rcx
  CRenderingTechniqueFragment *v49; // rax
  __int64 v50; // [rsp+28h] [rbp-E0h]
  int v51; // [rsp+30h] [rbp-D8h]
  char v52; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v53; // [rsp+3Ch] [rbp-CCh]
  CRenderingTechniqueFragment *v54; // [rsp+40h] [rbp-C8h] BYREF
  CRenderingTechniqueFragment *v55; // [rsp+48h] [rbp-C0h] BYREF
  CRenderingTechniqueFragment **v56; // [rsp+50h] [rbp-B8h] BYREF
  struct CRenderingTechniqueFragment *v57; // [rsp+58h] [rbp-B0h] BYREF
  int v58; // [rsp+60h] [rbp-A8h]
  unsigned int v59; // [rsp+68h] [rbp-A0h]
  int v60; // [rsp+6Ch] [rbp-9Ch]
  int v61; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-94h]
  const struct Windows::UI::Composition::ICompiledEffect *lpMem; // [rsp+78h] [rbp-90h]
  void *lpMem_8[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h]
  struct CRenderingTechniqueFragment *v66; // [rsp+98h] [rbp-70h]
  int v67; // [rsp+A0h] [rbp-68h] BYREF
  char v68; // [rsp+A4h] [rbp-64h]
  CRenderingTechniqueFragment *v69; // [rsp+A8h] [rbp-60h]
  __int64 v70; // [rsp+B0h] [rbp-58h]
  __int64 v71; // [rsp+B8h] [rbp-50h]
  int v72; // [rsp+C0h] [rbp-48h]
  CRenderingTechniqueFragment *v73; // [rsp+C8h] [rbp-40h] BYREF
  int v74; // [rsp+D0h] [rbp-38h]
  CRenderingTechniqueFragment *v75; // [rsp+D8h] [rbp-30h] BYREF
  char v76[8]; // [rsp+E0h] [rbp-28h] BYREF
  CRenderingTechniqueFragment *v77; // [rsp+E8h] [rbp-20h]
  char v78[8]; // [rsp+F0h] [rbp-18h] BYREF
  CRenderingTechniqueFragment *v79; // [rsp+F8h] [rbp-10h]

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 10);
  v5 = this;
  v7 = 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)v4 + 9) + 48LL);
  v71 = v8;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v10 = *((_QWORD *)v4 + 9);
  v11 = CompiledEffectNoRef;
  lpMem = CompiledEffectNoRef;
  v12 = *(struct _TP_WORK **)(v10 + 56);
  if ( v12 )
  {
    WaitForThreadpoolWorkCallbacks(v12, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v10 + 56));
    *(_QWORD *)(v10 + 56) = 0LL;
  }
  v70 = *(_QWORD *)(v10 + 72);
  v66 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 12);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
  v65 = 0LL;
  v62 = v13;
  v14 = v13;
  v15 = v13 - 1;
  v53 = v13 - 1;
  *(_OWORD *)lpMem_8 = 0LL;
  std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___(
    lpMem_8,
    v13 - 1);
  v17 = 0;
  if ( !v14 )
  {
LABEL_22:
    v34 = v7;
    v7 = 0LL;
    v35 = 0;
    *a4 = v34;
    goto LABEL_23;
  }
  v18 = 0LL;
  while ( 1 )
  {
    v19 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v11 + 40LL))(
            v11,
            v17);
    v60 = v19;
    v20 = HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    if ( v20 )
    {
      v22 = a3 && v17 == v15;
      LOBYTE(v51) = v22;
      LODWORD(v50) = v19;
      v23 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                    v20,
                                                    v66,
                                                    v70,
                                                    v17,
                                                    v50,
                                                    v51);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = v7;
    v7 = v23;
    v55 = v23;
    if ( v24 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v24, v21);
    if ( !v23 )
    {
      v35 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCDu);
      goto LABEL_23;
    }
    v25 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v11 + 32LL))(
            v11,
            v17);
    v26 = 0;
    v59 = v25;
    if ( v25 )
      break;
LABEL_20:
    if ( v17 != v53 )
    {
      v40 = CBrushRenderingGraphBuilder::CheckFragmentSize(v5, v23);
      v35 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x117u);
        goto LABEL_23;
      }
      if ( (v19 & 8) != 0 )
      {
        v41 = (char *)lpMem_8[0];
        v75 = v23;
        v74 = -1;
        v7 = 0LL;
        *(_DWORD *)((char *)lpMem_8[0] + v18) = -1;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(&v41[v18 + 8], &v75);
        if ( v75 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v75, v16);
      }
      else
      {
        v44 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v55, &v61);
        v35 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x11Cu);
          v7 = v55;
          goto LABEL_23;
        }
        v45 = (char *)lpMem_8[0];
        v73 = 0LL;
        v72 = v61;
        *(_DWORD *)((char *)lpMem_8[0] + v18) = v61;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(&v45[v18 + 8], &v73);
        if ( v73 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v73, v16);
        v7 = v55;
      }
    }
    ++v17;
    v18 += 16LL;
    if ( v17 >= v62 )
      goto LABEL_22;
    v5 = this;
    v11 = lpMem;
    v15 = v53;
  }
  while ( 1 )
  {
    v27 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)lpMem + 48LL))(
            lpMem,
            v17,
            v26,
            &v52);
    v28 = v27;
    if ( v52 )
    {
      v29 = (char *)v23 + 32;
      v30 = (char *)lpMem_8[0] + 16 * v27;
      v31 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 == -1 )
      {
        v32 = (CRenderingTechniqueFragment *)*((_QWORD *)v30 + 1);
        *((_QWORD *)v30 + 1) = 0LL;
        v77 = v32;
        std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
          v29,
          v76);
        v33 = v77;
      }
      else
      {
        v69 = 0LL;
        v67 = v31;
        v68 = 1;
        std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
          v29,
          &v67);
        v33 = v69;
      }
      if ( v33 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v33, v16);
      goto LABEL_18;
    }
    v42 = *((_QWORD *)a2 + 13);
    v43 = *(struct CSpriteVisualContent **)(v42 + 8 * v28);
    if ( v43 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v43 + 48LL))(
             *(_QWORD *)(v42 + 8 * v28),
             51LL) )
      {
        break;
      }
    }
    v56 = (CRenderingTechniqueFragment **)v43;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v71 + 80LL))(v71, (unsigned int)v28) )
    {
      v57 = v66;
      v58 = v28;
    }
    else
    {
      v57 = 0LL;
      v58 = 0;
    }
    v5 = this;
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      this,
      v23,
      (const struct CBrushRenderingGraph::GraphInputParameters *)&v56);
LABEL_18:
    if ( ++v26 >= v59 )
    {
      LOBYTE(v19) = v60;
      goto LABEL_20;
    }
  }
  *((_BYTE *)this + 8) = 1;
  v46 = a3
     || (*(unsigned __int8 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)lpMem + 56LL))(
          lpMem,
          v17,
          v26,
          0LL,
          0LL);
  v54 = 0LL;
  v57 = 0LL;
  v56 = &v54;
  LOBYTE(v58) = 1;
  v35 = CBrushRenderingGraphBuilder::AddBrush(this, v43, v46, &v57);
  if ( (_BYTE)v58 )
  {
    v47 = (unsigned int)v57;
    v48 = *v56;
    *v56 = v57;
    if ( v48 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v48, v47);
  }
  if ( v35 >= 0 )
  {
    v49 = v54;
    v54 = 0LL;
    v79 = v49;
    std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
      (char *)v23 + 32,
      v78);
    if ( v79 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v79, v16);
    if ( v54 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v54, v16);
    v5 = this;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xFBu);
  if ( v54 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v54, v16);
LABEL_23:
  v36 = lpMem_8[0];
  if ( lpMem_8[0] )
  {
    v37 = lpMem_8[1];
    if ( lpMem_8[0] != lpMem_8[1] )
    {
      do
      {
        v38 = (CRenderingTechniqueFragment *)v36[1];
        if ( v38 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v38, v16);
        v36 += 2;
      }
      while ( v36 != v37 );
      v36 = lpMem_8[0];
    }
    std::_Deallocate(v36, (v65 - (__int64)v36) >> 4, 0x10uLL);
    v65 = 0LL;
    *(_OWORD *)lpMem_8 = 0LL;
  }
  if ( v7 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v7, v16);
  return (unsigned int)v35;
}
