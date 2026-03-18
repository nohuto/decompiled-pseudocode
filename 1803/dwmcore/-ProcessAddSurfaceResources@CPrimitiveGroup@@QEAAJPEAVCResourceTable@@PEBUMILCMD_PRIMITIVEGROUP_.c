/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800980B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800479A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180097888 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800978F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  int v5; // ebx
  int v6; // ebp
  unsigned int v11; // esi
  CMILCOMBase *ResourceWithoutType; // rax
  __int64 v13; // rcx
  bool (__fastcall *v14)(__int64, int); // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  void (*v18)(void); // rax
  int v20; // eax
  CMILCOMBase *v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v11 = a5;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v21 = ResourceWithoutType;
      v13 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType )
        break;
      v14 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( !(v14 == CCompositionSurfaceBitmap::IsOfType ? CCompositionSurfaceBitmap::IsOfType(v13, 37) : v14(v13, 37)) )
        break;
      v16 = *((unsigned int *)this + 48);
      v17 = v16 + 1;
      if ( (int)v16 + 1 >= (unsigned int)v16 )
        v11 = v16 + 1;
      v5 = v17 < (unsigned int)v16 ? 0x80070216 : 0;
      if ( v17 < (unsigned int)v16 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 47) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 168, 8u, 1, &v21);
        v5 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v16) = v21;
        *((_DWORD *)this + 48) = v11;
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x108u);
        goto LABEL_17;
      }
      v18 = *(void (**)(void))(*(_QWORD *)v21 + 8LL);
      if ( (char *)v18 == (char *)CMILCOMBase::InternalAddRef )
        CMILCOMBase::InternalAddRef(v21);
      else
        v18();
      ++a4;
      if ( (unsigned int)++v6 >= *((_DWORD *)a3 + 2) )
        goto LABEL_16;
    }
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x100u);
    goto LABEL_27;
  }
LABEL_16:
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_17:
  if ( v5 < 0 )
LABEL_27:
    CPrimitiveGroup::ReleaseSurfaceResources(this);
  return (unsigned int)v5;
}
