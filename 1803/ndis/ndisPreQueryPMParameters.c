/*
 * XREFs of ndisPreQueryPMParameters @ 0x1C00E1EFC
 * Callers:
 *     ndisOidPrePMParameters @ 0x1C00C5980 (ndisOidPrePMParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     GetMiniportFromReqTracker @ 0x1C00C5B8C (GetMiniportFromReqTracker.c)
 */

char __fastcall ndisPreQueryPMParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 MiniportFromReqTracker; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned int v7; // r10d
  int v8; // edx
  char v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // r8
  int v15; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  MiniportFromReqTracker = GetMiniportFromReqTracker((__int64 *)a1);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = MiniportFromReqTracker;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x32u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, MiniportFromReqTracker, v1);
  *(_DWORD *)(a1 + 40) = 0;
  v7 = *(_DWORD *)(v1 + 48);
  v8 = 16;
  if ( v7 < 0x10 )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_17;
  }
  v9 = 2;
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    v10 = v6 + 1120;
LABEL_13:
    v12 = *(_QWORD *)(v1 + 40);
    v13 = 20;
    *(_OWORD *)v12 = *(_OWORD *)v10;
    if ( v7 >= 0x14 )
    {
      v8 = 20;
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(v10 + 16);
    }
    else
    {
      v9 = 1;
      v13 = 16;
    }
    *(_BYTE *)v12 = 0x80;
    *(_WORD *)(v12 + 2) = v13;
    *(_BYTE *)(v12 + 1) = v9;
    *(_DWORD *)(v1 + 52) = v8;
    *(_DWORD *)(v1 + 56) = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v10 = v5 + 308;
    goto LABEL_13;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    v10 = v11 + 880;
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_17:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v15 = 1;
    WPP_SF_qdD(0x33u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v6, *(_DWORD *)(a1 + 40), v15);
  }
  return 1;
}
