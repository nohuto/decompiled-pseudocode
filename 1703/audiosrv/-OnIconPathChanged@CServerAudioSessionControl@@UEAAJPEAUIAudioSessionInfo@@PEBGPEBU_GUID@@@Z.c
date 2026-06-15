/*
 * XREFs of ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800917A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnIconPathChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        char *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  unsigned int v13; // r12d
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  char *v16; // rcx
  GUID *v17; // rax
  GUID v18; // xmm0
  __int64 v19; // r8
  __int64 v21; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
      0,
      (__int64)a3);
  }
  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 864) - 16LL);
    v10 = -1LL;
    v11 = 2 * v9 + 2;
    do
      ++v10;
    while ( *(_WORD *)&a3[2 * v10] );
    v12 = 2 * v10 + 2;
    v13 = v12 + 2 * v9 + 74;
    v14 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v16 = (char *)(v14 + 18);
      v17 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v17 = a4;
      v18 = *v17;
      v15[1] = 256;
      v15[6] = v11;
      *(GUID *)(v15 + 7) = v18;
      v15[12] = v12;
      v15[13] = v11 + 72;
      StringCbCopyW(v16, v11, *(char **)(*((_QWORD *)this + 9) + 864LL));
      StringCbCopyW((char *)v15 + (unsigned int)v15[13], v12, a3);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v21) = *((_DWORD *)this + 20);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x15u,
          (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
          v15,
          v21);
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20), v19);
      operator delete(v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnIconPathChanged", 505, MediaEvent);
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
