/*
 * XREFs of ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C02257C4
 * Callers:
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0225824 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00B42BC (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C0225B2C (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemovePath(void **this, unsigned int a2)
{
  unsigned int i; // ebx
  _WORD *v5; // rcx

  if ( a2 < *((unsigned __int16 *)this[8] + 10) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    for ( i = a2 + 1; ; ++i )
    {
      v5 = this[8];
      if ( i >= (unsigned __int16)v5[10] )
        break;
      CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, i - 1, i);
    }
    --v5[10];
  }
  return 0LL;
}
