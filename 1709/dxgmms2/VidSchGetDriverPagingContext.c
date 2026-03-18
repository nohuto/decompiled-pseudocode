/*
 * XREFs of VidSchGetDriverPagingContext @ 0x1C0072B20
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D294 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C006DC60 (VidSchiSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingContext(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * a2);
  else
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL * a2);
  return *(_QWORD *)(v3 + 64);
}
