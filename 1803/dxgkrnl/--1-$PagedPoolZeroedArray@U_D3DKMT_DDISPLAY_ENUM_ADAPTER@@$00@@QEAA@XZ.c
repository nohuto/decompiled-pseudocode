/*
 * XREFs of ??1?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAA@XZ @ 0x1C01105FC
 * Callers:
 *     DxgkDDisplayEnum @ 0x1C01102E0 (DxgkDDisplayEnum.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::~PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>(
        PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
