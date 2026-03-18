/*
 * XREFs of imp_WdfIoResourceListCreate @ 0x1C0083750
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C0011CF8 (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoResourceListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFIORESLIST__ **ResourceList)
{
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxIoResList *v9; // rax
  FxObject *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxIoResReqList *pIoResReqList; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  m_Globals = pIoResReqList->m_Globals;
  if ( !ResourceList )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *ResourceList = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1, v6);
  if ( (int)result >= 0 )
  {
    v9 = (FxIoResList *)FxObjectHandleAlloc(
                          m_Globals,
                          ExDefaultNonPagedPoolType,
                          0xA0uLL,
                          0,
                          Attributes,
                          0,
                          FxObjectTypeExternal);
    if ( v9 )
    {
      FxIoResList::FxIoResList(v9, m_Globals, pIoResReqList);
      v11 = v10;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      v12 = FxObject::Commit(v11, (_FX_DRIVER_GLOBALS *)Attributes, (void **)ResourceList, pIoResReqList, 1u);
      if ( v12 < 0 )
        FxObject::DeleteFromFailedCreate(v11);
      return (unsigned int)v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
