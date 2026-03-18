/*
 * XREFs of ?GetReferenceStrings@CExpression@@QEBAPEAGXZ @ 0x180161B8C
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x1800A81F4 (--1CExpression@@UEAA@XZ.c)
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x180162AA0 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall CExpression::GetReferenceStrings(CExpression *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 33);
  if ( (*(_DWORD *)(v1 + 4) & 0x4000000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x6000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(unsigned __int16 **)(i + 4);
}
