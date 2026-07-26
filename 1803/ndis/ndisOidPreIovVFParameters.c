/*
 * XREFs of ndisOidPreIovVFParameters @ 0x1C00F3CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00F2344 (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVFParameters(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  int v5; // r10d
  __int64 v6; // rax
  unsigned __int8 v7; // bl
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 *VFByVFId; // rax
  _OWORD *v11; // r11
  _OWORD *v12; // rax
  __int128 v13; // xmm1

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x27u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
  v4 = 12LL;
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_19;
  v5 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x660u )
  {
    v5 = -1073676268;
LABEL_8:
    *(_DWORD *)(v1 + 68) = 1632;
LABEL_20:
    *(_DWORD *)(a1 + 40) = v5;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x660u )
  {
    v5 = -1073676266;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v7 = 0;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(v6 + 4640);
  if ( !v8 || !*(_QWORD *)(v6 + 3584) || (*(_BYTE *)(v8 + 8) & 3) != 3 )
  {
LABEL_19:
    v5 = -1073741637;
    goto LABEL_20;
  }
  v9 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 64) = 1632;
  VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(v9 + 1626));
  if ( VFByVFId )
  {
    v12 = VFByVFId + 12;
    do
    {
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11 += 8;
      v13 = v12[7];
      v12 += 8;
      *(v11 - 1) = v13;
      --v4;
    }
    while ( v4 );
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v11[5] = v12[5];
    *(_DWORD *)(v1 + 60) = 1632;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
  v5 = -1073741811;
LABEL_21:
  v7 = 1;
LABEL_22:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qdD(0x28u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v7, v5);
  return v7;
}
