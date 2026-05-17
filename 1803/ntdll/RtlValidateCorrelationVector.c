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

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  int v6; // eax
  bool v7; // zf
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  __int64 v12; // rdx

  if ( !a1 || (int)sub_1800F1A7C(a1, a2, a3) < 0 )
    return 3221225485LL;
  v5 = sub_1800F1AD4();
  v6 = sub_1800F1A98(a1);
  if ( *a1 == 1 )
  {
    v7 = v5 == 15;
  }
  else
  {
    if ( *a1 != 2 )
      goto LABEL_7;
    v7 = v5 == 21;
  }
  if ( !v7 )
    return 3221225485LL;
LABEL_7:
  v8 = v5 + 1;
  v9 = v8;
  if ( a1[v8 + 1] != 46 )
    return 3221225485LL;
  v10 = v6;
  while ( v9 < v10 )
  {
    if ( a1[v9 + 1] == 46 )
    {
      ++v8;
      ++v9;
      v11 = 0;
      v12 = v8;
      if ( v9 < v10 )
      {
        do
        {
          if ( (unsigned __int8)(a1[v9 + 1] - 48) > 9u )
            break;
          ++v8;
          ++v9;
          ++v11;
        }
        while ( v9 < v10 );
        if ( v11 && v11 <= 10 && (v11 != 10 || strncmp(&a1[v12 + 1], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
