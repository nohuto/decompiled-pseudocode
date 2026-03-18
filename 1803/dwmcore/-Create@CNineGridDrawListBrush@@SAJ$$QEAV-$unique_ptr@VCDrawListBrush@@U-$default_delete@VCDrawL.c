/*
 * XREFs of ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000405C
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180003B90 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x180003F40 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180189B60 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x180004E70 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180004F0C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ??0CNineGridDrawListBrush@@AEAA@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_N@Z @ 0x180005618 (--0CNineGridDrawListBrush@@AEAA@$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawList.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x180006360 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Create(
        struct CNineGridDrawListBrush *a1,
        int a2,
        int a3,
        char a4,
        CNineGridDrawListBrush **a5)
{
  int v8; // ebp
  struct CObjectCache *ObjectCache; // r10
  _QWORD *v10; // rax
  int v11; // ecx
  CNineGridDrawListBrush *v12; // rbx
  int v13; // edi
  CNineGridDrawListBrush *v15; // rsi
  unsigned int v16; // eax

  v8 = (int)a1;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = HeapAlloc(WPF::g_processHeap, 0, 0x248uLL)) != 0LL )
    v12 = (CNineGridDrawListBrush *)CNineGridDrawListBrush::CNineGridDrawListBrush((_DWORD)v10, v8, a2, a3, a4);
  else
    v12 = 0LL;
  if ( v12 )
  {
    v13 = CNineGridDrawListBrush::Initialize(v12);
    if ( v13 >= 0 )
    {
      *a5 = v12;
      return (unsigned int)v13;
    }
    v15 = v12;
    v16 = 44;
  }
  else
  {
    v15 = 0LL;
    v13 = -2147024882;
    v16 = 42;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v16);
  if ( v12 && v15 )
    CNineGridDrawListBrush::`scalar deleting destructor'(v15, 1u);
  return (unsigned int)v13;
}
