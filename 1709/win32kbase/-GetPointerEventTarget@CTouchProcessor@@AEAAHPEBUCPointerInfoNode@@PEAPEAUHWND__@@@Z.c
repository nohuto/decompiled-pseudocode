/*
 * XREFs of ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0120064
 * Callers:
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@PEBUtagMSG@@H@Z @ 0x1C01222F0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@PEBUtagMSG@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011F548 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        HWND *a3)
{
  __int64 ThreadWin32Thread; // rax
  CTouchProcessor *v6; // rcx
  CInputDest *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  CTouchProcessor::GetPointerCapture(
    v6,
    *((_QWORD *)a2 + 2),
    (*(_DWORD *)(ThreadWin32Thread + 1184) >> 13) & 1,
    &v8,
    0LL);
  if ( v8 )
    *a3 = CInputDest::GetWindowHandle(v8);
  else
    *a3 = (HWND)*((_QWORD *)a2 + 34);
  return 1LL;
}
