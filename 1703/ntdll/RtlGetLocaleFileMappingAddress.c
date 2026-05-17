/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x180080A60
 * Callers:
 *     sub_180080990 @ 0x180080990 (sub_180080990.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwInitializeNlsFiles @ 0x1800A71B0 (ZwInitializeNlsFiles.c)
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
  if ( qword_18015C280 )
  {
    *a1 = qword_18015C280;
    *a2 = dword_18015BFC0;
    *a3 = qword_18015BFC8;
  }
  else
  {
    result = ZwInitializeNlsFiles();
    if ( (int)result < 0 )
      return result;
    v7 = *a1;
    dword_18015BFC0 = *a2;
    qword_18015BFC8 = *a3;
    if ( _InterlockedCompareExchange64(&qword_18015C280, v7, 0LL) )
    {
      ZwUnmapViewOfSection(-1LL, *a1);
      *a1 = qword_18015C280;
    }
  }
  return 0LL;
}
