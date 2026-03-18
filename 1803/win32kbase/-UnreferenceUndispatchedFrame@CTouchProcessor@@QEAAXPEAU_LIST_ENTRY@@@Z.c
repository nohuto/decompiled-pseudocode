/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C011E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01121B4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011594C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C0116770 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C013E020 (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  CTouchProcessor *v4; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 i; // rsi
  __int64 v7; // rbx
  PVOID CurrentProcess; // rax
  int v9; // r14d
  __int64 *PrevMsgId; // rax
  __int64 v11; // rdx
  CInpLockGuard *v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v12,
    (struct CInpLockGuard *)(this + 9));
  p_Blink = &a2[-2].Blink;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)p_Blink + 12); i = (unsigned int)(i + 1) )
  {
    v7 = (__int64)&p_Blink[12][36 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v7) && (*(_DWORD *)(v7 + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(v7 + 16)
        || (v4 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                        v4,
                                                        (const struct CPointerInputFrame *)p_Blink,
                                                        (const struct CPointerInfoNode *)v7)
                                    + 51),
            ((unsigned __int8)v4 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v7) )
          CTouchProcessor::FreePointerInfoNode(this, v11, *((_DWORD *)p_Blink + 10), i);
      }
      else
      {
        v9 = *(_DWORD *)(v7 + 244) & 2;
        if ( (*(_DWORD *)(v7 + 244) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v4, *(__int64 **)(v7 + 16));
          if ( PrevMsgId )
          {
            v4 = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)v4 & 0x20) != 0 )
              CTouchProcessor::UnreferenceMsgData((__int64)this, (__int64)PrevMsgId, 1);
          }
        }
        if ( !v9 )
          CTouchProcessor::UnreferenceMsgData((__int64)this, *(_QWORD *)(v7 + 16), 1);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(p_Blink);
  CTouchProcessor::UnreferenceFrame(this, (const struct CPointerInputFrame *)p_Blink);
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12);
}
