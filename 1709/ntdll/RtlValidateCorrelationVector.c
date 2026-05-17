/*
 * XREFs of RtlValidateCorrelationVector @ 0x1800F53A0
 * Callers:
 *     <none>
 * Callees:
 *     strncmp @ 0x1800959A0 (strncmp.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800F554C (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800F5568 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F55A4 (RtlpGetLastContiguosBase64Position.c)
 */

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1, __int64 a2, __int64 a3)
{
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // eax
  bool v7; // zf
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  __int64 v12; // rdx

  if ( !a1 || (int)RtlpGetCorrelationVectorBufferLength(a1, a2, a3) < 0 )
    return 3221225485LL;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(a1);
  if ( *a1 == 1 )
  {
    v7 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( *a1 != 2 )
      goto LABEL_7;
    v7 = LastContiguosBase64Position == 21;
  }
  if ( !v7 )
    return 3221225485LL;
LABEL_7:
  v8 = LastContiguosBase64Position + 1;
  v9 = v8;
  if ( a1[v8 + 1] != 46 )
    return 3221225485LL;
  v10 = CorrelationVectorEndPosition;
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
