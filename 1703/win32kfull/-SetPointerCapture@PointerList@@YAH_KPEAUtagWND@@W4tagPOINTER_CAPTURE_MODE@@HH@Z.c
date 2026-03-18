/*
 * XREFs of ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01EA408
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01C884C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01EA244 (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 */

__int64 __fastcall PointerList::SetPointerCapture(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = *(_QWORD *)(a1 + 40);
  if ( !v7 )
    return 0LL;
  v10 = v7 + (a5 != 0 ? 56LL : 32LL);
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 != a2 )
  {
    if ( v11 )
      ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)v10);
    v12[0] = v10 + 8;
    v12[1] = a2;
    HMAssignmentLock(v12);
  }
  *(_DWORD *)v10 = a3;
  result = 1LL;
  *(_DWORD *)(v10 + 16) = a4;
  return result;
}
