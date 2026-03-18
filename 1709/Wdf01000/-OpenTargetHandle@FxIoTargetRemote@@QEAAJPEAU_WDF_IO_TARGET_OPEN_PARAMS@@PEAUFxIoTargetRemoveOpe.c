/*
 * XREFs of ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C001368C
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0013D88 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qdD @ 0x1C0012B38 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoTargetRemote::OpenTargetHandle(
        FxIoTargetRemote *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        FxIoTargetRemoveOpenParams *pParams)
{
  void **p_m_TargetHandle; // r13
  ACCESS_MASK DesiredAccess; // edx
  NTSTATUS v8; // eax
  unsigned int Information; // edx
  unsigned int v10; // esi
  const void *v11; // rbx
  const void *v12; // rcx
  _FILE_OBJECT **p_m_TargetFileObject; // r12
  NTSTATUS v14; // eax
  _DEVICE_OBJECT *RelatedDeviceObject; // rax
  const void *v17; // rcx
  _IO_STATUS_BLOCK ioStatus; // [rsp+60h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+70h] [rbp-58h] BYREF

  oa.ObjectName = &pParams->TargetDeviceName;
  p_m_TargetHandle = &this->m_TargetHandle;
  oa.Length = 48;
  oa.Attributes = 512;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  DesiredAccess = pParams->DesiredAccess;
  oa.RootDirectory = 0LL;
  v8 = ZwCreateFile(
         &this->m_TargetHandle,
         DesiredAccess,
         &oa,
         &ioStatus,
         pParams->AllocationSizePointer,
         pParams->FileAttributes,
         pParams->ShareAccess,
         pParams->CreateDisposition,
         pParams->CreateOptions,
         pParams->EaBuffer,
         pParams->EaBufferLength);
  Information = ioStatus.Information;
  v10 = v8;
  OpenParams->FileInformation = ioStatus.Information;
  if ( v8 < 0 )
  {
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v17 = 0LL;
    WPP_IFR_SF_qdD(this->m_Globals, 2u, 0xEu, 0x13u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v17, v8, Information);
  }
  else
  {
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_qdD(this->m_Globals, 3u, 0xEu, 0x10u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v12, v8, Information);
    p_m_TargetFileObject = &this->m_TargetFileObject;
    v14 = ObReferenceObjectByHandle(
            *p_m_TargetHandle,
            pParams->DesiredAccess,
            (POBJECT_TYPE)IoFileObjectType,
            0,
            (PVOID *)&this->m_TargetFileObject,
            0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      if ( !this->m_ObjectSize )
        v11 = 0LL;
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xEu,
        0x12u,
        WPP_FxIoTargetRemotekm_cpp_Traceguids,
        v11,
        (__int64)*p_m_TargetHandle,
        v14);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(*p_m_TargetFileObject);
      this->m_TargetDevice = RelatedDeviceObject;
      if ( !RelatedDeviceObject )
      {
        if ( !this->m_ObjectSize )
          v11 = 0LL;
        WPP_IFR_SF_qq(
          this->m_Globals,
          2u,
          0xEu,
          0x11u,
          WPP_FxIoTargetRemotekm_cpp_Traceguids,
          v11,
          *p_m_TargetFileObject);
        return (unsigned int)-1073741810;
      }
    }
  }
  return v10;
}
