/*
 * XREFs of ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x1C00B1504
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B1284 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSumDataBlock(char *a1, char *a2)
{
  signed __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 - a1;
  v3 = 38LL;
  do
  {
    *(_QWORD *)a1 += *(_QWORD *)&a1[v2];
    a1 += 8;
    --v3;
  }
  while ( v3 );
}
