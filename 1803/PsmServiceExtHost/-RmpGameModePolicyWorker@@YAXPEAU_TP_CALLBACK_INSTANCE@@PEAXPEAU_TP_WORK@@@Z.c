/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x18002D218 (-RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18002D3F0 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x1800382C0 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18003F3EC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x180056CF0 (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180056F00 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x180056FB8 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180057354 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x180057AE0 (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180058CC8 (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int64 v5; // r13
  char v6; // al
  char *v7; // rsi
  char v8; // cl
  unsigned int v9; // r12d
  DWORD CurrentThreadId; // eax
  unsigned __int8 v11; // r15
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rcx
  unsigned int v15; // edi
  DWORD v16; // ebx
  bool v17; // r10
  unsigned int v18; // r9d
  char *v19; // rdx
  char *v20; // rcx
  char **v21; // rax
  _QWORD *v22; // rax
  char **v23; // r8
  char v24; // al
  char *v25; // r8
  char **v26; // rax
  char **v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  int v31; // edi
  unsigned __int8 v32[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-C8h] BYREF
  char *v34; // [rsp+40h] [rbp-C0h]
  struct _LIST_ENTRY v35; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v37; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+130h] [rbp+30h] BYREF
  void *v44; // [rsp+140h] [rbp+40h]
  int v45; // [rsp+148h] [rbp+48h]
  int v46; // [rsp+14Ch] [rbp+4Ch]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007E837 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v40 = &unk_18007E842;
    UserData.Reserved = 2;
    v41 = 25;
    v42 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = *(_QWORD *)a2;
  v35.Blink = &v35;
  v35.Flink = &v35;
  RtlAcquireSRWLockExclusive(a2 + 18);
  a2[20] = GetCurrentThreadId();
  v6 = *((_BYTE *)a2 + 148);
  if ( (v6 & 1) != 0 )
  {
    v7 = (char *)(a2 + 22);
    do
    {
      v8 = v6 & 0xFE ^ (v6 & 0xFE ^ (2 * (v6 & 0xFE))) & 8;
      *((_BYTE *)a2 + 148) = v8;
      if ( (v8 & 8) != 0 )
      {
        v9 = 0;
      }
      else
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        RtlAcquireSRWLockExclusive(v5 + 616);
        *(_DWORD *)(v5 + 672) = GetCurrentThreadId();
        v9 = *(_DWORD *)(v5 + 664);
        *(_DWORD *)(v5 + 672) = 0;
        RtlReleaseSRWLockExclusive(v5 + 616);
        RtlAcquireSRWLockExclusive(a2 + 18);
        CurrentThreadId = GetCurrentThreadId();
        v8 = *((_BYTE *)a2 + 148);
        a2[20] = CurrentThreadId;
      }
      v11 = (v8 & 8) == 0 && a2[34];
      v12 = *(_QWORD *)v7;
      v32[0] = v11;
      if ( (char *)v12 != v7 )
      {
        v17 = v9 != *(_DWORD *)(v12 + 20) || (*(_BYTE *)(v12 + 82) & 5) != 1;
        v18 = 0;
        v34 = (char *)&v33;
        v19 = v7;
        v33 = &v33;
        do
        {
          v20 = *(char **)v19;
          if ( *(char **)v19 != v19 )
          {
            if ( v17 )
            {
              if ( *((char **)v20 + 1) != v19 || (v21 = (char **)*((_QWORD *)v19 + 1), *v21 != v19) )
                __fastfail(3u);
              *v21 = v20;
              *((_QWORD *)v20 + 1) = v21;
              v22 = v33;
              v23 = (char **)v34;
              *((_QWORD *)v19 + 1) = v19;
              *(_QWORD *)v19 = v19;
              if ( (_QWORD **)v22[1] != &v33 || *v23 != (char *)&v33 )
                __fastfail(3u);
              if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 || **((char ***)v20 + 1) != v20 )
                __fastfail(3u);
              *v23 = v20;
              v34 = (char *)*((_QWORD *)v20 + 1);
              **((_QWORD **)v20 + 1) = &v33;
              *((_QWORD *)v20 + 1) = v23;
            }
            else if ( v18 )
            {
              do
              {
                v24 = v20[82];
                v25 = v20;
                v20 = *(char **)v20;
                if ( (v24 & 5) != 1 )
                {
                  if ( *((char **)v20 + 1) != v25 || (v26 = (char **)*((_QWORD *)v25 + 1), *v26 != v25) )
                    __fastfail(3u);
                  *v26 = v20;
                  *((_QWORD *)v20 + 1) = v26;
                  v27 = (char **)v34;
                  if ( *(_QWORD ***)v34 != &v33 )
                    __fastfail(3u);
                  *((_QWORD *)v25 + 1) = v34;
                  *(_QWORD *)v25 = &v33;
                  *v27 = v25;
                  v34 = v25;
                }
              }
              while ( v20 != v19 );
            }
          }
          ++v18;
          v19 += 16;
        }
        while ( v18 < 2 );
        if ( v33 != &v33 )
        {
          a2[20] = 0;
          RtlReleaseSRWLockExclusive(a2 + 18);
          while ( 1 )
          {
            v28 = v33;
            if ( v33 == &v33 )
              break;
            v29 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 || (v30 = (_QWORD *)v33[1], (_QWORD *)*v30 != v33) )
              __fastfail(3u);
            *v30 = v29;
            *(_QWORD *)(v29 + 8) = v30;
            *v28 = 0LL;
            v28[1] = 0LL;
            RmpGameModeUnapplyAndReleaseRecipientResources(
              (struct _RM_GAME_MODE_CONTEXT *)a2,
              (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v28 - 11));
            *((_DWORD *)v28 + 4) = 2;
            RmpGameModeDereferenceRecipientProcess(v28 - 11);
          }
          RtlAcquireSRWLockExclusive(a2 + 18);
          a2[20] = GetCurrentThreadId();
        }
      }
      if ( *(char **)v7 == v7 )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        v13 = !_BitScanForward((unsigned int *)&v14, a2[33]);
        if ( !v13 )
        {
          do
          {
            v31 = 1 << v14;
            off_1800753A0[5 * v14]((struct _RM_GAME_MODE_CONTEXT *)a2, 0LL);
            a2[33] &= ~v31;
            v13 = !_BitScanForward((unsigned int *)&v14, a2[33]);
          }
          while ( !v13 );
          v7 = (char *)(a2 + 22);
        }
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
      RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
      if ( !v11 && *((_BYTE *)a2 + 140) )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          NotifyGameModeExtensionRecipientsPresent(0LL);
        *((_BYTE *)a2 + 140) = 0;
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
      if ( (a2[37] & 8) == 0 )
      {
        RmpGameModePromoteNewRecipients((struct _RM_GAME_MODE_CONTEXT *)a2, v9, &v35, v32);
        if ( v32[0] )
          RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, v32[0]);
        if ( v35.Flink != &v35 )
        {
          RmpGameModeAcquireGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2, &v35);
          RmpGameModeApplyNewRecipientPolicies((struct _RM_GAME_MODE_CONTEXT *)a2, &v35);
          RmpGameModeApplyGlobalPolicies((struct _RM_GAME_MODE_CONTEXT *)a2);
          RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
        }
      }
      if ( *(char **)v7 == v7 )
        v15 = 0;
      else
        v15 = *(_DWORD *)(*(_QWORD *)v7 + 20LL);
      if ( v15 != a2[36] )
      {
        RmpSystemPublishGlobalGameModeState(v15);
        a2[36] = v15;
      }
      v6 = *((_BYTE *)a2 + 148);
    }
    while ( (v6 & 1) != 0 );
  }
  a2[20] = 0;
  *((_BYTE *)a2 + 148) = v6 & 0xFD;
  RtlReleaseSRWLockExclusive(a2 + 18);
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    *(_DWORD *)&v37.Level = 516;
    v43.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&v37.Id = ((unsigned int)&unk_18007E944 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v37.Keyword = 1LL;
    v43.Size = *(unsigned __int16 *)off_1800920B8;
    v44 = &unk_18007E94F;
    v43.Reserved = 2;
    v45 = 25;
    v46 = 1;
    EventWriteTransfer(qword_1800920D0, &v37, 0LL, 0LL, 2u, &v43);
  }
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
}
