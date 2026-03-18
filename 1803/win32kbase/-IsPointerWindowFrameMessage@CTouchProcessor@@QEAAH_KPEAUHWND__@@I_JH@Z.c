/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C0117720
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0114CF8 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C011F670 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        __int64 a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct CPointerInputFrame *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  CPointerInfoNode *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  BOOL v19; // ebx
  CInpLockGuard *v21; // [rsp+20h] [rbp-18h] BYREF
  int v22; // [rsp+28h] [rbp-10h]
  HWND v23; // [rsp+40h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v21,
    (CTouchProcessor *)((char *)this + 72));
  if ( !(unsigned int)IsPointerInputMessageWithState(a4) || a6 && a4 - 585 <= 1 )
    goto LABEL_16;
  if ( !a2 )
    goto LABEL_16;
  v12 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a2 + 28));
  if ( !v12 )
    goto LABEL_16;
  v13 = a5;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v14 = *((unsigned int *)v12 + 10);
  if ( *(_DWORD *)(v13 + 28) != (_DWORD)v14 )
    goto LABEL_16;
  v15 = *(unsigned int *)(v13 + 32);
  if ( (unsigned int)v15 >= *((_DWORD *)v12 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v10);
    v15 = *(unsigned int *)(v13 + 32);
  }
  v16 = (CPointerInfoNode *)(*((_QWORD *)v12 + 12) + 576 * v15);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
  if ( (*(_DWORD *)v16 & 0x100) != 0
    && (unsigned int)CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v16, &v23) )
  {
    v19 = v23 == a3;
  }
  else
  {
LABEL_16:
    v19 = 0;
  }
  if ( !v22 )
    CInpLockGuard::UnLock((PERESOURCE *)v21);
  return v19;
}
