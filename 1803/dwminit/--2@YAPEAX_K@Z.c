/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180007054
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000466C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800036DC (ModuleFailFastForHRESULT.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x180007020 (-Alloc@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 */

LPVOID __fastcall operator new()
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::Alloc();
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
