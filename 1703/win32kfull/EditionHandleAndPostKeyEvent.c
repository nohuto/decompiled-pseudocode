/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C00CB4B0
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     IsProcessedByInputService @ 0x1C00B7FB4 (IsProcessedByInputService.c)
 *     PostMove @ 0x1C00CC9B8 (PostMove.c)
 *     GetMouseKeyFlags @ 0x1C00CCDF4 (GetMouseKeyFlags.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        __int16 a8,
        unsigned __int16 a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        int a11,
        __int64 a12,
        __int64 a13,
        unsigned __int16 a14)
{
  __int64 v15; // rax
  __int64 v16; // rbx
  struct tagMLIST **v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int16 v29; // ax
  int v30; // r14d
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  struct tagMLIST *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD v40[4]; // [rsp+60h] [rbp-48h] BYREF

  v15 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( !*(_QWORD *)(v15 + 48)
    && !*(_QWORD *)(v15 + 40)
    && !a4
    && (gafAsyncKeyState[4] & 0x14) == 0x10
    && (a5 == 9 && (a6 & 1) == 0 || a5 == 27 && (a6 & 2) == 0) )
  {
    v16 = gpqForeground;
    if ( !gpqForeground )
      v16 = *(_QWORD *)(gptiRit + 384LL);
    ++*(_DWORD *)(v16 + 348);
    PushW32ThreadLock(v16, v40, UnlockQueue);
    xxxNextWindow(v16, a5);
    PopAndFreeAlwaysW32ThreadLock((__int64)v40);
    return 0LL;
  }
  v17 = (struct tagMLIST **)gpqForeground;
  if ( !gpqForeground )
  {
    if ( ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(a5 + 83) <= 2u )
      PostShellHookMessagesEx(0xCu, (((unsigned __int64)a5 << 16) - 10747905) & 0xFFFF0000, 0LL);
    return 0LL;
  }
  v18 = *(_QWORD *)(gpqForeground + 88LL);
  v19 = *(_QWORD *)(gpqForeground + 8LL);
  v20 = a5;
  if ( v18 )
    v21 = *(_QWORD *)(v18 + 16);
  else
    v21 = *(_QWORD *)(gpqForeground + 64LL);
  if ( (unsigned int)HasHidTable(v21) )
  {
    v22 = *(_QWORD *)(gpqForeground + 88LL);
    v23 = v22 ? *(_QWORD *)(v22 + 16) : *(_QWORD *)(gpqForeground + 64LL);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 376) + 776LL) + 100LL) & 0x20) != 0 )
    {
      v24 = *(_QWORD *)(gpqForeground + 88LL);
      v25 = v24 ? *(_QWORD *)(v24 + 16) : *(_QWORD *)(gpqForeground + 64LL);
      if ( !(unsigned int)HasHidTable(v25) )
        return 1LL;
      v26 = *(_QWORD *)(gpqForeground + 88LL);
      v27 = v26 ? *(_QWORD *)(v26 + 16) : *(_QWORD *)(gpqForeground + 64LL);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 376) + 776LL) + 100LL) & 0x400) == 0
        || (unsigned __int8)(a5 + 90) > 0x11u )
      {
        return 1LL;
      }
    }
  }
  if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
  {
    v20 = (a7 << 16) | a5;
    v29 = 0;
  }
  else
  {
    v29 = a7;
  }
  v30 = ((a9 | v29) << 16) | 1;
  if ( !v19
    || *(_DWORD *)(v19 + 24) != a14
    || ((a14 - 256) & 0xFFFB) != 0
    || *(_QWORD *)(v19 + 32) != v20
    || IsProcessedByInputService(v19)
    || *(_WORD *)(v19 + 42) != HIWORD(v30) )
  {
    if ( (unsigned __int8)(a5 + 90) > 0x11u )
    {
LABEL_60:
      if ( (*((_DWORD *)*v17 + 85) & 0x20) != 0 )
      {
        PostMove(*v17, 0LL);
        v17 = (struct tagMLIST **)gpqForeground;
      }
      PostInputMessage(*v17, 0LL, a14, v20, v30, a11, 0LL, a13, 0, a10, a12, 0LL);
      return 0LL;
    }
    if ( !a4 )
    {
      if ( (unsigned __int8)(a5 + 83) > 2u )
      {
        PostEventMessageEx(*(_QWORD *)(gpqForeground + 64LL), gpqForeground, 0xFu, 0LL, 0, 0LL, a5, (__int64)a10);
LABEL_50:
        v17 = (struct tagMLIST **)gpqForeground;
        goto LABEL_51;
      }
      v32 = *(_QWORD *)(gpqForeground + 80LL);
      if ( v32 || (v32 = *(_QWORD *)(gpqForeground + 88LL)) != 0 )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 384LL);
        if ( v33 )
        {
          MouseKeyFlags = GetMouseKeyFlags(v33);
          PostShellHookMessagesEx(0xCu, ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | MouseKeyFlags, 0LL);
          goto LABEL_50;
        }
      }
    }
LABEL_51:
    v35 = *v17;
    v36 = *((_QWORD *)*v17 + 11);
    if ( v36 )
      v37 = *(_QWORD *)(v36 + 16);
    else
      v37 = *((_QWORD *)v35 + 8);
    if ( (unsigned int)HasHidTable(v37) )
    {
      v38 = *((_QWORD *)v35 + 11);
      v39 = v38 ? *(_QWORD *)(v38 + 16) : *((_QWORD *)v35 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 376) + 776LL) + 100LL) & 0x20) != 0 )
        return 1LL;
    }
    goto LABEL_60;
  }
  *(_QWORD *)(v19 + 40) = (unsigned __int16)(*(_WORD *)(v19 + 40) + 1) | (HIWORD(v30) << 16);
  WakeSomeone(gpqForeground, 0LL, v31, v19);
  return 0LL;
}
