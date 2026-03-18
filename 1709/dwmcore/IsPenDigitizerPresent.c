/*
 * XREFs of IsPenDigitizerPresent @ 0x1801CE464
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPenDigitizerPresent()
{
  unsigned int v0; // ebx
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // r14
  int v4; // esi
  _DWORD *v5; // rdi
  int v6; // edx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v0 = 0;
  ModuleHandleW = GetModuleHandleW(L"user32.dll");
  ProcAddress = GetProcAddress(ModuleHandleW, "GetPointerDevices");
  v3 = (__int64 (__fastcall *)(_QWORD, _QWORD))ProcAddress;
  if ( !ProcAddress )
    return 1;
  v4 = ((__int64 (__fastcall *)(unsigned int *, _QWORD))ProcAddress)(&v8, 0LL);
  if ( v4 == 1 )
  {
    if ( !v8 )
      return v0;
    try
    {
      v5 = operator new(saturated_mul(v8, 0x438uLL));
    }
    catch ( ... )
    {
      return 1;
    }
    v4 = v3(&v8, v5);
    if ( v4 == 1 )
    {
      v6 = 0;
      if ( v8 )
      {
        while ( v5[270 * v6 + 4] != 1 )
        {
          if ( ++v6 >= v8 )
            goto LABEL_11;
        }
        v0 = 1;
      }
    }
LABEL_11:
    if ( v5 )
      WPF::ProcessHeapImpl::Free(v5);
  }
  if ( !v4 )
    return 1;
  return v0;
}
