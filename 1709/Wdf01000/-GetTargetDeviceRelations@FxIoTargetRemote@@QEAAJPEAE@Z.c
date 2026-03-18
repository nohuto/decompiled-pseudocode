/*
 * XREFs of ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0013848
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0013D88 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00211BC (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::GetTargetDeviceRelations(FxIoTargetRemote *this, unsigned __int8 *Close)
{
  _IRP *v3; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  PIRP v6; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v8; // edi
  _DEVICE_OBJECT **Information; // rcx
  const void *_a1; // rcx
  FxAutoIrp irp; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_TargetDevice);
  v6 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( v6 )
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v3 = v6;
    irp.m_Irp = v6;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v6->IoStatus.Status = -1073741637;
    v8 = FxIrp::SendIrpSynchronously(&irp, AttachedDeviceReference);
    if ( v8 >= 0 )
    {
      Information = (_DEVICE_OBJECT **)v3->IoStatus.Information;
      this->m_TargetPdo = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    v8 = -1073741670;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1, -1073741670);
  }
  if ( v8 == -1073741670 )
    *Close = 1;
  else
    v8 = 0;
  ObfDereferenceObject(AttachedDeviceReference);
  if ( v3 )
    IoFreeIrp(v3);
  return (unsigned int)v8;
}
