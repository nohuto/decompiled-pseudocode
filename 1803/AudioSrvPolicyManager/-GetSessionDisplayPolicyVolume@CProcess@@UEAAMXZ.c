/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180016440
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  float v1; // xmm6_4
  unsigned int v2; // ebx
  BOOL v3; // edi
  struct TSSession *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = FLOAT_1_0;
  if ( !*((_DWORD *)this + 116) )
  {
    v2 = *((_DWORD *)this + 51);
    v3 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( !(unsigned int)TsSessionFromSessionId(v2, 0, 0LL, &v5) && !*((_DWORD *)v5 + 57) )
      v3 = g_bLowPowerEpoch != 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( !v3 )
      return 0.0;
  }
  return v1;
}
