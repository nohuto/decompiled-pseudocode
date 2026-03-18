/*
 * XREFs of imp_WdfCollectionCreate @ 0x1C0017D00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017F00 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0017FB8 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00208B4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  unsigned __int16 v6; // r9
  __int64 result; // rax
  _POOL_TYPE v8; // ebx
  ULONG Tag; // ebp
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  int v14; // eax
  unsigned int v15; // esi
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF
  WDFCOLLECTION__ *hCol; // [rsp+60h] [rbp+18h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
         CollectionAttributes,
         0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)CollectionAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !Collection )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Collection = 0LL;
  result = FxValidateObjectAttributes(DriverName, CollectionAttributes, 0, v6);
  if ( (int)result >= 0 )
  {
    v8 = ExDefaultNonPagedPoolType;
    Tag = DriverName->Tag;
    ContextSize = FxGetContextSize(CollectionAttributes);
    if ( (int)FxCalculateObjectTotalSize2(DriverName, 0x90u, 0, ContextSize, (unsigned __int64 *)&hCol) < 0 )
      goto LABEL_19;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v12 = FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v8, (unsigned __int64)hCol, Tag, Caller);
    v13 = v12;
    if ( v12 )
    {
      if ( DriverName->FxVerifierHandle )
      {
        memset(v12, 0, 0x30uLL);
        *((_DWORD *)v13 + 8) = 1146058822;
        v13 += 6;
      }
      FxContextHeaderInit((FxContextHeader *)(v13 + 18), (FxObject *)v13, CollectionAttributes);
    }
    if ( v13 )
    {
      FxNonPagedObject::FxNonPagedObject((FxNonPagedObject *)v13, 0x100Eu, 0x90u, DriverName);
      *((_DWORD *)v13 + 30) = 0;
      v13[17] = v13 + 16;
      v13[16] = v13 + 16;
      *v13 = FxIoResList::`vftable';
    }
    else
    {
LABEL_19:
      v13 = 0LL;
    }
    if ( v13 )
    {
      v14 = FxObject::Commit((FxObject *)v13, CollectionAttributes, (void **)&hCol, 0LL, 1u);
      v15 = v14;
      if ( v14 < 0 )
      {
        WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxCollectionApi_cpp_Traceguids, v14);
        FxObject::DeleteFromFailedCreate((FxObject *)v13);
      }
      else
      {
        *Collection = hCol;
      }
    }
    else
    {
      WPP_IFR_SF_(DriverName, 2u, 2u, 0xBu, WPP_FxCollectionApi_cpp_Traceguids);
      return (unsigned int)-1073741670;
    }
    return v15;
  }
  return result;
}
