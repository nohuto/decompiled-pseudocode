/*
 * XREFs of ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180032AC4
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017010 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

void __fastcall CAudioSessionManager::NotifyActiveSession(CAudioSessionManager *this, struct CAudioSession *a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  char *v7; // rax
  char *v8; // rbx
  HANDLE ProcessHeap; // rax
  void (__fastcall **v10[7])(_QWORD, __int64 *); // [rsp+20h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, 0LL);
  }
  v4 = 2 * *(_DWORD *)(*((_QWORD *)a2 + 91) - 16LL) + 2;
  v5 = 2 * *(_DWORD *)(*((_QWORD *)this + 38) - 16LL) + 2;
  v6 = v5 + 2 * *(_DWORD *)(*((_QWORD *)a2 + 91) - 16LL) + 74;
  v7 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)v7 = v6;
    *((_DWORD *)v7 + 13) = v4 + 72;
    *((_DWORD *)v7 + 1) = 64;
    *((_DWORD *)v7 + 6) = v4;
    *((_DWORD *)v7 + 12) = v5;
    StringCbCopyW(v7 + 72, v4, *((char **)a2 + 91));
    StringCbCopyW(&v8[*((unsigned int *)v8 + 13)], v5, *((char **)this + 38));
    v10[1] = (void (__fastcall **)(_QWORD, __int64 *))v8;
    v10[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionManagerNotification::`vftable';
    v10[2] = (void (__fastcall **)(_QWORD, __int64 *))a2;
    CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)this + 5, v10);
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v8);
}
