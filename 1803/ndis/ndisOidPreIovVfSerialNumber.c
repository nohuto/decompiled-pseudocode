/*
 * XREFs of ndisOidPreIovVfSerialNumber @ 0x1C00F4210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVfSerialNumber(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  _DWORD *v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x4Fu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_11;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 8u )
  {
    if ( !v3 )
      goto LABEL_13;
    v5 = *(_QWORD *)(v3 + 4640);
    if ( v5 && (*(_BYTE *)(v5 + 8) & 5) == 5 && *(_QWORD *)(v3 + 4896) )
    {
      v6 = *(_DWORD **)(v1 + 40);
      *v6 = 524672;
      v6[1] = *(_DWORD *)(v3 + 4904);
      *(_DWORD *)(v1 + 52) = 8;
      goto LABEL_12;
    }
LABEL_11:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_12;
  }
  *(_DWORD *)(v1 + 56) = 8;
  *(_DWORD *)(a1 + 40) = -1073676268;
LABEL_12:
  v4 = 1;
LABEL_13:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x50u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v4, v8);
  }
  return v4;
}
