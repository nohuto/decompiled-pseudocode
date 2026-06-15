/*
 * XREFs of ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x1800C5F8C
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C2F60 (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800C5B28 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Sarm::CStreamResource::IsProcessMuted(
        Sarm::CStreamResource *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // bl
  struct IAudioProcess *v6; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v6 = 0LL;
  if ( (int)Sarm::CStreamResource::GetProcess(this, &v6, a3, a4) >= 0 )
    v4 = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v6 + 120LL))(v6) == 1;
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v6);
  return v4;
}
