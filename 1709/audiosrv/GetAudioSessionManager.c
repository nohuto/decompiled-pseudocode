/*
 * XREFs of GetAudioSessionManager @ 0x180012FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013A20 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall GetAudioSessionManager(
        __int64 a1,
        const unsigned __int16 *a2,
        struct CAudioSessionManager ***a3,
        _DWORD *a4)
{
  int v8; // edi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v10; // rbx
  __int64 (__fastcall *v11)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int v12; // eax
  struct CAudioSessionManager **v13; // rax
  struct CAudioSessionManager **v14; // rbx
  struct CAudioSessionManager *v15; // rcx
  struct CAudioSessionManager *v16; // rcx
  struct CAudioSessionManager *v18; // [rsp+20h] [rbp-20h] BYREF
  struct CAudioSessionManager *v19; // [rsp+28h] [rbp-18h] BYREF
  struct CAudioSessionManagerProvider *v20; // [rsp+30h] [rbp-10h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, a2);
  }
  v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct CAudioSessionManager **))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v19);
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v20);
    v10 = v20;
    v8 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v11 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v20 + 40LL);
      v12 = v11 == CAudioSessionManagerProvider::GetAudioSessionManager
          ? CAudioSessionManagerProvider::GetAudioSessionManager(v20, a2, &v18)
          : v11(v20, a2, &v18);
      v8 = v12;
      if ( v12 < 0 )
      {
        if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
        else
          (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_17;
      }
    }
    if ( v10 )
    {
      if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
      else
        (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v13 = (struct CAudioSessionManager **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      v15 = v19;
      *v13 = v18;
      v13[1] = v15;
      (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v15 + 8LL))(v15);
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, v18);
      }
      v16 = v19;
      *a3 = v14;
      *a4 = (*(__int64 (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v16 + 112LL))(v16) == 0;
LABEL_17:
      if ( v8 >= 0 )
        goto LABEL_18;
      goto LABEL_30;
    }
    v8 = -2147024882;
  }
LABEL_30:
  AudSrvTraceLoggingErrorHelper("GetAudioSessionManager", 0x787u, v8);
LABEL_18:
  if ( v19 )
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v8;
}
