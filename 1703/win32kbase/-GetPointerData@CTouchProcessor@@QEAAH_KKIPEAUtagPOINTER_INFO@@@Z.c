/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01208E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013D348 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        int a4,
        struct tagPOINTER_INFO *a5)
{
  __int64 v7; // rbx
  int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  struct CPointerInputFrame *FrameById; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  int v15; // edx
  PERESOURCE *v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]

  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      106,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v18, (CTouchProcessor *)((char *)this + 200));
  if ( !v7 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 107;
LABEL_9:
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(v10->DeviceExtension, v9, 11, v11, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v7 + 28));
  if ( !FrameById )
  {
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 108;
      goto LABEL_9;
    }
LABEL_10:
    v13 = 0;
    goto LABEL_13;
  }
  v14 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v7 + 32);
  v13 = ApiSetPointerInfoCopyOutHelperInternal(
          (int)v14 + 240,
          *(_QWORD *)(v14 + 228),
          *((_QWORD *)FrameById + 14),
          a3,
          a4,
          (__int64)a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      11,
      109,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
LABEL_13:
  if ( !v19 )
  {
    v16 = (PERESOURCE *)v18;
    *(_QWORD *)(v18 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v16);
  }
  return v13;
}
