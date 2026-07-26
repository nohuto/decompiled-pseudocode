/*
 * XREFs of ndisMFakeSendNetBufferLists @ 0x1C0013670
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0012F00 (NdisSendNetBufferLists.c)
 * Callees:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C00139F0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisMFakeSendNetBufferLists(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  int v7; // ecx
  __int64 *i; // rax
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(81LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2);
  v7 = *(_DWORD *)(a1 + 540);
  for ( i = a2; i; i = (__int64 *)*i )
    *((_DWORD *)i + 35) = v7;
  result = ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    return WPP_SF_qq(82LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, a2);
  return result;
}
