/*
 * XREFs of ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180022210
 * Callers:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180022498 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ??$emplace@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@1@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x180020890 (--$emplace@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEAUProcessAttr.c)
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1800241E0 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CProcessAttributionManager::CreateProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        const struct CProcessAttributionManager::ProcessAttributionRecord *a3,
        char a4,
        struct CProcessAttribution **a5)
{
  unsigned int v9; // ebx
  char *v10; // rax
  __int64 *v11; // r14
  __int64 *v12; // r12
  __int64 v13; // rbp
  bool IsLessThan; // cl
  __int64 v15; // rdi
  char *v16; // rax
  char *v17; // rsi
  char *v18; // rax
  _OWORD *v19; // rax
  _OWORD *v20; // rdi
  __int64 v21; // r13
  _OWORD *v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0;
  v10 = (char *)WPF::ProcessHeapImpl::AllocClear(0x88uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v10 + 32) = a2;
  *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v10 = &CProcessAttribution::`vftable';
  *((_DWORD *)v10 + 2) = 0;
  *((_QWORD *)v10 + 2) = *(_QWORD *)a3;
  *(_OWORD *)(v10 + 24) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)v10 + 10) = *((_DWORD *)a3 + 6);
  *a5 = (struct CProcessAttribution *)v10;
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  if ( a4 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 3);
    v12 = (__int64 *)*((_QWORD *)this + 4);
    while ( v11 != v12 )
    {
      v21 = *v11;
      v18 = *(char **)(*v11 + 24);
      v17 = *(char **)(*v11 + 16);
      v15 = (v18 - v17) >> 3;
      if ( v15 > 0 )
      {
        do
        {
          v13 = v15 >> 1;
          IsLessThan = CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(
                         *(const struct CProcessAttributionManager::ProcessAttributionRecord **)&v17[8 * (v15 >> 1)],
                         *(_QWORD *)a3);
          if ( IsLessThan )
            v15 += -1 - v13;
          else
            v15 >>= 1;
          v16 = &v17[8 * v13 + 8];
          if ( !IsLessThan )
            v16 = v17;
          v17 = v16;
        }
        while ( v15 > 0 );
        v18 = *(char **)(v21 + 24);
      }
      if ( v17 == v18 || **(_QWORD **)v17 != *(_QWORD *)a3 )
      {
        v19 = HeapAlloc(WPF::g_processHeap, 0, 0x70uLL);
        v20 = v19;
        if ( v19 )
          memset_0(v19, 0, 0x70uLL);
        else
          v20 = 0LL;
        v23 = v20;
        if ( !v20 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1C3u);
          return v9;
        }
        *v20 = *(_OWORD *)a3;
        v20[1] = *((_OWORD *)a3 + 1);
        v20[2] = *((_OWORD *)a3 + 2);
        v20[3] = *((_OWORD *)a3 + 3);
        v20[4] = *((_OWORD *)a3 + 4);
        v20[5] = *((_OWORD *)a3 + 5);
        v20[6] = *((_OWORD *)a3 + 6);
        std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::emplace<CProcessAttributionManager::ProcessAttributionRecord * const &>(
          (const void **)(*v11 + 16),
          &v24,
          v17,
          &v23);
      }
      ++v11;
    }
  }
  return v9;
}
