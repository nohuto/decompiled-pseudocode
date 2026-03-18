/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01212B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01211B4 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C012157C (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A50 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     GetPointerInfoSize @ 0x1C01296AC (GetPointerInfoSize.c)
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
  unsigned __int8 *v8; // r12
  unsigned __int8 *v10; // r15
  unsigned int PointerInfoSize; // eax
  int v13; // edx
  unsigned int v14; // esi
  int v15; // edx
  __int64 v16; // r9
  PDEVICE_OBJECT v17; // rcx
  int v18; // r9d
  struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v20; // r14
  CPointerInfoNode *v21; // rbp
  CTouchProcessor *v22; // rcx
  unsigned int PointerHistoryFrameData; // ebx
  unsigned int v24; // r13d
  unsigned int PointerFrameData; // eax
  int v26; // edx
  unsigned int v27; // r12d
  unsigned __int64 v28; // rdi
  const struct CPointerInputFrame *PreviousFrameByDeviceInt; // rbp
  unsigned int v30; // r10d
  unsigned int v31; // r11d
  struct CPointerInputFrame *v32; // rax
  PERESOURCE *v33; // rcx
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  int v36; // [rsp+48h] [rbp-50h]
  unsigned int v38; // [rsp+A8h] [rbp+10h]

  v8 = a8;
  v10 = a8;
  PointerInfoSize = GetPointerInfoSize(a3);
  v14 = a5;
  v38 = PointerInfoSize;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      11,
      114,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v35, (CTouchProcessor *)((char *)this + 200));
  v16 = 0LL;
  if ( !a2 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 115;
LABEL_12:
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_(v17->DeviceExtension, v15, 11, v18, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v16 = 0LL;
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  v20 = FrameById;
  if ( !FrameById )
  {
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v16 )
    {
      v18 = 116;
      goto LABEL_12;
    }
LABEL_13:
    PointerHistoryFrameData = v16;
    goto LABEL_31;
  }
  v21 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32));
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v21) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v16 )
    {
      v18 = 117;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v24 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(v22, v20, v21, a3, v14, &a5, v8);
  v16 = 0LL;
  PointerHistoryFrameData = PointerFrameData;
  if ( PointerFrameData )
  {
    v27 = a5;
    v28 = v38 * (unsigned __int64)a5;
    if ( v28 > 0xFFFFFFFF )
    {
      PointerHistoryFrameData = 0;
    }
    else
    {
      PointerHistoryFrameData = 1;
      if ( v14 >= (unsigned int)v28 )
      {
        v10 = &a8[(unsigned int)v28];
        v14 -= v28;
      }
      if ( !a4 )
        goto LABEL_27;
      PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, v20);
      v16 = 0LL;
      do
      {
        if ( !PreviousFrameByDeviceInt || v30 <= 1 )
          break;
        ++v24;
        if ( v14 >= (unsigned int)v28 )
        {
          PointerHistoryFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                      (CTouchProcessor *)v31,
                                      PreviousFrameByDeviceInt,
                                      a3,
                                      v27,
                                      v28,
                                      a8,
                                      v10);
          if ( PointerHistoryFrameData )
          {
            v10 += (unsigned int)v28;
            v14 -= v28;
          }
        }
        v32 = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
        v16 = 0LL;
        PreviousFrameByDeviceInt = v32;
      }
      while ( PointerHistoryFrameData );
      if ( PointerHistoryFrameData )
      {
LABEL_27:
        *a6 = v24;
        *a7 = v27;
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v26,
      11,
      118,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v16 = 0LL;
  }
LABEL_31:
  if ( v36 == (_DWORD)v16 )
  {
    v33 = (PERESOURCE *)v35;
    *(_QWORD *)(v35 + 32) = v16;
    ExReleaseResourceAndLeaveCriticalRegion(*v33);
  }
  return PointerHistoryFrameData;
}
