/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0114FA0
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01152F0 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C0114E74 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01153BC (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0116790 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C011733C (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // r15
  unsigned int PointerInfoSize; // eax
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct CPointerInputFrame *FrameById; // r14
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // r9
  __int64 v19; // rax
  CPointerInfoNode *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int PointerFrameData; // ebx
  unsigned int v24; // r13d
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned int v27; // edi
  unsigned int HistoryCount; // eax
  unsigned int v29; // esi
  unsigned int v30; // r13d
  __int64 v31; // rdx
  __int64 v32; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // r14
  CPointerInfoNode *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  CInpLockGuard *v43; // [rsp+40h] [rbp-48h] BYREF
  int v44; // [rsp+48h] [rbp-40h]
  unsigned int v45; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+A0h] [rbp+18h]
  int v47; // [rsp+A8h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v8 = a8;
  PointerInfoSize = GetPointerInfoSize(a3);
  v12 = a5;
  v13 = PointerInfoSize;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x80u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v43, (CTouchProcessor *)((char *)this + 72));
  if ( !a2 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x81u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_17;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 130;
LABEL_16:
      WPP_RECORDER_SF_(
        (__int64)v17->DeviceExtension,
        5u,
        0xBu,
        v18,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_17;
    }
    goto LABEL_17;
  }
  v19 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
    v19 = *(unsigned int *)(a2 + 32);
  }
  v20 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 576 * v19);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v20) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 131;
      goto LABEL_16;
    }
LABEL_17:
    PointerFrameData = 0;
    goto LABEL_43;
  }
  v24 = 1;
  a5 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(
                       this,
                       FrameById,
                       v20,
                       v46,
                       v12,
                       &v45,
                       (struct tagPOINTER_INFO *)v8);
  if ( PointerFrameData )
  {
    v26 = v13 * v45;
    if ( v26 > 0xFFFFFFFF )
    {
      PointerFrameData = 0;
    }
    else
    {
      v27 = v13 * v45;
      PointerFrameData = 1;
      if ( v12 >= (unsigned int)v26 )
      {
        if ( !(_DWORD)v26 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
        v8 = &a8[v27];
        v12 -= v27;
      }
      if ( v47 )
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(v20, v25);
        v29 = *((_DWORD *)v20 + 96);
        v30 = HistoryCount;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
        do
        {
          if ( !PreviousFrameByDevice || v30 <= 1 )
            break;
          if ( v29 >= *((_DWORD *)PreviousFrameByDevice + 12) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31);
          v34 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 12) + 576LL * v29);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v34) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35);
          ++a5;
          if ( v12 >= v27 )
          {
            PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                 this,
                                 PreviousFrameByDevice,
                                 v46,
                                 v45,
                                 v27,
                                 a8,
                                 v8);
            if ( PointerFrameData )
            {
              v8 += v27;
              v12 -= v27;
            }
          }
          v37 = CPointerInfoNode::GetHistoryCount(v34, v35);
          v39 = v30 - 1;
          if ( v37 != (_DWORD)v39 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38);
          v40 = CPointerInfoNode::GetHistoryCount(v34, v38);
          v29 = *((_DWORD *)v34 + 96);
          v30 = v40;
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
        }
        while ( PointerFrameData );
        if ( !PointerFrameData )
          goto LABEL_41;
        v24 = a5;
      }
      v41 = v45;
      *a6 = v24;
      *a7 = v41;
    }
  }
LABEL_41:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x84u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
LABEL_43:
  if ( !v44 )
    CInpLockGuard::UnLock((PERESOURCE *)v43);
  return PointerFrameData;
}
