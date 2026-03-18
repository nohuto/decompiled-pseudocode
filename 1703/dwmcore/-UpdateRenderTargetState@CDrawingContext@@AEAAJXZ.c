/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F84C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800541D0 (-Release@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800B758C (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1800CB3BC (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v3; // r13
  int v4; // esi
  CDisplaySet *v5; // rbp
  CMILRefCountBase *v6; // r15
  __int64 v7; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  CBitmapOfDeviceBitmaps *v19; // rcx
  void (*v20)(void); // rax
  CBitmapOfDeviceBitmaps *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  char v24; // r12
  CD3DModuleLoaderInternal *v25; // rcx
  CDXGIEnumeration *v26; // r14
  __int64 v27; // rcx
  struct CDXGIEnumeration *v28; // r14
  __int64 (__fastcall *v29)(CMILRefCountBase *); // rax
  unsigned int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // eax
  __int64 (__fastcall *v36)(CMILRefCountBase *); // rax
  void (*v37)(void); // rax
  struct IBitmapSource *v38; // rdx
  struct CMILFactory *v39; // rcx
  int v40; // eax
  void (__fastcall ***v41)(_QWORD, __int64); // r8
  int v42; // eax
  __int64 v43; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v44[16]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v45; // [rsp+90h] [rbp+8h] BYREF
  CDisplaySet *v46; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v47; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 46);
  v3 = 0LL;
  v43 = 0LL;
  v4 = 0;
  v47 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (**v2)(v2, &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771, &v43) >= 0 )
  {
    *((_BYTE *)this + 3040) = 1;
    v7 = *((_QWORD *)this + 497);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *((_QWORD *)this + 497) = 0LL;
    }
    goto LABEL_4;
  }
  v9 = *((_QWORD *)this + 46);
  *((_BYTE *)this + 3040) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *, _QWORD))(*(_QWORD *)v9 + 104LL))(
          v9,
          v44,
          (char *)this + 408,
          0LL);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2678u);
    goto LABEL_4;
  }
  v11 = *((_QWORD *)this + 50);
  v12 = *((_QWORD *)this + 4);
  v45 = v11;
  *((_QWORD *)this + 52) = 0LL;
  EnterCriticalSection(&CriticalSection);
  v4 = 0;
  v13 = *(_QWORD *)(v12 + 324) - *(__int64 *)((char *)&qword_18023E900 + 4);
  if ( !v13 )
    v13 = *(_QWORD *)(v12 + 332) - qword_18023E90C;
  if ( !v13 )
    v4 = -2003304307;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v4, 0x48Cu);
  }
  else
  {
    v14 = 0LL;
    if ( (_DWORD)qword_18023E900 )
    {
      while ( 1 )
      {
        v15 = qword_18023E890 + 40 * v14;
        if ( (_DWORD)v11 == *(_DWORD *)(v15 + 8) && HIDWORD(v45) == *(_DWORD *)(v15 + 12) )
        {
          v16 = *(_QWORD *)(v12 + 324) - *(_QWORD *)(v15 + 16);
          if ( !v16 )
            v16 = *(_QWORD *)(v12 + 332) - *(_QWORD *)(v15 + 24);
          if ( !v16 )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= (unsigned int)qword_18023E900 )
          goto LABEL_75;
      }
      v17 = *(_QWORD *)v15;
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 496));
      if ( *(int *)(v17 + 872) >= 0 )
      {
        v3 = v17;
        goto LABEL_23;
      }
      CMILPoolResource::Release((CMILPoolResource *)(v17 + 488));
    }
LABEL_75:
    v4 = -2003304307;
  }
LABEL_23:
  LeaveCriticalSection(&CriticalSection);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x25B6u);
  }
  else
  {
    v4 = 0;
    v18 = 0LL;
    if ( *(_QWORD *)(v3 + 832)
      || (Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v3 + 832),
          v40 = CMILBrushBitmap::Create(v39, v38, (struct CMILBrushBitmap **)(v3 + 832)),
          v4 = v40,
          v40 >= 0) )
    {
      v19 = *(CBitmapOfDeviceBitmaps **)(v3 + 832);
      if ( v19 )
      {
        v20 = *(void (**)(void))(*(_QWORD *)v19 + 8LL);
        if ( (char *)v20 == (char *)CBitmapOfDeviceBitmaps::AddRef )
          CBitmapOfDeviceBitmaps::AddRef(v19);
        else
          v20();
      }
      v18 = *(_QWORD *)(v3 + 832);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x18Eu);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x25B8u);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    else
    {
      v21 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)this + 497);
      if ( v21 )
      {
        v37 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
        if ( (char *)v37 == (char *)CBitmapOfDeviceBitmaps::Release )
          CBitmapOfDeviceBitmaps::Release(v21);
        else
          v37();
        *((_QWORD *)this + 497) = 0LL;
      }
      *((_QWORD *)this + 497) = v18;
    }
  }
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 496), 0xFFFFFFFF) == 1 )
  {
    v41 = *(void (__fastcall ****)(_QWORD, __int64))(v3 + 504);
    if ( v41 )
      (**v41)(*(_QWORD *)(v3 + 504), v3 + 488);
    else
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 488) + 16LL))(v3 + 488, 1LL);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2687u);
    goto LABEL_4;
  }
  v22 = *((_DWORD *)this + 102);
  v23 = *((_QWORD *)this + 50);
  *(_QWORD *)((char *)this + 3700) = v23;
  *(_QWORD *)((char *)this + 3956) = v23;
  *((_DWORD *)this + 927) = v22;
  *((_DWORD *)this + 991) = v22;
  if ( v22 == DisplayId::None || v22 == DisplayId::All )
    goto LABEL_57;
  EnterCriticalSection(&g_DisplayManager);
  v4 = 0;
  v24 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v26 = qword_18023E530;
  if ( !qword_18023E530 )
    goto LABEL_85;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18023E530 + 2) + 104LL))(*((_QWORD *)qword_18023E530
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness(v27) != *((_DWORD *)v26 + 14)
    || qword_18023E530 != v26 )
  {
    ReleaseInterface<ClipPlaneInfoRef>(&qword_18023E530);
    v24 = 1;
  }
  if ( !qword_18023E530 )
  {
LABEL_85:
    LODWORD(v45) = CD3DModuleLoaderInternal::CreateD3DObjects(v25, &qword_18023E530);
    TranslateDXGIorD3DErrorInContext(v45, 4, &v45);
    v4 = v45;
    if ( (int)v45 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, v45, 0x12Bu);
  }
  if ( v24 && qword_18023E540 )
    CSurfaceManager::ResetTokenThread(qword_18023E540);
  v28 = qword_18023E530;
  if ( qword_18023E530 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18023E530)(qword_18023E530);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xEDu);
  }
  else
  {
    if ( qword_18023E528 )
    {
LABEL_47:
      _InterlockedIncrement((volatile signed __int32 *)qword_18023E528);
      v5 = qword_18023E528;
      goto LABEL_48;
    }
    v46 = 0LL;
    LeaveCriticalSection(&g_DisplayManager);
    v42 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v28, &v46, 0LL, 0);
    v4 = v42;
    if ( v42 >= 0 )
    {
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_18023E528 )
      {
        if ( v46 )
          CDisplaySet::Release(v46);
      }
      else
      {
        qword_18023E528 = v46;
        if ( v46 )
          _InterlockedIncrement((volatile signed __int32 *)v46);
      }
      goto LABEL_47;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xFBu);
    EnterCriticalSection(&g_DisplayManager);
  }
LABEL_48:
  if ( v28 )
  {
    v29 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v28 + 8LL);
    if ( v29 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v28);
    else
      v29(v28);
  }
  LeaveCriticalSection(&g_DisplayManager);
  if ( v4 >= 0 )
  {
    v30 = *((_DWORD *)v5 + 18);
    v31 = 0LL;
    if ( v30 )
    {
      while ( 1 )
      {
        v32 = *((_QWORD *)v5 + 6);
        v33 = *(_QWORD *)(v32 + 8 * v31);
        v34 = *(_QWORD *)(v33 + 128);
        v35 = v34 ? *(_DWORD *)(v34 + 236) : *(_DWORD *)(v33 + 236);
        if ( *((_DWORD *)this + 102) == v35 )
          break;
        v31 = (unsigned int)(v31 + 1);
        if ( (unsigned int)v31 >= v30 )
          goto LABEL_101;
      }
      v6 = *(CMILRefCountBase **)(v32 + 8 * v31);
      (**(void (__fastcall ***)(CMILRefCountBase *))v33)(v6);
      *((_QWORD *)this + 52) = *(_QWORD *)(*((_QWORD *)v6 + 16) + 16LL);
    }
    else
    {
LABEL_101:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x188u);
      *((_QWORD *)this + 52) = 0LL;
    }
LABEL_57:
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 46))(
           *((_QWORD *)this + 46),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v47) >= 0 )
      *((_DWORD *)this + 1678) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 40LL))(v47);
    else
      *((_DWORD *)this + 1678) = 0;
    if ( v6 )
    {
      v36 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v6 + 8LL);
      if ( v36 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v6);
      else
        v36(v6);
    }
    goto LABEL_62;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xDDu);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2694u);
LABEL_62:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v5);
    WPF::ProcessHeapImpl::Free(v5);
  }
LABEL_4:
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  return (unsigned int)v4;
}
