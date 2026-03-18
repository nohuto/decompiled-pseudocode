/*
 * XREFs of imp_WdfIoQueueCreate @ 0x1C0019080
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C0019BA0 (-InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0019FB0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C0094FD4 (WPP_IFR_SF_DDDDd.c)
 */

__int64 __fastcall imp_WdfIoQueueCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  __int64 v9; // rdx
  FxDevice *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  unsigned int Size; // ecx
  unsigned __int8 DefaultQueue; // cl
  WDFQUEUE__ **v18; // r15
  FxPkgIo *m_PkgIo; // r12
  int v20; // ebx
  FxIoQueue *v21; // rbx
  int v22; // ebp
  unsigned __int64 v23; // rbx
  unsigned int v24; // r8d
  unsigned __int16 v25; // r9
  const void *v26; // rax
  FxIoQueue **ppQueue; // [rsp+20h] [rbp-68h]
  unsigned int _a2; // [rsp+30h] [rbp-58h]
  unsigned int v29; // [rsp+38h] [rbp-50h]
  unsigned int v30; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+48h] [rbp-40h]
  FxIoQueue *pQueue; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxDevice *pDevice; // [rsp+98h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v9) = 0;
  v10 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v10->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v10 = (FxDevice *)((char *)v10 - v9);
  }
  if ( v10->m_Type == 4098 )
  {
    pDevice = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pDevice, (void *)Device, 0x1002u, v9);
    v10 = pDevice;
  }
  m_Globals = v10->m_Globals;
  pQueue = 0LL;
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, QueueAttributes, 6, (unsigned __int16)QueueAttributes);
  if ( (int)result >= 0 )
  {
    Size = Config->Size;
    if ( ((Config->Size - 80) & 0xFFFFFFE7) != 0 || Size == 104 )
    {
      WPP_IFR_SF_DDDDd(m_Globals, v13, v14, v15, (const _GUID *)ppQueue, Size, _a2, v29, v30, v31);
      return 3221225476LL;
    }
    DefaultQueue = Config->DefaultQueue;
    v18 = Queue;
    if ( !DefaultQueue && !Queue )
    {
      v20 = -1073741582;
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueApi_cpp_Traceguids, -1073741582);
      return (unsigned int)v20;
    }
    m_PkgIo = pDevice->m_PkgIo;
    if ( !DefaultQueue )
      goto LABEL_14;
    if ( pDevice->m_Legacy )
    {
      if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) != 0 )
        goto LABEL_14;
      v24 = 12;
      v25 = 12;
    }
    else
    {
      if ( pDevice->m_CurrentPnpState == WdfDevStatePnpInit )
      {
LABEL_14:
        v20 = FxPkgIo::CreateQueue(
                m_PkgIo,
                Config,
                QueueAttributes,
                *(FxDriver **)&DriverGlobals[-7].DriverName[16],
                &pQueue);
        if ( v20 >= 0 )
        {
          v21 = pQueue;
          if ( Config->DefaultQueue && (v22 = FxPkgIo::InitializeDefaultQueue(m_PkgIo, pDevice, pQueue), v22 < 0) )
          {
            WPP_IFR_SF_qq(m_Globals, 2u, 0xDu, 0xFu, WPP_FxIoQueueApi_cpp_Traceguids, m_PkgIo, (const void *)Device);
            FxObject::DeleteFromFailedCreate(v21);
            return (unsigned int)v22;
          }
          else
          {
            if ( m_Globals->FxVerboseOn )
            {
              if ( v21->m_ObjectSize )
                v26 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v26 = 0LL;
              WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x10u, WPP_FxIoQueueApi_cpp_Traceguids, v26);
            }
            if ( v18 )
            {
              if ( v21->m_ObjectSize )
                v23 = (unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v23 = 0LL;
              *v18 = (WDFQUEUE__ *)v23;
            }
            return 0LL;
          }
        }
        v25 = 14;
        v24 = 13;
LABEL_33:
        WPP_IFR_SF_qd(m_Globals, 2u, v24, v25, WPP_FxIoQueueApi_cpp_Traceguids, (const void *)Device, v20);
        return (unsigned int)v20;
      }
      v25 = 13;
      v24 = 12;
    }
    v20 = -1073741436;
    goto LABEL_33;
  }
  return result;
}
