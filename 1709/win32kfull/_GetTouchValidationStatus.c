/*
 * XREFs of _GetTouchValidationStatus @ 0x1C01BEAAC
 * Callers:
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01D26EC (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01E6E80 (NtUserGetTouchValidationStatus.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall GetTouchValidationStatus(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  int v3; // ecx
  struct DEVICEINFO *DeviceList; // rdx
  __int64 v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 3;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v2 = *(_QWORD *)(a1 + 456);
      if ( *(_WORD *)(v2 + 42) == 13 && (unsigned __int16)(*(_WORD *)(v2 + 40) - 4) <= 1u )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 276LL);
        if ( (v3 & 0x20) == 0 )
          return 2 - (unsigned int)((v3 & 0x400) != 0);
      }
    }
  }
  else
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, gpRimDevBackedDeviceInfoListLock);
    if ( (gdwMitConfig & 4) != 0 )
      DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
    else
      DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
    while ( DeviceList )
    {
      if ( *((_BYTE *)DeviceList + 48) == 2
        && (*((_BYTE *)DeviceList + 64) & 0x40) == 0
        && (*((_DWORD *)DeviceList + 46) & 0x1000) == 0 )
      {
        v5 = *((_QWORD *)DeviceList + 57);
        if ( *(_WORD *)(v5 + 42) == 13 && *(_WORD *)(v5 + 40) == 4 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)DeviceList + 59) + 276LL) & 0x400) != 0 )
          {
            v1 = 1;
            break;
          }
          v1 = 2;
        }
      }
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  }
  return v1;
}
