/*
 * XREFs of NtUserHardErrorControl @ 0x1C01DB480
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C020BE9C (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, _OWORD *a3)
{
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  _BYTE *v13; // rdx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v6);
  v11 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v13 = (_BYTE *)W32UserProbeAddress;
      *v13 = *v13;
      v13[15] = v13[15];
      v15 = *a3;
    }
    v12 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v15 & -(__int64)(a3 != 0LL));
    if ( a3 )
      *a3 = v15;
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
