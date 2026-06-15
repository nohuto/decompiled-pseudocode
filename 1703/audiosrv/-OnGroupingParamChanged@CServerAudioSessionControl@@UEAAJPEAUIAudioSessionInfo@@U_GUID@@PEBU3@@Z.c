/*
 * XREFs of ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180091610
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnGroupingParamChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  char *v14; // rcx
  GUID *v15; // rax
  GUID v16; // xmm0
  __int64 v17; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v20; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v20 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 864);
    v10 = 2 * *(_DWORD *)(v9 - 16) + 2;
    v11 = 2 * *(_DWORD *)(v9 - 16) + 74;
    v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      *v12 = v11;
      v14 = (char *)(v12 + 18);
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v15 = a4;
      v16 = *v15;
      v13[6] = v10;
      v13[1] = 4;
      *(GUID *)(v13 + 7) = v16;
      *((struct _GUID *)v13 + 3) = *a3;
      StringCbCopyW(v14, v10, *(char **)(*((_QWORD *)this + 9) + 864LL));
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x17u,
          (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
          v13,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20), v17);
      operator delete(v13);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnGroupingParamChanged", 701, MediaEvent);
    }
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
