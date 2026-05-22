/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18006E10C
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18006D978 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18006E544 (-RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z.c)
 */

signed int __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rax
  void *v3; // rdi
  HANDLE EventW; // rax
  signed int result; // eax
  HANDLE v6; // rax
  RIMDeviceCollection *v7; // rcx
  HANDLE v8; // rax
  RIMDeviceCollection *v9; // rcx
  HANDLE WaitableTimer; // rax
  RIMDeviceCollection *v11; // rcx
  HANDLE v12; // rax
  RIMDeviceCollection *v13; // rcx
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  v3 = CurrentProcess;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( EventW
    || ((int)GetLastError() > 0 ? (result = (unsigned __int16)GetLastError() | 0x80070000) : (result = GetLastError()),
        result >= 0) )
  {
    v6 = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 6) = v6;
    if ( v6
      || ((int)GetLastError() > 0 ? (result = (unsigned __int16)GetLastError() | 0x80070000) : (result = GetLastError()),
          result >= 0) )
    {
      if ( DuplicateHandle(v3, *((HANDLE *)this + 6), v3, &TargetHandle, 0, 0, 2u)
        || ((int)GetLastError() > 0
          ? (result = (unsigned __int16)GetLastError() | 0x80070000)
          : (result = GetLastError()),
            result >= 0) )
      {
        result = RIMDeviceCollection::RegisterWaitHandler(
                   v7,
                   TargetHandle,
                   (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMPnpEventStatic,
                   this);
        if ( result >= 0 )
        {
          v8 = CreateEventW(0LL, 0, 0, 0LL);
          *((_QWORD *)this + 7) = v8;
          if ( v8
            || ((int)GetLastError() > 0
              ? (result = (unsigned __int16)GetLastError() | 0x80070000)
              : (result = GetLastError()),
                result >= 0) )
          {
            if ( DuplicateHandle(v3, *((HANDLE *)this + 7), v3, &TargetHandle, 0, 0, 2u)
              || ((int)GetLastError() > 0
                ? (result = (unsigned __int16)GetLastError() | 0x80070000)
                : (result = GetLastError()),
                  result >= 0) )
            {
              result = RIMDeviceCollection::RegisterWaitHandler(
                         v9,
                         TargetHandle,
                         (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMDeferredRead,
                         this);
              if ( result >= 0 )
              {
                WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
                *((_QWORD *)this + 8) = WaitableTimer;
                if ( WaitableTimer
                  || ((int)GetLastError() > 0
                    ? (result = (unsigned __int16)GetLastError() | 0x80070000)
                    : (result = GetLastError()),
                      result >= 0) )
                {
                  if ( DuplicateHandle(v3, *((HANDLE *)this + 8), v3, &TargetHandle, 0, 0, 2u)
                    || ((int)GetLastError() > 0
                      ? (result = (unsigned __int16)GetLastError() | 0x80070000)
                      : (result = GetLastError()),
                        result >= 0) )
                  {
                    result = RIMDeviceCollection::RegisterWaitHandler(
                               v11,
                               TargetHandle,
                               (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMTimerEventStatic,
                               this);
                    if ( result >= 0 )
                    {
                      v12 = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
                      *((_QWORD *)this + 9) = v12;
                      if ( v12
                        || ((int)GetLastError() > 0
                          ? (result = (unsigned __int16)GetLastError() | 0x80070000)
                          : (result = GetLastError()),
                            result >= 0) )
                      {
                        if ( DuplicateHandle(v3, *((HANDLE *)this + 9), v3, &TargetHandle, 0, 0, 2u) )
                          return RIMDeviceCollection::RegisterWaitHandler(
                                   v13,
                                   TargetHandle,
                                   (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMAutoRepeatEventStatic,
                                   this);
                        result = (int)GetLastError() > 0
                               ? (unsigned __int16)GetLastError() | 0x80070000
                               : GetLastError();
                        if ( result >= 0 )
                          return RIMDeviceCollection::RegisterWaitHandler(
                                   v13,
                                   TargetHandle,
                                   (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMAutoRepeatEventStatic,
                                   this);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
