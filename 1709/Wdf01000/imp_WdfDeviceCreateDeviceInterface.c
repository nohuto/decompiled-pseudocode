/*
 * XREFs of imp_WdfDeviceCreateDeviceInterface @ 0x1C0014A30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0017810 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C0083C4C (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 */

NTSTATUS __fastcall imp_WdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  __int64 v7; // rdx
  FxDevice *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  NTSTATUS result; // eax
  FxDeviceInterface *v11; // rbx
  NTSTATUS v12; // edi
  FxPkgPnp *m_PkgPnp; // rbp
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _UNICODE_STRING *p_m_ReferenceString; // r8
  _SINGLE_LIST_ENTRY *p_m_DeviceInterfaceHead; // rcx
  _SINGLE_LIST_ENTRY *i; // rax
  unsigned int v18; // edx
  int _a2; // ebx
  unsigned __int16 v20; // r9
  void *Caller; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+68h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v7) = 0;
  v8 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v7 = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v8 - v7);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1002u, v7);
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, Caller);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( !ReferenceString || (result = FxValidateUnicodeString(m_Globals, ReferenceString), result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        _a2 = -1073741808;
        v20 = 10;
      }
      else
      {
        v11 = (FxDeviceInterface *)FxPoolAllocator(
                                     m_Globals,
                                     &m_Globals->FxPoolFrameworks,
                                     1u,
                                     0x40uLL,
                                     m_Globals->Tag,
                                     Caller);
        if ( v11 )
        {
          *(_QWORD *)&v11->m_InterfaceClassGUID.Data1 = 0LL;
          *(_QWORD *)v11->m_InterfaceClassGUID.Data4 = 0LL;
          *(_QWORD *)&v11->m_SymbolicLinkName.Length = 0LL;
          v11->m_SymbolicLinkName.Buffer = 0LL;
          *(_QWORD *)&v11->m_ReferenceString.Length = 0LL;
          v11->m_ReferenceString.Buffer = 0LL;
          v11->m_Entry.Next = 0LL;
          v11->m_State = 0;
        }
        else
        {
          v11 = 0LL;
        }
        if ( v11 )
        {
          v11->m_InterfaceClassGUID = *InterfaceClassGUID;
          if ( ReferenceString )
            v12 = FxDuplicateUnicodeString(m_Globals, ReferenceString, &v11->m_ReferenceString);
          else
            v12 = 0;
          if ( v12 < 0 )
          {
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xCu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, (const void *)Device, v12);
          }
          else
          {
            m_PkgPnp = pDevice->m_PkgPnp;
            KeEnterCriticalRegion();
            if ( KeWaitForSingleObject(&m_PkgPnp->m_DeviceInterfaceLock, Executive, 0, 0, 0LL) == 258 )
              KeLeaveCriticalRegion();
            else
              m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = KeGetCurrentThread();
            if ( pDevice->m_PdoKnown && (m_DeviceObject = pDevice->m_PhysicalDevice.FxDeviceBase::m_DeviceObject) != 0LL )
            {
              p_m_ReferenceString = &v11->m_ReferenceString;
              if ( !v11->m_ReferenceString.Length )
                p_m_ReferenceString = 0LL;
              v12 = IoRegisterDeviceInterface(
                      m_DeviceObject,
                      &v11->m_InterfaceClassGUID,
                      p_m_ReferenceString,
                      &v11->m_SymbolicLinkName);
            }
            else
            {
              v12 = 0;
            }
            if ( v12 >= 0 )
            {
              p_m_DeviceInterfaceHead = &m_PkgPnp->m_DeviceInterfaceHead;
              for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
                p_m_DeviceInterfaceHead = i;
              p_m_DeviceInterfaceHead->Next = &v11->m_Entry;
            }
            m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
            KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
            KeLeaveCriticalRegion();
          }
          if ( v12 < 0 )
            FxDeviceInterface::`scalar deleting destructor'(v11, v18);
          return v12;
        }
        _a2 = -1073741670;
        v20 = 11;
      }
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, v20, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, (const void *)Device, _a2);
      return _a2;
    }
  }
  return result;
}
