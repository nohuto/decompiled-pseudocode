/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01C2F48
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01C2EA8 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ebp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
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
      if ( a2 || (v4 = 1, (a2 = BuildHwndList((__int64)a1, (struct tagWND *)1, 0LL)) != 0LL) )
      {
        v3 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1, v9, v10, v11);
        for ( i = (unsigned __int64 *)((char *)a2 + 40); (unsigned __int64)i < *((_QWORD *)a2 + 1); ++i )
          v3 |= xxxSendGDIScaledDpiChangedMessage(*i, v12, v13, v14);
        if ( v4 )
          FreeHwndList(a2);
      }
    }
  }
  return v3;
}
