/*
 * XREFs of ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C01292D8
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C01293C4 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindFirstScan(XCLIPOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v3; // eax
  _DWORD *v4; // r10
  _DWORD *v5; // rcx
  unsigned int v6; // r9d
  bool v7; // zf
  _DWORD *v9; // rdx
  _DWORD *v10; // rdx

  v1 = *((_QWORD *)this + 7);
  v3 = *(_DWORD *)(v1 + 84);
  if ( v3 <= 2 )
    return 0LL;
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  *((_DWORD *)this + 22) = v3 - 2;
  if ( (v4[6] & 0x800000) != 0 )
  {
    v5 = (_DWORD *)(v1 + 104 + (unsigned int)(4 * *(_DWORD *)(v1 + 104) + 16));
    v6 = 0;
    while ( 1 )
    {
      *((_QWORD *)this + 10) = v5;
      if ( *v5 )
      {
        if ( v5[2] > v4[39] )
          break;
      }
      v7 = (*((_DWORD *)this + 22))-- == 1;
      if ( v7 )
        return 0LL;
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
    }
    LOBYTE(v6) = v5[1] <= v4[31];
  }
  else
  {
    v9 = (_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL) + 16));
    v10 = (_DWORD *)((char *)v9 - (unsigned int)(4 * *v9 + 16) + 4);
    v6 = 0;
    while ( 1 )
    {
      *((_QWORD *)this + 10) = v10;
      if ( *v10 )
      {
        if ( v10[1] <= v4[39] )
          break;
      }
      v7 = (*((_DWORD *)this + 22))-- == 1;
      if ( v7 )
        return 0LL;
      v10 = (_DWORD *)((char *)v10 - (unsigned int)(4 * *(v10 - 1) + 16));
    }
    LOBYTE(v6) = v10[2] > v4[31];
  }
  return v6;
}
