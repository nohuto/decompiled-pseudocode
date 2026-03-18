/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C0120E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     GetPointerInfoSize @ 0x1C01296AC (GetPointerInfoSize.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013D348 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  unsigned __int8 *v6; // r14
  int v10; // edx
  __int64 PointerInfoSize; // rsi
  unsigned int v12; // ebx
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // rbp
  int v20; // edx
  unsigned int v21; // r10d
  unsigned int v22; // r11d
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // r12
  __int64 v24; // rbp
  PERESOURCE *v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  int v28; // [rsp+38h] [rbp-40h]

  v6 = a6;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v12 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      11,
      110,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v27, (CTouchProcessor *)((char *)this + 200));
  if ( !a2 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 111;
LABEL_9:
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v13, 11, v15, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  v17 = FrameById;
  if ( !FrameById )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 112;
      goto LABEL_9;
    }
LABEL_10:
    v12 = 0;
    goto LABEL_25;
  }
  v18 = 1;
  v19 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v12 = ApiSetPointerInfoCopyOutHelperInternal(
            (int)v19 + 240,
            *(_QWORD *)(v19 + 228),
            *((_QWORD *)FrameById + 14),
            a3,
            PointerInfoSize,
            (__int64)a6);
    if ( v12 )
    {
      v6 = &a6[PointerInfoSize];
      a4 -= PointerInfoSize;
    }
  }
  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, v17);
  if ( v12 )
  {
    do
    {
      if ( !PreviousFrameByDeviceInt || v21 <= 1 )
        break;
      ++v18;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v24 = *((_QWORD *)PreviousFrameByDeviceInt + 12) + 608LL * v22;
        v12 = ApiSetPointerInfoCopyOutHelperInternal(
                (int)v24 + 240,
                *(_QWORD *)(v24 + 228),
                *((_QWORD *)v17 + 14),
                a3,
                PointerInfoSize,
                (__int64)v6);
        if ( v12 )
        {
          v6 += PointerInfoSize;
          a4 -= PointerInfoSize;
        }
      }
      PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, PreviousFrameByDeviceInt);
    }
    while ( v12 );
    if ( v12 )
      *a5 = v18;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      11,
      113,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
LABEL_25:
  if ( !v28 )
  {
    v25 = (PERESOURCE *)v27;
    *(_QWORD *)(v27 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v25);
  }
  return v12;
}
