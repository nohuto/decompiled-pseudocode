/*
 * XREFs of UserKillTimer @ 0x1C0211834
 * Callers:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C010EE58 (-vDisableTimers@@YAXK@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

__int64 __fastcall UserKillTimer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  v1 = gidSynchronizeTimer;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  result = FindTimer(0LL, v1, 4u, 1, 0LL);
  if ( !(_DWORD)v7 )
    return UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return result;
}
