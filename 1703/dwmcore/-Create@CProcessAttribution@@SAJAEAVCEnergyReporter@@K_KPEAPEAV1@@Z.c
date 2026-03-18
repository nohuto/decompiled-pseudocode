/*
 * XREFs of ?Create@CProcessAttribution@@SAJAEAVCEnergyReporter@@K_KPEAPEAV1@@Z @ 0x1800CA448
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     CreateNullProcessAttribution @ 0x1800CA3F0 (CreateNullProcessAttribution.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CProcessAttribution::Create(
        struct CEnergyReporter *a1,
        int a2,
        __int64 a3,
        struct CProcessAttribution **a4)
{
  void *v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v8 = WPF::ProcessHeapImpl::AllocClear(0x28uLL);
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *((_QWORD *)v8 + 2) = a3;
  *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
  *((_DWORD *)v8 + 2) = 0;
  *((_QWORD *)v8 + 3) = a1;
  *((_DWORD *)v8 + 8) = a2;
  *a4 = (struct CProcessAttribution *)v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  return 0LL;
}
