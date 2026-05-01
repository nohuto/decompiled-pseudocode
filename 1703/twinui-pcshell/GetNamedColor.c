/*
 * XREFs of GetNamedColor @ 0x1801916A4
 * Callers:
 *     s_ParseColorFormat @ 0x180191754 (s_ParseColorFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamedColor(LPCWCH lpString1, int a2, _DWORD *a3)
{
  int v4; // r12d
  unsigned int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // eax

  v4 = a2 - 1;
  v6 = -2147024809;
  v7 = 0;
  v8 = 142;
  while ( 1 )
  {
    v9 = v7 + (v8 - v7) / 2;
    v10 = CompareStringOrdinal(lpString1, v4, (&off_1801BD270)[2 * v9], -1, 1);
    if ( v10 != 1 )
      break;
    v8 = v9 - 1;
LABEL_6:
    if ( v7 > v8 )
      return v6;
  }
  if ( v10 == 3 )
  {
    v7 = v9 + 1;
    goto LABEL_6;
  }
  v6 = 0;
  *a3 = *((_DWORD *)&off_1801BD270 + 4 * v9 + 2);
  return v6;
}
