/*
 * XREFs of ndisWmiDisableEvents @ 0x1C00B45A4
 * Callers:
 *     ndisWMIDispatch @ 0x1C00AD13C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C0009820 (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisWmiDisableEvents(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_q(0x46u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  ndisWmiGetGuid(&v7, a1, a2, 0);
  if ( v7 )
  {
    v5 = *(_DWORD *)(v7 + 24);
    if ( (v5 & 2) != 0 )
      *(_DWORD *)(v7 + 24) = v5 & 0x7FFFFFFF;
    else
      v2 = -1073741808;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099619 >= 2u )
      WPP_SF_q(0x47u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_qD(0x48u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1, v2);
  return v2;
}
