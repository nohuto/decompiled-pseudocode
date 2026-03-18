/*
 * XREFs of ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180007DA8
 * Callers:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180007F80 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x180009E98 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?_Insert_n@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@2@_KAEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x1800BD4A8 (-_Insert_n@-$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V-$allocator@PEAUPr.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CProcessAttributionManager::CreateProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        const struct CProcessAttributionManager::ProcessAttributionRecord *a3,
        char a4,
        struct CProcessAttribution **a5)
{
  unsigned int v9; // edi
  char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD **v13; // r12
  _QWORD **v14; // r15
  __int64 v15; // rsi
  const struct CProcessAttributionManager::ProcessAttributionRecord **v16; // r13
  _OWORD *v17; // rax
  _OWORD *v18; // rsi
  __int64 v20; // [rsp+38h] [rbp-40h]
  _BYTE v21[16]; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

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
    v11 = *((_QWORD *)this + 4);
    v12 = *((_QWORD *)this + 3);
    v20 = v11;
    while ( v12 != v11 )
    {
      v13 = *(_QWORD ***)(*(_QWORD *)v12 + 24LL);
      v14 = *(_QWORD ***)(*(_QWORD *)v12 + 16LL);
      v15 = v13 - v14;
      while ( v15 > 0 )
      {
        v16 = (const struct CProcessAttributionManager::ProcessAttributionRecord **)&v14[v15 / 2];
        if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v16, *(_QWORD *)a3) )
        {
          v14 = (_QWORD **)(v16 + 1);
          v15 += -1 - v15 / 2;
        }
        else
        {
          v15 /= 2LL;
        }
      }
      if ( v14 == v13 || **v14 != *(_QWORD *)a3 )
      {
        v17 = HeapAlloc(WPF::g_processHeap, 0, 0x70uLL);
        v18 = v17;
        if ( v17 )
          memset_0(v17, 0, 0x70uLL);
        else
          v18 = 0LL;
        if ( !v18 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1C3u);
          return v9;
        }
        *v18 = *(_OWORD *)a3;
        v18[1] = *((_OWORD *)a3 + 1);
        v18[2] = *((_OWORD *)a3 + 2);
        v18[3] = *((_OWORD *)a3 + 3);
        v18[4] = *((_OWORD *)a3 + 4);
        v18[5] = *((_OWORD *)a3 + 5);
        v18[6] = *((_OWORD *)a3 + 6);
        std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Insert_n(*(_QWORD *)v12 + 16LL, v21, v14);
      }
      v11 = v20;
      v12 += 8LL;
    }
  }
  return v9;
}
