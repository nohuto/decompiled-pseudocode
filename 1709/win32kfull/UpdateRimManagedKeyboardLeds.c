/*
 * XREFs of UpdateRimManagedKeyboardLeds @ 0x1C01AB990
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     EditionUpdateRimManagedKeyboardLeds @ 0x1C01A1BE0 (EditionUpdateRimManagedKeyboardLeds.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void UpdateRimManagedKeyboardLeds()
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  BOOLEAN v4; // di
  __int64 i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // [rsp+58h] [rbp-20h]
  char v10; // [rsp+80h] [rbp+8h] BYREF
  char v11; // [rsp+88h] [rbp+10h] BYREF
  char v12; // [rsp+90h] [rbp+18h] BYREF

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  v4 = IsResourceAcquiredExclusiveLite;
  if ( aDeviceTemplate[82] != -1LL )
  {
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(aDeviceTemplate[0], v1, v2, v3);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v12, gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_BYTE *)(i + 48) == 1 && *(_QWORD *)(i + 224) )
      {
        if ( (gdwUpdateKeyboard & 1) != 0 )
        {
          LOBYTE(v9) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[82],
            *(_QWORD *)(i + 16),
            720900LL,
            gktp,
            6,
            0LL,
            0,
            &v10,
            giosbKbdControl,
            1,
            0,
            v9);
        }
        if ( (gdwUpdateKeyboard & 2) != 0 )
        {
          LOBYTE(v9) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[82],
            *(_QWORD *)(i + 16),
            720904LL,
            gklp,
            4,
            0LL,
            0,
            &v10,
            giosbKbdControl,
            1,
            0,
            v9);
        }
        if ( (gdwUpdateKeyboard & 4) != 0
          && (*(_BYTE *)(i + 456) == 7 && *(_BYTE *)(i + 457) == 82
           || gbRemoteSession && gRemoteClientKeyboardType[0] == 7 && gRemoteClientKeyboardType[1] == 131074) )
        {
          LOBYTE(v9) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[82],
            *(_QWORD *)(i + 16),
            724996LL,
            gKbdImeStatus,
            12,
            0LL,
            0,
            &v11,
            giosbKbdControl,
            1,
            0,
            v9);
        }
      }
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
    if ( !v4 )
      LeaveDeviceInfoListCrit_(v7, v6, v8);
  }
}
