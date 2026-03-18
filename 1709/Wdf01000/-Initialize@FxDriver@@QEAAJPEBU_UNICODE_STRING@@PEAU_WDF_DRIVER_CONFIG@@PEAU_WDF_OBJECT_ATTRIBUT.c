/*
 * XREFs of ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001CE70
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018C98 (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001D454 (-ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qZ @ 0x1C007E6E4 (WPP_IFR_SF_qZ.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

NTSTATUS __fastcall FxDriver::Initialize(
        FxDriver *this,
        const _UNICODE_STRING *ArgRegistryPath,
        _WDF_DRIVER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v9; // al
  _DRIVER_OBJECT *m_DriverObject; // r12
  _POOL_TYPE v11; // r8d
  unsigned __int64 v12; // r9
  void *Caller; // rax
  _QWORD *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rax
  _POOL_TYPE v18; // r8d
  unsigned __int64 v19; // r9
  _FX_DRIVER_GLOBALS *v20; // rbp
  void *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rdi
  _FX_DRIVER_GLOBALS *v26; // r15
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS result; // eax
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(_DEVICE_OBJECT *, _IRP *); // r8
  int v31; // edi
  unsigned __int16 Length; // ax
  _FX_DRIVER_GLOBALS *v33; // rcx
  unsigned __int64 v34; // rbx
  wchar_t *v35; // rax
  unsigned int DriverInitFlags; // eax
  _DRIVER_EXTENSION *DriverExtension; // rcx
  _DRIVER_OBJECT *v38; // rax
  __int64 v39; // rax
  _FX_DRIVER_GLOBALS *v40; // rdx
  const _GUID *Tag; // [rsp+20h] [rbp-58h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  PVOID DriverObjectExtension; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  globals = m_Globals;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v9);
  this->m_ObjectFlags |= 0x800u;
  FxDriver::ConfigureConstraints(this, DriverAttributes);
  m_DriverObject = this->m_DriverObject.m_DriverObject;
  if ( !m_DriverObject )
    return -1073741823;
  v11 = ExDefaultNonPagedPoolType;
  this->m_DisposeList = 0LL;
  v12 = 160LL;
  if ( m_Globals->FxVerifierHandle )
    v12 = 208LL;
  if ( m_Globals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v14 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v11, v12, m_Globals->Tag, Caller);
  v16 = v14;
  if ( !v14 )
    return -1073741670;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v14, 0, 0x30uLL);
    *((_DWORD *)v16 + 8) = 1146058822;
    v16 += 6;
  }
  if ( !v16 )
    return -1073741670;
  v16[2] = m_Globals;
  *v16 = &FxObject::`vftable';
  *((_DWORD *)v16 + 2) = 4147;
  v16[7] = 0LL;
  *((_BYTE *)v16 + 48) = 1;
  *((_DWORD *)v16 + 3) = 1;
  *((_DWORD *)v16 + 6) = 0x10000;
  v16[8] = 0LL;
  v16[5] = v16 + 4;
  v16[4] = v16 + 4;
  v16[10] = v16 + 9;
  v16[9] = v16 + 9;
  v17 = v16[2];
  v16[11] = 0LL;
  v16[12] = 0LL;
  if ( *(_BYTE *)(v17 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v16, v15, 0);
  *v16 = FxNonPagedObject::`vftable';
  v16[14] = 0LL;
  *((_BYTE *)v16 + 104) = 1;
  if ( *((char *)v16 + 24) < 0 )
  {
    v40 = (_FX_DRIVER_GLOBALS *)v16[2];
    if ( v40->FxVerifierLock )
    {
      DriverObjectExtension = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&DriverObjectExtension, v40, (FxObject *)v16);
      *(v16 - 5) = DriverObjectExtension;
    }
  }
  v18 = ExDefaultNonPagedPoolType;
  *v16 = FxDisposeList::`vftable';
  v19 = 224LL;
  v16[15] = 0LL;
  v16[16] = v16 + 15;
  v16[18] = 0LL;
  v16[17] = 0LL;
  v20 = (_FX_DRIVER_GLOBALS *)v16[2];
  *((_WORD *)v16 + 12) |= 0x800u;
  if ( v20->FxVerifierHandle )
    v19 = 272LL;
  if ( v20->FxPoolTrackingOn )
    v21 = retaddr;
  else
    v21 = 0LL;
  v22 = FxPoolAllocator(v20, &v20->FxPoolFrameworks, v18, v19, v20->Tag, v21);
  v23 = v22;
  if ( !v22 )
    goto LABEL_51;
  if ( v20->FxVerifierHandle )
  {
    memset(v22, 0, 0x30uLL);
    *((_DWORD *)v23 + 8) = 1146058822;
    v23 += 6;
  }
  if ( !v23 )
    goto LABEL_51;
  FxSystemWorkItem::FxSystemWorkItem((FxSystemWorkItem *)v23, v20);
  v25 = (_QWORD *)v24;
  if ( !v24 )
    goto LABEL_51;
  v26 = *(_FX_DRIVER_GLOBALS **)(v24 + 16);
  *(_WORD *)(v24 + 24) |= 0x811u;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)m_DriverObject);
  v25[16] = WorkItem;
  if ( !WorkItem )
  {
    WPP_IFR_SF_(v26, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v25 + 16LL))(v25, 0LL, 0LL, 0LL);
LABEL_51:
    v31 = -1073741670;
    WPP_IFR_SF_d(v20, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, -1073741670);
    FxObject::DeleteFromFailedCreate((FxObject *)v16);
    return v31;
  }
  v16[18] = v25;
  v16[19] = m_DriverObject;
  this->m_DisposeList = (FxDisposeList *)v16;
  result = IoAllocateDriverObjectExtension(
             this->m_DriverObject.m_DriverObject,
             FxDriver::GetFxDriver,
             8u,
             &DriverObjectExtension);
  if ( result < 0 )
    return result;
  v31 = 0;
  *(_QWORD *)DriverObjectExtension = this;
  if ( (Config->DriverInitFlags & 2) == 0 )
  {
    this->m_DriverDeviceAdd.Method = Config->EvtDriverDeviceAdd;
    this->m_DriverUnload.Method = Config->EvtDriverUnload;
  }
  if ( ArgRegistryPath )
  {
    Length = ArgRegistryPath->Length;
    v33 = this->m_Globals;
    this->m_RegistryPath.Length = ArgRegistryPath->Length;
    v34 = (unsigned __int16)(Length + 2);
    this->m_RegistryPath.MaximumLength = Length + 2;
    v35 = (wchar_t *)FxPoolAllocator(v33, &v33->FxPoolFrameworks, 1u, v34, v33->Tag, retaddr);
    this->m_RegistryPath.Buffer = v35;
    if ( v35 )
    {
      memmove(v35, ArgRegistryPath->Buffer, ArgRegistryPath->Length);
      this->m_RegistryPath.Buffer[(v34 >> 1) - 1] = 0;
    }
    else
    {
      *(_DWORD *)&this->m_RegistryPath.Length = 0;
      v31 = -1073741670;
    }
  }
  if ( globals->IsDriverCompanion )
  {
    this->m_DriverObject.m_DriverObject->DriverExtension->AddDevice = FxDriver::AddDevice;
    this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
  }
  else if ( v31 >= 0 )
  {
    DriverInitFlags = Config->DriverInitFlags;
    if ( (DriverInitFlags & 2) != 0 )
    {
LABEL_37:
      if ( (_BYTE)KdDebuggerEnabled == 1 && !(_BYTE)KdDebuggerNotPresent )
        this->m_DebuggerConnected = 1;
      if ( (Config->DriverInitFlags & 1) != 0 && !Config->EvtDriverUnload )
        WPP_IFR_SF_qZ(
          globals,
          v29,
          (unsigned int)v30,
          (unsigned __int16)globals,
          Tag,
          this->m_DriverObject.m_DriverObject,
          &this->m_RegistryPath);
      return v31;
    }
    DriverExtension = this->m_DriverObject.m_DriverObject->DriverExtension;
    if ( (DriverInitFlags & 1) != 0 )
    {
      DriverExtension->AddDevice = 0LL;
      v38 = this->m_DriverObject.m_DriverObject;
      if ( !Config->EvtDriverUnload )
      {
        v38->DriverUnload = 0LL;
LABEL_35:
        v39 = 112LL;
        v30 = FxDevice::DispatchWithLock;
        v29 = 28LL;
        do
        {
          v39 += 8LL;
          *(_QWORD *)((char *)this->m_DriverObject.m_DriverObject + v39 - 8) = FxDevice::DispatchWithLock;
          --v29;
        }
        while ( v29 );
        goto LABEL_37;
      }
    }
    else
    {
      DriverExtension->AddDevice = FxDriver::AddDevice;
      v38 = this->m_DriverObject.m_DriverObject;
    }
    v38->DriverUnload = FxDriver::Unload;
    goto LABEL_35;
  }
  return v31;
}
