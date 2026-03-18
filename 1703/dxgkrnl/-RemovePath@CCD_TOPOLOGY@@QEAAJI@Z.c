/*
 * XREFs of ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01DE980
 * Callers:
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01DE9E0 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00EE258 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01DECB8 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemovePath(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int i; // edi
  __int64 v5; // rax

  if ( a2 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    for ( i = a2 + 1; ; ++i )
    {
      v5 = *((_QWORD *)this + 8);
      if ( i >= *(unsigned __int16 *)(v5 + 20) )
        break;
      CCD_TOPOLOGY::SwapPathsDescriptors(this, i - 1, i);
    }
    --*(_WORD *)(v5 + 20);
  }
  return 0LL;
}
