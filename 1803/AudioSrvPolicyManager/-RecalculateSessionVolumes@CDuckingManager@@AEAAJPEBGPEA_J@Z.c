/*
 * XREFs of ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18000E6AC
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000DEFC (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000E26C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000E92C (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x18000F470 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F880 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::RecalculateSessionVolumes(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  int DuckableSessionsList; // ebx
  __int64 v5; // rbx
  const wchar_t *v6; // rax
  int v8; // [rsp+20h] [rbp-50h]
  __int128 v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int128 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+68h] [rbp-8h]
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  v10 = 0LL;
  v12 = 10;
  v9 = 0LL;
  v11 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v9);
  if ( DuckableSessionsList < 0 )
    goto LABEL_13;
  while ( v10 )
  {
    v5 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v6);
    }
    v13 = 0LL;
    DuckableSessionsList = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
                             v5,
                             &GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4,
                             &v13);
    if ( DuckableSessionsList >= 0 )
    {
      LOBYTE(v8) = 0;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(*(_QWORD *)v13 + 24LL))(
        v13,
        2LL,
        0LL,
        0xFFFFFFFFLL,
        v8,
        a3);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( DuckableSessionsList < 0 )
LABEL_13:
    AudPolicyLogError("CDuckingManager::RecalculateSessionVolumes", 1578, DuckableSessionsList);
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v9);
  return (unsigned int)DuckableSessionsList;
}
