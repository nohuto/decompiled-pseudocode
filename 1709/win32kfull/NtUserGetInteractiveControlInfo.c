/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x1C01E5CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C021BDA8 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(unsigned int a1, _OWORD *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v8; // rax
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int128 v12; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+60h] [rbp-28h]

  v12 = 0uLL;
  v13 = 0LL;
  v14 = 0;
  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 && a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    ProbeForWrite(a2, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v8 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetReportInfo(
                v8,
                (unsigned __int16)a1,
                HIWORD(a1),
                (struct tagINTERACTIVECTRL_INFO *)&v12) < 0 )
    {
      v4 = 0;
    }
    else
    {
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v12;
      *((_QWORD *)a2 + 2) = v13;
      *((_DWORD *)a2 + 6) = v14;
    }
  }
  else
  {
    v4 = 0;
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v4;
}
