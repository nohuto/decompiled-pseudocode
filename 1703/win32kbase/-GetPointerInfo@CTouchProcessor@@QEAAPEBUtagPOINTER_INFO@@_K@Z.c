/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C0121790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(CTouchProcessor *this, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edx
  PDEVICE_OBJECT v5; // rcx
  int v6; // r9d
  struct CPointerInputFrame *FrameById; // r9
  CPointerInfoNode *v8; // rbx
  char *v9; // rbx
  PERESOURCE *v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      287,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v12, (CTouchProcessor *)((char *)this + 200));
  if ( !v2 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 288;
LABEL_12:
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_(v5->DeviceExtension, v4, 11, v6, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v2 + 28));
  if ( !FrameById )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 289;
      goto LABEL_12;
    }
LABEL_13:
    v9 = 0LL;
    goto LABEL_17;
  }
  v8 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v2 + 32));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v8) )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 290;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      11,
      291,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v9 = (char *)v8 + 248;
LABEL_17:
  if ( !v13 )
  {
    v10 = (PERESOURCE *)v12;
    *(_QWORD *)(v12 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v10);
  }
  return (const struct tagPOINTER_INFO *)v9;
}
