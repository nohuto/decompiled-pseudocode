/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00B7D4C
 * Callers:
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     IsProcessedByInputService @ 0x1C00B7FB4 (IsProcessedByInputService.c)
 *     FreeQEntry @ 0x1C00C9AFC (FreeQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01B1F50 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01B205C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  unsigned __int64 v3; // r11
  struct tagQMSG *v5; // rbx
  __int64 v6; // r12
  struct tagQMSG *v7; // rsi
  __int64 i; // r15
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  struct tagQMSG *v12; // rcx
  __int64 v13; // r14
  struct tagQMSG *v14; // rdi
  struct tagQMSG *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct tagQMSG *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rdx
  struct tagTHREADINFO *v26; // [rsp+60h] [rbp+18h]

  v26 = a3;
  v3 = 0LL;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; v5; a3 = v26 )
  {
    if ( (*((_DWORD *)v5 + 25) & 0x10000) != 0 )
    {
      v21 = *((_QWORD *)v5 + 13);
      if ( v21 )
      {
        *(_DWORD *)(v21 + 1096) &= ~0x4000000u;
        gKeyboardInputTelemetry = v3;
        dword_1C032EE9C = v3;
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 )
    {
      v16 = *((_DWORD *)v5 + 6);
      if ( *((_QWORD *)v5 + 13) == gptiCurrent )
      {
        if ( v16 >= 0x100 && v16 <= 0x102 && a3 )
          *((_QWORD *)v5 + 13) = a3;
      }
      else if ( v16 == 513 || v16 == 516 )
      {
        v22 = HMValidateHandleNoSecure(*((_QWORD *)v5 + 2), 1);
        v3 = 0LL;
        if ( v22 )
        {
          if ( *(_QWORD *)(v22 + 16) == gptiCurrent )
            *((_QWORD *)v5 + 13) = gptiCurrent;
        }
      }
    }
    if ( v5 == *((struct tagQMSG **)a2 + 6) )
    {
      v17 = *(_QWORD *)(*((_QWORD *)v5 + 13) + 384LL);
      if ( a2 != (struct tagQ *)v17 && *(_QWORD *)(v17 + 32) == v3 )
      {
        v18 = *((_QWORD *)a2 + 4);
        if ( v18 )
        {
          if ( *(_QWORD *)(v18 + 384) == v17 )
          {
            *(_QWORD *)(v17 + 32) = v18;
            *((_QWORD *)a2 + 4) = v3;
          }
        }
      }
    }
    v10 = IsProcessedByInputService(v5);
    v13 = v3;
    if ( !v10 )
      v13 = v11;
    if ( v13 )
    {
      if ( !v7 || v6 != v13 )
      {
        i = *(_QWORD *)(v13 + 384);
        v7 = *(struct tagQMSG **)(i + 8);
        if ( !v7 || *((_DWORD *)v5 + 12) - *((_DWORD *)v7 + 12) < 0 )
          v7 = *(struct tagQMSG **)(v13 + 384);
      }
      if ( *(_QWORD *)v7 != v3 )
      {
        do
        {
          v23 = *(_QWORD **)v7;
          if ( *((_DWORD *)v5 + 12) - *(_DWORD *)(*(_QWORD *)v7 + 48LL) < 0 )
            break;
          v7 = *(struct tagQMSG **)v7;
        }
        while ( *v23 != v3 );
      }
      *((_DWORD *)v5 + 25) &= 0xFFF8FFFF;
      v14 = v5;
      v5 = *(struct tagQMSG **)v5;
      *(_QWORD *)v14 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 )
      {
        *((_QWORD *)v14 + 1) = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
        *(_QWORD *)(*(_QWORD *)v7 + 8LL) = v14;
      }
      else
      {
        *((_QWORD *)v14 + 1) = *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 8) = v14;
      }
      *(_QWORD *)v7 = v14;
      v7 = v14;
      ++*(_DWORD *)(i + 16);
      if ( *((_DWORD *)v14 + 24) != (_DWORD)v3 && (*(_WORD *)(*(_QWORD *)(v13 + 400) + 6LL) & 0x2000) == 0 )
      {
        SetWakeBit(v13, 0x2040u);
        v3 = 0LL;
      }
      v15 = (struct tagQMSG *)*((_QWORD *)a2 + 6);
      if ( v14 == v15 )
      {
        v19 = *(_QWORD *)(v13 + 384);
        if ( a2 != (struct tagQ *)v19 )
        {
          if ( *(_QWORD *)(v19 + 48) == v3 )
            *(_QWORD *)(v19 + 48) = v15;
          *((_QWORD *)a2 + 6) = v3;
        }
      }
      if ( !v5 )
        break;
      *((_QWORD *)v5 + 1) = v3;
      v6 = v13;
    }
    else
    {
      if ( *(_QWORD *)v5 )
        *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v3;
      v20 = v5;
      v5 = *(struct tagQMSG **)v5;
      if ( v20 == *((struct tagQMSG **)a2 + 6) )
        *((_QWORD *)a2 + 6) = v3;
      CleanEventMessage(v12);
      FreeQEntry(v20);
      v3 = 0LL;
    }
  }
  v9 = *((_QWORD *)a2 + 3);
  if ( v9 )
  {
    do
    {
      v24 = *(_QWORD *)(v9 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v9 + 104) + 384LL) != a2 )
      {
        RemoveQMsgFromDeferList(a2, (struct tagQMSG *)v9);
        DeferMessage(*(struct tagMLIST **)(*(_QWORD *)(v25 + 104) + 384LL), (struct tagQMSG *)v25);
      }
      v9 = v24;
    }
    while ( v24 );
  }
}
