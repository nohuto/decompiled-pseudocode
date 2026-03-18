/*
 * XREFs of DpiGetMonitorDescriptor @ 0x1C0115ED8
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0106DA4 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0115FB0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiGetMonitorDescriptor(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  __int64 v4; // rbp
  unsigned int DeviceDescriptor; // esi
  __int64 v6; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  _DWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  char *v16; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 64);
  DeviceDescriptor = 0;
  v6 = a2;
  v8 = *(_QWORD *)(v4 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  v15[1] = 128;
  v15[0] = a2;
  v16 = a4;
  v10 = *(_QWORD *)(v4 + 936);
  if ( *(_QWORD *)(v10 + 96) )
  {
    v13 = *(unsigned __int16 *)(v10 + 92) - 124;
    if ( a2 >= v13 )
    {
      return (unsigned int)-1071841272;
    }
    else
    {
      v14 = v13 - a2;
      if ( v14 >= 0x80 )
        v14 = 128;
      else
        memset(&a4[v14], 0, 128 - v14);
      memmove(a4, (const void *)(*(_QWORD *)(*(_QWORD *)(v4 + 936) + 96LL) + v6 + 124), v14);
    }
  }
  else
  {
    KeWaitForSingleObject(*(PVOID *)(v10 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3704), 1LL);
    DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(v8, *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 504), v15);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3704), v11);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
  }
  return DeviceDescriptor;
}
