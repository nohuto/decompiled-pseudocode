/*
 * XREFs of ndisOidPreIovVfSerialNumber @ 0x1C00F16A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
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
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x4Fu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_12;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 8u )
  {
    *(_DWORD *)(v1 + 56) = 8;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_13;
  if ( !v3 )
    goto LABEL_14;
  v5 = *(_QWORD *)(v3 + 4640);
  if ( v5 && (*(_BYTE *)(v5 + 8) & 5) == 5 && *(_QWORD *)(v3 + 4896) )
  {
    v6 = *(_DWORD **)(v1 + 40);
    *v6 = 524672;
    v6[1] = *(_DWORD *)(v3 + 4904);
    *(_DWORD *)(v1 + 52) = 8;
  }
  else
  {
LABEL_12:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_13:
  v4 = 1;
LABEL_14:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x50u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v4, v8);
  }
  return v4;
}
