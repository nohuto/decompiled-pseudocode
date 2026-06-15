/*
 * XREFs of ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009F10
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009050 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180009AC8 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x180025CA4 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x180026E4C (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x180026F14 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::HasAccessibilityAudioStateChanged(volatile __int32 *a1)
{
  unsigned int v2; // r14d
  struct IAudioProcess *v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // esi
  CWindowsPolicyManager *v6; // rcx
  int v7; // edi
  struct TSSession *v9; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF
  struct IAudioProcess *v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v2 = 0;
  if ( (int)CWindowsPolicyManager::RpcGetProcess((CWindowsPolicyManager *)a1, 0LL, &v12) < 0 )
  {
LABEL_14:
    v3 = v12;
    goto LABEL_15;
  }
  v3 = v12;
  v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v12 + 48LL))(v12);
  v5 = v4;
  if ( v4
    && ((unsigned int)TsSessionIdAreAccessibilityAudioSettingsInitialized(v4)
     || (int)CWindowsPolicyManager::InitAccessibilityAudioSettings(v6, v5) >= 0) )
  {
    TsSessionIdGetAudioProtocol(v5, &v10, &v11);
    v7 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( !(unsigned int)TsSessionFromSessionId(v5, 1, 0LL, &v9) && (!*(_DWORD *)v9 || !*((_DWORD *)v9 + 76)) )
      v7 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( v7 || v10 && v10 != 0xFFFF )
    {
      if ( _InterlockedExchange(a1 + 14, TsSessionIdGetAccessibilityAudioMonoMixState(v5)) != *((_DWORD *)a1 + 14) )
        v2 = v7 + 1;
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( v3 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
