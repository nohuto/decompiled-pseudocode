/*
 * XREFs of ?do_compare@?$collate@G@std@@MEBAHPEBG000@Z @ 0x1800A9A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::collate<unsigned short>::do_compare(__int64 a1, _WORD *a2, _WORD *a3, _WORD *a4, _WORD *a5)
{
  int v5; // ecx
  __int64 result; // rax

  while ( a2 != a3 && a4 != a5 )
  {
    if ( *a2 < *a4 )
    {
      v5 = -1;
      goto LABEL_9;
    }
    if ( *a4 < *a2 )
    {
      v5 = 1;
      goto LABEL_9;
    }
    ++a2;
    ++a4;
  }
  v5 = a2 != a3;
  if ( a4 != a5 )
    v5 = -1;
LABEL_9:
  result = v5 != 0;
  if ( v5 < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
