/*
 * XREFs of EmpEvaluateParseNodeMapping @ 0x140070A10
 * Callers:
 *     EmpEvaluateNodeLink @ 0x140070590 (EmpEvaluateNodeLink.c)
 * Callees:
 *     <none>
 */

char __fastcall EmpEvaluateParseNodeMapping(
        unsigned int *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9,
        unsigned int a10,
        _DWORD *a11,
        unsigned int a12,
        _QWORD *a13,
        unsigned int a14)
{
  _QWORD *v17; // rdx
  unsigned int v18; // esi
  unsigned int v19; // r9d
  unsigned int *v20; // r8
  __int64 v21; // rax
  _DWORD *v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rax

  if ( !a1 )
    return 0;
  if ( a2 != a10 + a12 + a14 )
    return 0;
  v17 = a9;
  v18 = 0;
  if ( a9 && (v19 = 0, a10) )
  {
    v20 = a1;
    while ( 1 )
    {
      v21 = *v20;
      if ( (unsigned int)v21 >= a4 )
        break;
      ++v19;
      *v17 = *(_QWORD *)(a3 + 8 * v21);
      ++v20;
      ++v17;
      if ( v19 >= a10 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v22 = a11;
    if ( a11 && (v23 = 0, a12) )
    {
      while ( 1 )
      {
        v24 = a1[v23 + a10];
        if ( (unsigned int)v24 >= a6 )
          break;
        ++v23;
        *v22++ = *(_DWORD *)(a5 + 4 * v24);
        if ( v23 >= a12 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v25 = a13;
      if ( !a13 || !a14 )
        return 1;
      while ( 1 )
      {
        v26 = a1[a10 + a12 + v18];
        if ( (unsigned int)v26 >= a8 )
          break;
        ++v18;
        *v25++ = *(_QWORD *)(a7 + 8 * v26);
        if ( v18 >= a14 )
          return 1;
      }
    }
  }
  return 0;
}
