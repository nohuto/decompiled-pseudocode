/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800899E0
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800891B0 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18009C844 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800892D8 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180089798 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int Buffer; // eax
  __int64 v10; // rcx
  int v11; // r9d
  HANDLE v12; // rcx

  CurrentProcess = GetCurrentProcess();
  if ( !DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
  {
    v8 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( (v8 & 0x80000000) != 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 2, 762, v8);
      goto LABEL_15;
    }
  }
  Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, a2);
  v8 = Buffer;
  if ( Buffer < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_15;
    v11 = 770;
    goto LABEL_14;
  }
  Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
  v8 = Buffer;
  if ( Buffer >= 0 )
    return v8;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 772;
LABEL_14:
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 2, v11, Buffer);
  }
LABEL_15:
  v12 = this[10];
  if ( v12 )
  {
    CloseHandle(v12);
    this[10] = 0LL;
  }
  return v8;
}
