/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x1C00FE9D0
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00FEB60 (AddRemovePointerDeviceSystemMetricKey.c)
 *     ?GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00FEC60 (-GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     AddRemovePointerDevicePresence @ 0x1C00FEC88 (AddRemovePointerDevicePresence.c)
 */

__int64 __fastcall UpdatePointerDeviceSystemMetrics(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edi
  struct DEVICEINFO *DeviceList; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF

  result = (__int64)&retaddr;
  v2 = 0;
  v3 = 0;
  v13 = 0;
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 6) == 7 )
      return result;
    GetPointerDeviceType(&v13, a1);
    v6 = v13;
    if ( *(_DWORD *)(v5 + 696) > 1u )
    {
      v6 = v13 | 0x40;
      v3 = *(_DWORD *)(v5 + 696);
    }
    v2 = gdwHardwareTypes | v6;
  }
  else
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v14, gpRimDevBackedDeviceInfoListLock);
    if ( (gdwMitConfig & 4) != 0 )
      DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
    else
      DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
    while ( DeviceList )
    {
      if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0
        && *((char *)DeviceList + 66) >= 0
        && (*((_DWORD *)DeviceList + 46) & 0x200) == 0 )
      {
        v10 = *((_QWORD *)DeviceList + 59);
        if ( *(_DWORD *)(v10 + 24) != 7 )
        {
          GetPointerDeviceType(&v13, (struct tagHID_POINTER_DEVICE_INFO *)v10);
          v2 = v13;
          if ( *(_DWORD *)(v11 + 696) > v3 )
          {
            v2 = v13 | 0x40;
            v3 = *(_DWORD *)(v11 + 696);
            v13 |= 0x40u;
          }
        }
      }
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
  }
  v7 = gCurrentMaxCount;
  if ( !a1 )
  {
    if ( gCurrentMaxCount == v3 )
      goto LABEL_8;
LABEL_29:
    v7 = v3;
    gCurrentMaxCount = v3;
    goto LABEL_8;
  }
  if ( gCurrentMaxCount < v3 )
    goto LABEL_29;
LABEL_8:
  if ( v2 )
    v2 |= 0x80u;
  if ( v7 > 0xFFFF )
    v7 = 0xFFFF;
  v8 = (v7 << 8) | v2 & 0xCF;
  result = gdwSystemMetrics;
  if ( v8 != gdwSystemMetrics )
  {
    if ( a1 )
      v8 |= (unsigned __int8)gdwSystemMetrics;
    AddRemovePointerDeviceSystemMetricKey(v8, 1LL);
    AddRemovePointerDeviceSystemMetricKey(v8, 0LL);
    return AddRemovePointerDevicePresence(v2);
  }
  return result;
}
