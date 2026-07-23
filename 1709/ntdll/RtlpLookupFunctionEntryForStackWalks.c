/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x180025B60
 * Callers:
 *     RtlpWalkFrameChain @ 0x180024BB0 (RtlpWalkFrameChain.c)
 *     RtlpSameFunction @ 0x18007C774 (RtlpSameFunction.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(char *BaseAddress, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r11
  unsigned int v6; // r9d
  unsigned int *v7; // r10
  char *v8; // rbx
  unsigned int *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax

  v4 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int64)BaseAddress < v4 || (unsigned __int64)BaseAddress >= v4 + *(unsigned int *)(a2 + 16) )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_18016F4D0 + 1)
                                        + (unsigned __int64)(unsigned int)qword_18016F4E0 )
    {
      v5 = RtlpxLookupFunctionTable(BaseAddress);
    }
    else
    {
      *(_OWORD *)a2 = xmmword_18016F4D0;
      *(_QWORD *)(a2 + 16) = qword_18016F4E0;
      v5 = *(_QWORD *)a2;
    }
  }
  else
  {
    v5 = *(_QWORD *)a2;
  }
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 20) / 0xCu;
    v7 = 0LL;
    if ( v6 )
    {
      v8 = &BaseAddress[-*(_QWORD *)(a2 + 8)];
      v9 = (unsigned int *)(v5 + 12LL * (v6 - 1));
      if ( (unsigned __int64)v8 < *v9 )
      {
        v10 = 0;
        v11 = v6 - 2;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v9 = (unsigned int *)(v5 + 12LL * v12);
          if ( (unsigned __int64)v8 < *v9 )
          {
            v11 = v12 - 1;
          }
          else
          {
            if ( (unsigned __int64)v8 < v9[3] )
              break;
            v10 = v12 + 1;
          }
        }
      }
      if ( (unsigned __int64)v8 >= *v9 && (unsigned __int64)v8 < v9[1] )
        v7 = v9;
    }
    if ( v7 )
    {
      if ( (v7[2] & 1) != 0 )
        return (unsigned int *)(*(_QWORD *)(a2 + 8) - 1LL + v7[2]);
    }
    return v7;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
}
