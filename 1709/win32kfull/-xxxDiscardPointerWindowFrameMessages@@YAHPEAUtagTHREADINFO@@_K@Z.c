/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01CC920
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01BF6E0 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     IsPointerInputMessageWithState @ 0x1C009F1AC (IsPointerInputMessageWithState.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01CAE8C (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01CB3EC (-GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01CC41C (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagPOINTERINPUTFRAME *v6; // rbx
  __int64 v7; // rdx
  BOOL v8; // ebp
  __int64 v9; // rax
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  int v14; // r15d
  BOOL v15; // r12d
  __int64 v16; // rbp
  __int64 v17; // r14
  _BOOL8 v18; // rax
  HWND v19; // r12
  int IsPointerWindowFrameMessage; // eax
  int v21; // ecx
  __int64 v22; // rcx
  PointerList **v23; // rcx
  void *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 i; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v31; // [rsp+30h] [rbp-88h]
  HWND HwndReference; // [rsp+38h] [rbp-80h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  _BOOL8 v35; // [rsp+48h] [rbp-70h]
  HWND v36; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-60h]
  __int64 v38[11]; // [rsp+60h] [rbp-58h] BYREF
  struct tagPOINTERINPUTFRAME *v39; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v40; // [rsp+D8h] [rbp+20h] BYREF

  if ( (gdwMitConfig & 4) == 0 )
  {
    v37 = a2;
    if ( a2 )
    {
      FrameById = FindFrameById(*(_DWORD *)(a2 + 28));
      v6 = (struct tagPOINTERINPUTFRAME *)FrameById;
      if ( FrameById )
      {
        _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
        HwndReference = (HWND)*((_QWORD *)&FrameById[5].Blink[5].Flink + 27 * *(unsigned int *)(a2 + 32));
        v34 = ValidateHwnd(HwndReference);
        if ( v34 )
          goto LABEL_4;
        UnreferenceFrameInt(v6);
      }
    }
    return 0LL;
  }
  HwndReference = CTouchProcessor::GetHwndReference(gpTouchProcessor, a2, (unsigned __int16 *)&v39, &v40);
  v34 = ValidateHwnd(HwndReference);
  if ( !v34 )
    return 0LL;
  v6 = v39;
LABEL_4:
  v7 = (*((_DWORD *)a1 + 164) | *(_DWORD *)(**((_QWORD **)a1 + 55) + 16LL)) & 0x10;
  v8 = ((*((_DWORD *)a1 + 164) | *(_DWORD *)(**((_QWORD **)a1 + 55) + 16LL)) & 0x10) != 0;
  if ( (gdwMitConfig & 4) != 0 )
  {
    v9 = v40;
  }
  else
  {
    v9 = *((unsigned int *)v6 + 10);
    v40 = *((_DWORD *)v6 + 10);
  }
  v12 = 0LL;
  if ( (_DWORD)v7 )
  {
    v13 = 48 * v9;
    v7 = 0xFFFFFFFFLL;
    if ( (unsigned __int64)(48 * v9) <= 0xFFFFFFFF )
      v7 = (unsigned int)v13;
    if ( v13 <= 0xFFFFFFFF && (unsigned int)(v7 - 1) <= 0x270FFFE )
      v12 = Win32AllocPool((unsigned int)v7, 1735422805LL);
  }
  v14 = 0;
  v15 = v12 != 0 && v8;
  v16 = 0LL;
  v31 = v15;
  v17 = *(_QWORD *)(*((_QWORD *)a1 + 51) + 24LL);
  if ( v17 )
  {
    v18 = v15;
    v19 = HwndReference;
    v35 = v18;
    while ( 1 )
    {
      v33 = *(_QWORD *)v17;
      if ( (gdwMitConfig & 4) != 0 )
      {
        IsPointerWindowFrameMessage = CTouchProcessor::IsPointerWindowFrameMessage(
                                        gpTouchProcessor,
                                        a2,
                                        v19,
                                        (const struct tagMSG *)(v17 + 16),
                                        1);
      }
      else
      {
        if ( !(unsigned int)IsPointerInputMessageWithState(*(unsigned int *)(v17 + 24), v7) )
          goto LABEL_37;
        if ( (unsigned int)(v21 - 585) <= 1 )
          goto LABEL_37;
        v22 = *(_QWORD *)(v17 + 40);
        if ( *(_DWORD *)(v22 + 28) != *((_DWORD *)v6 + 8) )
          goto LABEL_37;
        v23 = (PointerList **)(*((_QWORD *)v6 + 11) + 216LL * *(unsigned int *)(v22 + 32));
        if ( (*(_DWORD *)v23 & 0x100) == 0 || !(unsigned int)GetPointerEventTarget(v23, &v36, v4, v5) )
          goto LABEL_37;
        if ( v36 == v19 )
          goto LABEL_30;
        IsPointerWindowFrameMessage = 0;
      }
      if ( IsPointerWindowFrameMessage )
      {
LABEL_30:
        v24 = 0LL;
        if ( v35 && (unsigned int)v16 < v40 )
          v24 = (void *)(v12 + 48 * v16);
        v25 = DiscardPointerMessage((__int64)a1, v17, v34, v5, v24);
        if ( v35 && v25 == 1 )
          v16 = (unsigned int)(v16 + 1);
        ++v14;
      }
LABEL_37:
      v17 = v33;
      if ( !v33 )
      {
        v15 = v31;
        break;
      }
    }
  }
  if ( (gdwMitConfig & 4) != 0 )
  {
    if ( v14 )
      CTouchProcessor::UpdateThreadPointerList(
        gpTouchProcessor,
        (struct tagTHREADINFO *)((char *)a1 + 1056),
        (unsigned __int16)v39);
  }
  else
  {
    UnreferenceFrameInt(v6);
    if ( v14 )
      UpdateThreadPointerList((struct tagTHREADINFO *)((char *)a1 + 1056), *(_WORD *)(v37 + 16));
  }
  if ( v15 )
  {
    PushW32ThreadLock(v12, v38, (__int64)Win32FreePool, v5);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v16; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v40 )
        break;
      xxxCallHook(0, 1, v12 + 48 * i, 3u);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28);
    *(_QWORD *)(ThreadWin32Thread + 16) = v38[0];
  }
  if ( v12 )
    Win32FreePool(v12, v7, v4);
  return 1LL;
}
