/*
 * XREFs of NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C008D410 (_GetPrecisionTouchPadConfiguration.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastStatus @ 0x1C013DE24 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(char *Address)
{
  __int64 v2; // rcx
  int PrecisionTouchPadConfiguration; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v5; // rcx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF
  char v10; // [rsp+80h] [rbp+18h] BYREF

  v7 = 0uLL;
  v8 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v9);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( ((((__int64 (*)(void))PsGetCurrentProcessWow64Process)() == 0 ? 3 : 0) & (unsigned __int8)Address) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(Address + 4) > MmUserProbeAddress || Address + 4 < Address )
    *(_BYTE *)MmUserProbeAddress = 0;
  LODWORD(v7) = *(_DWORD *)Address;
  if ( (_DWORD)v7 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration(&v7);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v2);
      ProbeForWrite(Address, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)Address = v7;
      *((_QWORD *)Address + 2) = v8;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v5);
  return PrecisionTouchPadConfiguration;
}
