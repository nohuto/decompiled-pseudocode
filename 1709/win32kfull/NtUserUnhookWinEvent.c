/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C00566B0
 * Callers:
 *     <none>
 * Callees:
 *     _UnhookWinEvent @ 0x1C0056664 (_UnhookWinEvent.c)
 *     ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00582CC (--0-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0058328 (--1-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00585FC (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  tagObjLock *v9; // [rsp+48h] [rbp+10h] BYREF
  char v10; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(v8, gptiCurrent + 368LL);
  CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(&v9);
  LOBYTE(v2) = 15;
  v3 = HMValidateHandle(a1, v2);
  v4 = 0;
  if ( v3 )
    v4 = UnhookWinEvent(v3);
  tagObjLock::UnLock(v9);
  CLockExclusiveUMCBA<DLT_THREADINFO>::~CLockExclusiveUMCBA<DLT_THREADINFO>(v8);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
