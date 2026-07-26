/*
 * XREFs of ndisOidPrePMCapabilities @ 0x1C00D5424
 * Callers:
 *     ndisOidPrePMCurrentCapabilities @ 0x1C00D55D0 (ndisOidPrePMCurrentCapabilities.c)
 *     ndisOidPrePMHardwareCapabilities @ 0x1C00D55E0 (ndisOidPrePMHardwareCapabilities.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPrePMCapabilities(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int8 v6; // si
  char v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rax

  v2 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  v7 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(0x30u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v2, v4);
    v7 = byte_1C0092612;
  }
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8
    && (v9 = *(_QWORD *)(v8 + 24), v10 = *(_BYTE *)(v9 + 56), v10 <= 6u)
    && (v10 != 6 || *(_BYTE *)(v9 + 57) < 0x14u)
    || (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v4 + 48) < 0x34u )
    {
      *(_DWORD *)(v4 + 56) = 52;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( *(_QWORD *)a1 )
      {
        v11 = *(_QWORD *)(v4 + 40);
        v12 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFC4uLL;
        if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
        {
          *(_OWORD *)v11 = *(_OWORD *)(v12 + v2 + 1060);
          *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + v2 + 1076);
          *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + v2 + 1092);
          *(_QWORD *)(v11 + 48) = *(_QWORD *)(v12 + v2 + 1108);
          *(_DWORD *)(v11 + 56) = *(_DWORD *)(v12 + v2 + 1116);
          *(_DWORD *)(v4 + 52) = 60;
        }
        else
        {
          *(_OWORD *)v11 = *(_OWORD *)(v12 + v2 + 1060);
          *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + v2 + 1076);
          *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + v2 + 1092);
          *(_DWORD *)(v11 + 48) = *(_DWORD *)(v12 + v2 + 1108);
          *(_WORD *)(v11 + 2) = 52;
          *(_BYTE *)(v11 + 1) = 1;
          *(_DWORD *)(v4 + 52) = 52;
        }
        *(_DWORD *)(v4 + 56) = 0;
        *(_DWORD *)(a1 + 40) = 0;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qdD(0x31u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v2, *(_DWORD *)(a1 + 40), v6);
  return v6;
}
