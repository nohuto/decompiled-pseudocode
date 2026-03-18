/*
 * XREFs of ?IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0103788
 * Callers:
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01036AC (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsVirtualModeSupported(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_QWORD *)a1 & 0x8000000000000LL) != 0 )
    return *((_BYTE *)a1 + 129) != 0;
  return v1;
}
