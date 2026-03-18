/*
 * XREFs of PiCMReturnBufferResultData @ 0x14048A83C
 * Callers:
 *     PiCMGetObjectProperty @ 0x140482E3C (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x14048A5E0 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404E34FC (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x1404E833C (PiCMGetObjectList.c)
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14056BBEC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1406A51A4 (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406A574C (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1406A595C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        _DWORD *Address,
        unsigned int Length,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-38h]

  *a9 = 0;
  v10 = 0;
  if ( Length >= Size + 20 && a6 == 20 )
  {
    LODWORD(v12) = 20;
    *(_QWORD *)((char *)&v12 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v12) = a3;
    ProbeForWrite(Address, Length, 4u);
    *(_OWORD *)Address = v12;
    Address[4] = 0;
    if ( Size )
      memmove(Address + 4, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
