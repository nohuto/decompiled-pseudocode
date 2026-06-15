/*
 * XREFs of ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180017D64
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180017CD0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001EB18 (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::QueueStreamStartedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  CStreamStartedWorkItem *v3; // rsi
  HANDLE ProcessHeap; // rax
  CStreamStartedWorkItem *v5; // rbx
  int v6; // edi

  v3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = (CStreamStartedWorkItem *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = &CStreamStartedWorkItem::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CStreamStartedWorkItem::Initialize(v5, a2);
    if ( v6 >= 0 )
    {
      v3 = v5;
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(CStreamStartedWorkItem *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(CStreamStartedWorkItem *))(*(_QWORD *)v3 + 16LL))(v3);
    if ( v6 >= 0 )
      v3 = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids, v6);
    }
    AudPolicyLogError("CStreamStartedWorkItem::CreateInstance", 68, v6);
  }
  if ( v3 )
    (*(void (__fastcall **)(CStreamStartedWorkItem *, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_a368ca27e3b33483ffe51d7896b5e1e1_Traceguids, v6);
    }
    AudPolicyLogError("CPlaybackManager::QueueStreamStartedWorkItem", 194, v6);
  }
  return (unsigned int)v6;
}
