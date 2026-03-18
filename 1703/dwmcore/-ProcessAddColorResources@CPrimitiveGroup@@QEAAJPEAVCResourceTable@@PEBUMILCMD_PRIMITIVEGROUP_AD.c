/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18000CA84
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C3E0 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C4BC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  int v17; // eax
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
              104LL) )
      {
        break;
      }
      v13 = CResource::RegisterNotifier(this, v18);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x14Au);
        goto LABEL_14;
      }
      v14 = *((unsigned int *)this + 64);
      v15 = v14 + 1;
      if ( (int)v14 + 1 >= (unsigned int)v14 )
        v11 = v14 + 1;
      v5 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
      if ( v15 < (unsigned int)v14 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 63) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 232, 8LL, 1LL, &v18);
        v5 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v14) = v18;
        *((_DWORD *)this + 64) = v11;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x14Cu);
        CResource::UnRegisterNotifierInternal(this, v18);
        goto LABEL_14;
      }
      ++a4;
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        goto LABEL_13;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x142u);
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
