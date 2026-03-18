/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01218F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01206C8 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v10; // rdi
  int v12; // edx
  CTouchProcessor *v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v17; // r10
  unsigned int v18; // ebx
  CInputDest *v19; // r11
  __int64 v20; // r9
  HWND WindowHandle; // rax
  int v22; // edx
  int v23; // edx
  PERESOURCE *v24; // rcx
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+70h] [rbp+8h] BYREF
  CInputDest *v29; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      91,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v26,
    (CTouchProcessor *)((char *)this + 200));
  if ( !v10 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 92;
LABEL_22:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v12, 11, v15, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  CTouchProcessor::GetPointerCapture(v13, v10, a3, &v29, &v28);
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v10 + 28));
  v17 = FrameById;
  if ( !FrameById )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 93;
      goto LABEL_22;
    }
LABEL_23:
    v18 = 0;
    goto LABEL_24;
  }
  v18 = 1;
  _InterlockedAdd((volatile signed __int32 *)FrameById + 11, 1u);
  v19 = v29;
  v20 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v10 + 32);
  if ( v29 )
  {
    WindowHandle = CInputDest::GetWindowHandle(v29);
    v22 = v28;
    *a4 = WindowHandle;
  }
  else
  {
    *a4 = *(HWND *)(v20 + 272);
    v22 = *(_DWORD *)(v20 + 224);
  }
  if ( a5 )
    *a5 = v19 != 0LL;
  if ( a6 )
    *a6 = v22;
  if ( a7 )
    *a7 = *(_DWORD *)(v20 + 248);
  if ( a8 )
    *a8 = *(_DWORD *)(v20 + 260);
  CTouchProcessor::UnreferenceFrameInt(this, v17);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v23) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v23,
      11,
      94,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
LABEL_24:
  if ( !v27 )
  {
    v24 = (PERESOURCE *)v26;
    *(_QWORD *)(v26 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v24);
  }
  return v18;
}
