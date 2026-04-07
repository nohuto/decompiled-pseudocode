/*
 * XREFs of ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x180014C90
 * Callers:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CPushTransformInstruction *__fastcall CPushTransformInstruction::`scalar deleting destructor'(
        CPushTransformInstruction *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  void *(__fastcall *v7)(CResource *__hidden, unsigned int); // rax

  *(_QWORD *)this = &CPushTransformInstruction::`vftable';
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v4;
      if ( v7 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v4, 1u);
      else
        v7((CResource *)v4, 1u);
    }
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
