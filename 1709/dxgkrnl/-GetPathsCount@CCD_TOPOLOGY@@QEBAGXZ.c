/*
 * XREFs of ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000BDE0
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::GetPathsCount(CCD_TOPOLOGY *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 8);
  result = 0LL;
  if ( v1 )
    return *(unsigned __int16 *)(v1 + 20);
  return result;
}
