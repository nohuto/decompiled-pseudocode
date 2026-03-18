/*
 * XREFs of ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F6320
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BF7C0 (xxxRetrievePointerInputMessage.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01CCC7C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01F61C0 (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 */

__int64 __fastcall PointerList::SetPointerCapture(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int128 v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)&v5 + 1) = a2;
  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 )
    return 0LL;
  v10 = (a5 != 0 ? 0x18 : 0) + v6 + 32;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 != *((_QWORD *)&v5 + 1) )
  {
    if ( v11 )
      ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)v10);
    *(_QWORD *)&v5 = v10 + 8;
    v12 = v5;
    HMAssignmentLock(&v12);
  }
  *(_DWORD *)v10 = a3;
  result = 1LL;
  *(_DWORD *)(v10 + 16) = a4;
  return result;
}
