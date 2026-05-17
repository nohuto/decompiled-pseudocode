/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x18007C4C0
 * Callers:
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwInitializeNlsFiles @ 0x18009C9B0 (ZwInitializeNlsFiles.c)
 */

__int64 __fastcall RtlGetLocaleFileMappingAddress(signed __int64 *a1, int *a2, __int64 *a3)
{
  __int64 result; // rax
  signed __int64 v7; // rcx

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  if ( qword_18015D2C0 )
  {
    *a1 = qword_18015D2C0;
    *a2 = dword_18015D02C;
    *a3 = qword_18015D030;
  }
  else
  {
    result = ZwInitializeNlsFiles();
    if ( (int)result < 0 )
      return result;
    v7 = *a1;
    dword_18015D02C = *a2;
    qword_18015D030 = *a3;
    if ( _InterlockedCompareExchange64(&qword_18015D2C0, v7, 0LL) )
    {
      ZwUnmapViewOfSection(-1LL);
      *a1 = qword_18015D2C0;
    }
  }
  return 0LL;
}
