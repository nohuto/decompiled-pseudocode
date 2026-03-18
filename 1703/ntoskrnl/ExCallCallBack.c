/*
 * XREFs of ExCallCallBack @ 0x1404F9EF4
 * Callers:
 *     NtDeleteAtom @ 0x140431230 (NtDeleteAtom.c)
 *     NtAddAtomEx @ 0x140441FE4 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x140442C90 (NtQueryInformationAtom.c)
 *     NtFindAtom @ 0x1404F9D90 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     KeUserModeCallback @ 0x14053FD20 (KeUserModeCallback.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PsConvertToGuiThread @ 0x140545BA0 (PsConvertToGuiThread.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
