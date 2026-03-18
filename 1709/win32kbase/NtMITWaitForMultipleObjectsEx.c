/*
 * XREFs of NtMITWaitForMultipleObjectsEx @ 0x1C0016810
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserProcessMITInput @ 0x1C003B0F0 (UserProcessMITInput.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtMITWaitForMultipleObjectsEx(unsigned int a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rsi
  CInputThread *v7; // rcx
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v10[0] = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v11);
  if ( CInputThread::IsInputThread(v7) )
  {
    v8 = UserProcessMITInput(a1, a2, v10);
    v6 = v10[0];
  }
  else
  {
    v8 = -1;
    UserSetLastError(5LL);
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_QWORD *)MmUserProbeAddress;
  *a3 = v6;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return v8;
}
