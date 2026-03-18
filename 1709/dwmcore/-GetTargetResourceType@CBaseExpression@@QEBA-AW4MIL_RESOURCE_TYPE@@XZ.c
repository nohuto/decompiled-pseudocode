/*
 * XREFs of ?GetTargetResourceType@CBaseExpression@@QEBA?AW4MIL_RESOURCE_TYPE@@XZ @ 0x1801584B8
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::GetTargetResourceType(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *i; // rcx

  v1 = *(_QWORD *)(a1 + 264);
  if ( (*(_DWORD *)(v1 + 4) & 0x10000000) == 0 )
    return 0LL;
  for ( i = (_DWORD *)(v1 + 12); (*i & 0x7F000000) != 0x4000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
    ;
  return (unsigned int)i[1];
}
