/*
 * XREFs of CmpSignalUnloadEventArrayForHive @ 0x1404CD710
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpSignalUnloadEventArrayForHive(__int64 a1)
{
  __int64 i; // rsi

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4088); i = (unsigned int)(i + 1) )
  {
    KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(a1 + 4096) + 8 * i), 0, 0);
    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(a1 + 4096) + 8 * i));
  }
  if ( *(_DWORD *)(a1 + 4088) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 4096), 0);
}
