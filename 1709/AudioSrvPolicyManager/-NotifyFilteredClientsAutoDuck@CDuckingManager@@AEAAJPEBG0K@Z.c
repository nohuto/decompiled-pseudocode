/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000884C
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000920C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180009C40 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009E10 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x18000A790 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB9C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000B0DC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  CDuckingManager *v5; // r13
  unsigned int v6; // esi
  int DuckableSessionsList; // r14d
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  SIZE_T v11; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  const wchar_t *v17; // rax
  HANDLE v19; // rax
  int *v21; // rbx
  int v22; // [rsp+20h] [rbp-A8h]
  unsigned __int16 *v23; // [rsp+28h] [rbp-A0h]
  __int128 v25; // [rsp+50h] [rbp-78h] BYREF
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int128 v27; // [rsp+68h] [rbp-60h]
  int v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp-48h]
  ATL::CAtlException *v30; // [rsp+88h] [rbp-40h] BYREF

  v29 = -2LL;
  v5 = this;
  v6 = 0;
  DuckableSessionsList = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 10;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v8 = *((_QWORD *)v5 + 19);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 104));
  if ( v8 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, a2);
    }
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = 2 * v9 + 2;
    v11 = 2 * v9 + 74;
    v22 = 2 * v9 + 74;
    ProcessHeap = GetProcessHeap();
    v13 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v11);
    v14 = v13;
    v23 = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = v22;
      *((_DWORD *)v13 + 1) = 512;
      *((_DWORD *)v13 + 6) = v10;
      *((_BYTE *)v13 + 60) = 1;
      *((_DWORD *)v13 + 14) = a4;
      StringCbCopyW(v13 + 36, v10, a2);
      DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(v5, a3, &v25);
      if ( DuckableSessionsList >= 0 )
      {
        while ( v26 )
        {
          v15 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v25);
          v16 = v15;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v17 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v17);
          }
          DuckableSessionsList = 0;
          try
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 64LL))(v16);
            CLockedList<CDuckingNotification,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v5 + 104));
          }
          catch ( ATL::CAtlException *v30 )
          {
            v21 = (int *)v30;
            if ( *(_DWORD *)v30 == -1073741571 )
              _o__resetstkoflw();
            v5 = this;
            DuckableSessionsList = *v21;
            v14 = v23;
            continue;
          }
        }
      }
    }
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v14);
    if ( DuckableSessionsList < 0 )
      AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoDuck", 870, DuckableSessionsList);
    v6 = DuckableSessionsList;
  }
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v25);
  return v6;
}
