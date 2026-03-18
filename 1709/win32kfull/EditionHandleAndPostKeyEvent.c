/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C0104150
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 *     IsProcessedByInputService @ 0x1C00C8F50 (IsProcessedByInputService.c)
 *     PostMove @ 0x1C00CF348 (PostMove.c)
 *     GetMouseKeyFlags @ 0x1C00CF764 (GetMouseKeyFlags.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        __int16 a8,
        unsigned __int16 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        unsigned __int16 a14)
{
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagQ **v20; // r14
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // r13d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int16 v31; // ax
  int v32; // ebp
  unsigned int v33; // r8d
  __int64 v34; // rax
  unsigned __int8 *v35; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+28h] [rbp-80h]
  _QWORD v42[4]; // [rsp+60h] [rbp-48h] BYREF

  v14 = a4;
  v15 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( *(_QWORD *)(v15 + 48)
    || *(_QWORD *)(v15 + 40)
    || (_DWORD)a4
    || (BYTE4(gafAsyncKeyState[0]) & 0x14) != 0x10
    || (a5 != 9 || (a6 & 1) != 0) && (a5 != 27 || (a6 & 2) != 0) )
  {
    v20 = (struct tagQ **)gpqForeground;
    if ( gpqForeground )
    {
      v21 = *(_QWORD *)(gpqForeground + 120LL);
      v22 = *(_QWORD *)(gpqForeground + 32LL);
      v23 = a5;
      if ( v21 )
        v24 = *(_QWORD *)(v21 + 16);
      else
        v24 = *(_QWORD *)(gpqForeground + 96LL);
      if ( (unsigned int)HasHidTable(v24) )
      {
        v25 = *(_QWORD *)(gpqForeground + 120LL);
        v26 = v25 ? *(_QWORD *)(v25 + 16) : *(_QWORD *)(gpqForeground + 96LL);
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 400) + 784LL) + 100LL) & 0x20) != 0 )
        {
          v27 = v25 ? *(_QWORD *)(v25 + 16) : *(_QWORD *)(gpqForeground + 96LL);
          if ( !(unsigned int)HasHidTable(v27) )
            return 1LL;
          v28 = *(_QWORD *)(gpqForeground + 120LL);
          v29 = v28 ? *(_QWORD *)(v28 + 16) : *(_QWORD *)(gpqForeground + 96LL);
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 400) + 784LL) + 100LL) & 0x400) == 0
            || (unsigned __int8)(a5 + 90) > 0x11u )
          {
            return 1LL;
          }
        }
      }
      if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
      {
        v23 = (a7 << 16) | a5;
        v31 = 0;
      }
      else
      {
        v31 = a7;
      }
      v32 = ((a9 | v31) << 16) | 1;
      if ( v22
        && *(_DWORD *)(v22 + 24) == a14
        && ((a14 - 256) & 0xFFFB) == 0
        && *(_QWORD *)(v22 + 32) == v23
        && !IsProcessedByInputService(v22)
        && *(_WORD *)(v22 + 42) == HIWORD(v32) )
      {
        *(_QWORD *)(v22 + 40) = (HIWORD(v32) << 16) | (unsigned __int16)(*(_WORD *)(v22 + 40) + 1);
        WakeSomeone(gpqForeground, 0LL, v33, v22);
      }
      else
      {
        if ( (unsigned __int8)(a5 + 90) <= 0x11u )
        {
          if ( !v14 )
          {
            if ( (unsigned __int8)(a5 + 83) <= 2u )
            {
              v34 = *(_QWORD *)(gpqForeground + 112LL);
              if ( v34 || (v34 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
              {
                v35 = *(unsigned __int8 **)(*(_QWORD *)(v34 + 16) + 408LL);
                if ( v35 )
                {
                  MouseKeyFlags = GetMouseKeyFlags(v35);
                  PostShellHookMessagesEx(
                    0xCu,
                    ((unsigned __int16)(a5 - 165) << 16) | (unsigned __int64)MouseKeyFlags,
                    0LL);
                }
              }
            }
            else
            {
              PostEventMessageEx(
                *(struct tagTHREADINFO **)(gpqForeground + 96LL),
                gpqForeground,
                0xFu,
                0LL,
                0,
                0LL,
                a5,
                a10);
            }
          }
          v20 = (struct tagQ **)gpqForeground;
          v37 = *(_QWORD *)(gpqForeground + 120LL);
          v38 = v37 ? *(_QWORD *)(v37 + 16) : *(_QWORD *)(gpqForeground + 96LL);
          if ( (unsigned int)HasHidTable(v38) )
          {
            v39 = *(_QWORD *)(gpqForeground + 120LL);
            v40 = v39 ? *(_QWORD *)(v39 + 16) : *(_QWORD *)(gpqForeground + 96LL);
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 400) + 784LL) + 100LL) & 0x20) != 0 )
              return 1LL;
          }
        }
        if ( (*((_DWORD *)*v20 + 95) & 0x20) != 0 )
          PostMove(*v20);
        LODWORD(v41) = a11;
        PostInputMessage(gpqForeground, 0LL, a14, v23, v32, v41, 0LL, a13, 0, a10, a12, 0LL);
      }
    }
    else if ( ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(a5 + 83) <= 2u )
    {
      PostShellHookMessagesEx(0xCu, (unsigned __int16)(a5 - 165) << 16, 0LL);
    }
  }
  else
  {
    v16 = gpqForeground;
    if ( !gpqForeground )
      v16 = *(_QWORD *)(gptiRit + 408LL);
    ++*(_DWORD *)(v16 + 388);
    PushW32ThreadLock(v16, v42, UnlockQueue, a4);
    xxxNextWindow(v16, a5);
    PopAndFreeAlwaysW32ThreadLock((__int64)v42, v17, v18, v19);
  }
  return 0LL;
}
