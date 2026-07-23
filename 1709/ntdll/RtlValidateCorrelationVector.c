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

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  __int64 v1; // rdx
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // eax
  bool v6; // zf
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // rdx

  if ( !Vector || (int)RtlpGetCorrelationVectorBufferLength(Vector, v1) < 0 )
    return -1073741811;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(Vector);
  if ( Vector->Version == 1 )
  {
    v6 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( Vector->Version != 2 )
      goto LABEL_7;
    v6 = LastContiguosBase64Position == 21;
  }
  if ( !v6 )
    return -1073741811;
LABEL_7:
  v7 = LastContiguosBase64Position + 1;
  v8 = v7;
  if ( Vector->Vector[v7] != 46 )
    return -1073741811;
  v9 = CorrelationVectorEndPosition;
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
