/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180006FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180007354 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180007388 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        int *a5)
{
  DWORD v7; // edi
  int v8; // eax
  char v9; // cl
  char v10; // cl
  int v11; // esi
  unsigned int v12; // ebx
  bool v14; // al
  void *v15; // rsi
  DWORD v16; // ebx
  bool v18; // cl
  char v19; // dl
  int v20; // eax
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  int v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  void *v26; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE TlsValue[80]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  void *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  unsigned int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]

  v26 = 0LL;
  memset_0(TlsValue, 0, 0x48uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    TlsGetValue(HampLockTrackerId);
    TlsSetValue(v7, TlsValue);
  }
  RtlAcquireSRWLockExclusive(a4 + 592);
  *((_DWORD *)a4 + 162) = GetCurrentThreadId();
  if ( a1 == WNF_SHEL_FOCUS_CHANGE )
  {
    if ( a5 )
      v8 = *a5;
    else
      v8 = 0;
    if ( v8 != *((_DWORD *)a4 + 156) )
    {
      *((_DWORD *)a4 + 156) = v8;
LABEL_8:
      a4[644] |= 1u;
    }
  }
  else if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
  {
    v18 = a5 && *a5 == 1;
    v19 = a4[644];
    if ( v18 != ((v19 & 4) != 0) )
      a4[644] = (4 * v18) | v19 & 0xFB | 1;
  }
  else
  {
    if ( a5 )
      v20 = a5[4];
    else
      v20 = 0;
    if ( v20 != *((_DWORD *)a4 + 157) )
    {
      *((_DWORD *)a4 + 157) = v20;
      goto LABEL_8;
    }
  }
  v9 = a4[644];
  if ( (v9 & 3) == 1 )
  {
    v10 = v9 | 2;
    a4[644] = v10;
    while ( (a4[644] & 1) != 0 )
    {
      a4[644] &= ~1u;
      v11 = *((_DWORD *)a4 + 160);
      if ( (a4[644] & 4) != 0 )
        v12 = *((_DWORD *)a4 + 157);
      else
        v12 = *((_DWORD *)a4 + 156);
      if ( v12 != v11 )
      {
        if ( v12 && (int)RmpSystemOpenProcess(&v26, 0x2000u, v12) < 0 )
          v12 = 0;
        if ( v12 != v11 )
        {
          if ( hProvider > 5u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
          {
            v22 = v12;
            v33 = &v22;
            v23 = *((_DWORD *)a4 + 160);
            v35 = &v23;
            v24 = *((_DWORD *)a4 + 156);
            v37 = &v24;
            LODWORD(v25) = *((_DWORD *)a4 + 157);
            v39 = &v25;
            v14 = (a4[644] & 4) != 0;
            v34 = 4LL;
            LOBYTE(v21) = v14;
            v41 = &v21;
            v36 = 4LL;
            v38 = 4LL;
            v40 = 4LL;
            v42 = 1LL;
            *(_DWORD *)&EventDescriptor.Level = 5;
            *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800585A1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            UserData.Ptr = (ULONGLONG)off_1800670C8;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_1800670C8;
            UserData.Reserved = 2;
            v30 = &unk_1800585AC;
            v31 = 104;
            v32 = 1;
            EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
          v15 = (void *)*((_QWORD *)a4 + 79);
          *((_QWORD *)a4 + 79) = v26;
          *((_DWORD *)a4 + 160) = v12;
          *((_DWORD *)a4 + 162) = 0;
          v26 = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 592);
          if ( v15 )
            NtClose(v15);
          RtlAcquireSRWLockExclusive(a4 + 1208);
          *((_DWORD *)a4 + 304) = GetCurrentThreadId();
          RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)(a4 + 1136));
          *((_DWORD *)a4 + 304) = 0;
          RtlReleaseSRWLockExclusive(a4 + 1208);
          RtlAcquireSRWLockExclusive(a4 + 592);
          *((_DWORD *)a4 + 162) = GetCurrentThreadId();
        }
      }
    }
    a4[644] &= ~2u;
  }
  *((_DWORD *)a4 + 162) = 0;
  RtlReleaseSRWLockExclusive(a4 + 592);
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
  return 0LL;
}
