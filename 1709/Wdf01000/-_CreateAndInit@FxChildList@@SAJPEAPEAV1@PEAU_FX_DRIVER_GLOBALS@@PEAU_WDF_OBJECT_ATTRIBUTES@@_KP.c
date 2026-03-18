/*
 * XREFs of ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0018670
 * Callers:
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023158 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfChildListCreate @ 0x1C006DC80 (imp_WdfChildListCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0018788 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C002D874 (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C002DF70 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 */

__int64 __fastcall FxChildList::_CreateAndInit(
        FxChildList **ChildList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        unsigned __int8 Static)
{
  _POOL_TYPE v7; // ebp
  unsigned int v8; // ebx
  ULONG Tag; // r15d
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  FxChildList *v16; // rax
  FxChildList *v17; // rcx
  FxChildList *v18; // rax
  FxChildList *v19; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 Size; // [rsp+60h] [rbp+8h] BYREF

  v7 = ExDefaultNonPagedPoolType;
  v8 = 0;
  *ChildList = 0LL;
  Tag = FxDriverGlobals->Tag;
  ContextSize = FxGetContextSize(ListAttributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x168u, 0, ContextSize, &Size) < 0 )
    goto LABEL_11;
  Caller = retaddr;
  if ( !FxDriverGlobals->FxPoolTrackingOn )
    Caller = 0LL;
  v16 = (FxChildList *)FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v7, Size, Tag, Caller);
  v17 = v16;
  if ( v16 )
    v17 = (FxChildList *)FxObjectAndHandleHeaderInit(FxDriverGlobals, v16, 0x170u, ListAttributes, FxObjectTypeExternal);
  if ( v17 )
  {
    FxChildList::FxChildList(v17, FxDriverGlobals, TotalDescriptionSize, Device, Static);
    v19 = v18;
  }
  else
  {
LABEL_11:
    v19 = 0LL;
  }
  if ( v19 )
  {
    FxChildList::Initialize(v19, ListConfig);
    *ChildList = v19;
  }
  else
  {
    v8 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, -1073741670);
  }
  return v8;
}
