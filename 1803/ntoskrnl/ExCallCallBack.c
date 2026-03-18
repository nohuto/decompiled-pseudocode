/*
 * XREFs of ExCallCallBack @ 0x1404B63E4
 * Callers:
 *     NtFindAtom @ 0x1404B5ED0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PsConvertToGuiThread @ 0x1404F11D0 (PsConvertToGuiThread.c)
 *     NtDeleteAtom @ 0x140547850 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x140547A60 (NtQueryInformationAtom.c)
 *     NtAddAtomEx @ 0x14056890C (NtAddAtomEx.c)
 *     KeUserModeCallback @ 0x1405B80E0 (KeUserModeCallback.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14003E9E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
