/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180042D8C (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180042F3C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180010D80 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@UEAAKXZ @ 0x18002C740 (-Release@CSwRenderTargetGetBounds@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800988F0 (--1CDisplaySet@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1801CEA80 (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  struct CMILFactory *v3; // r12
  int v4; // esi
  CDisplaySet *v5; // rbp
  CMILRefCountBase *v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // r10d
  __int64 v12; // rcx
  struct IBitmapSource *v13; // rdx
  struct CMILFactory **v14; // rbx
  CMILCOMBase *v15; // rcx
  void (*v16)(void); // rax
  CSwRenderTargetGetBounds *v17; // rcx
  CDisplayManager *v18; // rcx
  __int64 v19; // rax
  int CurrentDisplaySetInternal; // eax
  unsigned int v21; // edx
  unsigned int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 (__fastcall *v27)(CMILRefCountBase *); // rax
  __int64 v29; // rcx
  void (*v30)(void); // rax
  int v31; // eax
  void (__fastcall ***v32)(_QWORD, __int64); // r8
  _BYTE v33[24]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v34; // [rsp+98h] [rbp+10h] BYREF
  struct CDisplaySet *v35; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 45);
  v3 = 0LL;
  v36 = 0LL;
  v4 = 0;
  v34 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (**v2)(v2, &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771, &v36) < 0 )
  {
    v7 = *((_QWORD *)this + 45);
    *((_BYTE *)this + 3136) = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *))(*(_QWORD *)v7 + 88LL))(v7, v33, (char *)this + 400);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x247Fu);
      goto LABEL_41;
    }
    v9 = *((_QWORD *)this + 49);
    v10 = 0LL;
    *((_QWORD *)this + 52) = 0LL;
    EnterCriticalSection(&CriticalSection);
    v4 = 0;
    if ( BYTE4(qword_18026EFB0) )
      v4 = -2003304307;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, v4, 0x492u);
    }
    else
    {
      v11 = 0;
      if ( (_DWORD)qword_18026EFB0 )
      {
        while ( v9 != *(_QWORD *)(qword_18026EF60 + 24LL * v11 + 8) )
        {
          if ( ++v11 >= (unsigned int)qword_18026EFB0 )
            goto LABEL_55;
        }
        v12 = *(_QWORD *)(qword_18026EF60 + 24LL * v11);
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 480));
        if ( *(int *)(v12 + 888) >= 0 )
        {
          v10 = v12;
          goto LABEL_10;
        }
        CMILPoolResource::Release((CMILPoolResource *)(v12 + 472));
      }
LABEL_55:
      v4 = -2003304307;
    }
LABEL_10:
    LeaveCriticalSection(&CriticalSection);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x23BCu);
    }
    else
    {
      v4 = 0;
      v14 = (struct CMILFactory **)(v10 + 848);
      if ( *(_QWORD *)(v10 + 848)
        || (v31 = CMILBrushBitmap::Create(*v14, v13, (struct CMILBrushBitmap **)(v10 + 848)), v4 = v31, v31 >= 0) )
      {
        v15 = *v14;
        if ( *v14 )
        {
          v16 = *(void (**)(void))(*(_QWORD *)v15 + 8LL);
          if ( (char *)v16 == (char *)CMILCOMBase::InternalAddRef )
            CMILCOMBase::InternalAddRef(v15);
          else
            v16();
        }
        v3 = *v14;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1B5u);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x23BEu);
        if ( v3 )
          (*(void (__fastcall **)(struct CMILFactory *))(*(_QWORD *)v3 + 16LL))(v3);
      }
      else
      {
        v17 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 505);
        if ( v17 )
        {
          v30 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
          if ( (char *)v30 == (char *)CSwRenderTargetGetBounds::Release )
            CSwRenderTargetGetBounds::Release(v17);
          else
            v30();
          *((_QWORD *)this + 505) = 0LL;
        }
        *((_QWORD *)this + 505) = v3;
      }
    }
    if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 480), 0xFFFFFFFF) == 1 )
    {
      v32 = *(void (__fastcall ****)(_QWORD, __int64))(v10 + 488);
      if ( v32 )
        (**v32)(*(_QWORD *)(v10 + 488), v10 + 472);
      else
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 472) + 16LL))(v10 + 472, 1LL);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x248Eu);
      goto LABEL_41;
    }
    v18 = (CDisplayManager *)*((unsigned int *)this + 100);
    v19 = *((_QWORD *)this + 49);
    *(_QWORD *)((char *)this + 3780) = v19;
    *(_QWORD *)((char *)this + 4020) = v19;
    *((_DWORD *)this + 947) = (_DWORD)v18;
    *((_DWORD *)this + 1007) = (_DWORD)v18;
    if ( (_DWORD)v18 != DisplayId::All && (_DWORD)v18 != DisplayId::None )
    {
      v35 = 0LL;
      CurrentDisplaySetInternal = CDisplayManager::GetCurrentDisplaySetInternal(v18, &v35);
      v4 = CurrentDisplaySetInternal;
      if ( CurrentDisplaySetInternal < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySetInternal, 0xD9u);
      v5 = v35;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x249Bu);
LABEL_38:
        if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        {
          CDisplaySet::~CDisplaySet(v5);
          WPF::ProcessHeapImpl::Free(v5);
        }
        goto LABEL_41;
      }
      v21 = *((_DWORD *)v35 + 18);
      v22 = 0;
      if ( v21 )
      {
        v23 = *((_QWORD *)v35 + 6);
        while ( 1 )
        {
          v24 = *(_QWORD *)(v23 + 8LL * v22);
          v25 = *(_QWORD *)(v24 + 128);
          v26 = v25 ? *(_DWORD *)(v25 + 240) : *(_DWORD *)(v24 + 240);
          if ( *((_DWORD *)this + 100) == v26 )
            break;
          if ( ++v22 >= v21 )
            goto LABEL_68;
        }
        v6 = *(CMILRefCountBase **)(v23 + 8LL * v22);
        (**(void (__fastcall ***)(__int64))v24)(v24);
        *((_QWORD *)this + 52) = *(_QWORD *)(*((_QWORD *)v6 + 16) + 16LL);
      }
      else
      {
LABEL_68:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x18Au);
        *((_QWORD *)this + 52) = 0LL;
      }
    }
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 45))(
           *((_QWORD *)this + 45),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v34) >= 0 )
      *((_DWORD *)this + 101) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 40LL))(v34);
    else
      *((_DWORD *)this + 101) = 0;
    *((_BYTE *)this + 408) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 152LL))(*((_QWORD *)this + 45));
    if ( v6 )
    {
      v27 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v6 + 8LL);
      if ( v27 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v6);
      else
        v27(v6);
    }
    goto LABEL_38;
  }
  *((_BYTE *)this + 3136) = 1;
  v29 = *((_QWORD *)this + 505);
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    *((_QWORD *)this + 505) = 0LL;
  }
LABEL_41:
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  return (unsigned int)v4;
}
