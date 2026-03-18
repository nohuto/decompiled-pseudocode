/*
 * XREFs of RIMDivideToCeilingOrNearestInt @ 0x1C0110C0C
 * Callers:
 *     rimExtractScantime @ 0x1C0112DA8 (rimExtractScantime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDivideToCeilingOrNearestInt(unsigned int a1, unsigned int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r10d
  int v6; // ecx
  unsigned __int64 v7; // rax

  v4 = 0;
  if ( !a3 )
  {
    v7 = (a2 + 2 * (unsigned __int64)a1) / (2 * (unsigned __int64)a2);
    if ( v7 <= 0xFFFFFFFF )
    {
      *a4 = v7;
      v6 = 0;
      goto LABEL_8;
    }
    *a4 = -1;
LABEL_7:
    v6 = -2147024362;
    goto LABEL_8;
  }
  if ( !a1 )
    goto LABEL_7;
  v6 = 0;
  *a4 = (a1 - 1) / a2 + 1;
LABEL_8:
  LOBYTE(v4) = v6 == 0;
  return v4;
}
