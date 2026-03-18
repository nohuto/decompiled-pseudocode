/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0114770
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0116354 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C010C848 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0116790 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct CPointerInputFrame *FrameById; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int HistoryCount; // ebp
  unsigned int v20; // r15d
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // eax
  PERESOURCE *v33[2]; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x93u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v33, (CTouchProcessor *)((char *)this + 72));
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
    if ( FrameById )
    {
      v17 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
        v17 = *(unsigned int *)(a2 + 32);
      }
      v18 = *((_QWORD *)FrameById + 12) + 576 * v17;
      if ( a5 && *a5 && (*(_DWORD *)(v18 + 244) & 0x400000) == 0 )
      {
        *a5 = 0;
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 150;
          goto LABEL_18;
        }
      }
      else
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(
                         (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 576 * v17),
                         v14);
        if ( a3 <= HistoryCount )
        {
          v20 = 1;
          *a4 = *(_QWORD *)(v18 + 312);
          if ( a3 > 1 )
          {
            v21 = *(_DWORD *)(v18 + 384);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
            do
            {
              if ( !PreviousFrameByDevice || HistoryCount <= 1 )
                break;
              if ( v21 >= *((_DWORD *)PreviousFrameByDevice + 12) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
              v25 = *((_QWORD *)PreviousFrameByDevice + 12) + 576LL * v21;
              if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v25) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
              v28 = v20++;
              a4[v28] = *(_QWORD *)(v25 + 312);
              v29 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v25, v26);
              if ( v29 != HistoryCount - 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v30);
              v31 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v25, v30);
              v21 = *(_DWORD *)(v25 + 384);
              HistoryCount = v31;
              PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
            }
            while ( v20 < a3 );
          }
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              0xBu,
              0x98u,
              (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
          v9 = 1;
        }
        else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            0xBu,
            0x97u,
            (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        }
      }
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 149;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 148;
LABEL_18:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v33);
  return v9;
}
