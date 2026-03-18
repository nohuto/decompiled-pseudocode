/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006589C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x18001DAD4 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18001DBF0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800B708C (--1CDisplaySet@@AEAA@XZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800CA5A8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  int v1; // edi
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // ebp
  CDisplaySet *v5; // r15
  CMILRefCountBase *v6; // r12
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r14
  CMILCOMBase *v15; // rcx
  void (*v16)(void); // rax
  CGdiSpriteBitmap *v17; // rcx
  int v18; // ecx
  __int64 v19; // rax
  char v20; // r13
  CD3DModuleLoaderInternal *v21; // rcx
  CDXGIEnumeration *v22; // rbx
  struct CDXGIEnumeration *v23; // rbx
  __int64 (__fastcall *v24)(CMILRefCountBase *); // rax
  unsigned int v25; // r8d
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 (__fastcall *v31)(CMILRefCountBase *); // rax
  __int64 v33; // rcx
  void (*v34)(void); // rax
  CMILBrushBitmap *v35; // rax
  struct CMILFactory *v36; // rdx
  CMILBrushBitmap *v37; // rax
  CMILBrushBitmap *v38; // rax
  void (__fastcall ***v39)(_QWORD, __int64); // r8
  int v40; // eax
  __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  char v42[80]; // [rsp+38h] [rbp-50h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v44; // [rsp+90h] [rbp+8h] BYREF
  CMILBrushBitmap *v45; // [rsp+98h] [rbp+10h]
  CDisplaySet *v46; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v47; // [rsp+A8h] [rbp+20h] BYREF

  v1 = 0;
  v41 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 45);
  v47 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( (**v3)(v3, &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771, &v41) < 0 )
  {
    v7 = *((_QWORD *)this + 45);
    *((_BYTE *)this + 3136) = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v7 + 136LL))(v7, v42, (char *)this + 400);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x25C7u);
      goto LABEL_54;
    }
    v9 = *((_QWORD *)this + 49);
    v44 = v9;
    v10 = 0LL;
    *((_QWORD *)this + 52) = 0LL;
    EnterCriticalSection(&stru_1802D6738);
    v4 = 0;
    if ( BYTE4(qword_1802D67F0) )
      v4 = -2003304307;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v4, 0x496u);
    }
    else
    {
      v11 = 0;
      if ( (_DWORD)qword_1802D67F0 )
      {
        while ( 1 )
        {
          v12 = qword_1802D67A0 + 24LL * v11;
          if ( (_DWORD)v9 == *(_DWORD *)(v12 + 8) && HIDWORD(v44) == *(_DWORD *)(v12 + 12) )
            break;
          if ( ++v11 >= (unsigned int)qword_1802D67F0 )
            goto LABEL_72;
        }
        v13 = *(_QWORD *)v12;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 480));
        if ( *(int *)(v13 + 888) >= 0 )
        {
          v10 = v13;
          goto LABEL_11;
        }
        CMILPoolResource::Release((CMILPoolResource *)(v13 + 472));
      }
LABEL_72:
      v4 = -2003304307;
    }
LABEL_11:
    LeaveCriticalSection(&stru_1802D6738);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x24F8u);
    }
    else
    {
      v4 = 0;
      v14 = 0LL;
      if ( *(_QWORD *)(v10 + 848) )
        goto LABEL_13;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(v10 + 848));
      v35 = (CMILBrushBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x108uLL);
      if ( !v35 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v37 = CMILBrushBitmap::CMILBrushBitmap(v35, v36);
      v45 = v37;
      if ( v37 )
      {
        (*(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v37 + 8LL))(v37);
        v38 = v45;
        *((_QWORD *)v45 + 24) = 0LL;
        *(_QWORD *)(v10 + 848) = v38;
      }
      else
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37u);
      }
      if ( v4 >= 0 )
      {
LABEL_13:
        v15 = *(CMILCOMBase **)(v10 + 848);
        if ( v15 )
        {
          v16 = *(void (**)(void))(*(_QWORD *)v15 + 8LL);
          if ( (char *)v16 == (char *)CMILCOMBase::InternalAddRef )
            CMILCOMBase::InternalAddRef(v15);
          else
            v16();
        }
        v14 = *(_QWORD *)(v10 + 848);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x203u);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x24FAu);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      else
      {
        v17 = (CGdiSpriteBitmap *)*((_QWORD *)this + 505);
        if ( v17 )
        {
          v34 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
          if ( (char *)v34 == (char *)CGdiSpriteBitmap::Release )
            CGdiSpriteBitmap::Release(v17);
          else
            v34();
          *((_QWORD *)this + 505) = 0LL;
        }
        *((_QWORD *)this + 505) = v14;
      }
    }
    if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 480), 0xFFFFFFFF) == 1 )
    {
      v39 = *(void (__fastcall ****)(_QWORD, __int64))(v10 + 488);
      if ( v39 )
        (**v39)(*(_QWORD *)(v10 + 488), v10 + 472);
      else
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 472) + 16LL))(v10 + 472, 1LL);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x25D6u);
      goto LABEL_54;
    }
    v18 = *((_DWORD *)this + 100);
    v19 = *((_QWORD *)this + 49);
    *(_QWORD *)((char *)this + 3780) = v19;
    *(_QWORD *)((char *)this + 4020) = v19;
    *((_DWORD *)this + 947) = v18;
    *((_DWORD *)this + 1007) = v18;
    if ( v18 == DisplayId::All || v18 == DisplayId::None )
      goto LABEL_46;
    EnterCriticalSection(&g_DisplayManager);
    v4 = 0;
    v20 = 0;
    EnterCriticalSection(&g_DisplayManager);
    v22 = qword_1802D6430;
    if ( !qword_1802D6430 )
      goto LABEL_85;
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_1802D6430 + 2) + 104LL))(*((_QWORD *)qword_1802D6430
                                                                                                + 2))
      || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v22 + 14)
      || qword_1802D6430 != v22 )
    {
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_1802D6430);
      v20 = 1;
    }
    if ( !qword_1802D6430 )
    {
LABEL_85:
      LODWORD(v44) = CD3DModuleLoaderInternal::CreateD3DObjects(v21, &qword_1802D6430);
      TranslateDXGIorD3DErrorInContext(v44, 4, &v44);
      v4 = v44;
      if ( (int)v44 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, v44, 0x128u);
    }
    if ( v20 && qword_1802D6440 )
      CSurfaceManager::ResetTokenThread(qword_1802D6440);
    v23 = qword_1802D6430;
    if ( qword_1802D6430 )
      (**(void (__fastcall ***)(CDXGIEnumeration *))qword_1802D6430)(qword_1802D6430);
    LeaveCriticalSection(&g_DisplayManager);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xEAu);
      goto LABEL_36;
    }
    if ( !qword_1802D6428 )
    {
      v46 = 0LL;
      LeaveCriticalSection(&g_DisplayManager);
      v40 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v23, &v46, 0LL);
      v4 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xF8u);
        EnterCriticalSection(&g_DisplayManager);
        goto LABEL_36;
      }
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_1802D6428 )
      {
        if ( v46 )
          CDisplaySet::Release(v46);
      }
      else
      {
        qword_1802D6428 = v46;
        if ( v46 )
          _InterlockedIncrement((volatile signed __int32 *)v46);
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)qword_1802D6428);
    v5 = qword_1802D6428;
LABEL_36:
    if ( v23 )
    {
      v24 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v23 + 8LL);
      if ( v24 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v23);
      else
        v24(v23);
    }
    LeaveCriticalSection(&g_DisplayManager);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xD9u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x25E3u);
LABEL_51:
      if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      {
        CDisplaySet::~CDisplaySet(v5);
        operator delete(v5);
      }
      goto LABEL_54;
    }
    v25 = *((_DWORD *)v5 + 18);
    v26 = 0;
    if ( v25 )
    {
      v27 = *((_QWORD *)v5 + 6);
      while ( 1 )
      {
        v28 = *(_QWORD *)(v27 + 8LL * v26);
        v29 = *(_QWORD *)(v28 + 152);
        v30 = v29 ? *(_DWORD *)(v29 + 260) : *(_DWORD *)(v28 + 260);
        if ( *((_DWORD *)this + 100) == v30 )
          break;
        if ( ++v26 >= v25 )
          goto LABEL_101;
      }
      v6 = *(CMILRefCountBase **)(v27 + 8LL * v26);
      (**(void (__fastcall ***)(__int64))v28)(v28);
      *((_QWORD *)this + 52) = *(_QWORD *)(*((_QWORD *)v6 + 19) + 16LL);
    }
    else
    {
LABEL_101:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x18Au);
      *((_QWORD *)this + 52) = 0LL;
    }
LABEL_46:
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 45))(
           *((_QWORD *)this + 45),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v47) >= 0 )
      v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 40LL))(v47);
    *((_DWORD *)this + 101) = v1;
    *((_BYTE *)this + 408) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 160LL))(*((_QWORD *)this + 45));
    if ( v6 )
    {
      v31 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v6 + 8LL);
      if ( v31 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v6);
      else
        v31(v6);
    }
    goto LABEL_51;
  }
  *((_BYTE *)this + 3136) = 1;
  v33 = *((_QWORD *)this + 505);
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    *((_QWORD *)this + 505) = 0LL;
  }
LABEL_54:
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  return (unsigned int)v4;
}
