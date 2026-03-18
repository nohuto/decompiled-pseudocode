/*
 * XREFs of ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00122B0
 * Callers:
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0011BFC (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C008332C (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001FD7C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceIo::FxResourceIo(
        FxResourceIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_DESCRIPTOR *Resource)
{
  FxObject::FxObject(this, 0x1016u, 0, FxDriverGlobals);
  this->__vftable = (FxResourceIo_vtbl *)&FxObject::`vftable';
  this->m_Descriptor = *Resource;
}
