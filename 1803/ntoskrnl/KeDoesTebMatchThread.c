/*
 * XREFs of KeDoesTebMatchThread @ 0x14024CE4C
 * Callers:
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1407801FC (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeDoesTebMatchThread(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
    return a2 == *(_QWORD *)(a1 + 240);
  return result;
}
