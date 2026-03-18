/*
 * XREFs of ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x180145270
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CCompositionSurfaceManager *__fastcall CCompositionSurfaceManager::`scalar deleting destructor'(
        CCompositionSurfaceManager *this,
        char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CCompositionSurfaceManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; RtlDeleteElementGenericTable(i, v5) )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v5 )
      break;
  }
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
