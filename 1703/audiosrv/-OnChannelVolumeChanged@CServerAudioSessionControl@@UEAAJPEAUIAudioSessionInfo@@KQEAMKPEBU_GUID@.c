/*
 * XREFs of ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800911D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     WPP_SF_Sdg @ 0x1800877E4 (WPP_SF_Sdg.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_Sdd @ 0x1800907E8 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnChannelVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        unsigned int a3,
        float *const a4,
        unsigned int a5,
        struct _GUID *a6)
{
  int MediaEvent; // edi
  CVolumeStrip *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r13d
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  GUID *v15; // rax
  __int64 v16; // r14
  GUID v17; // xmm0
  char *v18; // r14
  __int64 v19; // r14
  __int64 v20; // r8
  int v22; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v24; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x24u,
        (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
        0LL);
      v10 = WPP_GLOBAL_Control;
    }
    if ( v10 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v10 + 28) & 0x40) != 0 && *((_BYTE *)v10 + 25) >= 4u )
      WPP_SF_Sdd(*((_QWORD *)v10 + 2), 0x25u, (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    v12 = 2 * *(_DWORD *)(*(_QWORD *)(v11 + 864) - 16LL) + 2;
    v13 = operator new[]((v12 + 4 * a3 + 75) & 0xFFFFFFFC, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      *v13 = (v12 + 4 * a3 + 75) & 0xFFFFFFFC;
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a6 )
        v15 = a6;
      v16 = (v12 + 75) & 0xFFFFFFFC;
      v17 = *v15;
      v14[12] = v16;
      v18 = (char *)v14 + v16;
      v14[13] = a5;
      v14[1] = 2;
      v14[6] = v12;
      v14[14] = a3;
      *(GUID *)(v14 + 7) = v17;
      if ( a3 )
      {
        v19 = v18 - (char *)a4;
        do
        {
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sdg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x26u,
              (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
              0LL);
          }
          ++MediaEvent;
          *(float *const)((char *)a4 + v19) = *a4;
          ++a4;
        }
        while ( MediaEvent < a3 );
      }
      StringCbCopyW((char *)v14 + 72, v12, *(char **)(*((_QWORD *)this + 9) + 864LL));
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v22 = *((_DWORD *)this + 20);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x27u,
          (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
          v14,
          v22);
      }
      MediaEvent = GenerateMediaEvent(v14, *((unsigned int *)this + 20), v20);
      operator delete(v14);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnChannelVolumeChanged", 1377, MediaEvent);
    }
  }
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
