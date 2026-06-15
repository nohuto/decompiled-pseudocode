/*
 * XREFs of ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x180026F14
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180009C40 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180009E80 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009F10 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdGetAccessibilityAudioMonoMixState(DWORD a1)
{
  unsigned int v2; // edi
  struct TSSession *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v4) && *((_DWORD *)v4 + 74) )
    v2 = *((_DWORD *)v4 + 75);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v2;
}
