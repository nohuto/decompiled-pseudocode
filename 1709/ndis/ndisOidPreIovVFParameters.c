/*
 * XREFs of ndisOidPreIovVFParameters @ 0x1C00F1170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00EF72C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVFParameters(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 *VFByVFId; // rax
  _OWORD *v9; // r10
  __int64 v10; // r11
  _OWORD *v11; // rax
  __int128 v12; // xmm1

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qq(0x27u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_18;
  v4 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x660u )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x660u )
    {
      *(_DWORD *)(v1 + 68) = 1632;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 1632;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_19;
  v5 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_20;
  v6 = *(_QWORD *)(v5 + 4640);
  if ( v6 && *(_QWORD *)(v5 + 3584) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
  {
    v7 = *(_QWORD *)(v1 + 40);
    *(_DWORD *)(v1 + 64) = 1632;
    VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(v7 + 1626));
    if ( VFByVFId )
    {
      v11 = VFByVFId + 12;
      do
      {
        *v9 = *v11;
        v9[1] = v11[1];
        v9[2] = v11[2];
        v9[3] = v11[3];
        v9[4] = v11[4];
        v9[5] = v11[5];
        v9[6] = v11[6];
        v9 += 8;
        v12 = v11[7];
        v11 += 8;
        *(v9 - 1) = v12;
        --v10;
      }
      while ( v10 );
      *v9 = *v11;
      v9[1] = v11[1];
      v9[2] = v11[2];
      v9[3] = v11[3];
      v9[4] = v11[4];
      v9[5] = v11[5];
      *(_DWORD *)(v1 + 60) = 1632;
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
  }
  else
  {
LABEL_18:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_19:
  v4 = 1;
LABEL_20:
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qdD(0x28u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, v4, *(_DWORD *)(a1 + 40));
  return v4;
}
