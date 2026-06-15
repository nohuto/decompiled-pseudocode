/*
 * XREFs of ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x1800C1EC8
 * Callers:
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x1800BECE4 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::RuntimeClassInitialize(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioPolicyManager *a2)
{
  __int64 result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  *((_QWORD *)this + 42) = a2;
  if ( IsGetDefaultSpatialRenderingModePresent() )
    *((_BYTE *)this + 145) = (unsigned int)IsSpatialAllowedOnPlatform() != 0;
  result = 0LL;
  *((_BYTE *)this + 144) = 1;
  return result;
}
