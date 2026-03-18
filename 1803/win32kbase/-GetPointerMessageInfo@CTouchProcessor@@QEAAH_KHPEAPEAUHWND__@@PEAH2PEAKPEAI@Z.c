/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01159B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C010C848 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011406C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        struct _KTHREAD **this,
        __int64 a2,
        int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v12; // ebx
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  const struct CPointerInputFrame *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdi
  CInputDest *v20; // rcx
  HWND WindowHandle; // rax
  int v22; // r8d
  PERESOURCE *v24[2]; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+70h] [rbp+8h] BYREF
  CInputDest *v26; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x67u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v24,
    (struct CInpLockGuard *)(this + 9));
  if ( a2 )
  {
    CTouchProcessor::GetPointerCapture(this, a2, a3, &v26, &v25);
    v17 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(a2 + 28));
    if ( v17 )
    {
      v18 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v18 >= *((_DWORD *)v17 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
        v18 = *(unsigned int *)(a2 + 32);
      }
      v19 = *((_QWORD *)v17 + 12) + 576 * v18;
      if ( *(_WORD *)(a2 + 16) != *(_WORD *)(v19 + 236) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
      v20 = v26;
      if ( v26 )
      {
        WindowHandle = CInputDest::GetWindowHandle(v26);
        v22 = v25;
        *a4 = WindowHandle;
      }
      else
      {
        *a4 = *(HWND *)(v19 + 256);
        v22 = *(_DWORD *)(v19 + 208);
      }
      if ( a5 )
        *a5 = v20 != 0LL;
      if ( a6 )
        *a6 = v22;
      if ( a7 )
        *a7 = *(_DWORD *)(v19 + 232);
      if ( a8 )
        *a8 = *(_DWORD *)(v19 + 244);
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v17);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x6Au,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v12 = 1;
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 105;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 104;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v24);
  return v12;
}
