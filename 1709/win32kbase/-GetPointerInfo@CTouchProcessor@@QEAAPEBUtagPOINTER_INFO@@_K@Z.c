/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C01208C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(CTouchProcessor *this, __int64 a2)
{
  PDEVICE_OBJECT v4; // rcx
  unsigned __int16 v5; // r9
  struct CPointerInputFrame *FrameById; // r9
  CPointerInfoNode *v7; // rbx
  char *v8; // rbx
  PERESOURCE *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x123u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v11, (CTouchProcessor *)((char *)this + 224));
  if ( !a2 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 292;
LABEL_12:
      WPP_RECORDER_SF_(
        (__int64)v4->DeviceExtension,
        5u,
        0xBu,
        v5,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 293;
      goto LABEL_12;
    }
LABEL_13:
    v8 = 0LL;
    goto LABEL_17;
  }
  v7 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v7) )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 294;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x127u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v8 = (char *)v7 + 248;
LABEL_17:
  if ( !v12 )
  {
    v9 = (PERESOURCE *)v11;
    *(_QWORD *)(v11 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  }
  return (const struct tagPOINTER_INFO *)v8;
}
