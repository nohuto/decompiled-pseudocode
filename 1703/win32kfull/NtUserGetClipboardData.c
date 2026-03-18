/*
 * XREFs of NtUserGetClipboardData @ 0x1C00AECF0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxGetClipboardData @ 0x1C00AEDEC (xxxGetClipboardData.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     InForegroundQueue @ 0x1C00B3ED0 (InForegroundQueue.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // r14
  int v9; // eax
  __int64 ClipboardData; // rbx
  __int128 v12; // [rsp+38h] [rbp-30h]
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0uLL;
  EnterCrit(0LL, 1LL);
  v8 = (void *)CheckClipboardAccess();
  if ( !v8 )
    goto LABEL_13;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL) + 24LL) & 2;
  else
    v9 = 0;
  if ( v9 )
  {
    UserSetLastError(5LL);
LABEL_13:
    ClipboardData = 0LL;
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 828LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v8, v13, UserDereferenceObject);
    ObfReferenceObject(v8);
    LODWORD(v12) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v8, a1);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_OWORD *)W32UserProbeAddress;
      *a2 = v12;
    }
    PopAndFreeW32ThreadLock(v13);
  }
  else
  {
    ClipboardData = 0LL;
    UserSetLastError(5LL);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return ClipboardData;
}
