/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180089AE8
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800891B0 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18009C844 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18008A4A4 (-RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rax
  void *v3; // rbp
  HANDLE EventW; // rax
  __int64 v5; // rcx
  signed int LastError; // ebx
  HANDLE v7; // rax
  __int64 v8; // rcx
  RIMDeviceCollection *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  HANDLE v13; // rax
  __int64 v14; // rcx
  RIMDeviceCollection *v15; // rcx
  HANDLE WaitableTimer; // rax
  __int64 v17; // rcx
  RIMDeviceCollection *v18; // rcx
  HANDLE v19; // rax
  __int64 v20; // rcx
  RIMDeviceCollection *v21; // rcx
  HANDLE TargetHandle; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  v3 = CurrentProcess;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( !EventW )
  {
    LastError = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( LastError < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 2, 804, LastError);
      return (unsigned int)LastError;
    }
  }
  v7 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 6) = v7;
  if ( !v7 )
  {
    LastError = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( LastError < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 2, 815, LastError);
      return (unsigned int)LastError;
    }
  }
  if ( !DuplicateHandle(v3, *((HANDLE *)this + 6), v3, &TargetHandle, 0, 0, 2u) )
  {
    LastError = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( LastError < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)v9, &MinInput_Warning_CheckResult, 2, 827, LastError);
      return (unsigned int)LastError;
    }
  }
  v10 = RIMDeviceCollection::RegisterWaitHandler(
          v9,
          TargetHandle,
          (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMPnpEventStatic,
          this);
  LastError = v10;
  if ( v10 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return (unsigned int)LastError;
    v12 = 833;
    goto LABEL_76;
  }
  v13 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 7) = v13;
  if ( v13
    || ((int)GetLastError() > 0
      ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
      : (LastError = GetLastError()),
        LastError >= 0) )
  {
    if ( DuplicateHandle(v3, *((HANDLE *)this + 7), v3, &TargetHandle, 0, 0, 2u)
      || ((int)GetLastError() > 0
        ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
        : (LastError = GetLastError()),
          LastError >= 0) )
    {
      v10 = RIMDeviceCollection::RegisterWaitHandler(
              v15,
              TargetHandle,
              (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMDeferredRead,
              this);
      LastError = v10;
      if ( v10 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return (unsigned int)LastError;
        v12 = 861;
        goto LABEL_76;
      }
      WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
      *((_QWORD *)this + 8) = WaitableTimer;
      if ( WaitableTimer
        || ((int)GetLastError() > 0
          ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
          : (LastError = GetLastError()),
            LastError >= 0) )
      {
        if ( DuplicateHandle(v3, *((HANDLE *)this + 8), v3, &TargetHandle, 0, 0, 2u)
          || ((int)GetLastError() > 0
            ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
            : (LastError = GetLastError()),
              LastError >= 0) )
        {
          v10 = RIMDeviceCollection::RegisterWaitHandler(
                  v18,
                  TargetHandle,
                  (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMTimerEventStatic,
                  this);
          LastError = v10;
          if ( v10 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return (unsigned int)LastError;
            v12 = 889;
            goto LABEL_76;
          }
          v19 = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
          *((_QWORD *)this + 9) = v19;
          if ( v19
            || ((int)GetLastError() > 0
              ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
              : (LastError = GetLastError()),
                LastError >= 0) )
          {
            if ( DuplicateHandle(v3, *((HANDLE *)this + 9), v3, &TargetHandle, 0, 0, 2u)
              || ((int)GetLastError() > 0
                ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
                : (LastError = GetLastError()),
                  LastError >= 0) )
            {
              v10 = RIMDeviceCollection::RegisterWaitHandler(
                      v21,
                      TargetHandle,
                      (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMAutoRepeatEventStatic,
                      this);
              LastError = v10;
              if ( v10 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return (unsigned int)LastError;
              v12 = 916;
LABEL_76:
              McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 2, v12, v10);
              return (unsigned int)LastError;
            }
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq((__int64)v21, &MinInput_Warning_CheckResult, 2, 910, LastError);
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 2, 898, LastError);
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq((__int64)v18, &MinInput_Warning_CheckResult, 2, 883, LastError);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 2, 871, LastError);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)v15, &MinInput_Warning_CheckResult, 2, 855, LastError);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 2, 843, LastError);
  }
  return (unsigned int)LastError;
}
