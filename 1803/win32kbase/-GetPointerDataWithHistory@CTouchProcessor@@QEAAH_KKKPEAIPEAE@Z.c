/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01149E0
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0115768 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0116790 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C011817C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  unsigned __int8 *v6; // r12
  __int64 PointerInfoSize; // rbp
  unsigned int v11; // ebx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct CPointerInputFrame *FrameById; // r13
  __int64 v17; // rax
  CPointerInfoNode *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r14d
  unsigned int HistoryCount; // eax
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // r15
  CPointerInfoNode *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  CInpLockGuard *v35; // [rsp+30h] [rbp-48h] BYREF
  int v36; // [rsp+38h] [rbp-40h]
  unsigned int v39; // [rsp+98h] [rbp+20h]

  v6 = (unsigned __int8 *)a6;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v11 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x7Cu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v35, (CTouchProcessor *)((char *)this + 72));
  if ( !a2 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 125;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 126;
      goto LABEL_9;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_37;
  }
  v17 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
    v17 = *(unsigned int *)(a2 + 32);
  }
  v18 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 576 * v17);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
  if ( (*(_DWORD *)v18 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
  v21 = 1;
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v11 = CTouchProcessor::PointerInfoCopyOutHelper(
            this,
            v18,
            *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 14),
            a3,
            PointerInfoSize,
            a6);
    if ( v11 )
    {
      v6 = (unsigned __int8 *)a6 + PointerInfoSize;
      a4 -= PointerInfoSize;
    }
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount(v18, v19);
  v23 = *((_DWORD *)v18 + 96);
  v39 = HistoryCount;
  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
  if ( v11 )
  {
    do
    {
      if ( !PreviousFrameByDevice || v39 <= 1 )
        break;
      if ( v23 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
      v27 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 12) + 576LL * v23);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v27) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
      ++v21;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                v27,
                *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 14),
                a3,
                PointerInfoSize,
                (struct tagPOINTER_INFO *)v6);
        if ( v11 )
        {
          v6 += PointerInfoSize;
          a4 -= PointerInfoSize;
        }
      }
      v30 = CPointerInfoNode::GetHistoryCount(v27, v28);
      v32 = v39 - 1;
      if ( v30 != (_DWORD)v32 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31);
      v33 = CPointerInfoNode::GetHistoryCount(v27, v31);
      v23 = *((_DWORD *)v27 + 96);
      v39 = v33;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
    }
    while ( v11 );
    if ( v11 )
      *a5 = v21;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x7Fu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
LABEL_37:
  if ( !v36 )
    CInpLockGuard::UnLock((PERESOURCE *)v35);
  return v11;
}
