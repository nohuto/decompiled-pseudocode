/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01202E0
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01205C8 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01201B0 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0120690 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C01220A8 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
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
  unsigned __int8 *v8; // r13
  unsigned __int8 *v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // esi
  PDEVICE_OBJECT v14; // rcx
  unsigned __int16 v15; // r9
  struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v17; // r14
  CPointerInfoNode *v18; // rbp
  CTouchProcessor *v19; // rcx
  unsigned int PointerFrameData; // ebx
  unsigned int v21; // r12d
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned int v24; // edi
  const struct CPointerInputFrame *PreviousFrameByDeviceInt; // rbp
  unsigned int v26; // r10d
  unsigned int v27; // r11d
  PERESOURCE *v28; // rcx
  __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  int v31; // [rsp+48h] [rbp-40h]

  v8 = a8;
  v11 = a8;
  if ( a3 == 1 )
  {
    v12 = 96LL;
  }
  else
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        v12 = 120LL;
        goto LABEL_9;
      }
      if ( a3 != 5 )
      {
        v12 = 0LL;
        goto LABEL_9;
      }
    }
    v12 = 144LL;
  }
LABEL_9:
  v13 = a5;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x72u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v30, (CTouchProcessor *)((char *)this + 224));
  if ( !a2 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 115;
LABEL_20:
      WPP_RECORDER_SF_(
        (__int64)v14->DeviceExtension,
        5u,
        0xBu,
        v15,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_21;
    }
    goto LABEL_21;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  v17 = FrameById;
  if ( !FrameById )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 116;
      goto LABEL_20;
    }
LABEL_21:
    PointerFrameData = 0;
    goto LABEL_39;
  }
  v18 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32));
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v18) )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 117;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  v21 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(v19, v17, v18, a3, v13, &a5, v8);
  if ( PointerFrameData )
  {
    v22 = a5;
    v23 = v12 * a5;
    if ( v23 > 0xFFFFFFFF )
    {
      PointerFrameData = 0;
    }
    else
    {
      v24 = v12 * a5;
      PointerFrameData = 1;
      if ( v13 >= (unsigned int)v23 )
      {
        v11 = &v8[(unsigned int)v23];
        v13 -= v23;
      }
      if ( a4 )
      {
        PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, v17);
        do
        {
          if ( !PreviousFrameByDeviceInt || v26 <= 1 )
            break;
          ++v21;
          if ( v13 >= v24 )
          {
            PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                 (CTouchProcessor *)v27,
                                 PreviousFrameByDeviceInt,
                                 a3,
                                 a5,
                                 v24,
                                 v8,
                                 v11);
            if ( PointerFrameData )
            {
              v11 += v24;
              v13 -= v24;
            }
          }
          PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
        }
        while ( PointerFrameData );
        if ( !PointerFrameData )
          goto LABEL_37;
        v22 = a5;
      }
      *a6 = v21;
      *a7 = v22;
    }
  }
LABEL_37:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x76u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
LABEL_39:
  if ( !v31 )
  {
    v28 = (PERESOURCE *)v30;
    *(_QWORD *)(v30 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v28);
  }
  return PointerFrameData;
}
