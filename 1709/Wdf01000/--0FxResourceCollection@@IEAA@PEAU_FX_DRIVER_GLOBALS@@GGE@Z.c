/*
 * XREFs of ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C00123EC
 * Callers:
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0010E10 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C001175C (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C0011CF8 (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017F00 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceCollection::FxResourceCollection(
        FxResourceCollection *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 Type,
        unsigned __int16 Size,
        unsigned __int8 AccessFlags)
{
  KIRQL v6; // al

  FxNonPagedObject::FxNonPagedObject(this, Type, Size, FxDriverGlobals);
  this->m_Count = 0;
  this->m_ListHead.Blink = &this->m_ListHead;
  this->m_ListHead.Flink = &this->m_ListHead;
  this->__vftable = (FxResourceCollection_vtbl *)FxIoResList::`vftable';
  this->m_AccessFlags = AccessFlags;
  this->m_Changed = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v6);
}
