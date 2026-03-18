/*
 * XREFs of NtUserGetPointerDevices @ 0x1C00231A0
 * Callers:
 *     <none>
 * Callees:
 *     _GetPointerDeviceInfoProperties @ 0x1C0023504 (_GetPointerDeviceInfoProperties.c)
 *     IsPointerDeviceAccessible @ 0x1C0023730 (IsPointerDeviceAccessible.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  unsigned int v4; // r15d
  int v5; // ebx
  __int64 v6; // rcx
  __int64 i; // r8
  struct DEVICEINFO *DeviceList; // rdx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r8
  int v19; // r14d
  struct DEVICEINFO *v20; // rdi
  __int64 j; // rdi
  __int64 v22; // r8
  _BYTE v23[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v24[88]; // [rsp+50h] [rbp-58h] BYREF

  v4 = 0;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  if ( a1 )
  {
    EnterDeviceInfoListCrit_(v6);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v24, gpRimDevBackedDeviceInfoListLock);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(i + 472)) )
        ++v4;
    }
    if ( (gdwMitConfig & 4) != 0 )
      DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
    else
      DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
    while ( DeviceList )
    {
      if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
      {
        v9 = 0;
        if ( *(_DWORD *)(*((_QWORD *)DeviceList + 59) + 24LL) != 7 || (*(_DWORD *)(gptiCurrent + 1096LL) & 0x10000) != 0 )
          v9 = 1;
        if ( v9 )
          ++v4;
      }
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    }
    if ( a2 )
    {
      v16 = a1;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        v16 = (unsigned int *)W32UserProbeAddress;
      v17 = *v16;
      if ( v17 < v4 )
      {
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (unsigned int *)W32UserProbeAddress;
        *a1 = v4;
        v5 = 0;
        UserSetLastError(122LL);
      }
      else if ( v17 && v4 )
      {
        ProbeForWrite(a2, 1080LL * v4, 8u);
        v19 = v4 - 1;
        for ( j = gpDeviceInfoList; j && v19 >= 0; j = *(_QWORD *)(j + 56) )
        {
          if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(j + 472)) )
          {
            if ( (int)GetPointerDeviceInfoProperties(&a2[1080 * v19], v22) < 0 )
            {
LABEL_49:
              v5 = 0;
              UserSetLastError(122LL);
              goto LABEL_17;
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
            if ( (int)GetPointerDeviceInfoProperties(&a2[1080 * v19], v18) < 0 )
              goto LABEL_49;
            --v19;
          }
          v20 = (struct DEVICEINFO *)*((_QWORD *)v20 + 7);
        }
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (unsigned int *)W32UserProbeAddress;
        *a1 = v4;
      }
      else
      {
        v5 = 0;
        UserSetLastError(15299LL);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (unsigned int *)W32UserProbeAddress;
      *a1 = v4;
    }
LABEL_17:
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v24);
    LeaveDeviceInfoListCrit_(v10);
  }
  else
  {
    v5 = 0;
    UserSetLastError(87LL);
  }
  if ( !v23[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v23);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v5;
}
