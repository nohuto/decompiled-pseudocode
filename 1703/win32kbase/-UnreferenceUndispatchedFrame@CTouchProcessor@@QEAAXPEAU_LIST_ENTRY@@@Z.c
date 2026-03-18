/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0128610
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011EAAC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01220C0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C013A850 (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(CTouchProcessor *this, struct _LIST_ENTRY *a2)
{
  __int64 *Flink; // rdx
  CTouchProcessor *Blink_high; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int i; // esi
  struct _LIST_ENTRY *v9; // rbx
  PVOID CurrentProcess; // rax
  int v11; // r14d
  __int64 *PrevMsgId; // rax
  PERESOURCE *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v14,
    (CTouchProcessor *)((char *)this + 200));
  for ( i = 0; i < LODWORD(a2[1].Blink); ++i )
  {
    v9 = &a2[4].Blink[38 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(Blink_high, Flink, v6, v7);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v9) && (HIDWORD(v9->Flink) & 0x200) == 0 )
    {
      Flink = (__int64 *)v9[1].Flink;
      if ( !Flink
        || (Blink_high = (CTouchProcessor *)HIDWORD(a2[5].Flink[15 * LODWORD(v9->Blink) + 13].Blink),
            ((unsigned __int8)Blink_high & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
          CTouchProcessor::FreePointerInfoNode(this, (__int64)Flink, (int)a2[1].Flink, i);
      }
      else
      {
        v11 = HIDWORD(v9[16].Flink) & 2;
        if ( (HIDWORD(v9[16].Flink) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(Blink_high, Flink);
          if ( PrevMsgId )
          {
            Blink_high = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)Blink_high & 0x20) != 0 )
              CTouchProcessor::UnreferenceMsgData((__int64 *)this, (__int64)PrevMsgId, 1);
          }
        }
        if ( !v11 )
          CTouchProcessor::UnreferenceMsgData((__int64 *)this, (__int64)v9[1].Flink, 1);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(&a2[-2].Blink);
  CTouchProcessor::UnreferenceFrameInt(this, (struct CPointerInputFrame *)&a2[-2].Blink);
  if ( !v15 )
  {
    v13 = (PERESOURCE *)v14;
    *(_QWORD *)(v14 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v13);
  }
}
