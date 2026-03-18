/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801A3A0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801883E0 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801A3914 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SHAPEVISUAL_SETSHAPES *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v9; // eax
  unsigned int v10; // ebx
  bool v11; // zf
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-38h]
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  CResource *v16; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v10 = -2003303421;
    v14 = 43;
    v12 = -2003303421;
    goto LABEL_9;
  }
  v9 = CShapeVisual::EnsureShapeTree(this, &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 47;
    goto LABEL_6;
  }
  v15[1] = a4;
  v11 = *((_DWORD *)a3 + 2) == 0;
  v15[0] = (unsigned __int64)v5 >> 2;
  v9 = CContainerVectorShape::SetShapes((struct CResource ***)v16, a2, v15, !v11);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 53;
LABEL_6:
    v12 = v9;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v14);
  }
  return v10;
}
