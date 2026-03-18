/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C0120BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011F548 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
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
  CTouchProcessor *v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v16; // r10
  unsigned int v17; // ebx
  CInputDest *v18; // r11
  __int64 v19; // r9
  HWND WindowHandle; // rax
  int v21; // edx
  PERESOURCE *v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+70h] [rbp+8h] BYREF
  CInputDest *v27; // [rsp+78h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x5Bu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v24,
    (CTouchProcessor *)((char *)this + 224));
  if ( !a2 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 92;
LABEL_22:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  CTouchProcessor::GetPointerCapture(v12, a2, a3, &v27, &v26);
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  v16 = FrameById;
  if ( !FrameById )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 93;
      goto LABEL_22;
    }
LABEL_23:
    v17 = 0;
    goto LABEL_24;
  }
  v17 = 1;
  _InterlockedAdd((volatile signed __int32 *)FrameById + 11, 1u);
  v18 = v27;
  v19 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
  if ( v27 )
  {
    WindowHandle = CInputDest::GetWindowHandle(v27);
    v21 = v26;
    *a4 = WindowHandle;
  }
  else
  {
    *a4 = *(HWND *)(v19 + 272);
    v21 = *(_DWORD *)(v19 + 224);
  }
  if ( a5 )
    *a5 = v18 != 0LL;
  if ( a6 )
    *a6 = v21;
  if ( a7 )
    *a7 = *(_DWORD *)(v19 + 248);
  if ( a8 )
    *a8 = *(_DWORD *)(v19 + 260);
  CTouchProcessor::UnreferenceFrameInt(this, v16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x5Eu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
LABEL_24:
  if ( !v25 )
  {
    v22 = (PERESOURCE *)v24;
    *(_QWORD *)(v24 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v22);
  }
  return v17;
}
