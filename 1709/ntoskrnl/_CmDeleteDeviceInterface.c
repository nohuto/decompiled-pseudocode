/*
 * XREFs of _CmDeleteDeviceInterface @ 0x14077EAA0
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     _PnpDispatchDeviceInterface @ 0x14051C600 (_PnpDispatchDeviceInterface.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406BF95C (PnpDeleteDeviceInterfaces.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406D0E9C (PiCMUnregisterDeviceInterface.c)
 *     _CmDeleteDeviceWorker @ 0x14077F7C4 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x14077EFA0 (_CmDeleteDeviceInterfaceWorker.c)
 */

__int64 __fastcall CmDeleteDeviceInterface(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+40h] [rbp-88h]
  _DWORD v15[20]; // [rsp+48h] [rbp-80h] BYREF

  v14 = 0;
  memset(v15, 0, sizeof(v15));
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  v15[2] = a3;
  if ( v6 )
  {
    v7 = v6(a1, a2, 3LL);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14;
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmDeleteDeviceInterfaceWorker(a1, a2, v15[2]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14 = v8;
  v10 = v6(a1, a2, 3LL);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14;
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
