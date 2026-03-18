/*
 * XREFs of HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C0005C00
 * Callers:
 *     HUBHTX_ClearTTBuffer @ 0x1C0005E30 (HUBHTX_ClearTTBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_GetClearTtBufferInfoForEndpoint(__int64 a1, __int64 a2, char a3, _WORD *a4)
{
  bool v5; // cc
  unsigned int v7; // r10d
  __int64 *v8; // rdi
  __int64 i; // rcx
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int16 v15; // cx

  v5 = *(_DWORD *)(a1 + 172) <= 1u;
  v7 = -1073741823;
  *a4 = 0;
  if ( v5 )
  {
    if ( a2 == *(_QWORD *)(a1 + 88) )
    {
      *a4 = a3 & 0xF | (16 * (*(_WORD *)(a1 + 1648) & 0x7F));
      return 0;
    }
    else
    {
      v8 = (__int64 *)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = *v8; ; i = *(_QWORD *)(v10 + 8) )
      {
        v10 = i - 8;
        if ( v8 == (__int64 *)(v10 + 8) )
          break;
        v11 = *(_DWORD *)(v10 + 24);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = (_QWORD *)(v10 + 40);
          while ( *v13 != a2 )
          {
            v12 = (unsigned int)(v12 + 1);
            v13 += 9;
            if ( (unsigned int)v12 >= v11 )
              goto LABEL_10;
          }
          v14 = *(_QWORD *)(v10 + 72 * (v12 + 1));
          if ( (*(_BYTE *)(v14 + 3) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v14 + 3) & 3) != 2 )
              return v7;
            *a4 = 4096;
          }
          else
          {
            *a4 = 0;
          }
          v15 = a3 & 0xF | *a4 & 0xF800 | (16 * (*(_WORD *)(a1 + 1648) & 0x7F));
          *a4 = v15;
          if ( a3 < 0 )
            *a4 = v15 | 0x8000;
          return 0;
        }
LABEL_10:
        ;
      }
    }
  }
  return v7;
}
