/*
 * XREFs of sub_140501FD0 @ 0x140501FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140501FD0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    if ( a2 )
      return a2 - *a1;
    else
      LOBYTE(v2) = -1;
  }
  else
  {
    LOBYTE(v2) = a2 != 0;
  }
  return v2;
}
