/*
 * XREFs of ?GetReferenceStrings@CExpression@@QEBAPEAGXZ @ 0x18018B9E0
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x180054BAC (--1CExpression@@UEAA@XZ.c)
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x18018C790 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall CExpression::GetReferenceStrings(CExpression *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 35);
  if ( (*(_DWORD *)(v1 + 4) & 0x4000000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x6000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(unsigned __int16 **)(i + 4);
}
