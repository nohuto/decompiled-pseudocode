/*
 * XREFs of ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18001C924
 * Callers:
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006050 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     TS_SessionGetAudioProtocol @ 0x18001E1D0 (TS_SessionGetAudioProtocol.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdGetAudioProtocol(DWORD a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  struct TSSession *v7; // rdx
  struct TSSession *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0xFFFF;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = TsSessionFromSessionId(a1, 0, 0LL, &v9);
  if ( !v6 )
  {
    v7 = v9;
    *a2 = *((_DWORD *)v9 + 1);
    *a3 = *((_DWORD *)v7 + 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v6;
}
