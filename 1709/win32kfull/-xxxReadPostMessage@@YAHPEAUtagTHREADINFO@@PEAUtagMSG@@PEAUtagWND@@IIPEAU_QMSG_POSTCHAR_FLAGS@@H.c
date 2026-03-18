/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00A8320
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0085D70 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     FindQMsg @ 0x1C00A86D0 (FindQMsg.c)
 *     StoreMessage @ 0x1C0113BF0 (StoreMessage.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0125030 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01BF114 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        struct _QMSG_POSTCHAR_FLAGS *a6,
        unsigned int a7)
{
  unsigned int *v9; // r12
  int v10; // eax
  struct tagMLIST *v11; // rsi
  unsigned int v12; // r14d
  __int64 QMsg; // rax
  __int64 v14; // rbx
  unsigned int v15; // r15d
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  unsigned int v23; // ebx
  int v24; // r9d

  v9 = (unsigned int *)((char *)a1 + 464);
  v10 = *((_DWORD *)a1 + 116);
  if ( (v10 & 0x40000000) == 0 || *((_DWORD *)a1 + 200) )
  {
    v11 = (struct tagTHREADINFO *)((char *)a1 + 784);
    v12 = 0;
    QMsg = FindQMsg(a1, (struct tagTHREADINFO *)((char *)a1 + 784), a5, 0);
    v14 = QMsg;
    if ( QMsg )
    {
      if ( (*((_DWORD *)a1 + 296) & 0x2000) != 0 || (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) > 1 )
        v15 = a7;
      else
        v15 = 1;
      EtwTraceRetrievePostMessage(QMsg, v15);
      *((_DWORD *)a1 + 136) = *(_DWORD *)(v14 + 48);
      if ( *(_QWORD *)((char *)a1 + 732) != *(_QWORD *)(v14 + 52) )
        *v9 |= 0x100000u;
      *(_QWORD *)((char *)a1 + 732) = *(_QWORD *)(v14 + 52);
      *(_QWORD *)((char *)a1 + 740) = *(_QWORD *)(v14 + 80);
      *((_QWORD *)a1 + 69) = v14;
      *(_QWORD *)(*((_QWORD *)a1 + 51) + 400LL) = *(_QWORD *)(v14 + 72);
      *(_QWORD *)((char *)a1 + 1188) = *(_QWORD *)(v14 + 120);
      *(_OWORD *)a2 = *(_OWORD *)(v14 + 16);
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v14 + 32);
      *((_OWORD *)a2 + 2) = *(_OWORD *)(v14 + 48);
      if ( a6 )
      {
        *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v14 + 100) >> 14)) & 1;
        *(_DWORD *)a6 ^= ((unsigned __int8)*(_DWORD *)a6 ^ (unsigned __int8)(*(int *)(v14 + 100) >> 14)) & 2;
      }
      if ( v15 )
      {
        v16 = (_QWORD *)*((_QWORD *)a1 + 57);
        if ( (*(_DWORD *)(v14 + 100) & 1) != 0 )
          *v16 |= 0x1000uLL;
        else
          *v16 &= ~0x1000uLL;
        if ( *(_DWORD *)(*(_QWORD *)v11 + 24LL) == 786 )
          CheckRemoveHotkeyBit(a1, v11);
        if ( (*((_DWORD *)a1 + 116) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
          return 0LL;
        v17 = *(_QWORD **)(v14 + 8);
        if ( v17 )
          *v17 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 )
          *(_QWORD *)(*(_QWORD *)v14 + 8LL) = *(_QWORD *)(v14 + 8);
        if ( *(_QWORD *)v11 == v14 )
          *(_QWORD *)v11 = *(_QWORD *)v14;
        if ( *((_QWORD *)v11 + 1) == v14 )
          *((_QWORD *)v11 + 1) = *(_QWORD *)(v14 + 8);
        v18 = *(_DWORD *)(v14 + 100);
        if ( (v18 & 0x10000) == 0 && (v18 & 0x40000) == 0 )
          --*((_DWORD *)v11 + 4);
        if ( (*(_DWORD *)(v14 + 100) & 8) != 0 && !*(_DWORD *)(v14 + 96) && IsPointerInputMessage(*(_DWORD *)(v14 + 24)) )
          FreePointerMessageParams(v14);
        Win32FreeToPagedLookasideList(QEntryLookaside, v14);
      }
      else
      {
        *((_QWORD *)a1 + 69) = 1LL;
      }
      v19 = *((_DWORD *)a2 + 2);
      if ( (unsigned int)(v19 + 2147482655) <= 7 )
      {
        *((_DWORD *)a2 + 2) = v19 & 0x7FFFFFFF;
        xxxDDETrackGetMessageHook(a2);
        if ( !v15 && v14 == FindQMsg(a1, v11, a5, 0) )
        {
          *(_OWORD *)(v14 + 16) = *(_OWORD *)a2;
          *(_OWORD *)(v14 + 32) = *((_OWORD *)a2 + 1);
          *(_OWORD *)(v14 + 48) = *((_OWORD *)a2 + 2);
        }
      }
    }
    else
    {
      if ( (*v9 & 0x40000000) != 0 && !*((_DWORD *)a1 + 200) )
      {
        v23 = a7;
        if ( a7 )
          *v9 &= ~0x40000000u;
        v24 = *((_DWORD *)a1 + 140);
        goto LABEL_48;
      }
      v15 = a7;
    }
    if ( !*((_DWORD *)v11 + 4) && (*v9 & 0x40000000) == 0 )
    {
      *(_WORD *)(*((_QWORD *)a1 + 53) + 6LL) &= 0xFEF7u;
      *(_WORD *)(*((_QWORD *)a1 + 53) + 4LL) &= ~0x100u;
    }
    if ( v15 )
    {
      v20 = v14 == 0;
      if ( !v14 )
      {
LABEL_38:
        LOBYTE(v12) = !v20;
        return v12;
      }
      v21 = *((_DWORD *)a2 + 2);
      if ( (unsigned int)(v21 - 256) <= 9 && v21 != 258 )
        *((_DWORD *)a1 + 322) &= ~1u;
    }
    v20 = v14 == 0;
    goto LABEL_38;
  }
  v23 = a7;
  if ( a7 )
    *v9 = v10 & 0xBFFFFFFF;
  v24 = *((_DWORD *)a1 + 140);
LABEL_48:
  StoreMessage((_DWORD)a2, 0, 18, v24);
  EtwTraceRetrievePseudoMessage(a1, a2, v23);
  return 1LL;
}
