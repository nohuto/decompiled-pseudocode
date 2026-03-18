/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01D6308
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0052DE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00D93C4 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDebugHookLParamSize @ 0x1C01F8918 (GetDebugHookLParamSize.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(unsigned int a1, __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  unsigned int DebugHookLParamSize; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWow64Process; // rax
  volatile void *Address[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v13; // [rsp+38h] [rbp-30h]

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)W32UserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a3;
  v13 = *((_OWORD *)a3 + 1);
  DebugHookLParamSize = GetDebugHookLParamSize(a2, Address);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v8, v9);
  ProbeForRead(Address[1], DebugHookLParamSize, CurrentProcessWow64Process != 0 ? 1 : 4);
  return xxxCallNextHookEx(a1, a2, (__int64)Address);
}
