/*
 * XREFs of _PnpGetGenericObjectList @ 0x140637A8C
 * Callers:
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1406377B4 (_CmGetMatchingDeviceContainerListWorker.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1406386F8 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpGetGenericObjectList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v10; // edx
  int v11; // ecx
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v13, 0, 0x20uLL);
  *a7 = 0;
  if ( a6 )
    *a5 = 0;
  v13[2] = a5;
  v13[0] = CmContainerListGenericObjectCallback;
  v13[3] = a6;
  v13[1] = a4;
  v10 = PnpCtxRegEnumKeyWithCallback(a1, a2, &PnpObjectListCallback, v13);
  if ( v10 >= 0 )
  {
    v11 = HIDWORD(v13[3]);
    *a7 = HIDWORD(v13[3]);
    if ( v11 )
    {
      *a7 = v11 + 1;
      if ( a5 && a6 >= v11 + 1 )
        a5[v11] = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v10;
}
