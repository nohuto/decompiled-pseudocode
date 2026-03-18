/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x1402B2CF0
 * Callers:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1407B17A0 (EtwpApplyStackWalkFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x1402B3088 (EtwpPerfectHashFunctionSearch.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  bool v5; // r10
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v8; // al
  _BYTE *v9; // rdx
  unsigned __int8 v10; // al
  _BYTE *v11; // rdx

  v5 = 1;
  v6 = 96LL * a3;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 368) + v6 + 40) )
    {
      v8 = EtwpPerfectHashFunctionSearch(a1);
      v5 = *v9 == v8;
    }
    __writecr8(CurrentIrql);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(a2 + 368) + v6 + 40) )
  {
    v10 = EtwpPerfectHashFunctionSearch(a1);
    return *v11 == v10;
  }
  return v5;
}
