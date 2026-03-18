/*
 * XREFs of ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C001C1E4
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0014244 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001C090 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkDestroyDeviceInternal @ 0x1C009E7E0 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C009E7F8 (DxgkDestroyContextInternal.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C009E810 (DxgkCreateContextVirtualInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00D6F60 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C00D9CB4 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkCreateDeviceInternal @ 0x1C00DEF80 (DxgkCreateDeviceInternal.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C00DF260 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CAdapter::UpdateRenderFence(CAdapter *this, void *a2)
{
  int DeviceInternal; // edi
  int v3; // r14d
  PVOID v4; // rsi
  int v7; // eax
  int v8; // eax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v10; // eax
  int v11; // eax
  void *v12; // rcx
  D3DKMT_HANDLE v13; // eax
  _QWORD v15[16]; // [rsp+30h] [rbp-29h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v16; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF

  DeviceInternal = 0;
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
  {
    if ( !*((_DWORD *)this + 9) )
    {
      memset(v15, 0, 0x40uLL);
      v7 = *((_DWORD *)this + 8);
      LODWORD(v15[1]) |= 4u;
      LODWORD(v15[0]) = v7;
      DeviceInternal = DxgkCreateDeviceInternal(v15);
      if ( DeviceInternal < 0 )
        goto LABEL_22;
      *((_DWORD *)this + 9) = HIDWORD(v15[1]);
    }
    if ( !*((_DWORD *)this + 16) )
    {
      memset(v15, 0, 0x28uLL);
      v8 = *((_DWORD *)this + 9);
      HIDWORD(v15[1]) |= 8u;
      LODWORD(v15[0]) = v8;
      DeviceInternal = DxgkCreateContextVirtualInternal(v15);
      if ( DeviceInternal < 0 )
        goto LABEL_22;
      *((_DWORD *)this + 16) = v15[4];
    }
    SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
    v10 = ObReferenceObjectByHandle(a2, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
    v4 = Object;
    DeviceInternal = v10;
    if ( v10 < 0 )
      goto LABEL_22;
    if ( Object == *((PVOID *)this + 7) )
      goto LABEL_22;
    memset(v15, 0, 0x58uLL);
    v11 = *((_DWORD *)this + 9);
    HIDWORD(v15[1]) |= 0x83u;
    LODWORD(v15[1]) = v11;
    v15[0] = a2;
    DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15);
    if ( DeviceInternal < 0 )
    {
      HIDWORD(v15[1]) &= ~0x80u;
      DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15);
      if ( DeviceInternal < 0 )
        goto LABEL_22;
    }
    v3 = v15[2];
    if ( !LODWORD(v15[2]) )
      goto LABEL_22;
  }
  v12 = (void *)*((_QWORD *)this + 7);
  if ( v12 )
    ObfDereferenceObject(v12);
  v13 = *((_DWORD *)this + 12);
  *((_QWORD *)this + 7) = v4;
  v4 = 0LL;
  if ( v13 )
  {
    v16.hSyncObject = v13;
    DxgkCddDestroySynchronizationObject(&v16);
  }
  *((_DWORD *)this + 12) = v3;
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 16) )
    {
      v16.hSyncObject = *((_DWORD *)this + 16);
      DxgkDestroyContextInternal(&v16);
      *((_DWORD *)this + 16) = 0;
    }
    if ( *((_DWORD *)this + 9) )
    {
      v16.hSyncObject = *((_DWORD *)this + 9);
      DxgkDestroyDeviceInternal(&v16);
      *((_DWORD *)this + 9) = 0;
LABEL_22:
      if ( v4 )
        ObfDereferenceObject(v4);
    }
  }
  return (unsigned int)DeviceInternal;
}
