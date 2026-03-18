/*
 * XREFs of RtlRbReplaceNode @ 0x140025BB0
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRbReplaceNode(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool v4; // zf
  __int64 v5; // rdx
  _QWORD *result; // rax

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(*(_QWORD *)a3 + 16LL) = a3 | *(_DWORD *)(*(_QWORD *)a3 + 16LL) & 3;
  }
  else if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL) == a2 )
  {
    v4 = (*(_BYTE *)(a1 + 8) & 1) == 0;
    *(_QWORD *)(a1 + 8) = a3;
    if ( !v4 )
      *(_BYTE *)(a1 + 8) |= 1u;
  }
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
    *(_QWORD *)(v5 + 16) = a3 | *(_DWORD *)(v5 + 16) & 3;
  result = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( result )
  {
    if ( *result == a2 )
      *result = a3;
    else
      result[1] = a3;
  }
  else
  {
    *(_QWORD *)a1 = a3;
  }
  return result;
}
