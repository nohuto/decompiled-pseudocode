/*
 * XREFs of DpiGetMonitorDescriptor @ 0x1C020B2A4
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C023BA38 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C020A910 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiGetMonitorDescriptor(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  __int64 v4; // rbp
  unsigned int DeviceDescriptor; // esi
  __int64 v6; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v14[2]; // [rsp+30h] [rbp-28h] BYREF
  char *v15; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 64);
  DeviceDescriptor = 0;
  v6 = a2;
  v8 = *(_QWORD *)(v4 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  v14[1] = 128;
  v14[0] = a2;
  v15 = a4;
  v10 = *(_QWORD *)(v4 + 936);
  if ( *(_QWORD *)(v10 + 96) )
  {
    v11 = *(unsigned __int16 *)(v10 + 94);
    if ( a2 >= v11 )
    {
      return (unsigned int)-1071841272;
    }
    else
    {
      v12 = v11 - a2;
      if ( v12 >= 0x80 )
      {
        v12 = 128;
      }
      else
      {
        memset(&a4[v12], 0, 128 - v12);
        v10 = *(_QWORD *)(v4 + 936);
      }
      memmove(a4, (const void *)(*(_QWORD *)(v10 + 104) + v6), v12);
    }
  }
  else
  {
    KeWaitForSingleObject(*(PVOID *)(v10 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3728), 1);
    DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(v8, *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 504), v14);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3728));
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
  }
  return DeviceDescriptor;
}
