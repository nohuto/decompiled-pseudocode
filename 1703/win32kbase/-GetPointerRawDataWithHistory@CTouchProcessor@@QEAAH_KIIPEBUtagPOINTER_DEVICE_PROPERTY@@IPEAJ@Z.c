/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0121B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0121B00 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
 *     ApiSetEditionCheckForMouseAsTouch @ 0x1C013A0D0 (ApiSetEditionCheckForMouseAsTouch.c)
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
  __int64 v10; // rbx
  int v12; // edx
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  int v16; // edx
  struct CPointerInputFrame *FrameById; // rsi
  int v18; // r8d
  unsigned int PointerRawData; // ebx
  __int64 v20; // rbp
  unsigned int v21; // r15d
  void *v22; // r12
  int v23; // edx
  CTouchProcessor *v24; // rcx
  int *v25; // r12
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rbp
  unsigned int v27; // r10d
  __int64 v28; // r11
  int *v29; // r14
  __int64 v30; // rsi
  struct CPointerInputFrame *v31; // rax
  PDEVICE_OBJECT v32; // rcx
  int v33; // r9d
  PERESOURCE *v34; // rcx
  int v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  int v38; // [rsp+48h] [rbp-40h]
  int *v40; // [rsp+C0h] [rbp+38h]

  v10 = a2;
  v40 = &a7[a6];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      119,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v37, (CTouchProcessor *)((char *)this + 200));
  if ( a6 < a4 )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v12, 11, 120, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 121;
LABEL_12:
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v13, 11, v15, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  if ( !v10 )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v12, 11, 122, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 123;
      goto LABEL_12;
    }
LABEL_13:
    PointerRawData = 0;
    goto LABEL_37;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v10 + 28));
  if ( !FrameById )
  {
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 124, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 125;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v20 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v10 + 32);
  v21 = *(_DWORD *)(v20 + 316);
  if ( a3 == 1 || a3 == v21 )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v16, v18, 126, v36, a3, *(_DWORD *)(v20 + 316));
  }
  v22 = (void *)*((_QWORD *)FrameById + 8);
  if ( (unsigned int)ApiSetEditionCheckForMouseAsTouch() || v22 == TouchExtensibility::hDeviceUser )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v23, 11, 127, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v32 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_37;
    v33 = 128;
    goto LABEL_36;
  }
  if ( PointerRawData )
  {
    PointerRawData = CTouchProcessor::GetPointerRawData(
                       v24,
                       FrameById,
                       *(_DWORD *)(v20 + 236),
                       *(_WORD *)(v20 + 242),
                       a4,
                       a5,
                       a7);
    if ( PointerRawData )
    {
      v25 = &a7[a4];
      if ( a3 > 1 )
      {
        PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, FrameById);
        do
        {
          if ( !PreviousFrameByDeviceInt || v21 <= 1 )
            break;
          v29 = &v25[v28];
          v30 = *((_QWORD *)PreviousFrameByDeviceInt + 12) + 608LL * v27;
          if ( v29 > v40 )
          {
            LOBYTE(v23) = 3;
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              v23,
              11,
              130,
              (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
            PointerRawData = 0;
          }
          else
          {
            PointerRawData = CTouchProcessor::GetPointerRawData(
                               (CTouchProcessor *)v27,
                               PreviousFrameByDeviceInt,
                               *(_DWORD *)(v30 + 236),
                               *(_WORD *)(v30 + 242),
                               a4,
                               a5,
                               v25);
            if ( PointerRawData )
              v25 = v29;
          }
          v21 = *(_DWORD *)(v30 + 316);
          v31 = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
          v28 = a4;
          PreviousFrameByDeviceInt = v31;
        }
        while ( PointerRawData );
      }
    }
    else
    {
      LOBYTE(v23) = 3;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v23, 11, 129, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  v32 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v33 = 131;
LABEL_36:
    LOBYTE(v23) = 5;
    WPP_RECORDER_SF_(v32->DeviceExtension, v23, 11, v33, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
LABEL_37:
  if ( !v38 )
  {
    v34 = (PERESOURCE *)v37;
    *(_QWORD *)(v37 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v34);
  }
  return PointerRawData;
}
