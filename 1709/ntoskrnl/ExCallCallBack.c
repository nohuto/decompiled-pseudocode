/*
 * XREFs of ExCallCallBack @ 0x1404D25EC
 * Callers:
 *     NtAddAtomEx @ 0x140489AD8 (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x1404943E0 (KeUserModeCallback.c)
 *     NtFindAtom @ 0x1404D2370 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PsConvertToGuiThread @ 0x140503CF0 (PsConvertToGuiThread.c)
 *     NtDeleteAtom @ 0x14057CB40 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x14057D5D0 (NtQueryInformationAtom.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1400A5610 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned int v8; // ebx

  v6 = ExReferenceCallBackBlock(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v6[1].Count)(v6[2].Count, a2, a3);
    ExDereferenceCallBackBlock(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
