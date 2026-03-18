/*
 * XREFs of ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0003AB4
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ABC54 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDX.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1 + 33);
  if ( (unsigned int)(v1 - 5) <= 0xB )
    v1 = (v1 - 1) % 4 + 1;
  return (*(_DWORD *)a1 & 0x200LL) != 0 && ((v1 - 2) & 0xFFFFFFFD) == 0;
}
