/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800ACBC0
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800ACD60 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ValidateAudioLevel @ 0x1800ADE1C (ValidateAudioLevel.c)
 *     WPP_SF_dS @ 0x1800AE1B8 (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rdi
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // esi
  float *v14; // rax
  __int64 v15; // rcx
  char *v16; // r14
  float v17; // xmm1_4
  int v18; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v20; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25,
      (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      a2,
      *((_QWORD *)this + 91));
  }
  v9 = 0;
  v10 = 0LL;
  if ( (_DWORD)v6 )
  {
    while ( (unsigned __int8)ValidateAudioLevel(v10) )
    {
      v10 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v10 >= (unsigned int)v6 )
        goto LABEL_8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DC,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
LABEL_8:
  v20 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (_DWORD)v6 != *((_DWORD *)this + 240) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942487LL;
  }
  if ( (_DWORD)v6 )
  {
    v14 = (float *)*((_QWORD *)this + 121);
    v15 = v6;
    v16 = (char *)((char *)a3 - (char *)v14);
    do
    {
      v17 = *(float *)((char *)v14 + (_QWORD)v16);
      if ( *v14 != v17 )
      {
        *v14 = v17;
        ++v12;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  LOBYTE(v18) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
    (char *)this + 16,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v18,
    0LL);
  if ( a5 )
  {
    LOBYTE(v9) = v12 == 0;
    *a5 = v9;
  }
  return 0LL;
}
