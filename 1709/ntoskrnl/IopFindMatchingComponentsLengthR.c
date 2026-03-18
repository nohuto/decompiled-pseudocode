/*
 * XREFs of IopFindMatchingComponentsLengthR @ 0x1406BD5CC
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1405CDAF8 (IopSymlinkProcessReparse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopFindMatchingComponentsLengthR(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r11
  _WORD *v3; // rax
  _WORD *v4; // rcx
  unsigned __int64 v5; // r10
  _WORD *v6; // r8
  _WORD *v7; // rdx

  v2 = *((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = (_WORD *)(v2 + *a1);
  v5 = *((_QWORD *)a2 + 1);
  v6 = v4;
  if ( (unsigned __int64)v4 < v2 )
    return 0LL;
  v7 = (_WORD *)(*a2 + v5);
  do
  {
    if ( (unsigned __int64)v7 < v5 || *v6 != *v7 )
      break;
    if ( *v6 == 92 )
      v3 = v6;
    --v6;
    --v7;
  }
  while ( (unsigned __int64)v6 >= v2 );
  if ( v3 )
    return (unsigned __int16)(v4 - v3);
  else
    return 0LL;
}
