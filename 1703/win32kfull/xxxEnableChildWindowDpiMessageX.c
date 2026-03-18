/*
 * XREFs of xxxEnableChildWindowDpiMessageX @ 0x1C009DA38
 * Callers:
 *     NtUserEnableChildWindowDpiMessage @ 0x1C009D9B0 (NtUserEnableChildWindowDpiMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C009DD70 (UpdateMonitorForWindowAndChildren.c)
 */

__int64 __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1)
{
  unsigned int v1; // edi
  int v3; // r10d
  __int64 v4; // rax
  unsigned __int16 v5; // si
  struct tagBWL *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || (*((_DWORD *)a1 + 92) & 0xF) != 2 || !(unsigned int)IsTopLevelWindow((__int64)a1) )
    return 0LL;
  if ( v3 )
  {
    *((_DWORD *)a1 + 76) |= 0x60000000u;
    v4 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
  }
  else
  {
    *((_DWORD *)a1 + 76) &= 0x9FFFFFFF;
    v4 = *(_QWORD *)(gpDispInfo + 88LL);
  }
  if ( v4 )
  {
    v5 = *((_WORD *)a1 + 186);
    v7 = 0LL;
    if ( (unsigned int)UpdateMonitorForWindowAndChildren(a1, v4, &v7, 1LL) )
    {
      xxxNotifyMonitorChanged(a1, 0LL, v7, v5);
      return 1;
    }
  }
  return v1;
}
