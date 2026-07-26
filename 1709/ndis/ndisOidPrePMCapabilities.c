/*
 * XREFs of ndisOidPrePMCapabilities @ 0x1C00DFA74
 * Callers:
 *     ndisOidPrePMCurrentCapabilities @ 0x1C00DFC10 (ndisOidPrePMCurrentCapabilities.c)
 *     ndisOidPrePMHardwareCapabilities @ 0x1C00DFC30 (ndisOidPrePMHardwareCapabilities.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPrePMCapabilities(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int8 v6; // si
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rax

  v2 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x30u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v2, v4);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 24), v9 = *(_BYTE *)(v8 + 56), v9 <= 6u) && (v9 != 6 || *(_BYTE *)(v8 + 57) < 0x14u)
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
        v10 = *(_QWORD *)(v4 + 40);
        v11 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFC4uLL;
        if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
        {
          *(_OWORD *)v10 = *(_OWORD *)(v11 + v2 + 1060);
          *(_OWORD *)(v10 + 16) = *(_OWORD *)(v11 + v2 + 1076);
          *(_OWORD *)(v10 + 32) = *(_OWORD *)(v11 + v2 + 1092);
          *(_QWORD *)(v10 + 48) = *(_QWORD *)(v11 + v2 + 1108);
          *(_DWORD *)(v10 + 56) = *(_DWORD *)(v11 + v2 + 1116);
          *(_DWORD *)(v4 + 52) = 60;
        }
        else
        {
          *(_OWORD *)v10 = *(_OWORD *)(v11 + v2 + 1060);
          *(_OWORD *)(v10 + 16) = *(_OWORD *)(v11 + v2 + 1076);
          *(_OWORD *)(v10 + 32) = *(_OWORD *)(v11 + v2 + 1092);
          *(_DWORD *)(v10 + 48) = *(_DWORD *)(v11 + v2 + 1108);
          *(_WORD *)(v10 + 2) = 52;
          *(_BYTE *)(v10 + 1) = 1;
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qdD(0x31u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v2, *(_DWORD *)(a1 + 40), v6);
  return v6;
}
