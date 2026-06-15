/*
 * XREFs of ?IsAlwaysAudibleStream@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x18000A248
 * Callers:
 *     ?StreamRequiresPreStartRegistration@CWindowsPolicyManager@@UEAA_NPEAUIAudioStreamInfo@@@Z @ 0x18000A2F0 (-StreamRequiresPreStartRegistration@CWindowsPolicyManager@@UEAA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x18000A300 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 * Callees:
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000B058 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall IsAlwaysAudibleStream(struct IAudioStreamInfo *a1)
{
  struct IAudioProcess *v2; // rdi
  unsigned int v3; // eax
  bool v4; // bl
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  struct IAudioProcess *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v4 = 0;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, struct IAudioProcess **))(*(_QWORD *)a1 + 24LL))(a1, &v7) >= 0 )
  {
    v2 = v7;
    v3 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a1 + 48LL))(a1);
    v6 = 0;
    if ( v3 < 0x15 && (int)GetPBMRelatedAudioStreamCategory(v2, v3, &v6) >= 0 && (v6 == 14 || v6 == 17) )
      v4 = 1;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
