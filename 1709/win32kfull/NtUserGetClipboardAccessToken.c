/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C01E4ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, ACCESS_MASK a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  void *v8; // rcx
  void *Handle; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL) <= 0x1FFF
    || (v8 = *(void **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 40LL) + 128LL)) == 0LL )
  {
    UserSetLastError(5LL, v5);
  }
  else
  {
    LOBYTE(v4) = ObOpenObjectByPointer(v8, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
