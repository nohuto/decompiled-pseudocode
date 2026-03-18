/*
 * XREFs of UserSetTimer @ 0x1C0211884
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     vEnableSynchronize @ 0x1C0113700 (vEnableSynchronize.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  if ( gptmrMaster )
    v5 = InternalSetTimer(0LL, 0LL, 0x32u, (__int64)GreSynchronizeTimer, 0, 132);
  else
    v5 = 0LL;
  if ( !v7 )
    UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v5;
}
