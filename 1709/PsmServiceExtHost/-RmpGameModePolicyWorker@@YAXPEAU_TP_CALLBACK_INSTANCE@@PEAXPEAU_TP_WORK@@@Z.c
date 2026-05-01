/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E050
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001E458 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x180024728 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18002695C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x1800382CC (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800384D4 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18003858C (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800386C0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsRecipientProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18003892C (-RmpGameModeIsRecipientProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x180038A08 (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180039800 (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int64 v5; // r13
  char *v6; // rsi
  char v7; // cl
  unsigned int v8; // r12d
  bool v9; // r15
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  unsigned __int8 v13; // di
  __int64 v14; // rcx
  unsigned int v15; // edi
  DWORD v16; // ebx
  bool v17; // r11
  unsigned int v18; // r10d
  char *v19; // rdx
  char *v20; // rcx
  char **v21; // rax
  _QWORD *v22; // rax
  char **v23; // r8
  char v24; // al
  char *v25; // r8
  char **v26; // r9
  char **v27; // rax
  char ***v28; // r8
  char **v29; // r8
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  int v33; // edi
  unsigned int v34; // r8d
  __int64 v35; // r8
  __int64 v36; // rdx
  struct _LIST_ENTRY *v37; // rdx
  struct _LIST_ENTRY *Blink; // rax
  char *i; // rdx
  struct _LIST_ENTRY *v40; // rax
  struct _LIST_ENTRY *v41; // rcx
  _QWORD *v42; // [rsp+30h] [rbp-D0h] BYREF
  char **v43; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+50h] [rbp-B0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v47; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E8h] [rbp-18h]
  int v52; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+F0h] [rbp-10h] BYREF
  void *v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+10Ch] [rbp+Ch]

  memset_0(TlsValue, 0, 0x48uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    TlsGetValue(HampLockTrackerId);
    TlsSetValue(v4, TlsValue);
  }
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180058420 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v50 = &unk_18005842B;
    UserData.Reserved = 2;
    v51 = 25;
    v52 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = *(_QWORD *)a2;
  v44.Blink = &v44;
  v44.Flink = &v44;
  RtlAcquireSRWLockExclusive(a2 + 18);
  a2[20] = GetCurrentThreadId();
  if ( (a2[37] & 1) == 0 )
    goto LABEL_32;
  v6 = (char *)(a2 + 22);
  do
  {
    v7 = a2[37] & 0xFE ^ (a2[37] & 0xFE ^ (2 * (a2[37] & 0xFE))) & 8;
    *((_BYTE *)a2 + 148) = v7;
    if ( (v7 & 8) != 0 )
    {
      v8 = 0;
    }
    else
    {
      a2[20] = 0;
      RtlReleaseSRWLockExclusive(a2 + 18);
      RtlAcquireSRWLockExclusive(v5 + 592);
      *(_DWORD *)(v5 + 648) = GetCurrentThreadId();
      v8 = *(_DWORD *)(v5 + 640);
      *(_DWORD *)(v5 + 648) = 0;
      RtlReleaseSRWLockExclusive(v5 + 592);
      RtlAcquireSRWLockExclusive(a2 + 18);
      a2[20] = GetCurrentThreadId();
    }
    v9 = (a2[37] & 8) == 0 && a2[34];
    v10 = *(_QWORD *)v6;
    if ( *(char **)v6 != v6 )
    {
      v17 = v8 != *(_DWORD *)(v10 + 20) || (*(_BYTE *)(v10 + 82) & 5) != 1;
      v18 = 0;
      v43 = (char **)&v42;
      v19 = v6;
      v42 = &v42;
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
            v22 = v42;
            v23 = v43;
            *((_QWORD *)v19 + 1) = v19;
            *(_QWORD *)v19 = v19;
            if ( (_QWORD **)v22[1] != &v42 || *v23 != (char *)&v42 )
              __fastfail(3u);
            if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 || **((char ***)v20 + 1) != v20 )
              __fastfail(3u);
            *v23 = v20;
            v43 = (char **)*((_QWORD *)v20 + 1);
            **((_QWORD **)v20 + 1) = &v42;
            *((_QWORD *)v20 + 1) = v23;
          }
          else if ( v18 )
          {
            do
            {
              v24 = v20[82];
              v25 = v20 - 72;
              v20 = *(char **)v20;
              if ( (v24 & 5) != 1 )
              {
                v26 = (char **)*((_QWORD *)v25 + 9);
                v27 = (char **)(v25 + 72);
                if ( v26[1] != v25 + 72 || (v28 = (char ***)*((_QWORD *)v25 + 10), *v28 != v27) )
                  __fastfail(3u);
                *v28 = v26;
                v26[1] = (char *)v28;
                v29 = v43;
                if ( *v43 != (char *)&v42 )
                  __fastfail(3u);
                v27[1] = (char *)v43;
                *v27 = (char *)&v42;
                *v29 = (char *)v27;
                v43 = v27;
              }
            }
            while ( v20 != v19 );
          }
        }
        ++v18;
        v19 += 16;
      }
      while ( v18 < 2 );
      if ( v42 != &v42 )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        while ( 1 )
        {
          v30 = v42;
          if ( v42 == &v42 )
            break;
          v31 = *v42;
          if ( *(_QWORD **)(*v42 + 8LL) != v42 || (v32 = (_QWORD *)v42[1], (_QWORD *)*v32 != v42) )
            __fastfail(3u);
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          *v30 = 0LL;
          v30[1] = 0LL;
          RmpGameModeUnapplyAndReleaseRecipientResources(
            (struct _RM_GAME_MODE_CONTEXT *)a2,
            (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v30 - 9));
          *((_DWORD *)v30 + 4) = 2;
          RmpGameModeDereferenceRecipientProcess(v30 - 9);
        }
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
    }
    if ( *(char **)v6 == v6 )
    {
      a2[20] = 0;
      RtlReleaseSRWLockExclusive(a2 + 18);
      v11 = !_BitScanForward((unsigned int *)&v12, a2[33]);
      v45 = v12;
      if ( !v11 )
      {
        do
        {
          v33 = 1 << v12;
          off_180051340[5 * v12]((struct _RM_GAME_MODE_CONTEXT *)a2, 0LL);
          a2[33] &= ~v33;
          v11 = !_BitScanForward((unsigned int *)&v12, a2[33]);
        }
        while ( !v11 );
        v45 = v12;
        v6 = (char *)(a2 + 22);
      }
      RtlAcquireSRWLockExclusive(a2 + 18);
      a2[20] = GetCurrentThreadId();
    }
    RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
    if ( !v9 && *((_BYTE *)a2 + 140) )
    {
      a2[20] = 0;
      RtlReleaseSRWLockExclusive(a2 + 18);
      if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
        NotifyGameModeExtensionRecipientsPresent(0LL);
      *((_BYTE *)a2 + 140) = 0;
      RtlAcquireSRWLockExclusive(a2 + 18);
      a2[20] = GetCurrentThreadId();
    }
    if ( (a2[37] & 8) != 0 )
      goto LABEL_27;
    v13 = a2[34] != 0;
    if ( *(char **)v6 != v6 )
      goto LABEL_95;
    v14 = *((_QWORD *)a2 + 1);
    if ( !v14 )
      goto LABEL_23;
    while ( 1 )
    {
      v34 = *(_DWORD *)(v14 + 84);
      if ( v8 >= v34 )
        break;
      v35 = *(_QWORD *)v14;
      if ( (a2[4] & 1) != 0 && v35 )
      {
LABEL_87:
        v14 ^= v35;
        goto LABEL_83;
      }
LABEL_82:
      v14 = v35;
LABEL_83:
      if ( !v14 )
        goto LABEL_23;
    }
    if ( v8 > v34 )
    {
      v35 = *(_QWORD *)(v14 + 8);
      if ( (a2[4] & 1) != 0 && v35 )
        goto LABEL_87;
      goto LABEL_82;
    }
    v36 = v14 - 8;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 - 8)) <= 1 )
      __fastfail(0xEu);
    if ( v14 != 8 )
    {
      if ( (*(_BYTE *)(v36 + 154) & 5) == 1
        && RmpGameModeIsRecipientProcessPrimary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v14 - 8)) )
      {
        *(_BYTE *)(v36 + 155) |= 1u;
        *(_DWORD *)(v36 + 88) = 0;
        v37 = (struct _LIST_ENTRY *)(v36 + 72);
        Blink = v44.Blink;
        if ( v44.Blink->Flink != &v44 )
          __fastfail(3u);
        v37->Blink = v44.Blink;
        v37->Flink = &v44;
        Blink->Flink = v37;
        v44.Blink = v37;
LABEL_95:
        for ( i = (char *)*((_QWORD *)a2 + 3); i != (char *)(a2 + 6); i = *(char **)i )
        {
          if ( *((_DWORD *)i + 8) == 2 && (i[98] & 5) == 1 )
          {
            i[99] |= 1u;
            *((_DWORD *)i + 8) = 1;
            v40 = (struct _LIST_ENTRY *)(i + 16);
            v41 = v44.Blink;
            if ( v44.Blink->Flink != &v44 )
              __fastfail(3u);
            *((_QWORD *)i + 3) = v44.Blink;
            v40->Flink = &v44;
            v41->Flink = v40;
            v44.Blink = (struct _LIST_ENTRY *)(i + 16);
            if ( _InterlockedIncrement64((volatile signed __int64 *)i - 7) <= 1 )
              __fastfail(0xEu);
          }
        }
      }
      else
      {
        RmpGameModeDereferenceRecipientProcess((PVOID)v36);
      }
    }
LABEL_23:
    if ( v13 )
      RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, v13);
    if ( v44.Flink != &v44 )
    {
      RmpGameModeAcquireGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2, &v44);
      RmpGameModeApplyNewRecipientPolicies((struct _RM_GAME_MODE_CONTEXT *)a2, &v44);
      RmpGameModeApplyGlobalPolicies((struct _RM_GAME_MODE_CONTEXT *)a2);
      RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
    }
LABEL_27:
    if ( *(char **)v6 == v6 )
      v15 = 0;
    else
      v15 = *(_DWORD *)(*(_QWORD *)v6 + 20LL);
    if ( v15 != a2[36] )
    {
      RmpSystemPublishGlobalGameModeState(v15);
      a2[36] = v15;
    }
  }
  while ( (a2[37] & 1) != 0 );
LABEL_32:
  *((_BYTE *)a2 + 148) &= ~2u;
  a2[20] = 0;
  RtlReleaseSRWLockExclusive(a2 + 18);
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&v47.Level = 516;
    v53.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&v47.Id = ((unsigned int)&unk_18005852D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v47.Keyword = 1LL;
    v53.Size = *(unsigned __int16 *)off_1800670C8;
    v54 = &unk_180058538;
    v53.Reserved = 2;
    v55 = 25;
    v56 = 1;
    EventWriteTransfer(RegHandle, &v47, 0LL, 0LL, 2u, &v53);
  }
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
}
