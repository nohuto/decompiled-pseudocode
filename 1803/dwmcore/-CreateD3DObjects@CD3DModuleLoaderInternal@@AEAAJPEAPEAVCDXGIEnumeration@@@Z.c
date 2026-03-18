/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800CA5A8
 * Callers:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800CA7EC (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  struct CDXGIEnumeration *v3; // rsi
  signed int v4; // ebx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  int inited; // eax
  signed int LastError; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = &stru_1802D6450;
  v3 = 0LL;
  EnterCriticalSection(&stru_1802D6450);
  v4 = dword_1802D6478;
  if ( dword_1802D6478 != -2003292404 )
  {
    if ( dword_1802D6478 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, dword_1802D6478, 0x14Bu);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
LABEL_22:
      if ( v3 )
        (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
      return (unsigned int)v4;
    }
LABEL_3:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
    v5 = WPF::ProcessHeapImpl::AllocClear(0x70uLL);
    v6 = v5;
    if ( !v5 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v5 = &CDXGIEnumeration::`vftable';
    v5[2] = 0;
    v5[14] = DrvQueryAdapterPopulationUniqueness();
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    v6[20] = 0;
    v6[21] = 0;
    v6[22] = 0;
    *((_QWORD *)v6 + 12) = 0LL;
    v6[27] = 0;
    (**(void (__fastcall ***)(_DWORD *))v6)(v6);
    inited = CDXGIEnumeration::InitDXGI((CDXGIEnumeration *)v6);
    v4 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, inited, 0x3Bu);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      v3 = (struct CDXGIEnumeration *)v6;
    }
    if ( v4 >= 0 )
    {
      *a2 = v3;
      return (unsigned int)v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, v4, 0x14Fu);
    goto LABEL_22;
  }
  hLibModule = LoadLibraryW(L"d3d11.dll");
  if ( hLibModule )
  {
    dword_1802D6478 = 0;
    goto LABEL_3;
  }
  LastError = GetLastError();
  v4 = LastError;
  if ( LastError > 0 )
    v4 = (unsigned __int16)LastError | 0x80070000;
  if ( v4 >= 0 )
    v4 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xF5u);
  OutputDebugStringW(L"WARNING: DWMCore: Direct3D 11 is not installed or load failed.\n");
  dword_1802D6478 = v4;
  if ( hLibModule )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, v4, 0x147u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return (unsigned int)v4;
}
