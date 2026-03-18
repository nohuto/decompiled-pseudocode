/*
 * XREFs of FindSiblingPointerDevice @ 0x1C01B63C0
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01A758C (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindSiblingPointerDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  struct DEVICEINFO *DeviceList; // rdi
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // ecx

  v2 = 0;
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  while ( DeviceList )
  {
    if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
    {
      v6 = *((_QWORD *)DeviceList + 57);
      if ( *(_WORD *)(v6 + 110) == *(_WORD *)(a1 + 6) && *(_WORD *)(v6 + 112) == *(_WORD *)(a1 + 8) )
      {
        v7 = *(_DWORD *)(a2 + 336);
        if ( v7 == *((_DWORD *)DeviceList + 84)
          && (!v7 || RtlCompareMemory(*(const void **)(a2 + 328), *((const void **)DeviceList + 41), v7) == v7) )
        {
          v2 = 1;
          v8 = *(_DWORD *)(*((_QWORD *)DeviceList + 59) + 24LL);
          if ( v8 == 7 )
          {
            *(_WORD *)(a2 + 732) |= 2u;
          }
          else if ( (unsigned int)(v8 - 5) > 1 )
          {
            if ( (unsigned int)(v8 - 1) <= 3 )
              *(_WORD *)(a2 + 732) |= 8u;
          }
          else
          {
            *(_WORD *)(a2 + 732) |= 4u;
          }
          return v2;
        }
      }
    }
    DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
  }
  return v2;
}
