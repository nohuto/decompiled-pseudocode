/*
 * XREFs of NtUserGetPointerDevices @ 0x1C00B1290
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsPointerDeviceAccessible @ 0x1C00B15D0 (IsPointerDeviceAccessible.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C00B15EC (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  int v4; // ebx
  unsigned int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 i; // r8
  struct DEVICEINFO *DeviceList; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // r14d
  struct DEVICEINFO *v20; // rsi
  __int64 j; // rsi
  __int64 v22; // r8
  _BYTE v23[8]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v24[88]; // [rsp+50h] [rbp-58h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  if ( a1 )
  {
    EnterDeviceInfoListCrit_();
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v23, gpRimDevBackedDeviceInfoListLock);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(i + 472)) )
        ++v5;
    }
    if ( (gdwMitConfig & 4) != 0 )
      DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
    else
      DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
    while ( DeviceList )
    {
      if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
      {
        if ( (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)DeviceList + 59)) )
          ++v5;
      }
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    }
    if ( a2 )
    {
      v16 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v16 = (unsigned int *)MmUserProbeAddress;
      if ( *v16 < v5 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
        UserSetLastError(122LL, v7);
      }
      else if ( *v16 && v5 )
      {
        ProbeForWrite(a2, 1080LL * v5, 8u);
        v19 = v5 - 1;
        for ( j = gpDeviceInfoList; j && v19 >= 0; j = *(_QWORD *)(j + 56) )
        {
          if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(j + 472)) )
          {
            if ( (int)GetPointerDeviceInfoProperties(&a2[1080 * v19], v22) < 0 )
            {
LABEL_45:
              UserSetLastError(122LL, v18);
              goto LABEL_15;
            }
            --v19;
          }
        }
        if ( (gdwMitConfig & 4) != 0 )
          v20 = CBaseInput::TmpGetDeviceList(gpHidInput);
        else
          v20 = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
        while ( v20 && v19 >= 0 )
        {
          if ( (*((_DWORD *)v20 + 50) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)v20 + 59)) )
          {
            if ( (int)GetPointerDeviceInfoProperties(&a2[1080 * v19], v17) < 0 )
              goto LABEL_45;
            --v19;
          }
          v20 = (struct DEVICEINFO *)*((_QWORD *)v20 + 7);
        }
        v4 = 1;
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
      }
      else
      {
        UserSetLastError(15299LL, v7);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned int *)MmUserProbeAddress;
      *a1 = v5;
      v4 = 1;
    }
LABEL_15:
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
    LeaveDeviceInfoListCrit_(v11, v10, v12);
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit(v14, v13);
  return v4;
}
