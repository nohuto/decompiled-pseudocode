/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004BF0
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800321B0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  int MediaEvent; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rdi
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+38h] [rbp-20h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, 0LL);
  }
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 728);
    v9 = 2 * *(_DWORD *)(v8 - 16) + 2;
    v10 = 2 * *(_DWORD *)(v8 - 16) + 74;
    v11 = (unsigned __int16 *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v10;
      *((_DWORD *)v11 + 1) = 8;
      *((_DWORD *)v11 + 6) = v9;
      *((_DWORD *)v11 + 12) = a4;
      StringCbCopyW(v11 + 36, v9, *(const unsigned __int16 **)(*((_QWORD *)this + 9) + 728LL));
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, v12);
      }
      MediaEvent = GenerateMediaEvent(v12, *((unsigned int *)this + 20));
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v12);
      if ( MediaEvent >= 0 )
        goto LABEL_8;
    }
    else
    {
      MediaEvent = -2147024882;
    }
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnStateChanged", 0x30Bu, MediaEvent);
  }
LABEL_8:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
