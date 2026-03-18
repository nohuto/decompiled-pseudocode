/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0115E70
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0115DCC (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0115D14 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0116790 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C011F908 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct CPointerInputFrame *FrameById; // r12
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int PointerRawData; // esi
  unsigned int HistoryCount; // eax
  int v26; // edx
  int v27; // r8d
  bool v28; // zf
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // r12
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // [rsp+20h] [rbp-68h]
  int *v41; // [rsp+40h] [rbp-48h]
  CInpLockGuard *v42; // [rsp+50h] [rbp-38h] BYREF
  int v43; // [rsp+58h] [rbp-30h]
  size_t Size; // [rsp+90h] [rbp+8h]
  unsigned int v46; // [rsp+B8h] [rbp+30h]
  int *v47; // [rsp+C0h] [rbp+38h]

  Size = a6;
  v41 = &a7[Size];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x85u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v42, (CTouchProcessor *)((char *)this + 72));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  if ( a6 < a4 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x86u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x87u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v13 = v43 == 0;
    goto LABEL_9;
  }
  if ( !a2 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x88u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
LABEL_16:
      v13 = v43 == 0;
LABEL_9:
      if ( v13 )
        CInpLockGuard::UnLock((PERESOURCE *)v42);
      return 0LL;
    }
    v16 = 137;
LABEL_15:
    WPP_RECORDER_SF_(
      (__int64)v15->DeviceExtension,
      5u,
      0xBu,
      v16,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_16;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x8Au, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_16;
    v16 = 139;
    goto LABEL_15;
  }
  v20 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v20 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
    v20 = *(unsigned int *)(a2 + 32);
  }
  v21 = *((_QWORD *)FrameById + 12) + 576 * v20;
  PointerRawData = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v21) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v21, v22);
  v46 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    LOBYTE(v26) = 3;
    WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v26, v27, 140, v40, a3, HistoryCount);
  }
  if ( *((void **)FrameById + 8) == TouchExtensibility::hDeviceUser )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0x8Du, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    memset(a7, 0, Size * 4);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x8Fu,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v28 = v43 == 0;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         this,
                         FrameById,
                         *(_DWORD *)(v21 + 220),
                         *(_WORD *)(v21 + 226),
                         a4,
                         a5,
                         a7);
      if ( PointerRawData )
      {
        v47 = &a7[a4];
        if ( a3 > 1 )
        {
          v29 = *(_DWORD *)(v21 + 384);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, FrameById);
          do
          {
            if ( !PreviousFrameByDevice || v46 <= 1 )
              break;
            if ( v29 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30);
            v33 = *((_QWORD *)PreviousFrameByDevice + 12) + 576LL * v29;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v33) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34);
            if ( &v47[a4] > v41 )
            {
              WPP_RECORDER_SF_(
                *((_QWORD *)this + 1),
                3u,
                0xBu,
                0x91u,
                (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v33 + 220),
                                 *(_WORD *)(v33 + 226),
                                 a4,
                                 a5,
                                 v47);
              if ( PointerRawData )
                v47 += a4;
            }
            v37 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v33, v36);
            v39 = v46 - 1;
            if ( v37 != (_DWORD)v39 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38);
            v46 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v33, v38);
            v29 = *(_DWORD *)(v33 + 384);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)this + 1),
          3u,
          0xBu,
          0x90u,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x92u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v28 = v43 == 0;
  }
  if ( v28 )
    CInpLockGuard::UnLock((PERESOURCE *)v42);
  return PointerRawData;
}
