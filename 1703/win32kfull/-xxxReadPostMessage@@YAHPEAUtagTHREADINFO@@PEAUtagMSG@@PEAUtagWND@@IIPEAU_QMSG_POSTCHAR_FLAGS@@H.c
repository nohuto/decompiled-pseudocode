/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00527D0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     FindQMsg @ 0x1C0052B70 (FindQMsg.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00B5B18 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     StoreMessage @ 0x1C010724C (StoreMessage.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C011995C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01BAE2C (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        struct _QMSG_POSTCHAR_FLAGS *a6,
        int a7)
{
  int v9; // eax
  struct tagMLIST *v10; // rsi
  unsigned int v11; // r14d
  __int64 QMsg; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  bool v20; // zf
  unsigned int v21; // eax
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // r9d

  v9 = *((_DWORD *)a1 + 110);
  if ( (v9 & 0x40000000) == 0 || *((_DWORD *)a1 + 186) )
  {
    v10 = (struct tagTHREADINFO *)((char *)a1 + 728);
    v11 = 0;
    QMsg = FindQMsg(a1, (struct tagTHREADINFO *)((char *)a1 + 728), a5, 0);
    v13 = QMsg;
    if ( QMsg )
    {
      if ( (*((_DWORD *)a1 + 274) & 0x2000) != 0 || (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) > 1 )
      {
        v14 = a7;
      }
      else
      {
        v14 = 1;
        a7 = 1;
      }
      EtwTraceRetrievePostMessage(v13, v14);
      *((_DWORD *)a1 + 123) = *(_DWORD *)(v13 + 48);
      if ( *(_QWORD *)((char *)a1 + 676) != *(_QWORD *)(v13 + 52) )
        *((_DWORD *)a1 + 110) |= 0x100000u;
      *(_QWORD *)((char *)a1 + 676) = *(_QWORD *)(v13 + 52);
      *(_QWORD *)((char *)a1 + 684) = *(_QWORD *)(v13 + 80);
      *((_QWORD *)a1 + 62) = v13;
      *(_QWORD *)(*((_QWORD *)a1 + 48) + 360LL) = *(_QWORD *)(v13 + 72);
      *(_QWORD *)((char *)a1 + 1100) = *(_QWORD *)(v13 + 120);
      *(_OWORD *)a2 = *(_OWORD *)(v13 + 16);
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v13 + 32);
      *((_OWORD *)a2 + 2) = *(_OWORD *)(v13 + 48);
      if ( a6 )
      {
        *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v13 + 100) >> 14)) & 1;
        *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v13 + 100) >> 14)) & 2;
      }
      if ( a7 )
      {
        v15 = (_QWORD *)*((_QWORD *)a1 + 54);
        if ( (*(_DWORD *)(v13 + 100) & 1) != 0 )
          *v15 |= 0x1000uLL;
        else
          *v15 &= ~0x1000uLL;
        if ( *(_DWORD *)(*(_QWORD *)v10 + 24LL) == 786 )
          CheckRemoveHotkeyBit(a1, v10);
        if ( (*((_DWORD *)a1 + 110) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
          return 0LL;
        v16 = *(_QWORD **)(v13 + 8);
        if ( v16 )
          *v16 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 )
          *(_QWORD *)(*(_QWORD *)v13 + 8LL) = *(_QWORD *)(v13 + 8);
        if ( *(_QWORD *)v10 == v13 )
          *(_QWORD *)v10 = *(_QWORD *)v13;
        if ( *((_QWORD *)v10 + 1) == v13 )
          *((_QWORD *)v10 + 1) = *(_QWORD *)(v13 + 8);
        v17 = *(_DWORD *)(v13 + 100);
        if ( (v17 & 0x10000) == 0 && (v17 & 0x40000) == 0 )
          --*((_DWORD *)v10 + 4);
        if ( (*(_DWORD *)(v13 + 100) & 8) != 0
          && !*(_DWORD *)(v13 + 96)
          && (unsigned int)IsPointerInputMessage(*(unsigned int *)(v13 + 24)) )
        {
          FreePointerMessageParams(v13);
        }
        Win32FreeToPagedLookasideList(QEntryLookaside, v13);
      }
      else
      {
        *((_QWORD *)a1 + 62) = 1LL;
      }
      v18 = *((_DWORD *)a2 + 2);
      if ( (unsigned int)(v18 + 2147482655) <= 7 )
      {
        *((_DWORD *)a2 + 2) = v18 & 0x7FFFFFFF;
        xxxDDETrackGetMessageHook(a2);
        v19 = a7;
        if ( a7 )
          goto LABEL_32;
        if ( v13 == FindQMsg(a1, v10, a5, 0) )
        {
          *(_OWORD *)(v13 + 16) = *(_OWORD *)a2;
          *(_OWORD *)(v13 + 32) = *((_OWORD *)a2 + 1);
          *(_OWORD *)(v13 + 48) = *((_OWORD *)a2 + 2);
        }
      }
    }
    else
    {
      v23 = *((_DWORD *)a1 + 110);
      if ( (v23 & 0x40000000) != 0 && !*((_DWORD *)a1 + 186) )
      {
        v24 = a7;
        if ( a7 )
          *((_DWORD *)a1 + 110) = v23 & 0xBFFFFFFF;
        v25 = *((_DWORD *)a1 + 126);
        goto LABEL_51;
      }
    }
    v19 = a7;
LABEL_32:
    if ( !*((_DWORD *)v10 + 4) && (*((_DWORD *)a1 + 110) & 0x40000000) == 0 )
    {
      *(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) &= 0xFEF7u;
      *(_WORD *)(*((_QWORD *)a1 + 50) + 4LL) &= ~0x100u;
    }
    if ( v19 )
    {
      v20 = v13 == 0;
      if ( !v13 )
      {
LABEL_37:
        LOBYTE(v11) = !v20;
        return v11;
      }
      v21 = *((_DWORD *)a2 + 2);
      if ( v21 <= 0x109 && v21 >= 0x100 && v21 != 258 )
        *((_DWORD *)a1 + 300) &= ~1u;
    }
    v20 = v13 == 0;
    goto LABEL_37;
  }
  v24 = a7;
  if ( a7 )
    *((_DWORD *)a1 + 110) = v9 & 0xBFFFFFFF;
  v25 = *((_DWORD *)a1 + 126);
LABEL_51:
  StoreMessage((_DWORD)a2, 0, 18, v25);
  EtwTraceRetrievePseudoMessage(a1, a2, v24);
  return 1LL;
}
