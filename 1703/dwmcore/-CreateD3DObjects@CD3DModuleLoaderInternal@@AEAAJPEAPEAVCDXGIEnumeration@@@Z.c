/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0
 * Callers:
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180068B90 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800460F0 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  struct CDXGIEnumeration *v3; // rsi
  signed int v4; // ebx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int inited; // eax
  signed int LastError; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = &stru_18023E550;
  v3 = 0LL;
  EnterCriticalSection(&stru_18023E550);
  v4 = dword_18023E578;
  if ( dword_18023E578 != -2003292404 )
  {
    if ( dword_18023E578 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, dword_18023E578, 0x14Bu);
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
LABEL_22:
      if ( v3 )
        (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
      return (unsigned int)v4;
    }
LABEL_3:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
    v5 = WPF::ProcessHeapImpl::AllocClear(0x70uLL);
    v7 = v5;
    if ( !v5 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v5 = &CDXGIEnumeration::`vftable';
    v5[2] = 0;
    v5[14] = DrvQueryAdapterPopulationUniqueness(v6);
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 9) = 0LL;
    v7[20] = 0;
    v7[21] = 0;
    v7[22] = 0;
    *((_QWORD *)v7 + 12) = 0LL;
    v7[27] = 0;
    (**(void (__fastcall ***)(_DWORD *))v7)(v7);
    inited = CDXGIEnumeration::InitDXGI((CDXGIEnumeration *)v7);
    v4 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, inited, 0x3Bu);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v3 = (struct CDXGIEnumeration *)v7;
    }
    if ( v4 >= 0 )
    {
      *a2 = v3;
      return (unsigned int)v4;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, v4, 0x14Fu);
    goto LABEL_22;
  }
  hLibModule = LoadLibraryW(L"d3d11.dll");
  if ( hLibModule )
  {
    dword_18023E578 = 0;
    goto LABEL_3;
  }
  LastError = GetLastError();
  v4 = LastError;
  if ( LastError > 0 )
    v4 = (unsigned __int16)LastError | 0x80070000;
  if ( v4 >= 0 )
    v4 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xF5u);
  OutputDebugStringW(L"WARNING: DWMCore: Direct3D 11 is not installed or load failed.\n");
  dword_18023E578 = v4;
  if ( hLibModule )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, v4, 0x147u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return (unsigned int)v4;
}
