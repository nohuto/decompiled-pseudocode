/*
 * XREFs of ndisOidPreIovInvalidateConfigBlock @ 0x1C00F32B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qqqDD @ 0x1C0044014 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0044080 (WPP_SF_qqqq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovInvalidateConfigBlock(_QWORD *a1)
{
  unsigned __int8 v2; // di
  __int64 v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = 1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qqqq(0x15u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, *a1, a1[3], a1[1], a1[4]);
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(a1[4]) == &ndisIntReqGeneric )
    v2 = 0;
  else
    *((_DWORD *)a1 + 10) = -1073741637;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v5 = *((_DWORD *)a1 + 10);
    LODWORD(v4) = v2;
    WPP_SF_qqqDD(0x16u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, *a1, a1[3], a1[1], v4, v5);
  }
  return v2;
}
