/*
 * XREFs of ndisOidPrePMProtocolOffloadList @ 0x1C00DFC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

char __fastcall ndisOidPrePMProtocolOffloadList(__int64 *a1)
{
  __int64 v1; // r14
  char v2; // bl
  __int64 v3; // r15
  unsigned int v4; // ebp
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  int v14; // ecx
  __int64 *v15; // rdx
  _QWORD *i; // rax
  __int64 j; // r8

  v1 = *a1;
  v2 = 0;
  v3 = a1[3];
  v4 = 0;
  v5 = a1[4];
  v6 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0x6Bu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v1, v3, v5);
  v8 = a1[3];
  if ( v8
    && (v9 = *(_QWORD *)(v8 + 24), v10 = *(_BYTE *)(v9 + 56), v10 <= 6u)
    && (v10 != 6 || *(_BYTE *)(v9 + 57) < 0x14u)
    || (v11 = a1[1]) != 0
    && (*(_DWORD *)(v5 + 88) & 0x4000) == 0
    && (v12 = *(_QWORD *)(v11 + 16), v13 = *(_BYTE *)(v12 + 100), v13 <= 6u)
    && (v13 != 6 || *(_BYTE *)(v12 + 101) < 0x14u)
    || (v14 = *(_DWORD *)(v5 + 4), (v14 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_32:
    v2 = 1;
    goto LABEL_33;
  }
  if ( v8 && !v14 )
  {
    v15 = *(__int64 **)(v3 + 512);
LABEL_24:
    for ( i = v15; i; v4 += 240 )
      i = (_QWORD *)*i;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v5 + 48) < v4 )
    {
      *(_DWORD *)(v5 + 56) = v4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      for ( j = *(_QWORD *)(v5 + 40); v15; v15 = (__int64 *)*v15 )
      {
        v6 += 240;
        *(_OWORD *)j = *((_OWORD *)v15 + 3);
        *(_OWORD *)(j + 16) = *((_OWORD *)v15 + 4);
        *(_OWORD *)(j + 32) = *((_OWORD *)v15 + 5);
        *(_OWORD *)(j + 48) = *((_OWORD *)v15 + 6);
        *(_OWORD *)(j + 64) = *((_OWORD *)v15 + 7);
        *(_OWORD *)(j + 80) = *((_OWORD *)v15 + 8);
        *(_OWORD *)(j + 96) = *((_OWORD *)v15 + 9);
        *(_OWORD *)(j + 112) = *((_OWORD *)v15 + 10);
        *(_OWORD *)(j + 128) = *((_OWORD *)v15 + 11);
        *(_OWORD *)(j + 144) = *((_OWORD *)v15 + 12);
        *(_OWORD *)(j + 160) = *((_OWORD *)v15 + 13);
        *(_OWORD *)(j + 176) = *((_OWORD *)v15 + 14);
        *(_OWORD *)(j + 192) = *((_OWORD *)v15 + 15);
        *(_OWORD *)(j + 208) = *((_OWORD *)v15 + 16);
        *(_OWORD *)(j + 224) = *((_OWORD *)v15 + 17);
        *(_DWORD *)(j + 152) = *v15 != 0 ? v6 : 0;
        j += 240LL;
      }
      *(_DWORD *)(v5 + 52) = v6;
    }
    goto LABEL_32;
  }
  if ( v11 && (*(_DWORD *)(v5 + 88) & 0x4000) == 0 && !v14 )
  {
    v15 = *(__int64 **)(v11 + 864);
    goto LABEL_24;
  }
  if ( *a1 && v14 == 2 )
  {
    v15 = *(__int64 **)(v1 + 976);
    goto LABEL_24;
  }
LABEL_33:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqL(0x6Cu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v1, v3, v5, *((_DWORD *)a1 + 10));
  return v2;
}
