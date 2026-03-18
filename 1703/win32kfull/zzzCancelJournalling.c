/*
 * XREFs of zzzCancelJournalling @ 0x1C0110594
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 *     SendMsgCleanup @ 0x1C00C6700 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C00C675C (xxxReceiverDied.c)
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D9098 (zzzUnhookWindowsHookEx.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int16 __fastcall zzzCancelJournalling(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 GlobalValid; // rdi
  __int64 v4; // r8
  _DWORD *v5; // r9
  bool v6; // zf
  __int64 v7; // rdi
  _DWORD *v8; // r9
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // r8
  __int16 result; // ax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 Valid; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // eax

  if ( (gdwMitConfig & 1) != 0 )
    ForceResetMouseButtonsDownState();
  else
    gwMouseOwnerButton = 0;
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1, a3);
  if ( GlobalValid )
  {
    do
    {
      v19 = *(_QWORD *)(GlobalValid + 16);
      if ( v19 )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup(v19);
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid, v21, v22);
      GlobalValid = Valid;
    }
    while ( Valid );
    v5 = (_DWORD *)gdwDeferWinEvent;
  }
  v6 = (*v5)-- == 1;
  if ( v6 && gpPendingNotifies )
  {
    xxxFlushDeferredWindowEvents();
    v5 = (_DWORD *)gdwDeferWinEvent;
  }
  ++*v5;
  v7 = PhkFirstGlobalValid(gptiRit, 0, v4);
  if ( v7 )
  {
    do
    {
      v23 = *(_QWORD *)(v7 + 16);
      if ( v23 )
      {
        PostThreadMessage(*(_QWORD *)(v7 + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup(v23);
      }
      v24 = PhkNextValid(v7);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v7, v25, v26);
      v7 = v24;
    }
    while ( v24 );
    v8 = (_DWORD *)gdwDeferWinEvent;
  }
  v6 = (*v8)-- == 1;
  if ( v6 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  v9 = (_QWORD *)gsmsList;
  v10 = (_QWORD *)gsmsList;
  while ( v10 != v9 )
  {
    v14 = (__int64)v10;
    v10 = (_QWORD *)*v10;
    v15 = *(_QWORD *)(v14 + 32);
    if ( v15 )
    {
      v11 = *(_QWORD **)(v14 + 40);
      if ( v11 )
      {
        if ( *(_QWORD *)(v15 + 384) != v11[48] )
        {
          if ( (unsigned int)IsThreadHung(v11, 0x1388u) )
          {
            v27 = *(_DWORD *)(v14 + 104);
            if ( v27 >= 6
              && (v27 <= 8 || v27 == 28 || v27 == 81 || v27 == 134 || v27 == 783)
              && (*(_DWORD *)(v14 + 84) & 0x10) == 0 )
            {
              xxxReceiverDied(v14, v12, v13);
            }
          }
          v9 = (_QWORD *)gsmsList;
        }
      }
    }
  }
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v17 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 16);
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 71) & 8) != 0 )
          return SetOrClrWF(0, (_DWORD *)v18, 0xF08u, 1);
      }
    }
  }
  return result;
}
