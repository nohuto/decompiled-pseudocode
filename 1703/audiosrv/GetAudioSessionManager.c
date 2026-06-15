/*
 * XREFs of GetAudioSessionManager @ 0x180026A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18001E3A0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180025E10 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v11)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rax
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
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, a2);
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
      v11 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v20 + 40LL);
      v12 = v11 == CAudioSessionManagerProvider::GetAudioSessionManager
          ? CAudioSessionManagerProvider::GetAudioSessionManager(v20, a2, &v18)
          : v11(v20, a2, &v18);
      v8 = v12;
      if ( v12 < 0 )
      {
        if ( *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v10);
        else
          (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_21;
      }
    }
    if ( v10 )
    {
      if ( *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v10);
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
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v18);
      }
      v16 = v19;
      *a3 = v14;
      *a4 = (*(__int64 (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v16 + 112LL))(v16) == 0;
LABEL_21:
      if ( v8 >= 0 )
        goto LABEL_22;
      goto LABEL_32;
    }
    v8 = -2147024882;
  }
LABEL_32:
  AudSrvTraceLoggingErrorHelper("GetAudioSessionManager", 0x7A3u, v8);
LABEL_22:
  if ( v19 )
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v8;
}
