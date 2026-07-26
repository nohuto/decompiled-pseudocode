/*
 * XREFs of ethAddOneOpenMulticastAddress @ 0x1C00C2674
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00C232C (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(__int64 a1, char *a2, _BYTE *a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  unsigned int v10; // ebp
  int v11; // esi
  size_t v12; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned __int16 v18; // ax

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xDu, &WPP_ba5984028d6c3cd85818b9c96967d805_Traceguids, a1);
  v6 = *(unsigned int *)(a1 + 456);
  v7 = 0;
  v8 = 0;
  *a3 = 1;
  if ( (_DWORD)v6 )
  {
    v14 = *(_QWORD *)(a1 + 448);
    while ( *(_DWORD *)(v14 + 12LL * v8 + 6) != *(_DWORD *)(a2 + 2) || *(_WORD *)(v14 + 12LL * v8 + 4) != *(_WORD *)a2 )
    {
      if ( ++v8 >= (unsigned int)v6 )
        goto LABEL_4;
    }
    ++*(_DWORD *)(v14 + 12LL * v8);
  }
  else
  {
LABEL_4:
    if ( (unsigned int)(v6 + 1) > *(_DWORD *)(a1 + 440) )
    {
      v7 = -1073676279;
    }
    else
    {
      memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12 * v6);
      v9 = *(_DWORD *)(a1 + 456);
      v10 = 0;
      *(_DWORD *)(a1 + 472) = v9;
      v11 = 1;
      *(_DWORD *)(a1 + 456) = v9 + 1;
      if ( v9 )
      {
        v15 = *(_QWORD *)(a1 + 464);
        v16 = *(_DWORD *)(a2 + 2);
        while ( 1 )
        {
          v17 = *(_DWORD *)(v15 + 12LL * v10 + 6);
          if ( v17 > v16 )
            break;
          if ( v17 >= v16 )
          {
            v18 = *(_WORD *)(v15 + 12LL * v10 + 4);
            if ( v18 > *(_WORD *)a2 )
              break;
            v11 = -(v18 < *(_WORD *)a2);
          }
          else
          {
            v11 = -1;
          }
          if ( ++v10 >= v9 )
            goto LABEL_6;
        }
        v11 = 1;
      }
LABEL_6:
      v12 = 12LL * v10;
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), v12);
      memmove((void *)(v12 + *(_QWORD *)(a1 + 448) + 4LL), a2, 6uLL);
      *(_DWORD *)(v12 + *(_QWORD *)(a1 + 448)) = 1;
      if ( v11 > 0 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 448) + 12LL * (v10 + 1)),
          (const void *)(v12 + *(_QWORD *)(a1 + 464)),
          12LL * (*(_DWORD *)(a1 + 472) - v10));
      *a3 = 0;
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_dd(0xEu, &WPP_ba5984028d6c3cd85818b9c96967d805_Traceguids, (unsigned __int8)*a3, v7);
  return v7;
}
