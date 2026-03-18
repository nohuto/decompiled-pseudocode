/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C011D080
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 i; // rcx
  __int64 j; // rcx
  struct DEVICEINFO *DeviceList; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct DEVICEINFO *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v26[24]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0;
  v7 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  if ( a3 == 16 )
  {
    EnterDeviceInfoListCrit_();
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v25, gpRimDevBackedDeviceInfoListLock);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
      ++v6;
    for ( j = gpRimDevBackedDeviceInfoList; j; j = *(_QWORD *)(j + 56) )
      ++v6;
    if ( (gdwMitConfig & 4) != 0 )
      DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
    else
      DeviceList = 0LL;
    while ( DeviceList )
    {
      ++v6;
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    }
    if ( Address )
    {
      if ( *a2 < v6 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v6;
        UserSetLastError(122LL, v9);
      }
      else
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        v7 = 0;
        v13 = gpDeviceInfoList;
        while ( v13 )
        {
          v17 = 2LL * v7;
          *((_QWORD *)Address + v17) = *(_QWORD *)v13;
          *((_DWORD *)Address + 2 * v17 + 2) = *(unsigned __int8 *)(v13 + 48);
          v13 = *(_QWORD *)(v13 + 56);
          ++v7;
        }
        v14 = gpRimDevBackedDeviceInfoList;
        while ( v14 )
        {
          v18 = 2LL * v7;
          *((_QWORD *)Address + v18) = *(_QWORD *)v14;
          *((_DWORD *)Address + 2 * v18 + 2) = *(unsigned __int8 *)(v14 + 48);
          v14 = *(_QWORD *)(v14 + 56);
          ++v7;
        }
        if ( (gdwMitConfig & 4) != 0 )
          v15 = CBaseInput::TmpGetDeviceList(gpHidInput);
        else
          v15 = 0LL;
        while ( v15 )
        {
          v16 = 2LL * v7;
          *((_QWORD *)Address + v16) = *(_QWORD *)v15;
          *((_DWORD *)Address + 2 * v16 + 2) = *((unsigned __int8 *)v15 + 48);
          v15 = (struct DEVICEINFO *)*((_QWORD *)v15 + 7);
          ++v7;
        }
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v6;
      v7 = 0;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v25);
    LeaveDeviceInfoListCrit_(v20, v19, v21);
  }
  else
  {
    UserSetLastError(87LL, v8);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v23, v22);
  return v7;
}
