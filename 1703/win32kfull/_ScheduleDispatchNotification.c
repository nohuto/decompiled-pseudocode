/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C004D2C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C004D288 (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004D464 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E11E8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C01072BC (ProcessSuspendedEventMessage.c)
 */

__int64 __fastcall ScheduleDispatchNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 CurrentProcessWin32Process; // rcx
  int v5; // ebx
  struct tagMLIST *v6; // rbp
  struct tagQMSG *v7; // rbp
  struct tagPOINT v8; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax

  v2 = *(_QWORD *)(a1 + 16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( *(_QWORD *)(v2 + 376) == CurrentProcessWin32Process )
  {
    v5 = 0;
    if ( v2 == gptiCurrent
      || (v10 = *(_QWORD *)(CurrentProcessWin32Process + 824),
          v11 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 380LL),
          !gbEnforceUIPI)
      || (unsigned int)v10 > (unsigned int)v11
      || (_DWORD)v10 == (_DWORD)v11
      && ((v12 = HIDWORD(v10), v13 = HIDWORD(v11), (_DWORD)v12 == (_DWORD)v13) || (_DWORD)v13 == -1 || (_DWORD)v12 == -1) )
    {
      v6 = *(struct tagMLIST **)(v2 + 384);
      if ( (*(_DWORD *)(v2 + 440) & 1) == 0 )
      {
        vAdjustDelegatePriority((struct tagTHREADINFO *)v2);
        if ( (*(_DWORD *)(v2 + 1096) & 0x20) == 0
          || (unsigned int)ProcessSuspendedEventMessage(v2, 9LL, a1, 96LL, 0LL, 0LL) )
        {
          v7 = AllocQEntryEx(v6, 0LL, 0);
          if ( v7 )
          {
            v8 = LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(a1 + 368));
            StoreQMessage((_DWORD)v7, a1, 96, 0, 0LL, 0, 0, 9, 0LL, 0, 0LL, *(_QWORD *)&v8, 0LL, 0LL);
            *((_QWORD *)v7 + 13) = v2;
            if ( (*(_DWORD *)(v2 + 440) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v2 + 400) + 6LL) |= 0x2040u;
              *(_WORD *)(*(_QWORD *)(v2 + 400) + 4LL) |= 0x2040u;
              if ( (*(_WORD *)(*(_QWORD *)(v2 + 400) + 10LL) & 0x2040) != 0 )
                KeSetEvent(*(PRKEVENT *)(v2 + 648), 2, 0);
            }
            v5 = 1;
          }
        }
      }
      return (unsigned int)(2 * v5);
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
