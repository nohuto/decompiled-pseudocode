/*
 * XREFs of IsPTPPointerDevicePresent @ 0x1C01A7BDC
 * Callers:
 *     _FindPointerDevice @ 0x1C00B3C84 (_FindPointerDevice.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall IsPTPPointerDevicePresent(__int64 a1, struct DEVICEINFO **a2)
{
  unsigned int v3; // edi
  struct DEVICEINFO *DeviceList; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v3 = 0;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, gpRimDevBackedDeviceInfoListLock);
  if ( a2 )
    *a2 = 0LL;
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  while ( DeviceList )
  {
    if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
    {
      v5 = *((_QWORD *)DeviceList + 57);
      if ( *(_WORD *)(v5 + 42) == 13 && *(_WORD *)(v5 + 40) == 5 )
      {
        v3 = 1;
        if ( a2 )
          *a2 = DeviceList;
        break;
      }
    }
    DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  return v3;
}
