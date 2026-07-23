/*
 * XREFs of RtlValidateCorrelationVector @ 0x1800F18D0
 * Callers:
 *     <none>
 * Callees:
 *     strncmp @ 0x18008FF10 (strncmp.c)
 *     sub_1800F1A7C @ 0x1800F1A7C (sub_1800F1A7C.c)
 *     sub_1800F1A98 @ 0x1800F1A98 (sub_1800F1A98.c)
 *     sub_1800F1AD4 @ 0x1800F1AD4 (sub_1800F1AD4.c)
 */

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  __int64 v1; // rdx
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // rdx

  if ( !Vector || (int)sub_1800F1A7C(Vector, v1) < 0 )
    return -1073741811;
  v4 = sub_1800F1AD4();
  v5 = sub_1800F1A98(Vector);
  if ( Vector->Version == 1 )
  {
    v6 = v4 == 15;
  }
  else
  {
    if ( Vector->Version != 2 )
      goto LABEL_7;
    v6 = v4 == 21;
  }
  if ( !v6 )
    return -1073741811;
LABEL_7:
  v7 = v4 + 1;
  v8 = v7;
  if ( Vector->Vector[v7] != 46 )
    return -1073741811;
  v9 = v5;
  while ( v8 < v9 )
  {
    if ( Vector->Vector[v8] == 46 )
    {
      ++v7;
      ++v8;
      v10 = 0;
      v11 = v7;
      if ( v8 < v9 )
      {
        do
        {
          if ( (unsigned __int8)(Vector->Vector[v8] - 48) > 9u )
            break;
          ++v7;
          ++v8;
          ++v10;
        }
        while ( v8 < v9 );
        if ( v10 && v10 <= 10 && (v10 != 10 || strncmp(&Vector->Vector[v11], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
