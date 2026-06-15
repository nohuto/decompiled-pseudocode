/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016E80
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180016CC0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  int MediaEvent; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int *v11; // rax
  unsigned int *v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  _WORD *v15; // rax
  unsigned __int64 v16; // r9
  __int16 v17; // cx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v21; // [rsp+38h] [rbp-20h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v21 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = *((_QWORD *)this + 9);
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_QWORD *)(v7 + 792);
  v9 = 2 * *(_DWORD *)(v8 - 16) + 2;
  v10 = 2 * *(_DWORD *)(v8 - 16) + 74;
  v11 = (unsigned int *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
  {
    MediaEvent = -2147024882;
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnStateChanged", 0x310u, MediaEvent);
    goto LABEL_15;
  }
  *v11 = v10;
  v11[1] = 8;
  v11[6] = v9;
  v11[12] = a4;
  v13 = (unsigned __int64)v9 >> 1;
  v14 = *(_QWORD *)(*((_QWORD *)this + 9) + 792LL);
  v15 = v11 + 18;
  if ( v13 )
  {
    v16 = 2147483646 - v13;
    v14 -= (__int64)v15;
    while ( v16 + v13 )
    {
      v17 = *(_WORD *)((char *)v15 + v14);
      if ( !v17 )
        break;
      *v15++ = v17;
      if ( !--v13 )
      {
        --v15;
        break;
      }
    }
    *v15 = 0;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25LL,
      &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
      v12,
      *((_DWORD *)this + 20));
  }
  MediaEvent = GenerateMediaEvent(v12, *((unsigned int *)this + 20), v14);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v12);
  if ( MediaEvent < 0 )
    goto LABEL_21;
LABEL_15:
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
