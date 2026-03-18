/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C007F560
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C007A8F0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x1C006318C (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0063214 (--0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxDisposeList **pObject)
{
  FxDisposeList *v6; // rax
  FxDisposeList *v7; // rax
  FxDisposeList *v8; // rbx
  int v10; // edi

  *pObject = 0LL;
  v6 = (FxDisposeList *)FxObjectHandleAlloc(
                          FxDriverGlobals,
                          ExDefaultNonPagedPoolType,
                          0xA0uLL,
                          0,
                          0LL,
                          0,
                          FxObjectTypeInternal);
  if ( v6 )
  {
    FxDisposeList::FxDisposeList(v6, FxDriverGlobals);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return 3221225626LL;
  v10 = FxDisposeList::Initialize(v8, WdmObject);
  if ( v10 < 0 )
    FxObject::DeleteFromFailedCreate(v8);
  else
    *pObject = v8;
  return (unsigned int)v10;
}
