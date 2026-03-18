/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180024B90 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801740E0 (-ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024DA0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180042720 (-PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800427D0 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180074BE0 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180095F00 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800C2B58 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18013D230 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IRenderTarget *a2)
{
  struct IRenderTarget **v3; // r14
  __int64 v4; // rbx
  __int64 v6; // rcx
  int updated; // edi
  __int64 v8; // r13
  char *v9; // r12
  __int64 v10; // rax
  unsigned int v11; // edx
  _OWORD *v12; // rcx
  char v13; // al
  char v14; // r12
  __int64 v15; // rcx
  CSwRenderTargetGetBounds *v16; // rcx
  __int64 (__fastcall *v17)(CSwRenderTargetGetBounds *, struct ID2DContext **); // rax
  int D2DContext; // eax
  CD2DContext *v19; // rcx
  struct ID2DContextOwner *v20; // rdx
  __int64 (__fastcall *v21)(CSwRenderTargetGetBounds *, struct ID2DContextOwner *, struct IRenderTarget *); // rax
  int v22; // eax
  struct IRenderTarget *v24; // r8
  void (*v25)(void); // rax
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  _BYTE v31[80]; // [rsp+38h] [rbp-29h] BYREF
  int v32; // [rsp+C8h] [rbp+67h]
  unsigned int v33; // [rsp+C8h] [rbp+67h]
  struct ID2DContext *v34; // [rsp+D8h] [rbp+77h] BYREF

  v3 = (struct IRenderTarget **)((char *)this + 360);
  v4 = *((_QWORD *)this + 45);
  v34 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = 0LL;
  updated = 0;
  *((_BYTE *)this + 6825) = 1;
  v8 = 0LL;
  v32 = 0;
  if ( *((_DWORD *)this + 158) )
  {
    v9 = (char *)this + 608;
    while ( 1 )
    {
      v26 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v9 + 8 * v6), this);
      updated = v26;
      if ( v26 < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      v6 = (unsigned int)(v32 + 1);
      v32 = v6;
      if ( (unsigned int)v6 >= *((_DWORD *)this + 158) )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x1846u);
  }
  else
  {
LABEL_4:
    v9 = (char *)this + 608;
    *((_DWORD *)this + 158) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 608, 8LL);
  }
  if ( (unsigned int)v8 < *((_DWORD *)this + 158) && (_DWORD)v8 )
  {
    v27 = *((_DWORD *)v9 + 6);
    if ( (unsigned int)v8 > v27 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x23Du);
    }
    else
    {
      v28 = v27 - v8;
      v33 = v28;
      if ( v28 )
      {
        memmove(*(void **)v9, (const void *)(*(_QWORD *)v9 + 8 * v8), 8LL * v28);
        v28 = v33;
      }
      *((_DWORD *)v9 + 6) = v28;
    }
  }
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1828u);
  }
  else if ( *((_BYTE *)this + 6826) )
  {
    *(_WORD *)((char *)this + 6825) = 1;
  }
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1294u);
    v13 = 0;
    goto LABEL_14;
  }
  v10 = *((unsigned int *)this + 258);
  v11 = v10 + 1;
  v31[0] = 0;
  *(_QWORD *)&v31[4] = 0LL;
  *(_DWORD *)&v31[76] = 32085;
  *(_OWORD *)&v31[12] = _xmm;
  *(_OWORD *)&v31[28] = _xmm;
  *(_OWORD *)&v31[44] = _xmm;
  *(_OWORD *)&v31[60] = _xmm;
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    updated = -2147024362;
    v29 = 181;
  }
  else
  {
    if ( v11 <= *((_DWORD *)this + 257) )
    {
      updated = 0;
      v12 = (_OWORD *)(*((_QWORD *)this + 126) + 80 * v10);
      *v12 = *(_OWORD *)v31;
      v12[1] = *(_OWORD *)&v31[16];
      v12[2] = *(_OWORD *)&v31[32];
      v12[3] = *(_OWORD *)&v31[48];
      v12[4] = *(_OWORD *)&v31[64];
      *((_DWORD *)this + 258) = v11;
LABEL_13:
      v13 = 1;
      goto LABEL_14;
    }
    updated = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1008, 80LL, 1LL, v31);
    if ( updated >= 0 )
      goto LABEL_55;
    v29 = 192;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v29);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x3Cu);
LABEL_55:
  if ( updated >= 0 )
    goto LABEL_13;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x129Du);
  v13 = 0;
LABEL_14:
  if ( updated < 0 )
  {
    if ( v13 )
      --*((_DWORD *)this + 258);
    v30 = 9518;
    v14 = 0;
  }
  else
  {
    v14 = 1;
    if ( *v3 )
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)*v3 + 16LL))(*v3);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v15 = *((_QWORD *)this + 46);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      *((_QWORD *)this + 46) = 0LL;
    }
    (**(void (__fastcall ***)(struct IRenderTarget *, GUID *, char *))*v3)(
      *v3,
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 368);
    v16 = *v3;
    v17 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct ID2DContext **))(*(_QWORD *)*v3 + 40LL);
    if ( v17 == CSwRenderTargetGetBounds::GetD2DContext )
      D2DContext = CSwRenderTargetGetBounds::GetD2DContext(v16, &v34);
    else
      D2DContext = v17(v16, &v34);
    updated = D2DContext;
    if ( D2DContext < 0 )
    {
      v30 = 9535;
    }
    else
    {
      if ( !*((_QWORD *)this + 48) )
      {
        *((_QWORD *)this + 48) = v34;
        v34 = 0LL;
      }
      updated = CDrawingContext::UpdateRenderTargetState(this);
      if ( updated < 0 )
      {
        v30 = 9552;
      }
      else
      {
        v19 = (CD2DContext *)*((_QWORD *)this + 48);
        v20 = (CDrawingContext *)((char *)this + 8);
        v21 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct ID2DContextOwner *, struct IRenderTarget *))(*(_QWORD *)v19 + 24LL);
        if ( v21 == CD2DContext::PushTarget )
        {
          v22 = CD2DContext::PushTarget(v19, v20, *v3);
        }
        else
        {
          v24 = *v3;
          if ( v21 == CSwRenderTargetGetBounds::PushTarget )
            v22 = CSwRenderTargetGetBounds::PushTarget(v19, v20, v24);
          else
            v22 = v21(v19, v20, v24);
        }
        updated = v22;
        if ( v22 >= 0 )
          goto LABEL_30;
        v30 = 9558;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v30);
  ReplaceInterface<IDXGIResource,IDXGIResource>(v3, v4);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 46);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 48);
  if ( *v3 )
  {
    (**(void (__fastcall ***)(struct IRenderTarget *, GUID *, char *))*v3)(
      *v3,
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 368);
    (*(void (__fastcall **)(struct IRenderTarget *, char *))(*(_QWORD *)*v3 + 40LL))(*v3, (char *)this + 384);
    CDrawingContext::UpdateRenderTargetState(this);
  }
  if ( v14 )
    CDrawingContext::PopClippingScope(this, 0);
LABEL_30:
  if ( v34 )
  {
    v25 = *(void (**)(void))(*(_QWORD *)v34 + 16LL);
    if ( (char *)v25 == (char *)CD3DDeviceLevel1::Release )
      CD3DDeviceLevel1::Release(v34);
    else
      v25();
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)updated;
}
