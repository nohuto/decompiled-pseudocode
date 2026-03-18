/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C011F7F0
 * Callers:
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0120AB0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013C818 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        int a4,
        struct tagPOINTER_INFO *a5)
{
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  struct CPointerInputFrame *FrameById; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  PERESOURCE *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+38h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Au,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v16, (CTouchProcessor *)((char *)this + 224));
  if ( !a2 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 107;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v9->DeviceExtension,
        5u,
        0xBu,
        v10,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 108;
      goto LABEL_9;
    }
LABEL_10:
    v12 = 0;
    goto LABEL_13;
  }
  v13 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
  v12 = ApiSetPointerInfoCopyOutHelperInternal(
          (int)v13 + 240,
          *(_QWORD *)(v13 + 228),
          *((_QWORD *)FrameById + 14),
          a3,
          a4,
          (__int64)a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Du,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
LABEL_13:
  if ( !v17 )
  {
    v14 = (PERESOURCE *)v16;
    *(_QWORD *)(v16 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v14);
  }
  return v12;
}
