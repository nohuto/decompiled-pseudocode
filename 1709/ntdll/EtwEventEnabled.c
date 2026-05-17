/*
 * XREFs of EtwEventEnabled @ 0x1800681B0
 * Callers:
 *     EtwEventWriteEndScenario @ 0x180068080 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x18008CC90 (EtwEventWriteStartScenario.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwEventEnabled(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  bool result; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al

  result = 0;
  if ( a2 )
  {
    v2 = HIWORD(a1);
    if ( HIWORD(a1) )
    {
      v3 = a1 & 0xFFFFFFFFFFFFLL;
      if ( (v3 & 1) == 0 && (_WORD)v2 == *(_WORD *)(v3 + 96) )
      {
        v4 = *(_QWORD *)(a2 + 8);
        if ( *(_BYTE *)(v3 + 124) )
        {
          v6 = *(_BYTE *)(v3 + 125);
          if ( (*(_BYTE *)(a2 + 4) <= v6 || !v6)
            && ((*(_BYTE *)(v3 + 120) & 0x40) != 0 && !v4
             || (v4 & *(_QWORD *)(v3 + 112)) != 0 && (v4 & *(_QWORD *)(v3 + 104)) == *(_QWORD *)(v3 + 104)) )
          {
            return 1;
          }
        }
        if ( *(_BYTE *)(v3 + 244) )
        {
          v7 = *(_BYTE *)(v3 + 245);
          if ( (*(_BYTE *)(a2 + 4) <= v7 || !v7)
            && ((*(_BYTE *)(v3 + 240) & 0x40) != 0 && !v4
             || (v4 & *(_QWORD *)(v3 + 232)) != 0 && (v4 & *(_QWORD *)(v3 + 224)) == *(_QWORD *)(v3 + 224)) )
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}
