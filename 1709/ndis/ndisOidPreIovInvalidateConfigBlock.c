/*
 * XREFs of ndisOidPreIovInvalidateConfigBlock @ 0x1C00F0700
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qqqDD @ 0x1C0042EC8 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0042F94 (WPP_SF_qqqq.c)
 */

bool __fastcall ndisOidPreIovInvalidateConfigBlock(_QWORD *a1)
{
  void *OidSourceHandle; // rax
  bool v3; // di
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qqqq(0x15u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, *a1, a1[3], a1[1], a1[4]);
  OidSourceHandle = (void *)ndisGetOidSourceHandle(a1[4]);
  if ( OidSourceHandle != &ndisIntReqGeneric )
    *((_DWORD *)a1 + 10) = -1073741637;
  v3 = OidSourceHandle != &ndisIntReqGeneric;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v6 = *((_DWORD *)a1 + 10);
    LODWORD(v5) = v3;
    WPP_SF_qqqDD(0x16u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, *a1, a1[3], a1[1], v5, v6);
  }
  return v3;
}
