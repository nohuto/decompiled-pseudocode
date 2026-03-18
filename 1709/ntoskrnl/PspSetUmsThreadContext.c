/*
 * XREFs of PspSetUmsThreadContext @ 0x14071CF0C
 * Callers:
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeCopyContextToUch @ 0x1406D9B30 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1406D9D9C (KeCopyContextToUmsContext.c)
 */

__int64 __fastcall PspSetUmsThreadContext(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (*a3 & 2) != 0 )
    return (unsigned int)KeCopyContextToUmsContext(**(_QWORD **)(a1 + 496), a2);
  else
    KeCopyContextToUch(*(_QWORD *)(a1 + 504), a2);
  return v3;
}
