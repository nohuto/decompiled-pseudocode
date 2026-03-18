/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C7CE0
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01BB9C4 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     IsPointerInputMessageWithState @ 0x1C0049424 (IsPointerInputMessageWithState.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01C5538 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01C6074 (-GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C77F8 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, unsigned __int64 a2)
{
  struct tagPOINTERINPUTFRAME *v4; // rbx
  int v5; // edx
  BOOL v6; // ebp
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  int v9; // r15d
  BOOL v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // r14
  _BOOL8 v13; // rax
  HWND v14; // r12
  int IsPointerWindowFrameMessage; // eax
  __int64 v16; // r9
  struct _LIST_ENTRY *FrameById; // rax
  int v19; // edx
  __int64 v20; // rcx
  PointerList **v21; // rcx
  void *v22; // rax
  int v23; // eax
  __int64 i; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v26; // [rsp+30h] [rbp-88h]
  HWND HwndReference; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+40h] [rbp-78h]
  _BOOL8 v30; // [rsp+48h] [rbp-70h]
  HWND v31; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-60h]
  __int64 v33[11]; // [rsp+60h] [rbp-58h] BYREF
  struct tagPOINTERINPUTFRAME *v34; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v35; // [rsp+D8h] [rbp+20h] BYREF

  if ( (gdwMitConfig & 4) == 0 )
  {
    v32 = a2;
    if ( a2 )
    {
      FrameById = FindFrameById(*(_DWORD *)(a2 + 28));
      v4 = (struct tagPOINTERINPUTFRAME *)FrameById;
      if ( FrameById )
      {
        _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
        HwndReference = (HWND)*((_QWORD *)&FrameById[5].Blink[5].Flink + 27 * *(unsigned int *)(a2 + 32));
        v29 = ValidateHwnd(HwndReference);
        if ( v29 )
          goto LABEL_4;
        UnreferenceFrameInt(v4);
      }
    }
    return 0LL;
  }
  HwndReference = CTouchProcessor::GetHwndReference(gpTouchProcessor, a2, (unsigned __int16 *)&v34, &v35);
  v29 = ValidateHwnd(HwndReference);
  if ( !v29 )
    return 0LL;
  v4 = v34;
LABEL_4:
  v5 = (*((_DWORD *)a1 + 150) | *(_DWORD *)(**((_QWORD **)a1 + 52) + 16LL)) & 0x10;
  v6 = v5 != 0;
  if ( (gdwMitConfig & 4) == 0 )
    v35 = *((_DWORD *)v4 + 10);
  v7 = 0LL;
  if ( v5 )
  {
    v8 = 48LL * v35;
    if ( v8 <= 0xFFFFFFFF && (unsigned int)(v8 - 1) <= 0x270FFFE )
      v7 = Win32AllocPool((unsigned int)v8, 1735422805LL);
  }
  v9 = 0;
  v10 = v7 != 0 && v6;
  v11 = 0LL;
  v26 = v10;
  v12 = **((_QWORD **)a1 + 48);
  if ( v12 )
  {
    v13 = v10;
    v14 = HwndReference;
    v30 = v13;
    while ( 1 )
    {
      v28 = *(_QWORD *)v12;
      if ( (gdwMitConfig & 4) != 0 )
        break;
      if ( !IsPointerInputMessageWithState(*(_DWORD *)(v12 + 24)) )
        goto LABEL_35;
      if ( (unsigned int)(v19 - 585) <= 1 )
      {
        IsPointerWindowFrameMessage = 0;
LABEL_27:
        if ( IsPointerWindowFrameMessage )
          goto LABEL_28;
        goto LABEL_35;
      }
      v20 = *(_QWORD *)(v12 + 40);
      if ( *(_DWORD *)(v20 + 28) == *((_DWORD *)v4 + 8) )
      {
        v21 = (PointerList **)(*((_QWORD *)v4 + 11) + 216LL * *(unsigned int *)(v20 + 32));
        if ( (*(_DWORD *)v21 & 0x100) != 0 && (unsigned int)GetPointerEventTarget(v21, &v31) && v31 == v14 )
        {
LABEL_28:
          v22 = 0LL;
          if ( v30 && (unsigned int)v11 < v35 )
            v22 = (void *)(v7 + 48 * v11);
          v23 = DiscardPointerMessage((__int64)a1, v12, v29, v16, v22);
          if ( v30 && v23 == 1 )
            v11 = (unsigned int)(v11 + 1);
          ++v9;
        }
      }
LABEL_35:
      v12 = v28;
      if ( !v28 )
      {
        v10 = v26;
        goto LABEL_37;
      }
    }
    IsPointerWindowFrameMessage = CTouchProcessor::IsPointerWindowFrameMessage(
                                    gpTouchProcessor,
                                    a2,
                                    v14,
                                    (const struct tagMSG *)(v12 + 16),
                                    1);
    goto LABEL_27;
  }
LABEL_37:
  if ( (gdwMitConfig & 4) != 0 )
  {
    if ( v9 )
      CTouchProcessor::UpdateThreadPointerList(
        gpTouchProcessor,
        (struct tagTHREADINFO *)((char *)a1 + 968),
        (unsigned __int16)v34);
  }
  else
  {
    UnreferenceFrameInt(v4);
    if ( v9 )
      UpdateThreadPointerList((struct tagTHREADINFO *)((char *)a1 + 968), *(_WORD *)(v32 + 16));
  }
  if ( v10 )
  {
    PushW32ThreadLock(v7, v33, (__int64)Win32FreePool);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v11; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v35 )
        break;
      xxxCallHook(0, 1, v7 + 48 * i, 3u);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v33[0];
  }
  if ( v7 )
    Win32FreePool(v7);
  return 1LL;
}
