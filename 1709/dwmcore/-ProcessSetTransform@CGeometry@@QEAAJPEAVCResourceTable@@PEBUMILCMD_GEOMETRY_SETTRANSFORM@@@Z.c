/*
 * XREFs of ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x180096E00
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::ProcessSetTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_GEOMETRY_SETTRANSFORM *a3)
{
  unsigned int v4; // edi
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rsi
  signed int v8; // eax

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType != this[9] )
  {
    if ( ResourceWithoutType )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              23LL) )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0xB3u);
        return v4;
      }
      v8 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB6u);
        return v4;
      }
      CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
      this[9] = v6;
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
      this[9] = 0LL;
    }
    (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 8))(this, 0LL, 0LL);
  }
  return v4;
}
