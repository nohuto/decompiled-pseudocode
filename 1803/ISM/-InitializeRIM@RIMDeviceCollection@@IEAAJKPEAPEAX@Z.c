/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18006E058
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18006D978 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18006DA4C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18006DFF0 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InitializeRIM(
        RIMDeviceCollection *this,
        unsigned int a2,
        LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rax
  int LastError; // ebx
  void *v8; // rcx

  CurrentProcess = GetCurrentProcess();
  if ( !DuplicateHandle(CurrentProcess, *((HANDLE *)this + 5), CurrentProcess, lpTargetHandle, 0, 0, 2u)
    && ((int)GetLastError() > 0
      ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
      : (LastError = GetLastError()),
        LastError < 0)
    || (LastError = RIMDeviceCollection::CreateReadBuffer(this, a2), LastError < 0)
    || (LastError = RIMDeviceCollection::ReadInputReportFromRIM(this), LastError < 0) )
  {
    v8 = (void *)*((_QWORD *)this + 10);
    if ( v8 )
    {
      CloseHandle(v8);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  return (unsigned int)LastError;
}
