/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180077FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_Sgd @ 0x180078F80 (WPP_SF_Sgd.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AC2C8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // edi
  CAudioDGProcess *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  GUID *v16; // rax
  GUID v17; // xmm0
  __int64 v18; // r8
  __int64 v20; // [rsp+20h] [rbp-48h]
  double v21; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
        0LL);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
    {
      v21 = a3;
      WPP_SF_Sgd(*((_QWORD *)v9 + 2), (_DWORD)a2, v5, 0, SLOBYTE(v21), a4);
    }
  }
  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 792);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v16 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a5 )
        v16 = a5;
      v17 = *v16;
      v15[1] = 1;
      *((float *)v15 + 12) = a3;
      *(GUID *)(v15 + 7) = v17;
      v15[6] = v12;
      *((_BYTE *)v15 + 52) = a4;
      StringCbCopyW((unsigned __int16 *)v15 + 36, v12, *(const unsigned __int16 **)(*((_QWORD *)this + 9) + 792LL));
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v20) = *((_DWORD *)this + 20);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
          v15,
          v20);
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20), v18);
      operator delete(v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnVolumeChanged", 1130, MediaEvent);
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
