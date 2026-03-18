/*
 * XREFs of RIMDivideToCeilingOrNearestInt @ 0x1C010F6A4
 * Callers:
 *     rimExtractScantime @ 0x1C0111890 (rimExtractScantime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDivideToCeilingOrNearestInt(unsigned int a1, unsigned int a2, int a3, int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  unsigned __int64 v6; // rax
  int v7; // ecx

  v4 = 0;
  if ( a3 )
  {
    if ( a1 )
    {
      v5 = 0;
      *a4 = (a1 - 1) / a2 + 1;
    }
    else
    {
      v5 = -2147024362;
    }
  }
  else
  {
    v6 = (a2 + 2 * (unsigned __int64)a1) / (2 * (unsigned __int64)a2);
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = v6;
    *a4 = v7;
    v5 = v6 > 0xFFFFFFFF ? 0x80070216 : 0;
  }
  LOBYTE(v4) = v5 == 0;
  return v4;
}
