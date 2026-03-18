/*
 * XREFs of ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01C00AC
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C010FB34 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01F7150 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

MenuStateOwnerLockxxxUnlock *__fastcall MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        MenuStateOwnerLockxxxUnlock *this,
        struct tagMENUSTATE *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( gptiCurrent == *((_QWORD *)a2 + 4) )
      ++*((_DWORD *)a2 + 10);
    else
      *(_QWORD *)this = 0LL;
  }
  return this;
}
