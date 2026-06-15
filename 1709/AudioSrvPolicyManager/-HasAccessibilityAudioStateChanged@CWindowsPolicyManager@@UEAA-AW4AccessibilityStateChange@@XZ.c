/*
 * XREFs of ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006050
 * Callers:
 *     <none>
 * Callees:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180005D20 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18001C924 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18001DACC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18001DB94 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::HasAccessibilityAudioStateChanged(volatile __int32 *a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebp
  unsigned int v4; // eax
  unsigned int v5; // edi
  CWindowsPolicyManager *v6; // rcx
  int v7; // ebx
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  struct TSSession *v12; // [rsp+68h] [rbp+20h] BYREF

  v1 = *(_QWORD *)a1;
  v11 = 0LL;
  v3 = 0;
  if ( (*(int (__fastcall **)(volatile __int32 *, _QWORD, __int64 *))(v1 + 32))(a1, 0LL, &v11) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
    v5 = v4;
    if ( v4 )
    {
      if ( (unsigned int)TsSessionIdAreAccessibilityAudioSettingsInitialized(v4)
        || (int)CWindowsPolicyManager::InitAccessibilityAudioSettings(v6, v5) >= 0 )
      {
        TsSessionIdGetAudioProtocol(v5, &v9, &v10);
        v7 = 1;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        if ( !(unsigned int)TsSessionFromSessionId(v5, 1, 0LL, &v12) && (!*(_DWORD *)v12 || !*((_DWORD *)v12 + 76)) )
          v7 = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        if ( (v7 || v9 && v9 != 0xFFFF)
          && _InterlockedExchange(a1 + 14, TsSessionIdGetAccessibilityAudioMonoMixState(v5)) != *((_DWORD *)a1 + 14) )
        {
          v3 = v7 + 1;
        }
      }
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v3;
}
