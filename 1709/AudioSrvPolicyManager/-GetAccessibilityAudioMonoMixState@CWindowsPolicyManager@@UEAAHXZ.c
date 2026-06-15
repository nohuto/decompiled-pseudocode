/*
 * XREFs of ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180005FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180005D20 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18001DACC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18001DB94 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this)
{
  __int64 v1; // rax
  unsigned int AccessibilityAudioMonoMixState; // edi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  CWindowsPolicyManager *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v7 = 0LL;
  AccessibilityAudioMonoMixState = *((_DWORD *)this + 14);
  if ( (*(int (__fastcall **)(CWindowsPolicyManager *, _QWORD, __int64 *))(v1 + 32))(this, 0LL, &v7) >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    v4 = v3;
    if ( v3 )
    {
      if ( !(unsigned int)TsSessionIdAreAccessibilityAudioSettingsInitialized(v3) )
        CWindowsPolicyManager::InitAccessibilityAudioSettings(v5, v4);
      AccessibilityAudioMonoMixState = TsSessionIdGetAccessibilityAudioMonoMixState(v4);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return AccessibilityAudioMonoMixState;
}
