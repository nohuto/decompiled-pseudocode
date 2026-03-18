/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C011FDA0
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0120A14 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013C818 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  unsigned __int8 *v6; // r14
  unsigned int v10; // ebx
  unsigned int v11; // edi
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v15; // r15
  unsigned int v16; // r13d
  __int64 v17; // rbp
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // r12
  __int64 v21; // rbp
  PERESOURCE *v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+38h] [rbp-40h]

  v6 = a6;
  if ( a3 == 1 )
  {
    v10 = 96;
  }
  else
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        v10 = 120;
        goto LABEL_9;
      }
      if ( a3 != 5 )
      {
        v10 = 0;
        goto LABEL_9;
      }
    }
    v10 = 144;
  }
LABEL_9:
  v11 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Eu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v24, (CTouchProcessor *)((char *)this + 224));
  if ( !a2 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 111;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_18;
    }
    goto LABEL_18;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  v15 = FrameById;
  if ( !FrameById )
  {
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 112;
      goto LABEL_17;
    }
LABEL_18:
    v11 = 0;
    goto LABEL_33;
  }
  v16 = 1;
  v17 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
  if ( a4 >= v10 )
  {
    v11 = ApiSetPointerInfoCopyOutHelperInternal(
            (int)v17 + 240,
            *(_QWORD *)(v17 + 228),
            *((_QWORD *)FrameById + 14),
            a3,
            v10,
            (__int64)a6);
    if ( v11 )
    {
      v6 = &a6[v10];
      a4 -= v10;
    }
  }
  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, v15);
  if ( v11 )
  {
    do
    {
      if ( !PreviousFrameByDeviceInt || v18 <= 1 )
        break;
      ++v16;
      if ( a4 >= v10 )
      {
        v21 = *((_QWORD *)PreviousFrameByDeviceInt + 12) + 608LL * v19;
        v11 = ApiSetPointerInfoCopyOutHelperInternal(
                (int)v21 + 240,
                *(_QWORD *)(v21 + 228),
                *((_QWORD *)v15 + 14),
                a3,
                v10,
                (__int64)v6);
        if ( v11 )
        {
          v6 += v10;
          a4 -= v10;
        }
      }
      PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
    }
    while ( v11 );
    if ( v11 )
      *a5 = v16;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x71u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
LABEL_33:
  if ( !v25 )
  {
    v22 = (PERESOURCE *)v24;
    *(_QWORD *)(v24 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v22);
  }
  return v11;
}
