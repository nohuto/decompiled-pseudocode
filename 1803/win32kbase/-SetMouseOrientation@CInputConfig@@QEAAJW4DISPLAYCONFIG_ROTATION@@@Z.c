/*
 * XREFs of ?SetMouseOrientation@CInputConfig@@QEAAJW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C0131DCC
 * Callers:
 *     NtDWMSetCursorOrientation @ 0x1C00B3330 (NtDWMSetCursorOrientation.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053C00 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

__int64 __fastcall CInputConfig::SetMouseOrientation(__int64 a1, struct CInpPushLock *a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // rbx
  int v3; // edi
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = gpInputConfig;
  v3 = (int)a2;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v7, a2);
  v4 = v8 == 0;
  LODWORD(v2[3].Next) = v3;
  if ( v4 )
  {
    v5 = v7;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
