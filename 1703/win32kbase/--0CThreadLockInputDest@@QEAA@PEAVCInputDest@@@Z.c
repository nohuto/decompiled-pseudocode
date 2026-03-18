/*
 * XREFs of ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C00461DC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C011E0E0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01225D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0123460 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     <none>
 */

CThreadLockInputDest *__fastcall CThreadLockInputDest::CThreadLockInputDest(
        CThreadLockInputDest *this,
        struct CInputDest *a2)
{
  _QWORD *v2; // r9
  char *v3; // rdx
  __int64 v5; // r8
  struct tagTHREADINFO *v6; // rcx

  *(_QWORD *)this = a2;
  v2 = (_QWORD *)((char *)this + 16);
  v3 = (char *)this + 40;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    v6 = gptiCurrent;
    *v2 = *((_QWORD *)gptiCurrent + 46);
    *((_QWORD *)v6 + 46) = v2;
    *((_QWORD *)this + 3) = v5;
    ++*(_DWORD *)(v5 + 8);
    PushW32ThreadLock(this, v3, lambda_e8a35662c22ddf2d2aefcf30b0620e03_::_lambda_invoker_cdecl_);
    ++*(_BYTE *)(*(_QWORD *)this + 192LL);
  }
  return this;
}
