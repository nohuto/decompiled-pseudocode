/*
 * XREFs of PbmGetSoundLevel @ 0x180021E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dS @ 0x18001A1A8 (WPP_SF_dS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001A228 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001D7E4 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmGetSoundLevel(
        CApplicationManager *a1,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        unsigned __int16 *a4,
        int *a5)
{
  unsigned int v5; // edi
  int Process; // eax
  __int64 v10; // rcx
  struct CProcess *v11; // rbx
  const wchar_t *v12; // rax
  __int64 v13; // r10
  struct CProcess *v14; // rbx
  struct CProcess *v16; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v16 = 0LL;
  if ( a5 )
  {
    *a5 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v16);
      v11 = v16;
      v5 = Process;
      if ( Process >= 0 )
        *a5 = CApplicationManager::GetSoundLevel(v10, (__int64)v16, a2, a3, a4);
      if ( v11 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v12 = SoundLevelToString(*a5);
          WPP_SF_dS(
            *(_QWORD *)(v13 + 16),
            0xCu,
            &WPP_2a27100de0d53ba9b9d21cae8fd27d13_Traceguids,
            *((_DWORD *)v11 + 54),
            v12);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v16;
          (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v16 + 32LL))(v16);
          (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v5;
}
