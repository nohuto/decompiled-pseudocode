/*
 * XREFs of PortTraceErrorFreeDriver @ 0x1C0066D30
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x1C003889C (RaidHandleTraceNotifyType.c)
 * Callees:
 *     <none>
 */

void __fastcall PortTraceErrorFreeDriver(__int64 a1)
{
  __int64 i; // rdi

  _InterlockedDecrement((volatile signed __int32 *)(a1 + 84));
  if ( *(_QWORD *)(a1 + 56) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 56) + 8 * i), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_DWORD *)(a1 + 80) = 0;
}
