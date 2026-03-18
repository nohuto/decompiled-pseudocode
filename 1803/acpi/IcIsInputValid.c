/*
 * XREFs of IcIsInputValid @ 0x1C0092604
 * Callers:
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00910D4 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

char __fastcall IcIsInputValid(unsigned int a1)
{
  __int64 i; // rax

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 0;
    if ( *(int *)(i + 28) >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
      break;
  }
  return 1;
}
