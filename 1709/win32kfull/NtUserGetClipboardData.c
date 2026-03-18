/*
 * XREFs of NtUserGetClipboardData @ 0x1C00C59C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxGetClipboardData @ 0x1C00C5AC0 (xxxGetClipboardData.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     InForegroundQueue @ 0x1C00CB420 (InForegroundQueue.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  void *v7; // r14
  int v8; // eax
  __int64 ClipboardData; // rbx
  __int64 v11; // rdx
  __int128 v12; // [rsp+38h] [rbp-30h]
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0uLL;
  EnterCrit(0LL, 1LL);
  v7 = (void *)CheckClipboardAccess();
  if ( !v7 )
    goto LABEL_13;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x20000000) != 0 )
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 728LL) + 24LL) & 2;
  else
    v8 = 0;
  if ( v8 )
  {
    UserSetLastError(5LL, v4);
LABEL_13:
    ClipboardData = 0LL;
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 836LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v7, v13, UserDereferenceObject, v6);
    ObfReferenceObject(v7);
    LODWORD(v12) = a1;
    ClipboardData = xxxGetClipboardData((struct tagWINDOWSTATION *)v7, a1);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v12;
    }
    PopAndFreeW32ThreadLock(v13);
  }
  else
  {
    ClipboardData = 0LL;
    UserSetLastError(5LL, v11);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5, v4);
  return ClipboardData;
}
