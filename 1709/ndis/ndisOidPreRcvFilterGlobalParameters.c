/*
 * XREFs of ndisOidPreRcvFilterGlobalParameters @ 0x1C00DA590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreRcvFilterGlobalParameters(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]

  v1 = a1[4];
  v3 = *a1;
  v4 = 0;
  v5 = a1[3];
  v6 = *(_QWORD *)(v1 + 40);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0xCu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3, v5, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( *((_DWORD *)a1 + 10) )
    goto LABEL_12;
  if ( !v3 )
    goto LABEL_13;
  if ( !*(_QWORD *)(v3 + 3552) )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_13;
    *(_QWORD *)v6 = 1048960LL;
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v3 + 3548);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(v3 + 3544);
    *(_DWORD *)(v1 + 52) = 16;
    *((_DWORD *)a1 + 10) = 0;
  }
LABEL_12:
  v4 = 1;
LABEL_13:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v9 = *((_DWORD *)a1 + 10);
    LODWORD(v8) = v4;
    WPP_SF_qqDD(0xDu, &WPP_ffc4cf2032893579d26374b00adf8efd_Traceguids, v3, v5, v8, v9);
  }
  return v4;
}
