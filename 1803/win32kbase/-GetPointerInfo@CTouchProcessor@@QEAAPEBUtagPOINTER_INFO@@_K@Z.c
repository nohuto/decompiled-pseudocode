/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C0115610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(CTouchProcessor *this, __int64 a2)
{
  PDEVICE_OBJECT v4; // rcx
  unsigned __int16 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct CPointerInputFrame *FrameById; // rdi
  __int64 v9; // rax
  CPointerInfoNode *v10; // rbx
  char *v11; // rbx
  CInpLockGuard *v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x138u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v13, (CTouchProcessor *)((char *)this + 72));
  if ( !a2 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 313;
LABEL_14:
      WPP_RECORDER_SF_(
        (__int64)v4->DeviceExtension,
        5u,
        0xBu,
        v5,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 314;
      goto LABEL_14;
    }
LABEL_15:
    v11 = 0LL;
    goto LABEL_19;
  }
  v9 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v9 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    v9 = *(unsigned int *)(a2 + 32);
  }
  v10 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 576 * v9);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v10) )
  {
    v4 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = 315;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x13Cu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v11 = (char *)v10 + 232;
LABEL_19:
  if ( !v14 )
    CInpLockGuard::UnLock((PERESOURCE *)v13);
  return (const struct tagPOINTER_INFO *)v11;
}
