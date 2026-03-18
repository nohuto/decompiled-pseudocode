/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C0006730
 * Callers:
 *     <none>
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 i; // rcx
  __int64 j; // rcx
  struct DEVICEINFO *DeviceList; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct DEVICEINFO *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v24[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v25[48]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  if ( a3 == 16 )
  {
    EnterDeviceInfoListCrit_(v7);
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
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v6;
        v11 = -1;
        UserSetLastError(122LL);
      }
      else
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        v11 = 0;
        v12 = gpDeviceInfoList;
        while ( v12 )
        {
          v16 = 2LL * v11;
          *((_QWORD *)Address + v16) = *(_QWORD *)v12;
          *((_DWORD *)Address + 2 * v16 + 2) = *(unsigned __int8 *)(v12 + 48);
          v12 = *(_QWORD *)(v12 + 56);
          ++v11;
        }
        v13 = gpRimDevBackedDeviceInfoList;
        while ( v13 )
        {
          v17 = 2LL * v11;
          *((_QWORD *)Address + v17) = *(_QWORD *)v13;
          *((_DWORD *)Address + 2 * v17 + 2) = *(unsigned __int8 *)(v13 + 48);
          v13 = *(_QWORD *)(v13 + 56);
          ++v11;
        }
        if ( (gdwMitConfig & 4) != 0 )
          v14 = CBaseInput::TmpGetDeviceList(gpHidInput);
        else
          v14 = 0LL;
        while ( v14 )
        {
          v15 = 2LL * v11;
          *((_QWORD *)Address + v15) = *(_QWORD *)v14;
          *((_DWORD *)Address + 2 * v15 + 2) = *((unsigned __int8 *)v14 + 48);
          v14 = (struct DEVICEINFO *)*((_QWORD *)v14 + 7);
          ++v11;
        }
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (unsigned int *)W32UserProbeAddress;
      *a2 = v6;
      v11 = 0;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v25);
    LeaveDeviceInfoListCrit_(v18);
  }
  else
  {
    v11 = -1;
    UserSetLastError(87LL);
  }
  if ( !v24[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v24);
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v11;
}
