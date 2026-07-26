/*
 * XREFs of ndisOidPreIovInvalidateConfigBlock @ 0x1C00E70F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     WPP_SF_qqqDD @ 0x1C0045D28 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0045D94 (WPP_SF_qqqq.c)
 */

bool __fastcall ndisOidPreIovInvalidateConfigBlock(_QWORD *a1)
{
  void *OidSourceHandle; // rax
  unsigned __int8 v3; // r8
  bool v4; // di
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qqqq(0x15u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, *a1, a1[3], a1[1], a1[4]);
  OidSourceHandle = (void *)ndisGetOidSourceHandle(a1[4]);
  if ( OidSourceHandle != &ndisIntReqGeneric )
    *((_DWORD *)a1 + 10) = -1073741637;
  v4 = OidSourceHandle != &ndisIntReqGeneric;
  if ( v3 >= 4u )
  {
    v7 = *((_DWORD *)a1 + 10);
    LODWORD(v6) = v4;
    WPP_SF_qqqDD(0x16u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, *a1, a1[3], a1[1], v6, v7);
  }
  return v4;
}
