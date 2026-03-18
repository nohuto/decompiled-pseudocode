/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18019F330
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180097838 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800978F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  struct CResource *ResourceWithoutType; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  struct CResource *v18; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = a5;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v18 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              105LL) )
      {
        break;
      }
      v13 = CResource::RegisterNotifier(this, v18);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x13Fu);
        goto LABEL_17;
      }
      v14 = *((unsigned int *)this + 64);
      v15 = v14 + 1;
      if ( (int)v14 + 1 >= (unsigned int)v14 )
        v11 = v14 + 1;
      v5 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
      if ( v15 < (unsigned int)v14 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 63) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 232, 8u, 1, &v18);
        v5 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v14) = v18;
        *((_DWORD *)this + 64) = v11;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x141u);
        CResource::UnRegisterNotifierInternal(this, v18);
        goto LABEL_17;
      }
      ++a4;
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        goto LABEL_16;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x137u);
    goto LABEL_18;
  }
LABEL_16:
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_17:
  if ( v5 < 0 )
LABEL_18:
    CPrimitiveGroup::ReleaseColorResources(this);
  return (unsigned int)v5;
}
