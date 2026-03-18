/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0120F00
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0120E68 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0120DF0 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionCheckForMouseAsTouch @ 0x1C01393A8 (ApiSetEditionCheckForMouseAsTouch.c)
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
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  int v14; // edx
  struct CPointerInputFrame *FrameById; // rsi
  int v16; // r8d
  unsigned int PointerRawData; // ebx
  __int64 v18; // rbp
  unsigned int v19; // r15d
  void *v20; // r12
  CTouchProcessor *v21; // rcx
  int *v22; // r12
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rbp
  unsigned int v24; // r10d
  __int64 v25; // r11
  int *v26; // r14
  __int64 v27; // rsi
  struct CPointerInputFrame *v28; // rax
  PERESOURCE *v29; // rcx
  int v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  int v33; // [rsp+48h] [rbp-40h]
  int *v35; // [rsp+C0h] [rbp+38h]

  v35 = &a7[a6];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x77u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v32, (CTouchProcessor *)((char *)this + 224));
  if ( a6 < a4 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x78u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 121;
LABEL_12:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  if ( !a2 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x7Au, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 123;
      goto LABEL_12;
    }
LABEL_13:
    PointerRawData = 0;
    goto LABEL_36;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  if ( !FrameById )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 3u, 0xBu, 0x7Cu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 125;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v18 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
  v19 = *(_DWORD *)(v18 + 316);
  if ( a3 == 1 || a3 == v19 )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v14, v16, 126, v31, a3, *(_DWORD *)(v18 + 316));
  }
  v20 = (void *)*((_QWORD *)FrameById + 8);
  if ( (unsigned int)ApiSetEditionCheckForMouseAsTouch() || v20 == TouchExtensibility::hDeviceUser )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0x7Fu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x80u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         v21,
                         FrameById,
                         *(_DWORD *)(v18 + 236),
                         *(_WORD *)(v18 + 242),
                         a4,
                         a5,
                         a7);
      if ( PointerRawData )
      {
        v22 = &a7[a4];
        if ( a3 > 1 )
        {
          PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, FrameById);
          do
          {
            if ( !PreviousFrameByDeviceInt || v19 <= 1 )
              break;
            v26 = &v22[v25];
            v27 = *((_QWORD *)PreviousFrameByDeviceInt + 12) + 608LL * v24;
            if ( v26 > v35 )
            {
              WPP_RECORDER_SF_(
                *((_QWORD *)this + 1),
                3u,
                0xBu,
                0x82u,
                (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (CTouchProcessor *)v24,
                                 PreviousFrameByDeviceInt,
                                 *(_DWORD *)(v27 + 236),
                                 *(_WORD *)(v27 + 242),
                                 a4,
                                 a5,
                                 v22);
              if ( PointerRawData )
                v22 = v26;
            }
            v19 = *(_DWORD *)(v27 + 316);
            v28 = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
            v25 = a4;
            PreviousFrameByDeviceInt = v28;
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
          0x81u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x83u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  }
LABEL_36:
  if ( !v33 )
  {
    v29 = (PERESOURCE *)v32;
    *(_QWORD *)(v32 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v29);
  }
  return PointerRawData;
}
