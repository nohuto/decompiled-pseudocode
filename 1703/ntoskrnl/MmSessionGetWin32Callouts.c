/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14008BBF0
 * Callers:
 *     NtDeleteAtom @ 0x140431230 (NtDeleteAtom.c)
 *     NtAddAtomEx @ 0x140441FE4 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x140442C90 (NtQueryInformationAtom.c)
 *     ExCallSessionCallBack @ 0x1404C81A8 (ExCallSessionCallBack.c)
 *     NtFindAtom @ 0x1404F9D90 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     KeUserModeCallback @ 0x14053FD20 (KeUserModeCallback.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PsConvertToGuiThread @ 0x140545BA0 (PsConvertToGuiThread.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  _RTL_RUN_ONCE *result; // rax

  result = &PsWin32NullCallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7872) != 1LL )
    return &PsWin32CallBack;
  return result;
}
