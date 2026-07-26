/*
 * XREFs of ndisPostOpenSetMulticastList @ 0x1C001DB8C
 * Callers:
 *     ndisOidPostEthMulticastList @ 0x1C001DAA0 (ndisOidPostEthMulticastList.c)
 *     ndisOidPostEthMulticastOid @ 0x1C0025480 (ndisOidPostEthMulticastOid.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

void __fastcall ndisPostOpenSetMulticastList(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v3 + 400);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(124LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, a2, a3);
  v8 = 0;
  if ( *(_DWORD *)(a2 + 160) )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 152);
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 160);
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_DWORD *)(a2 + 160) = 0;
  }
  if ( a3 )
  {
    v9 = *(unsigned int *)(a1 + 472);
    if ( (_DWORD)v9 )
    {
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), 12 * v9);
      *(_DWORD *)(a1 + 456) = *(_DWORD *)(a1 + 472);
    }
    *(_DWORD *)(a1 + 472) = 0;
    if ( *(_DWORD *)(v7 + 372) )
    {
      memmove(*(void **)(v7 + 352), *(const void **)(v7 + 360), (unsigned int)(6 * *(_DWORD *)(v7 + 344)));
      *(_DWORD *)(v7 + 368) = *(_DWORD *)(v7 + 372);
    }
    *(_DWORD *)(v7 + 372) = 0;
    *(_DWORD *)(a2 + 56) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 472) = 0;
    *(_DWORD *)(v7 + 372) = 0;
    v8 = *(_DWORD *)(a2 + 48);
  }
  *(_DWORD *)(a2 + 52) = v8;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(125LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, a1, a2, a3);
}
