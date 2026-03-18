/*
 * XREFs of ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1801A6AC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1801A6B48 (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 */

__int64 __fastcall CVectorShape::ProcessSetTransform(
        CVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_VECTORSHAPE_SETTRANSFORM *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CComponentTransform2D *v5; // rbx
  unsigned int v6; // ebx
  int v7; // eax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         25LL) )
  {
    v7 = CVectorShape::SetTransform(this, v5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3Du);
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x3Au);
  }
  return v6;
}
