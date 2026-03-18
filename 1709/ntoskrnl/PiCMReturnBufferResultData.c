/*
 * XREFs of PiCMReturnBufferResultData @ 0x140525C50
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x14044B0D0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceInterfaceList @ 0x140518AB4 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectProperty @ 0x140525460 (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x140526810 (PiCMGetRegistryProperty.c)
 *     PiCMGetObjectList @ 0x140530BE0 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405520B8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     PiCMGetDeviceIdList @ 0x140586D80 (PiCMGetDeviceIdList.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1406D0180 (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406D064C (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1406D0A14 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
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
