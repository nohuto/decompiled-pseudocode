/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14003E9A0
 * Callers:
 *     NtFindAtom @ 0x1404B5ED0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PsConvertToGuiThread @ 0x1404F11D0 (PsConvertToGuiThread.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 *     NtDeleteAtom @ 0x140547850 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x140547A60 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x14056890C (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x1405B80E0 (KeUserModeCallback.c)
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
