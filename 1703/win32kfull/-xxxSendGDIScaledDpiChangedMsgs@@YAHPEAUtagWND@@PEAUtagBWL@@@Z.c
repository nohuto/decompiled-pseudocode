/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BF624
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01BF58C (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ebp
  __int64 v8; // rcx
  unsigned __int64 *i; // rdi

  v2 = *((_DWORD *)a1 + 76);
  v3 = 0;
  v4 = 0;
  if ( (v2 & 0x8000000) == 0 )
    return 0LL;
  *((_DWORD *)a1 + 76) = v2 & 0xF7FFFFFF;
  if ( IsPWNDEligibleForGDIScaling((__int64)a1) )
  {
    if ( (unsigned int)IsTopLevelWindow(v8) )
    {
      if ( a2 || (v4 = 1, (a2 = BuildHwndList((__int64)a1, 1, 0LL)) != 0LL) )
      {
        v3 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1);
        for ( i = (unsigned __int64 *)((char *)a2 + 40); (unsigned __int64)i < *((_QWORD *)a2 + 1); ++i )
          v3 |= xxxSendGDIScaledDpiChangedMessage(*i);
        if ( v4 )
          FreeHwndList(a2);
      }
    }
  }
  return v3;
}
