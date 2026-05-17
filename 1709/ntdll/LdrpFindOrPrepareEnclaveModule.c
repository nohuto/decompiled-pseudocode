/*
 * XREFs of LdrpFindOrPrepareEnclaveModule @ 0x1800D09C0
 * Callers:
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D07BC (LdrpEnclaveAddDependentModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x18006D410 (RtlPrefixUnicodeString.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D0490 (LdrpCreatePendingEnclaveModule.c)
 */

__int64 __fastcall LdrpFindOrPrepareEnclaveModule(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 ***a6,
        __int64 a7)
{
  unsigned int v7; // edi
  unsigned __int16 *v9; // rsi
  char v11; // al
  unsigned __int16 *v12; // rcx
  __int64 **i; // rbx

  v7 = 0;
  v9 = a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString(word_180114150, a2, 1) )
    {
      if ( a5 == a1[14] || a5 == a1[15] )
        v9 = (unsigned __int16 *)&unk_180114190;
    }
    else
    {
      v11 = RtlPrefixUnicodeString(L"\b\n", v9, 1);
      v12 = (unsigned __int16 *)&unk_180114190;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  for ( i = (__int64 **)a1[11]; ; i = (__int64 **)*i )
  {
    if ( i == a1 + 11 )
      return (unsigned int)LdrpCreatePendingEnclaveModule(a1, (const void **)v9, a4, 8, a3, a5, a6, a7);
    if ( RtlEqualUnicodeString(v9, (unsigned __int16 *)i[22], 1) )
      break;
  }
  *a6 = i;
  return v7;
}
