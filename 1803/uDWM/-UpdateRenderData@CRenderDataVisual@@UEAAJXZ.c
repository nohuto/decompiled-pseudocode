/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x180017FB0
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18000D690 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180014E70 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180070BB0 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800151C0 (-WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@.c)
 *     ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180015370 (-WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180015390 (-WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180015410 (-WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180026260 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?WriteInstruction@CDrawImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180033B00 (-WriteInstruction@CDrawImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(CRenderDataVisual *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // r14
  CDrawGeometryInstruction *v7; // rcx
  __int64 (__fastcall *v8)(CDrawImageInstruction *__hidden, struct IRenderDataBuilder *, const struct CVisual *); // rax
  int v9; // eax
  struct CResource *v10; // rdx
  __int64 v12; // r14
  void *(*v13)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject *v14; // rax
  CBaseObject *v15; // rsi
  int v16; // eax
  int v17; // r14d
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  struct IRenderDataBuilder *v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v20 = 0LL;
  if ( *((_QWORD *)this + 30) )
    goto LABEL_2;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  *((_QWORD *)this + 30) = 0LL;
  v13 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v13 == WPF::ProcessHeapImpl::AllocClear )
    v14 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v14 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v13)(WPF::g_pProcessHeap, 32LL);
  v15 = v14;
  if ( !v14 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
    v5 = -2147024882;
    goto LABEL_42;
  }
  *((_DWORD *)v14 + 2) = 1;
  *((_QWORD *)v14 + 2) = v12;
  *(_QWORD *)v14 = &CResource::`vftable';
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v12 + 96LL))(v12, 29LL, (_DWORD *)v14 + 6);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x44u);
  }
  else if ( !*((_DWORD *)v15 + 6) )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
    goto LABEL_40;
  }
  if ( v17 >= 0 )
  {
    *((_QWORD *)this + 30) = v15;
    goto LABEL_34;
  }
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x29u);
  CBaseObject::Release(v15);
LABEL_34:
  v5 = v17;
  if ( v17 < 0 )
  {
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x65u);
    goto LABEL_19;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 30) + 24LL));
  v5 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x68u);
    goto LABEL_19;
  }
LABEL_2:
  v3 = *((_DWORD *)this + 68);
  if ( v3 <= 0 )
  {
LABEL_14:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IRenderDataBuilder *))(**(_QWORD **)(*((_QWORD *)this + 30)
                                                                                              + 16LL)
                                                                                + 336LL))(
           *(_QWORD *)(*((_QWORD *)this + 30) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 30) + 24LL),
           v20);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( v3 <= 0 )
        v10 = 0LL;
      else
        v10 = (struct CResource *)*((_QWORD *)this + 30);
      if ( *(__int64 (__fastcall **)(CVisual *__hidden, struct CResource *))(*(_QWORD *)this + 40LL) == CVisual::SetContent )
        CVisual::SetContent(this, v10);
      else
        (*(void (__fastcall **)(CRenderDataVisual *, struct CResource *))(*(_QWORD *)this + 40LL))(this, v10);
      goto LABEL_19;
    }
    v19 = 126;
    goto LABEL_46;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IRenderDataBuilder **))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 136LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    v19 = 113;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v19);
    goto LABEL_19;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(CDrawGeometryInstruction **)(v6 + *((_QWORD *)this + 31));
    v8 = *(__int64 (__fastcall **)(CDrawImageInstruction *__hidden, struct IRenderDataBuilder *, const struct CVisual *))(*(_QWORD *)v7 + 8LL);
    if ( v8 == CDrawGeometryInstruction::WriteInstruction )
    {
      v9 = CDrawGeometryInstruction::WriteInstruction(v7, v20, this);
    }
    else if ( v8 == CPushTransformInstruction::WriteInstruction )
    {
      v9 = CPushTransformInstruction::WriteInstruction(v7, v20, this);
    }
    else if ( v8 == CPopInstruction::WriteInstruction )
    {
      v9 = CPopInstruction::WriteInstruction(v7, v20, this);
    }
    else if ( v8 == CDrawOcclusionRectangleInstruction::WriteInstruction )
    {
      v9 = CDrawOcclusionRectangleInstruction::WriteInstruction(v7, v20, this);
    }
    else
    {
      v9 = v8 == CDrawImageInstruction::WriteInstruction
         ? CDrawImageInstruction::WriteInstruction(v7, v20, this)
         : v8(v7, v20, this);
    }
    v5 = v9;
    if ( v9 < 0 )
      break;
    ++v2;
    v6 += 8LL;
    if ( v2 >= v3 )
      goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x75u);
LABEL_19:
  if ( v20 )
    (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v20 + 16LL))(v20);
  return v5;
}
