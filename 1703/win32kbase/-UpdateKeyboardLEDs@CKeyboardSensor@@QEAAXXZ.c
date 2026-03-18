/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E700
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C006E340 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     UpdateKeyLights @ 0x1C008EA30 (UpdateKeyLights.c)
 * Callees:
 *     RIMDeviceIoControl @ 0x1C006E8B0 (RIMDeviceIoControl.c)
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C006EC60 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v1; // rdx
  struct CInpPushLock *v3; // rdx
  BOOLEAN IsResourceAcquiredExclusiveLite; // si
  struct DEVICEINFO *i; // rbx
  __int64 v6; // rcx
  int v7; // [rsp+58h] [rbp-30h]
  __int64 v8; // [rsp+60h] [rbp-28h] BYREF
  char v9; // [rsp+68h] [rbp-20h]
  char v10; // [rsp+90h] [rbp+8h] BYREF
  char v11; // [rsp+98h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 && *((_QWORD *)this + 1) != -1LL && *(struct _KTHREAD **)(v1 + 40) == KeGetCurrentThread() )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    if ( !IsResourceAcquiredExclusiveLite )
      ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v8, v3);
    for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) )
      {
        if ( (gdwUpdateKeyboard & 1) != 0 )
        {
          LOBYTE(v7) = 0;
          RIMDeviceIoControl(
            *((_QWORD *)this + 1),
            *((_QWORD *)i + 2),
            720900LL,
            &gktp,
            6,
            0LL,
            0,
            &v10,
            &giosbKbdControl,
            1,
            0,
            v7);
        }
        if ( (gdwUpdateKeyboard & 2) != 0 )
        {
          LOBYTE(v7) = 0;
          RIMDeviceIoControl(
            *((_QWORD *)this + 1),
            *((_QWORD *)i + 2),
            720904LL,
            &gklp,
            4,
            0LL,
            0,
            &v10,
            &giosbKbdControl,
            1,
            0,
            v7);
        }
        if ( (gdwUpdateKeyboard & 4) != 0
          && (*((_BYTE *)i + 456) == 7 && *((_BYTE *)i + 457) == 82
           || gbRemoteSession && gRemoteClientKeyboardType == 0x2000200000007LL) )
        {
          LOBYTE(v7) = 0;
          RIMDeviceIoControl(
            *((_QWORD *)this + 1),
            *((_QWORD *)i + 2),
            724996LL,
            &gKbdImeStatus,
            12,
            0LL,
            0,
            &v11,
            &giosbKbdControl,
            1,
            0,
            v7);
        }
      }
    }
    if ( !v9 )
    {
      v6 = v8;
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v6, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( !IsResourceAcquiredExclusiveLite )
      ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    gdwUpdateKeyboard &= 0xFFFFFFF8;
  }
}
