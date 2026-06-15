/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800ADC20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180004F90 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800AA698 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_dg @ 0x1800D3DD4 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::UpdateAudioVolume(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5,
        float *a6)
{
  float v6; // xmm3_4
  int VolumeStrip; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // esi
  unsigned int v18; // ebx
  float *v19; // rdi
  CAudioSessionManager *v20; // rcx
  int v21; // eax
  struct IVolumeStrip *v22; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v24; // [rsp+78h] [rbp+10h] BYREF

  CAudioSession::SetVolumeAllStreams(a1, a2, 0, a4, 0, 0LL);
  if ( (unsigned int)(a2 - 2) <= 1 )
    return 0LL;
  v22 = 0LL;
  VolumeStrip = CPerEndpointVolumeAudioSession::GetVolumeStrip((struct IUnknown **)a1, &v22);
  v11 = VolumeStrip;
  if ( VolumeStrip >= 0 )
  {
    v13 = a1 + 336;
    VolumeStrip = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64, _QWORD))(*(_QWORD *)v22 + 144LL))(
                    v22,
                    a3,
                    a1 + 336,
                    0LL);
    v11 = VolumeStrip;
    if ( VolumeStrip < 0 )
    {
      v12 = 5057LL;
      goto LABEL_8;
    }
    v14 = *(_QWORD *)(a1 + 1032);
    v24 = 0;
    VolumeStrip = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 48LL))(v14, &v24);
    v11 = VolumeStrip;
    if ( VolumeStrip < 0 )
    {
      v12 = 5060LL;
      goto LABEL_8;
    }
    v17 = a5;
    v18 = 0;
    if ( a5 )
    {
      v19 = a6;
      v20 = WPP_GLOBAL_Control;
      do
      {
        if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v20 + 7) & 0x200000) != 0
          && *((_BYTE *)v20 + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)v20 + 2),
            122LL,
            &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
            v18,
            (float)(v6 * *v19));
          v20 = WPP_GLOBAL_Control;
        }
        if ( v18 < v24 )
        {
          v21 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v22 + 96LL))(
                  v22,
                  v18,
                  v15,
                  v13,
                  0LL);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              5069LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v21);
          v20 = WPP_GLOBAL_Control;
        }
        ++v18;
        ++v19;
      }
      while ( v18 < v17 );
    }
    if ( v22 )
      (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v22 + 16LL))(v22);
    return 0LL;
  }
  v12 = 5050LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)VolumeStrip);
  if ( v22 )
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v22 + 16LL))(v22);
  return v11;
}
