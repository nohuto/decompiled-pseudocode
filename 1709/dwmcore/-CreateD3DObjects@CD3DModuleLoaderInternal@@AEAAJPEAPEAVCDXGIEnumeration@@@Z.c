/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180010D80 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180015000 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x18008BE44 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?LoadD3DModule@CD3DModuleLoaderInternal@@AEAAJXZ @ 0x180191D98 (-LoadD3DModule@CD3DModuleLoaderInternal@@AEAAJXZ.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  struct CDXGIEnumeration *v3; // rdi
  CD3DModuleLoaderInternal *v4; // rcx
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  signed int inited; // eax
  signed int v9; // esi
  signed int D3DModule; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = &stru_1802722C8;
  v3 = 0LL;
  EnterCriticalSection(&stru_1802722C8);
  v5 = qword_1802722F0;
  if ( qword_1802722F0 == -2003292404 )
  {
    D3DModule = CD3DModuleLoaderInternal::LoadD3DModule(v4);
    v5 = D3DModule;
    if ( D3DModule < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180202590, 1u, D3DModule, 0x147u);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
      return v5;
    }
  }
  else if ( qword_1802722F0 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180202590, 1u, qword_1802722F0, 0x14Bu);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
    goto LABEL_15;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  v6 = WPF::ProcessHeapImpl::AllocClear(0x70uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v6 = &CDXGIEnumeration::`vftable';
  v6[2] = 0;
  v6[14] = DrvQueryAdapterPopulationUniqueness();
  *((_QWORD *)v7 + 8) = 0LL;
  *((_QWORD *)v7 + 9) = 0LL;
  v7[20] = 0;
  v7[21] = 0;
  v7[22] = 0;
  *((_QWORD *)v7 + 12) = 0LL;
  v7[27] = 0;
  (**(void (__fastcall ***)(_DWORD *))v7)(v7);
  inited = CDXGIEnumeration::InitDXGI((CDXGIEnumeration *)v7);
  v9 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180202590, 1u, inited, 0x3Bu);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v3 = (struct CDXGIEnumeration *)v7;
  }
  v5 = v9;
  if ( v9 >= 0 )
  {
    *a2 = v3;
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180202590, 1u, v9, 0x14Fu);
LABEL_15:
  if ( v3 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
  return v5;
}
