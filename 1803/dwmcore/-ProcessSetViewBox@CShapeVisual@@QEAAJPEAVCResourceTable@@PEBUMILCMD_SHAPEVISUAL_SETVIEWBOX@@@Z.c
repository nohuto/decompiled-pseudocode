/*
 * XREFs of ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801A3AD0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801A3914 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1801A6B48 (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetViewBox(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SHAPEVISUAL_SETVIEWBOX *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CComponentTransform2D *v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CShapeTree *v10; // [rsp+50h] [rbp+18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         150LL) )
  {
    v7 = CShapeVisual::EnsureShapeTree(this, &v10);
    v6 = v7;
    if ( v7 < 0 )
    {
      v9 = 25;
    }
    else
    {
      v7 = CVectorShape::SetTransform(v10, v5);
      v6 = v7;
      if ( v7 >= 0 )
        return v6;
      v9 = 26;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v9);
    return v6;
  }
  v6 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x15u);
  return v6;
}
