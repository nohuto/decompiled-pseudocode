/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8
 * Callers:
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C0013610 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C0017E84 (--1FxCollection@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C001FB8C (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0033290 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00642DC (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C0067DB0 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C006EC74 (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C00714B0 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C0071880 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0072460 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 *     ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x1C0074640 (--_GFxCompanionTarget@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C007AC5C (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C007E438 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C007E860 (--1FxTimer@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C007F3D0 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C007FBD0 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C008D9EC (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C0090674 (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C0092BE4 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0095548 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C0095DDC (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009C518 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C00A1A28 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C00A3DA0 (--_EFxPkgGeneral@@UEAAPEAXI@Z.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C00A5630 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2, unsigned int a3)
{
  _LIST_ENTRY *Blink; // rcx

  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ChildEntry.Blink;
    if ( Blink )
    {
      FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Blink, a2);
      this[-1].m_ChildEntry.Blink = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this, a2, a3);
}
