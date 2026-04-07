/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18001F350
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180019540 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x18001C240 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001D5A0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002E2A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800754E0 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?WriteInstruction@CDrawImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001A670 (-WriteInstruction@CDrawImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001C590 (-WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@.c)
 *     ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001E530 (-WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001E550 (-WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001EAF0 (-WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180023DD0 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(CRenderDataVisual *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  __int64 v6; // r14
  CDrawGeometryInstruction *v7; // rcx
  __int64 (__fastcall *v8)(const RECT *, struct IRenderDataBuilder *, const struct CVisual *); // rax
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
    v5 = -2147024882;
    v17 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
    goto LABEL_42;
  }
  *((_DWORD *)v14 + 2) = 1;
  *((_QWORD *)v14 + 2) = v12;
  *(_QWORD *)v14 = &CResource::`vftable';
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v12 + 96LL))(v12, 28LL, (_DWORD *)v14 + 6);
  v5 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x44u);
  }
  else if ( !*((_DWORD *)v15 + 6) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
    v17 = -2147024882;
    goto LABEL_40;
  }
  v17 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)this + 30) = v15;
    goto LABEL_30;
  }
LABEL_40:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x29u);
  CBaseObject::Release(v15);
LABEL_30:
  if ( v5 < 0 )
  {
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x65u);
    goto LABEL_19;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 408LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 30) + 24LL));
  v5 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x68u);
    goto LABEL_19;
  }
LABEL_2:
  v3 = *((_DWORD *)this + 68);
  if ( v3 <= 0 )
  {
LABEL_14:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IRenderDataBuilder *))(**(_QWORD **)(*((_QWORD *)this + 30)
                                                                                              + 16LL)
                                                                                + 328LL))(
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v19);
    goto LABEL_19;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(CDrawGeometryInstruction **)(v6 + *((_QWORD *)this + 31));
    v8 = *(__int64 (__fastcall **)(const RECT *, struct IRenderDataBuilder *, const struct CVisual *))(*(_QWORD *)v7 + 8LL);
    if ( (char *)v8 == (char *)CDrawGeometryInstruction::WriteInstruction )
    {
      v9 = CDrawGeometryInstruction::WriteInstruction(v7, v20, this);
    }
    else if ( (char *)v8 == (char *)CPushTransformInstruction::WriteInstruction )
    {
      v9 = CPushTransformInstruction::WriteInstruction(v7, v20, this);
    }
    else if ( (char *)v8 == (char *)CPopInstruction::WriteInstruction )
    {
      v9 = CPopInstruction::WriteInstruction(v7, v20, this);
    }
    else if ( (char *)v8 == (char *)CDrawOcclusionRectangleInstruction::WriteInstruction )
    {
      v9 = CDrawOcclusionRectangleInstruction::WriteInstruction(v7, v20, this);
    }
    else
    {
      v9 = v8 == CDrawImageInstruction::WriteInstruction
         ? CDrawImageInstruction::WriteInstruction((const RECT *)v7, v20, this)
         : v8((const RECT *)v7, v20, this);
    }
    v5 = v9;
    if ( v9 < 0 )
      break;
    ++v2;
    v6 += 8LL;
    if ( v2 >= v3 )
      goto LABEL_14;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x75u);
LABEL_19:
  if ( v20 )
    (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v5;
}
