/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0127E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011D950 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0121690 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127CB4 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C0139B28 (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(CTouchProcessor *this, struct _LIST_ENTRY *a2)
{
  __int64 *Flink; // rdx
  CTouchProcessor *Blink_high; // rcx
  unsigned int i; // esi
  struct _LIST_ENTRY *v7; // rbx
  PVOID CurrentProcess; // rax
  int v9; // r14d
  __int64 *PrevMsgId; // rax
  PERESOURCE *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v12,
    (CTouchProcessor *)((char *)this + 224));
  for ( i = 0; i < LODWORD(a2[1].Blink); ++i )
  {
    v7 = &a2[4].Blink[38 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(Blink_high, Flink);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v7) && (HIDWORD(v7->Flink) & 0x200) == 0 )
    {
      Flink = (__int64 *)v7[1].Flink;
      if ( !Flink
        || (Blink_high = (CTouchProcessor *)HIDWORD(a2[5].Flink[15 * LODWORD(v7->Blink) + 13].Blink),
            ((unsigned __int8)Blink_high & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v7) )
          CTouchProcessor::FreePointerInfoNode(this, (__int64)Flink, (int)a2[1].Flink, i);
      }
      else
      {
        v9 = HIDWORD(v7[16].Flink) & 2;
        if ( (HIDWORD(v7[16].Flink) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(Blink_high, Flink);
          if ( PrevMsgId )
          {
            Blink_high = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)Blink_high & 0x20) != 0 )
              CTouchProcessor::UnreferenceMsgData((__int64 *)this, (__int64)PrevMsgId, 1);
          }
        }
        if ( !v9 )
          CTouchProcessor::UnreferenceMsgData((__int64 *)this, (__int64)v7[1].Flink, 1);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(&a2[-2].Blink);
  CTouchProcessor::UnreferenceFrameInt(this, (struct CPointerInputFrame *)&a2[-2].Blink);
  if ( !v13 )
  {
    v11 = (PERESOURCE *)v12;
    *(_QWORD *)(v12 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v11);
  }
}
