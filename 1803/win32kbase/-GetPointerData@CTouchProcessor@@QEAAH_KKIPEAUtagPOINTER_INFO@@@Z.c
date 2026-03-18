/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C0114380
 * Callers:
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0115808 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C011817C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct CPointerInputFrame *FrameById; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rax
  CPointerInfoNode *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  CInpLockGuard *v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+38h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x78u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( a4 != (unsigned int)GetPointerInfoSize(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v22, (CTouchProcessor *)((char *)this + 72));
  if ( !a2 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 121;
LABEL_11:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 122;
      goto LABEL_11;
    }
LABEL_12:
    v16 = 0;
    goto LABEL_21;
  }
  v17 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    v17 = *(unsigned int *)(a2 + 32);
  }
  v18 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 576 * v17);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
  if ( (*(_DWORD *)v18 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
  v16 = CTouchProcessor::PointerInfoCopyOutHelper(
          this,
          v18,
          *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 14),
          a3,
          a4,
          a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x7Bu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
LABEL_21:
  if ( !v23 )
    CInpLockGuard::UnLock((PERESOURCE *)v22);
  return v16;
}
