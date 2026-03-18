/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00C8CC4
 * Callers:
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C00CAED8 (zzzAttachToQueue.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00098C4 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0009E8C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     IsProcessedByInputService @ 0x1C00C8F50 (IsProcessedByInputService.c)
 *     FreeQEntry @ 0x1C00CD688 (FreeQEntry.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3, __int64 a4)
{
  struct tagQ *v4; // r10
  struct tagQ *v5; // rbp
  struct tagQMSG *v6; // rbx
  struct tagQ *v7; // r15
  struct tagQMSG *v8; // rsi
  char *i; // r13
  __int64 v10; // rdx
  int v11; // eax
  struct tagQMSG *v12; // rcx
  __int64 v13; // r8
  struct tagQ *v14; // r14
  struct tagQMSG *v15; // rdi
  struct tagQMSG *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct tagQMSG *v21; // rdi
  struct tagQ **v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  struct tagTHREADINFO *v27; // [rsp+60h] [rbp+18h]

  v27 = a3;
  v4 = 0LL;
  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  for ( i = 0LL; v6; a3 = v27 )
  {
    if ( (*((_DWORD *)v6 + 25) & 0x10000) != 0 )
    {
      v23 = *((_QWORD *)v6 + 13);
      if ( v23 )
      {
        *(_DWORD *)(v23 + 1184) &= ~0x10000000u;
        gKeyboardInputTelemetry = v4;
        dword_1C032A4FC = (int)v4;
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0 )
    {
      v17 = *((_DWORD *)v6 + 6);
      if ( *((_QWORD *)v6 + 13) == gptiCurrent )
      {
        if ( v17 >= 0x100 && v17 <= 0x102 && a3 )
          *((_QWORD *)v6 + 13) = a3;
      }
      else if ( v17 == 513 || v17 == 516 )
      {
        LOBYTE(a2) = 1;
        v24 = HMValidateHandleNoSecure(*((_QWORD *)v6 + 2), (__int64)a2, (__int64)a3, a4);
        v4 = 0LL;
        if ( v24 )
        {
          if ( *(_QWORD *)(v24 + 16) == gptiCurrent )
            *((_QWORD *)v6 + 13) = gptiCurrent;
        }
      }
    }
    if ( v6 == *((struct tagQMSG **)v5 + 10) )
    {
      v18 = *(_QWORD *)(*((_QWORD *)v6 + 13) + 408LL);
      if ( v5 != (struct tagQ *)v18 && *(struct tagQ **)(v18 + 64) == v4 )
      {
        v19 = *((_QWORD *)v5 + 8);
        if ( v19 )
        {
          if ( *(_QWORD *)(v19 + 408) == v18 )
          {
            *(_QWORD *)(v18 + 64) = v19;
            *((_QWORD *)v5 + 8) = v4;
          }
        }
      }
    }
    v11 = IsProcessedByInputService(v6);
    v14 = v4;
    if ( !v11 )
      v14 = a2;
    if ( v14 )
    {
      if ( !v8 || v7 != v14 )
      {
        a2 = (struct tagQ *)*((_QWORD *)v14 + 51);
        v8 = (struct tagQMSG *)*((_QWORD *)a2 + 4);
        if ( !v8 || *((_DWORD *)v6 + 12) - *((_DWORD *)v8 + 12) < 0 )
          v8 = (struct tagQ *)((char *)a2 + 24);
        i = (char *)a2 + 24;
      }
      if ( *(struct tagQ **)v8 != v4 )
      {
        a2 = (struct tagQ *)*((unsigned int *)v6 + 12);
        do
        {
          v22 = *(struct tagQ ***)v8;
          if ( (int)a2 - *(_DWORD *)(*(_QWORD *)v8 + 48LL) < 0 )
            break;
          v8 = *(struct tagQMSG **)v8;
        }
        while ( *v22 != v4 );
      }
      *((_DWORD *)v6 + 25) &= 0xFFF8FFFF;
      v15 = v6;
      v6 = *(struct tagQMSG **)v6;
      *(_QWORD *)v15 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
      {
        *((_QWORD *)v15 + 1) = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = v15;
      }
      else
      {
        *((_QWORD *)v15 + 1) = *((_QWORD *)i + 1);
        *((_QWORD *)i + 1) = v15;
      }
      *(_QWORD *)v8 = v15;
      v8 = v15;
      ++*((_DWORD *)i + 4);
      if ( *((_DWORD *)v15 + 24) != (_DWORD)v4 && (*(_WORD *)(*((_QWORD *)v14 + 53) + 6LL) & 0x2000) == 0 )
      {
        SetWakeBit((__int64)v14, 8256LL);
        v4 = 0LL;
      }
      v16 = (struct tagQMSG *)*((_QWORD *)v5 + 10);
      if ( v15 == v16 )
      {
        v20 = *((_QWORD *)v14 + 51);
        if ( v5 != (struct tagQ *)v20 )
        {
          if ( *(struct tagQ **)(v20 + 80) == v4 )
            *(_QWORD *)(v20 + 80) = v16;
          *((_QWORD *)v5 + 10) = v4;
        }
      }
      if ( !v6 )
        break;
      *((_QWORD *)v6 + 1) = v4;
      v7 = v14;
    }
    else
    {
      if ( *(_QWORD *)v6 )
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v4;
      v21 = v6;
      v6 = *(struct tagQMSG **)v6;
      if ( v21 == *((struct tagQMSG **)v5 + 10) )
        *((_QWORD *)v5 + 10) = v4;
      CleanEventMessage(v12, (__int64)a2, v13);
      FreeQEntry(v21);
      v4 = 0LL;
    }
  }
  v10 = *((_QWORD *)v5 + 6);
  if ( v10 )
  {
    do
    {
      v25 = *(_QWORD *)(v10 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v10 + 104) + 408LL) != v5 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)v5 + 24), (struct tagQMSG *)v10);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v26 + 104) + 408LL) + 24LL), (struct tagQMSG *)v26);
      }
      v10 = v25;
    }
    while ( v25 );
  }
}
