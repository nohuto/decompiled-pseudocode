/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x140280658
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140750ACC (EtwpApplyStackWalkFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x1402809B8 (EtwpPerfectHashFunctionSearch.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  bool v4; // r10
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v6; // al
  _BYTE *v7; // rdx
  unsigned __int8 v8; // al
  _BYTE *v9; // rdx

  v4 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( *(_QWORD *)(96LL * a3 + *(_QWORD *)(a2 + 368) + 40) )
    {
      v6 = EtwpPerfectHashFunctionSearch(a1);
      v4 = *v7 == v6;
    }
    __writecr8(CurrentIrql);
  }
  else if ( *(_QWORD *)(96LL * a3 + *(_QWORD *)(a2 + 368) + 40) )
  {
    v8 = EtwpPerfectHashFunctionSearch((unsigned __int16)a1);
    return *v9 == v8;
  }
  return v4;
}
