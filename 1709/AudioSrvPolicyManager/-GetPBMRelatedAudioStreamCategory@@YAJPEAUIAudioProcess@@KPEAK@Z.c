/*
 * XREFs of ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000695C
 * Callers:
 *     ?IsAlwaysAudibleStream@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x18000637C (-IsAlwaysAudibleStream@@YA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800074E0 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x180019970 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001F110 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPBMRelatedAudioStreamCategory(struct IAudioProcess *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx

  *a3 = a2;
  v5 = a2 >= 0x15 ? 0x80070057 : 0;
  if ( a2 < 0x15 )
  {
    v6 = 0;
    if ( dword_18002D660[a2] )
    {
      if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 96LL))(a1)
        && ((*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 136LL))(a1)
         || (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a1 + 376LL))(a1)) )
      {
        v6 = *a3;
      }
      *a3 = v6;
    }
  }
  return v5;
}
