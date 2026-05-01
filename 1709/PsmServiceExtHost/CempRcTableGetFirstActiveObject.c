/*
 * XREFs of CempRcTableGetFirstActiveObject @ 0x18001F684
 * Callers:
 *     CemRcTableGetFirst @ 0x18001F640 (CemRcTableGetFirst.c)
 *     CemRcTableGetNext @ 0x1800495FC (CemRcTableGetNext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CempRcTableGetFirstActiveObject(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rcx

  v1 = a1;
  if ( !a1 )
    return 0LL;
  while ( !*(_QWORD *)(v1 + 24) )
  {
    v3 = *(_QWORD **)(v1 + 8);
    v4 = v1;
    if ( v3 )
    {
      do
      {
        v1 = (unsigned __int64)v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
    }
    else
    {
      while ( 1 )
      {
        v1 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v1 || *(_QWORD *)v1 == v4 )
          break;
        v4 = v1;
      }
    }
    if ( !v1 )
      return 0LL;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v1 + 24)) <= 1 )
    __fastfail(0xEu);
  return v1;
}
