/*
 * XREFs of ResCSegmentCreateMapping @ 0x18010C908
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x18008E028 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     _ResCDupString @ 0x18008EA74 (_ResCDupString.c)
 *     _ResCCreateMappingExclusive @ 0x18010EF60 (_ResCCreateMappingExclusive.c)
 */

__int64 __fastcall ResCSegmentCreateMapping(_WORD *Src, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rax

  v6 = ResCCreateMappingExclusive(Src, a2, a3, a5 != 0 ? 2 : 0);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    v8 = ResCDupString(Src);
    *(_QWORD *)(v7 + 16) = -1LL;
    *(_QWORD *)(v7 + 24) = v8;
  }
  return v7;
}
