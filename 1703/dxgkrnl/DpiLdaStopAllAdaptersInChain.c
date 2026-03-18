/*
 * XREFs of DpiLdaStopAllAdaptersInChain @ 0x1C01CE0EC
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C01C4520 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 */

__int64 __fastcall DpiLdaStopAllAdaptersInChain(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  int v7; // ecx
  struct _DEVICE_OBJECT *v8; // r14
  _DWORD *v9; // rbp
  int v10; // ecx

  ExIsResourceAcquiredSharedLite(*((PERESOURCE *)a1->DeviceExtension + 21));
  DeviceExtension = a1->DeviceExtension;
  v5 = 0;
  if ( *((_BYTE *)DeviceExtension + 508) != 1 )
  {
    v6 = DeviceExtension[324];
    if ( !v6 )
    {
      v7 = *((_DWORD *)DeviceExtension + 59);
      if ( v7 == 2 || *((_DWORD *)DeviceExtension + 60) == 2 && ((v7 - 3) & 0xFFFFFFFC) == 0 && v7 != 4 )
        DpiFdoStopAdapter(a1, a2);
      return 0LL;
    }
    DeviceExtension = *(_QWORD **)(v6 + 64);
  }
  if ( *((_DWORD *)DeviceExtension + 650) )
  {
    do
    {
      v8 = *(struct _DEVICE_OBJECT **)(DeviceExtension[324] + 8LL * v5);
      v9 = v8->DeviceExtension;
      v10 = v9[59];
      if ( v10 == 2 || v9[60] == 2 && ((v10 - 3) & 0xFFFFFFFC) == 0 && v10 != 4 )
      {
        DpiFdoStopAdapter(v8, a2);
        if ( v8 != a1 )
          v9[59] = 1;
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)DeviceExtension + 650) );
  }
  return 0LL;
}
