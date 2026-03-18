/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18002759C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800269F8 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180026AD4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  int v5; // ebx
  int v6; // ebp
  unsigned int v11; // esi
  unsigned int v12; // r12d
  struct CResource *ResourceWithoutType; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v18; // eax
  struct CResource *v19; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = a5;
    while ( 1 )
    {
      v12 = v11;
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v19 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              97LL) )
      {
        break;
      }
      v14 = CResource::RegisterNotifier(this, v19);
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x154u);
        goto LABEL_14;
      }
      v15 = *((unsigned int *)this + 64);
      v16 = v15 + 1;
      v11 = v15 + 1;
      if ( (int)v15 + 1 < (unsigned int)v15 )
        v11 = v12;
      v5 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
      if ( v16 < (unsigned int)v15 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 63) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 232, 8LL, 1LL, &v19);
        v5 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v15) = v19;
        *((_DWORD *)this + 64) = v11;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x156u);
        CResource::UnRegisterNotifierInternal(this, v19);
        goto LABEL_14;
      }
      ++a4;
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        goto LABEL_13;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x14Cu);
    goto LABEL_23;
  }
LABEL_13:
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_14:
  if ( v5 < 0 )
LABEL_23:
    CPrimitiveGroup::ReleaseColorResources(this);
  return (unsigned int)v5;
}
