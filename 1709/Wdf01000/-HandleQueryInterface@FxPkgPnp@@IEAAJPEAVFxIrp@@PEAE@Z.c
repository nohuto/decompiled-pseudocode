/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C002AEC0
 * Callers:
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002D220 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00366D0 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001D578 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00211BC (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00214F8 (-HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     ?HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00747EC (-HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C009D484 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C009DE74 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v4; // rbx
  _SINGLE_LIST_ENTRY *v8; // r12
  _LARGE_INTEGER v9; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  FxCompanionTarget *v11; // rcx
  int Status; // r14d
  _SINGLE_LIST_ENTRY *Next; // rdi
  _SINGLE_LIST_ENTRY *v14; // rsi
  char v15; // di
  _IO_SECURITY_CONTEXT *v17; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v19; // rcx
  void (__fastcall *v20)(_QWORD, _IO_SECURITY_CONTEXT *); // rax
  __int64 v21; // rcx
  _IO_STACK_LOCATION *v22; // rcx
  NTSTATUS v23; // eax
  unsigned __int16 *v24; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp+10h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+20h]

  m_Irp = Irp->m_Irp;
  v4 = 0LL;
  *CompleteRequest = 0;
  Parameters = 0LL;
  v8 = 0LL;
  v9.QuadPart = 0LL;
  SecurityContext = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( RtlCompareMemory(SecurityContext, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE, 0x10uLL) == 16 )
    return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
  if ( RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( FxDevice::IsPdo(this->m_Device) )
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
LABEL_4:
    Status = Irp->m_Irp->IoStatus.Status;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&this->m_QueryInterfaceLock, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      this->m_QueryInterfaceLock.m_OwningThread = KeGetCurrentThread();
    Next = this->m_QueryInterfaceHead.Next;
    if ( Next )
    {
      while ( 1 )
      {
        v14 = Next - 5;
        if ( RtlCompareMemory(
               Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
               &Next[-5],
               0x10uLL) == 16 )
          break;
        Next = Next->Next;
        if ( !Next )
        {
          v9.QuadPart = 0LL;
          goto LABEL_10;
        }
      }
      v24 = (unsigned __int16 *)v14[2].Next;
      CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( !v24 )
        goto LABEL_32;
      if ( *v24 <= CurrentStackLocation->Parameters.QueryInterface.Size
        && v24[1] <= CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        if ( !LOBYTE(v14[6].Next) )
          memmove(CurrentStackLocation->Parameters.SetFile.FileObject, v24, *v24);
LABEL_32:
        v4 = v14[4].Next;
        v8 = Next - 5;
        v15 = BYTE1(v14[6].Next);
        Status = 0;
        v9 = ByteOffset;
LABEL_11:
        this->m_QueryInterfaceLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( Status >= 0 )
        {
          if ( !v8 )
            return Status;
          v17 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
          m_DeviceBase = this->m_DeviceBase;
          if ( m_DeviceBase->m_ObjectSize )
            v19 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v19 = 0LL;
          if ( v4 )
          {
            Status = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v4)(
                       v19,
                       v17,
                       (_LARGE_INTEGER)v9.QuadPart,
                       Parameters);
            if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741637 )
              goto $Done_19;
          }
          else
          {
            Status = 0;
          }
          if ( v15 )
          {
            v23 = PnpPassThroughQI(this->m_Device, Irp);
          }
          else
          {
            v20 = *(void (__fastcall **)(_QWORD, _IO_SECURITY_CONTEXT *))(v9.QuadPart + 16);
            if ( v20 )
              v20(*(_QWORD *)(v9.QuadPart + 8), v17);
            v21 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v21 && *(_WORD *)(v21 + 8) == 4354 )
              goto $Done_19;
            Irp->m_Irp->IoStatus.Status = Status;
            v22 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v22[-1].MajorFunction = *(_OWORD *)&v22->MajorFunction;
            *(_OWORD *)&v22[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v22->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v22[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v22->Parameters.SetQuota + 6);
            v22[-1].FileObject = v22->FileObject;
            v22[-1].Control = 0;
            v23 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
          }
          Status = v23;
        }
$Done_19:
        if ( v8 )
          *CompleteRequest = 1;
        return Status;
      }
      Status = -1073741306;
      v9 = CurrentStackLocation->Parameters.Read.ByteOffset;
    }
LABEL_10:
    v15 = 0;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(SecurityContext, &GUID_SECURE_DRIVER_INTERFACE, 0x10uLL) != 16 || !this->m_CompanionTarget )
    goto LABEL_4;
  return FxCompanionTarget::HandleQueryInterfaceForSecureDriver(v11, Irp, CompleteRequest);
}
