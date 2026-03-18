/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C011DA20
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C012D644 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C00E67D8 (rimAbIsPointInPenDeadzone.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0111A30 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0113F28 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInputFrame *a3,
        struct tagPOINT a4)
{
  __int64 i; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct _LIST_ENTRY **NextFrame; // rbx
  CInpLockGuard *v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v16,
    (CTouchProcessor *)((char *)this + 72));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 12); i = (unsigned int)(i + 1) )
  {
    v9 = *((_QWORD *)a3 + 12) + 576 * i;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
    {
      if ( *(_DWORD *)(v9 + 232) != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
      if ( (*(_DWORD *)(v9 + 244) & 0x10000) != 0
        && (v12 = *(_QWORD *)(v9 + 288),
            v18 = *(_OWORD *)(*((_QWORD *)a3 + 14) + 176LL),
            (unsigned int)rimAbIsPointInPenDeadzone(&v18, v12, *(_QWORD *)&a4))
        || a2
        && (ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *(_WORD *)(v9 + 236), 0LL)) != 0LL
        && (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
      {
        *(_DWORD *)v9 |= 0x1000u;
      }
    }
  }
  NextFrame = CTouchProcessor::GetNextFrame(this, a3, (struct _LIST_ENTRY *)((char *)this + 120));
  if ( !v17 )
    CInpLockGuard::UnLock((PERESOURCE *)v16);
  return NextFrame;
}
