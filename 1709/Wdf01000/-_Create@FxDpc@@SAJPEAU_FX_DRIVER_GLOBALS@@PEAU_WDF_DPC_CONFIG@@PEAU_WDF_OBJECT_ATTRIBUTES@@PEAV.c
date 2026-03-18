/*
 * XREFs of ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006EFF8
 * Callers:
 *     imp_WdfDpcCreate @ 0x1C006D9C0 (imp_WdfDpcCreate.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006EC10 (--0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006EEB8 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 */

__int64 __fastcall FxDpc::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFDPC__ **Dpc)
{
  FxDpc *v9; // rax
  FxDpc *v10; // rax
  FxDpc *v11; // rbx
  int v13; // edi

  v9 = (FxDpc *)FxObjectHandleAlloc(
                  FxDriverGlobals,
                  ExDefaultNonPagedPoolType,
                  0xE0uLL,
                  0,
                  Attributes,
                  0,
                  FxObjectTypeExternal);
  if ( v9 )
  {
    FxDpc::FxDpc(v9, FxDriverGlobals);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return 3221225626LL;
  v13 = FxDpc::Initialize(v11, (_FX_DRIVER_GLOBALS *)Attributes, Config, ParentObject, Dpc);
  if ( v13 < 0 )
    FxObject::DeleteFromFailedCreate(v11);
  return (unsigned int)v13;
}
