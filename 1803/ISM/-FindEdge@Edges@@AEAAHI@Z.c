/*
 * XREFs of ?FindEdge@Edges@@AEAAHI@Z @ 0x180068998
 * Callers:
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180067C38 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180068494 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28 (-FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edges::FindEdge(Edges *this, int a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rdx
  _DWORD *i; // rax

  v2 = 0;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v4 = (*((_QWORD *)this + 1) - *(_QWORD *)this) / 96LL;
  if ( (int)v4 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)(*(_QWORD *)this + 64LL); *i != a2; i += 24 )
  {
    if ( (int)++v2 >= (int)v4 )
      return 0xFFFFFFFFLL;
  }
  return v2;
}
