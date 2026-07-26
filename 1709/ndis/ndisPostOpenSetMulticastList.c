/*
 * XREFs of ndisPostOpenSetMulticastList @ 0x1C00039D0
 * Callers:
 *     ndisOidPostEthMulticastList @ 0x1C00038E0 (ndisOidPostEthMulticastList.c)
 *     ndisOidPostEthMulticastOid @ 0x1C001EFD0 (ndisOidPostEthMulticastOid.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisPostOpenSetMulticastList(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v7; // rsi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v3 + 400);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqL(127LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v3, a1, a2, a3);
  if ( *(_DWORD *)(a2 + 160) )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 152);
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 160);
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_DWORD *)(a2 + 160) = 0;
  }
  if ( a3 )
  {
    result = *(unsigned int *)(a1 + 472);
    if ( (_DWORD)result )
    {
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), 12 * result);
      result = *(unsigned int *)(a1 + 472);
      *(_DWORD *)(a1 + 456) = result;
    }
    *(_DWORD *)(a1 + 472) = 0;
    if ( *(_DWORD *)(v7 + 372) )
    {
      memmove(*(void **)(v7 + 352), *(const void **)(v7 + 360), (unsigned int)(6 * *(_DWORD *)(v7 + 344)));
      result = *(unsigned int *)(v7 + 372);
      *(_DWORD *)(v7 + 368) = result;
    }
    *(_DWORD *)(v7 + 372) = 0;
    *(_DWORD *)(a2 + 52) = 0;
    *(_DWORD *)(a2 + 56) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 472) = 0;
    *(_DWORD *)(v7 + 372) = 0;
    result = *(unsigned int *)(a2 + 48);
    *(_DWORD *)(a2 + 52) = result;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    return WPP_SF_qqqL(128LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v3, a1, a2, a3);
  return result;
}
