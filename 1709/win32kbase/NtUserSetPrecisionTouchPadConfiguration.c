/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceUIPISystemError @ 0x1C008C3F0 (EtwTraceUIPISystemError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00DF100 (_SetPrecisionTouchPadConfiguration.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C013D244 (ApiSetTelemPTPConfigUpdate.c)
 *     UserSetLastStatus @ 0x1C013DE24 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[4]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+24h] [rbp-54h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  _BYTE v16[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h]

  v15 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v13, a2, a3, a4);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 832LL), v15, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v5) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a1 + 4;
    if ( a1 + 4 > MmUserProbeAddress || v7 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v6 = 0;
      v14 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(v7) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v17 = *(_OWORD *)a1;
      v18 = *(_QWORD *)(a1 + 16);
      LODWORD(v17) = 0;
      v6 = SetPrecisionTouchPadConfiguration(&v17);
      v14 = v6;
      if ( v6 )
        ApiSetTelemPTPConfigUpdate();
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 50), 0LL, 13);
    v6 = 0;
    UserSetLastError(5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
