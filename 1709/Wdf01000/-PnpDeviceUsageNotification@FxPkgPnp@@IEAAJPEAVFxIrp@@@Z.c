/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009D5C4
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E620 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000CC40 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C0012824 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001D578 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00211BC (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0025F30 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C002B79C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E750 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E8E0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00302C8 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C00302F8 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C0081724 (WPP_IFR_SF_qqddd.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C00984B4 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C009CEE4 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C009E208 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C009E474 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C009E970 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C009EA40 (WPP_IFR_SF_DDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A28DC (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A5C10 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v5; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  unsigned __int8 Lock; // r12
  _FX_DRIVER_GLOBALS *v9; // rcx
  unsigned __int8 v10; // al
  _DEVICE_OBJECT **v11; // r8
  FxDeviceBase *m_DeviceBase; // rax
  const void *v13; // r10
  unsigned __int16 m_ObjectSize; // cx
  _DEVICE_OBJECT *m_DeviceObject; // rax
  unsigned int v16; // r15d
  FxDevice *m_Device; // rcx
  __int64 v18; // r8
  FxRelatedDevice *v19; // r13
  _IRP *v20; // rax
  FxDeviceBase *v21; // rdx
  __int64 v22; // rax
  const void *v23; // rdx
  _FX_DRIVER_GLOBALS *v24; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rax
  CCHAR v26; // r15
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  CCHAR StackSize; // cl
  _IRP *v30; // rax
  FxRelatedDevice *v31; // r15
  FxDeviceBase *v32; // rdx
  __int64 v33; // rax
  const void *v34; // rdx
  FxRelatedDeviceList *v35; // r13
  FxRelatedDevice *v36; // r13
  FxRelatedDevice *v37; // rax
  FxRelatedDevice *v38; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 v40; // r8
  _IO_STACK_LOCATION *v41; // rcx
  FxRelatedDevice *v42; // rax
  _WDF_SPECIAL_FILE_TYPE v43; // eax
  void (__fastcall *v44)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v45; // r9
  unsigned __int64 v46; // r9
  bool v47; // zf
  __int64 v48; // r8
  _WDF_SPECIAL_FILE_TYPE v49; // eax
  __int64 (__fastcall *v50)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v51; // r9
  unsigned __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r8
  _IO_STACK_LOCATION *v55; // rcx
  unsigned int v56; // r9d
  FxRelatedDevice *v57; // r14
  FxRelatedDevice *v58; // rax
  FxPowerPolicyOwnerSettings *v59; // rcx
  _FX_DRIVER_GLOBALS *v60; // rcx
  _FX_DRIVER_GLOBALS *v61; // rcx
  unsigned int v62; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  FxRelatedDeviceList *v65; // [rsp+60h] [rbp-9h]
  FxAutoIrp relatedIrp; // [rsp+68h] [rbp-1h] BYREF
  FxAutoIrp parentIrp; // [rsp+70h] [rbp+7h] BYREF
  MxDeviceObject RelatedDevice; // [rsp+78h] [rbp+Fh] BYREF
  MxDeviceObject dependentDevice; // [rsp+D0h] [rbp+67h] BYREF
  MxDeviceObject OldFlags; // [rsp+D8h] [rbp+6Fh] BYREF
  MxDeviceObject topOfParentStack; // [rsp+E0h] [rbp+77h] BYREF
  MxAutoWorkItem workItem; // [rsp+E8h] [rbp+7Fh] BYREF

  relatedIrp.m_Irp = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Bu, WPP_FxPkgPnp_cpp_Traceguids);
  v5 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v9 = this->m_Globals;
  if ( v9->FxVerboseOn )
    WPP_IFR_SF_DDDDDD(
      v9,
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[0],
      traceGuid,
      _a5,
      Lock,
      this->m_SpecialSupport[0],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[3]);
  if ( (unsigned int)(_a5 - 1) <= 3 )
  {
    if ( Lock )
    {
      if ( BYTE1(this->m_DeviceBase[1].m_Globals) )
        goto LABEL_11;
      v10 = this->m_SpecialSupport[_a5 - 1];
    }
    else
    {
      v10 = 1;
    }
    if ( v10 )
    {
LABEL_11:
      if ( !Mx::MxHasEnoughRemainingThreadStack()
        && (FxDevice::IsPdo(this->m_Device) || this->m_UsageDependentDeviceList) )
      {
        v5 = MxWorkItem::Allocate(&workItem, v11[18], v11);
        if ( v5 < 0 )
        {
          m_DeviceBase = this->m_DeviceBase;
          v13 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          m_ObjectSize = m_DeviceBase->m_ObjectSize;
          m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          if ( !m_ObjectSize )
            v13 = 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            Lock,
            0xCu,
            0x3Eu,
            WPP_FxPkgPnp_cpp_Traceguids,
            v13,
            m_DeviceObject,
            _a5,
            Lock,
            v5);
          goto LABEL_100;
        }
      }
      v16 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, Lock);
      m_Device = this->m_Device;
      LODWORD(OldFlags.m_DeviceObject) = v16;
      v19 = 0LL;
      if ( FxDevice::IsPdo(m_Device) )
      {
        topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v18 + 224) + 144LL));
        v20 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
        if ( v20 )
        {
          parentIrp.m_Irp = v20;
          v5 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
        }
        else
        {
          v5 = -1073741670;
          v21 = this->m_DeviceBase;
          v22 = v21->m_ObjectSize;
          v23 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !(_WORD)v22 )
            v23 = 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            (unsigned __int8)v23,
            0xCu,
            0x3Fu,
            WPP_FxPkgPnp_cpp_Traceguids,
            v23,
            topOfParentStack.m_DeviceObject,
            _a5,
            Lock,
            -1073741670);
        }
        ObfDereferenceObject(topOfParentStack.m_DeviceObject);
        topOfParentStack.m_DeviceObject = 0LL;
        if ( v5 < 0 )
        {
          v24 = this->m_Globals;
          if ( v24->FxVerboseOn )
            WPP_IFR_SF_d(v24, 5u, 0xCu, 0x40u, WPP_FxPkgPnp_cpp_Traceguids, v5);
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v16);
          goto LABEL_100;
        }
      }
      m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
      v65 = m_UsageDependentDeviceList;
      v26 = 0;
      if ( m_UsageDependentDeviceList )
      {
        FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
        while ( 1 )
        {
          NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v19);
          v19 = NextEntry;
          if ( !NextEntry )
            break;
          AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
          StackSize = v26;
          if ( AttachedDeviceReference->StackSize > v26 )
            StackSize = AttachedDeviceReference->StackSize;
          v26 = StackSize;
          ObfDereferenceObject(AttachedDeviceReference);
        }
      }
      else
      {
        v65 = 0LL;
      }
      if ( v26 <= 0 )
      {
LABEL_46:
        v31 = 0LL;
      }
      else
      {
        v30 = IoAllocateIrp(v26, 0);
        v31 = 0LL;
        if ( !v30 )
        {
          v5 = -1073741670;
          v32 = this->m_DeviceBase;
          v33 = v32->m_ObjectSize;
          v34 = (const void *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !(_WORD)v33 )
            v34 = 0LL;
          WPP_IFR_SF_qddd(
            this->m_Globals,
            (unsigned __int8)v34,
            0xCu,
            0x41u,
            WPP_FxPkgPnp_cpp_Traceguids,
            v34,
            _a5,
            Lock,
            -1073741670);
          v35 = v65;
          goto LABEL_94;
        }
        dependentDevice.m_DeviceObject = 0LL;
        v36 = 0LL;
        relatedIrp.m_Irp = v30;
        while ( 1 )
        {
          v37 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v36);
          v36 = v37;
          if ( !v37 )
            break;
          dependentDevice.m_DeviceObject = v37->m_DeviceObject;
          v5 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 0);
          if ( v5 < 0 )
          {
            while ( 1 )
            {
              v38 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v31);
              v31 = v38;
              if ( !v38 || v38 == v36 )
                break;
              dependentDevice.m_DeviceObject = v38->m_DeviceObject;
              SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
            }
            goto LABEL_46;
          }
        }
      }
      if ( v5 < 0 )
      {
        v35 = v65;
LABEL_94:
        if ( v35 )
          FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
        v60 = this->m_Globals;
        if ( v60->FxVerboseOn )
          WPP_IFR_SF_d(v60, 5u, 0xCu, 0x42u, WPP_FxPkgPnp_cpp_Traceguids, v5);
        goto LABEL_100;
      }
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      LOBYTE(dependentDevice.m_DeviceObject) = 0;
      if ( m_Owner )
      {
        v5 = FxPowerIdleMachine::PowerReferenceWorker(
               &m_Owner->m_PowerIdleMachine,
               1u,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
        if ( v5 < 0 )
        {
          Irp->m_Irp->IoStatus.Status = v5;
LABEL_52:
          if ( v5 < 0 )
            goto LABEL_63;
          if ( Lock && !this->m_HasPowerThread && _a5 != DeviceUsageTypeBoot )
          {
            v5 = this->QueryForPowerThread(this);
            if ( v5 >= 0 )
              goto LABEL_69;
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v40 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v41 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v41[-1].MajorFunction = *(_OWORD *)&v41->MajorFunction;
              *(_OWORD *)&v41[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v41->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v41[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v41->Parameters.SetQuota + 6);
              v41[-1].FileObject = v41->FileObject;
              v41[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = 0;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            Irp->m_Irp->IoStatus.Status = v5;
          }
          if ( v5 < 0 )
          {
LABEL_63:
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, (unsigned int)OldFlags.m_DeviceObject);
            v35 = v65;
            if ( v65 )
            {
              for ( RelatedDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&RelatedDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v42 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v31);
                v31 = v42;
                if ( !v42 )
                  break;
                RelatedDevice.m_DeviceObject = v42->m_DeviceObject;
              }
              v35 = v65;
            }
LABEL_91:
            if ( LOBYTE(dependentDevice.m_DeviceObject) )
              FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
            goto LABEL_94;
          }
LABEL_69:
          v35 = v65;
          if ( this->m_DeviceUsageNotification.m_Method )
          {
            v43 = FxPkgPnp::_UsageToSpecialType(_a5);
            v46 = v45 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v47 = (_WORD)v48 == 0;
            LOBYTE(v48) = Lock;
            if ( v47 )
              v46 = 0LL;
            v44(v46, (unsigned int)v43, v48);
          }
          if ( this->m_DeviceUsageNotificationEx.m_Method )
          {
            v49 = FxPkgPnp::_UsageToSpecialType(_a5);
            v52 = v51 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v47 = (_WORD)v53 == 0;
            LOBYTE(v53) = Lock;
            if ( v47 )
              v52 = 0LL;
            v5 = v50(v52, (unsigned int)v49, v53);
          }
          else
          {
            v5 = 0;
          }
          if ( v5 >= 0 )
          {
            FxPkgPnp::CommitUsageNotification(this, _a5, (__int16)OldFlags.m_DeviceObject);
            v59 = this->m_PowerPolicyMachine.m_Owner;
            if ( v59 && _a5 == DeviceUsageTypeDumpFile )
            {
              if ( Lock )
                FxPowerIdleMachine::PowerReferenceWorker(
                  &v59->m_PowerIdleMachine,
                  0,
                  FxPowerReferenceDefault,
                  0LL,
                  0,
                  0LL);
              else
                FxPowerIdleMachine::IoDecrement(&v59->m_PowerIdleMachine, 0LL, 0, 0LL);
            }
          }
          else
          {
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v54 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v55 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v55[-1].MajorFunction = *(_OWORD *)&v55->MajorFunction;
              *(_OWORD *)&v55[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v55->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v55[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v55->Parameters.SetQuota + 6);
              v55[-1].FileObject = v55->FileObject;
              v55[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = 0;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            v56 = (unsigned int)OldFlags.m_DeviceObject;
            Irp->m_Irp->IoStatus.Status = v5;
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v56);
            v57 = 0LL;
            if ( v65 )
            {
              for ( OldFlags.m_DeviceObject = 0LL; ; SendDeviceUsageNotification(
                                                       &OldFlags,
                                                       &relatedIrp,
                                                       &workItem,
                                                       Irp,
                                                       1u) )
              {
                v58 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v57);
                v57 = v58;
                if ( !v58 )
                  break;
                OldFlags.m_DeviceObject = v58->m_DeviceObject;
              }
            }
          }
          goto LABEL_91;
        }
        LOBYTE(dependentDevice.m_DeviceObject) = 1;
      }
      Irp->m_Irp->IoStatus.Status = v5;
      v5 = this->SendIrpSynchronously(this, Irp);
      goto LABEL_52;
    }
  }
  v61 = this->m_Globals;
  v5 = -1073741822;
  if ( v61->FxVerboseOn )
    WPP_IFR_SF_Dd(v61, 5u, 0xCu, 0x3Du, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
LABEL_100:
  v62 = FxPkgPnp::CompletePnpRequest(this, Irp, v5);
  MxWorkItem::Free(&workItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v62;
}
