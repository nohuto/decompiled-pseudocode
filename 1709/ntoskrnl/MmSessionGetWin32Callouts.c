/*
 * XREFs of MmSessionGetWin32Callouts @ 0x1400A54D0
 * Callers:
 *     NtAddAtomEx @ 0x140489AD8 (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x1404943E0 (KeUserModeCallback.c)
 *     NtFindAtom @ 0x1404D2370 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     ExCallSessionCallBack @ 0x1404F0184 (ExCallSessionCallBack.c)
 *     PsConvertToGuiThread @ 0x140503CF0 (PsConvertToGuiThread.c)
 *     NtDeleteAtom @ 0x14057CB40 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x14057D5D0 (NtQueryInformationAtom.c)
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
