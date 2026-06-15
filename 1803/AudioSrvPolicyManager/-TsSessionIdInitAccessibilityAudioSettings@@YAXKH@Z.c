/*
 * XREFs of ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180026EAC
 * Callers:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180009AC8 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180009C40 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

void __fastcall TsSessionIdInitAccessibilityAudioSettings(DWORD a1, int a2)
{
  struct TSSession *v4; // rax
  struct TSSession *v5; // [rsp+40h] [rbp+18h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v5) )
  {
    v4 = v5;
    *((_DWORD *)v5 + 75) = a2;
    *((_DWORD *)v4 + 74) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
}
