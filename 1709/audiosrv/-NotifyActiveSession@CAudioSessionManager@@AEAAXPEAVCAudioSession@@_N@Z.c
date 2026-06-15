/*
 * XREFs of ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180015B30
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015CC0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180013518 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

void __fastcall CAudioSessionManager::NotifyActiveSession(CAudioSessionManager *this, struct CAudioSession *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int *v7; // rax
  unsigned int *v8; // r14
  unsigned __int64 v9; // rdx
  _WORD *v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  __int16 v13; // ax
  _WORD *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  __int16 v18; // ax
  HANDLE ProcessHeap; // rax
  void (__fastcall **v20[7])(_QWORD, __int64 *); // [rsp+20h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, 0LL);
  }
  v4 = 2 * *(_DWORD *)(*((_QWORD *)a2 + 99) - 16LL) + 2;
  v5 = 2 * *(_DWORD *)(*((_QWORD *)this + 30) - 16LL) + 2;
  v6 = v5 + 2 * *(_DWORD *)(*((_QWORD *)a2 + 99) - 16LL) + 74;
  v7 = (unsigned int *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[13] = v4 + 72;
    v9 = (unsigned __int64)v4 >> 1;
    v10 = v7 + 18;
    *v7 = v6;
    v7[1] = 64;
    v7[6] = v4;
    v7[12] = v5;
    if ( v9 )
    {
      v11 = 2147483646 - v9;
      v12 = *((_QWORD *)a2 + 99) - (_QWORD)v10;
      while ( v11 + v9 )
      {
        v13 = *(_WORD *)((char *)v10 + v12);
        if ( !v13 )
          break;
        *v10++ = v13;
        if ( !--v9 )
        {
          --v10;
          break;
        }
      }
      *v10 = 0;
    }
    v14 = (_WORD *)((char *)v8 + v8[13]);
    v15 = (unsigned __int64)v5 >> 1;
    if ( v15 )
    {
      v16 = 2147483646 - v15;
      v17 = *((_QWORD *)this + 30) - (_QWORD)v14;
      while ( v16 + v15 )
      {
        v18 = *(_WORD *)((char *)v14 + v17);
        if ( !v18 )
          break;
        *v14++ = v18;
        if ( !--v15 )
        {
          --v14;
          break;
        }
      }
      *v14 = 0;
    }
    v20[1] = (void (__fastcall **)(_QWORD, __int64 *))v8;
    v20[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionManagerNotification::`vftable';
    v20[2] = (void (__fastcall **)(_QWORD, __int64 *))a2;
    CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 136), v20);
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v8);
}
