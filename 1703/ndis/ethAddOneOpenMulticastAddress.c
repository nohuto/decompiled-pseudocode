/*
 * XREFs of ethAddOneOpenMulticastAddress @ 0x1C00A8224
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00A7EEC (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(__int64 a1, char *a2, _BYTE *a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // ebp
  size_t v12; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned __int16 v18; // ax

  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0xDu, &WPP_ba5984028d6c3cd85818b9c96967d805_Traceguids, a1);
  v6 = *(unsigned int *)(a1 + 456);
  v7 = 0;
  v8 = 0;
  *a3 = 1;
  v9 = 1;
  if ( (_DWORD)v6 )
  {
    v14 = *(_QWORD *)(a1 + 448);
    while ( *(_DWORD *)(v14 + 12LL * v8 + 6) != *(_DWORD *)(a2 + 2) || *(_WORD *)(v14 + 12LL * v8 + 4) != *(_WORD *)a2 )
    {
      ++v8;
      v9 = 1;
      if ( v8 >= (unsigned int)v6 )
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
      v10 = *(_DWORD *)(a1 + 456);
      v11 = 0;
      *(_DWORD *)(a1 + 472) = v10;
      *(_DWORD *)(a1 + 456) = v10 + 1;
      if ( v10 )
      {
        v15 = *(_QWORD *)(a1 + 464);
        v16 = *(_DWORD *)(a2 + 2);
        while ( 1 )
        {
          v17 = *(_DWORD *)(v15 + 12LL * v11 + 6);
          if ( v17 > v16 )
            break;
          if ( v17 >= v16 )
          {
            v18 = *(_WORD *)(v15 + 12LL * v11 + 4);
            if ( v18 > *(_WORD *)a2 )
              break;
            v9 = -(v18 < *(_WORD *)a2);
          }
          else
          {
            v9 = -1;
          }
          if ( ++v11 >= v10 )
            goto LABEL_6;
        }
        v9 = 1;
      }
LABEL_6:
      v12 = 12LL * v11;
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), v12);
      memmove((void *)(v12 + *(_QWORD *)(a1 + 448) + 4LL), a2, 6uLL);
      *(_DWORD *)(v12 + *(_QWORD *)(a1 + 448)) = 1;
      if ( v9 > 0 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 448) + 12LL * (v11 + 1)),
          (const void *)(v12 + *(_QWORD *)(a1 + 464)),
          12LL * (*(_DWORD *)(a1 + 472) - v11));
      *a3 = 0;
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_dd(0xEu, &WPP_ba5984028d6c3cd85818b9c96967d805_Traceguids, (unsigned __int8)*a3, v7);
  return v7;
}
