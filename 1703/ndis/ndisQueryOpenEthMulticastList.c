/*
 * XREFs of ndisQueryOpenEthMulticastList @ 0x1C00D2FF8
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C00BA080 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     EthQueryOpenFilterAddresses @ 0x1C0062E88 (EthQueryOpenFilterAddresses.c)
 */

__int64 __fastcall ndisQueryOpenEthMulticastList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  EthQueryOpenFilterAddresses(
    &v7,
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL),
    a1,
    *(_DWORD *)(a2 + 48),
    &v8,
    *(char **)(a2 + 40));
  result = v7;
  if ( v7 == -1073741823 )
  {
    result = 3221291028LL;
    v5 = 6 * *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a2 + 52) = 0;
    *(_DWORD *)(a2 + 56) = v5;
  }
  else
  {
    v6 = v8;
    *(_DWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 52) = 6 * v6;
  }
  return result;
}
