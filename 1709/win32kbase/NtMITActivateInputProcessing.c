/*
 * XREFs of NtMITActivateInputProcessing @ 0x1C0090090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     UserActivateMITInputProcessing @ 0x1C0090124 (UserActivateMITInputProcessing.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rdi
  CInputThread *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v12[0] = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v13);
  if ( CInputThread::IsInputThread(v7) )
  {
    v8 = UserActivateMITInputProcessing(a1, a2, v12);
    v6 = v12[0];
  }
  else
  {
    v8 = 0;
    UserSetLastError(5);
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_QWORD *)MmUserProbeAddress;
  *a3 = v6;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress, MmUserProbeAddress, v9, v10);
  return v8;
}
