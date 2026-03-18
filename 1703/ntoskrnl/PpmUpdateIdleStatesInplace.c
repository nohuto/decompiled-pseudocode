/*
 * XREFs of PpmUpdateIdleStatesInplace @ 0x140229AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdateIdleStatesInplace(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // rcx
  int *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  bool v8; // cf

  v2 = *(_QWORD *)(a1 + 23936);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(unsigned int *)(a2 + 116);
    if ( (_DWORD)v4 == *(_DWORD *)(v2 + 28) )
    {
      *(_QWORD *)(v2 + 488) = *(_QWORD *)(a2 + 8);
      if ( (_DWORD)v4 )
      {
        v5 = (int *)(a2 + 120);
        v6 = v4;
        v7 = v2 + 1000;
        do
        {
          *(_BYTE *)(v7 + 63) = (*v5 & 0x40000000) != 0;
          *(_DWORD *)v7 = v5[1];
          v7 += 248LL;
          *(_DWORD *)(v7 - 240) = v5[3];
          *(_DWORD *)(v7 - 244) = v5[2];
          *(_BYTE *)(v7 - 191) = *v5 < 0;
          v8 = (unsigned int)*v5 < 0x80000000;
          v5 += 8;
          *(_DWORD *)(v7 - 236) = !v8;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
