/*
 * XREFs of ??_ECWindowManager@@UEAAPEAXI@Z @ 0x180130310
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CWindowManager::`vector deleting destructor'(void **this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = &CWindowManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)(this + 6); ; RtlDeleteElementGenericTable(i, v5) )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v5 )
      break;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
