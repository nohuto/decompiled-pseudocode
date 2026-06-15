/*
 * XREFs of ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800ACE30
 * Callers:
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800ACF80 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdg @ 0x1800A4F68 (WPP_SF_Sdg.c)
 */

__int64 __fastcall CAudioSession::SetChannelVolume(
        const wchar_t **this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rdi
  bool v9; // zf
  const wchar_t *v10; // rax
  float v11; // xmm7_4
  int v12; // [rsp+20h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = a2;
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      this[91]);
  }
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 101);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v6 < *((_DWORD *)this + 240) )
  {
    v9 = v14 == 0;
    v10 = this[121];
    v11 = *(float *)&v10[2 * v6];
    *(float *)&v10[2 * v6] = a3;
    if ( !v9 )
      LeaveCriticalSection(lpCriticalSection);
    LOBYTE(v12) = 0;
    (*((void (__fastcall **)(char *, __int64, const struct _GUID *, _QWORD, int, _QWORD))this[2] + 3))(
      (char *)this + 16,
      1LL,
      a4,
      (unsigned int)v6,
      v12,
      0LL);
    if ( a5 )
      *a5 = v11 == a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942487LL;
  }
}
