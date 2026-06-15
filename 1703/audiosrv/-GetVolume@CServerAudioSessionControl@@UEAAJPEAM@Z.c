/*
 * XREFs of ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180020C20
 * Callers:
 *     AudioSessionGetVolume @ 0x180024470 (AudioSessionGetVolume.c)
 * Callees:
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180016430 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetVolume(CServerAudioSessionControl *this, float *a2)
{
  CAudioSession *v4; // rcx
  __int64 (__fastcall *v5)(CAudioSession *, float *); // rax

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      26,
      (unsigned int)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
      0,
      0LL);
  }
  v4 = (CAudioSession *)*((_QWORD *)this + 9);
  v5 = *(__int64 (__fastcall **)(CAudioSession *, float *))(*(_QWORD *)v4 + 312LL);
  if ( v5 == CAudioSession::GetVolume )
    return CAudioSession::GetVolume(v4, a2);
  else
    return v5(v4, a2);
}
