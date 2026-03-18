/*
 * XREFs of ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C003D748
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSetPartitionVmbus(struct _DEVICE_OBJECT *a1, struct _IRP *a2, struct _LUID *a3, unsigned int a4)
{
  __int64 v5; // rax
  _QWORD *DeviceExtension; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  _DXGKARG_SETVIRTUALGPUVMBUS v10; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-18h]

  if ( a2->RequestorMode )
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v5);
    return 3221225506LL;
  }
  else
  {
    DeviceExtension = a1->DeviceExtension;
    if ( a4 >= 0x10 && a3 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v11, a1, a2);
      v8 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)&v10.VirtualGpuIndex = 0LL;
        v10.VmBusHandle = (HANDLE)a3[1];
        v8 = ADAPTER_RENDER::SetVirtualGpuVmBus(*(ADAPTER_RENDER **)(DeviceExtension[463] + 2288LL), a3, &v10);
        v12 = v8;
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v11);
    }
    else
    {
      v8 = -1073741789;
      v9 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v9 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v9);
    }
    return v8;
  }
}
