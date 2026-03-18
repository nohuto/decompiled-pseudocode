/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C01DE960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C01E7AF8 (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _DWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v8);
  v13 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    v16[0] = a1;
    v16[1] = a2;
    v16[2] = a3;
    v16[3] = a4;
    RemoteRedrawRectangle(v16);
    v14 = 0;
  }
  else
  {
    v14 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v13, v10, v11, v12);
  return v14;
}
