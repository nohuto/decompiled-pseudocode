/*
 * XREFs of ndisPreQueryPMParameters @ 0x1C00E071C
 * Callers:
 *     ndisOidPrePMParameters @ 0x1C00ADD80 (ndisOidPrePMParameters.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     GetMiniportFromReqTracker @ 0x1C00ADF9C (GetMiniportFromReqTracker.c)
 */

char __fastcall ndisPreQueryPMParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 MiniportFromReqTracker; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // xmm0
  int v12; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  MiniportFromReqTracker = GetMiniportFromReqTracker((__int64 *)a1);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = MiniportFromReqTracker;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x32u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportFromReqTracker, v1);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(v1 + 4) == 2 )
    {
      v7 = v6 + 1120;
LABEL_14:
      v9 = *(_QWORD *)(v1 + 40);
      v10 = *(_OWORD *)v7;
      if ( *(_DWORD *)(v1 + 48) >= 0x14u )
      {
        *(_OWORD *)v9 = v10;
        *(_DWORD *)(v9 + 16) = *(_DWORD *)(v7 + 16);
        *(_DWORD *)v9 = 1311360;
        *(_DWORD *)(v1 + 52) = 20;
      }
      else
      {
        *(_OWORD *)v9 = v10;
        *(_DWORD *)v9 = 1048960;
        *(_DWORD *)(v1 + 52) = 16;
      }
      *(_DWORD *)(v1 + 56) = 0;
      goto LABEL_18;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v7 = v5 + 308;
      goto LABEL_14;
    }
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
    {
      v7 = v8 + 880;
      goto LABEL_14;
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_18:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v12 = 1;
    WPP_SF_qdD(0x33u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v6, *(_DWORD *)(a1 + 40), v12);
  }
  return 1;
}
