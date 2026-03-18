/*
 * XREFs of EditionIsCompositionInputWindow @ 0x1C00EAEA0
 * Callers:
 *     <none>
 * Callees:
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 */

__int64 __fastcall EditionIsCompositionInputWindow(__int64 a1)
{
  __int64 v1; // r10
  __int64 *Prop; // rax
  __int64 v3; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 184) && (Prop = (__int64 *)FindProp(a1, CInputQueueProp::s_atom, 1)) != 0LL )
    v3 = *Prop;
  else
    v3 = v1;
  LOBYTE(v1) = v3 != 0;
  return (unsigned int)v1;
}
