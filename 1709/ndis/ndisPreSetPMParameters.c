/*
 * XREFs of ndisPreSetPMParameters @ 0x1C00ADE04
 * Callers:
 *     ndisOidPrePMParameters @ 0x1C00ADD80 (ndisOidPrePMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00E174C (ndisSetEnableWakeUp.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0003200 (ndisGetCombinedPMConfig.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisXlatePMParametersToWakeUpEnableOid @ 0x1C004A924 (ndisXlatePMParametersToWakeUpEnableOid.c)
 *     GetMiniportFromReqTracker @ 0x1C00ADF9C (GetMiniportFromReqTracker.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ADFCC (ndisMiniportPMParametersUpdated.c)
 *     ndisSetMiniportEnableWakeUp @ 0x1C00E1968 (ndisSetMiniportEnableWakeUp.c)
 */

unsigned __int8 __fastcall ndisPreSetPMParameters(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // si
  __int64 MiniportFromReqTracker; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int128 *v13; // rax
  __int128 v14; // xmm0
  unsigned __int8 v15; // al
  int v16; // eax
  char v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 1;
  v17 = 1;
  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v6 = *(_QWORD *)(v5 + 24);
  v7 = MiniportFromReqTracker;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x34u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportFromReqTracker, v1);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_19;
  v8 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_BYTE *)v8 != 0x80 || !*(_BYTE *)(v8 + 1) || *(_WORD *)(v8 + 2) < 0x10u )
    *(_DWORD *)(a1 + 40) = -1073676267;
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_19;
  v9 = *(_DWORD *)(v8 + 4);
  if ( (v9 & 2) != 0 && (unsigned int)(*(_DWORD *)(v7 + 1100) - 2) > 2
    || (v9 & 0xFFFFFFFD & *(_DWORD *)(v7 + 1068)) != (v9 & 0xFFFFFFFD)
    || (*(_DWORD *)(v8 + 8) & *(_DWORD *)(v7 + 1088)) != *(_DWORD *)(v8 + 8)
    || (*(_DWORD *)(v8 + 12) & 1) != 0 && (unsigned int)(*(_DWORD *)(v7 + 1108) - 2) > 2 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v12 = v6 + 308;
LABEL_23:
    v13 = *(__int128 **)(v1 + 40);
    v14 = *v13;
    if ( *(_DWORD *)(v1 + 48) < 0x14u )
    {
      *(_OWORD *)v12 = v14;
    }
    else
    {
      *(_OWORD *)v12 = v14;
      *(_DWORD *)(v12 + 16) = *((_DWORD *)v13 + 4);
    }
    ndisGetCombinedPMConfig(v7, v7 + 1120);
    ndisMiniportPMParametersUpdated(v7);
    v17 = 0;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    v12 = v10 + 880;
    goto LABEL_23;
  }
LABEL_17:
  if ( !*(_QWORD *)a1 )
    goto LABEL_18;
  v15 = *(_BYTE *)(v7 + 32);
  if ( v15 <= 6u && (v15 != 6 || *(_BYTE *)(v7 + 33) < 0x14u) )
  {
    ndisXlatePMParametersToWakeUpEnableOid(v1);
    v16 = ndisSetMiniportEnableWakeUp(v7, v1, &v17);
    v2 = v17;
    *(_DWORD *)(a1 + 40) = v16;
    if ( v2 == 1 )
      goto LABEL_19;
  }
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric
    || (*(_DWORD *)(*(_QWORD *)(v7 + 3784) + 120LL) & 8) != 0 )
  {
LABEL_18:
    v2 = 0;
  }
  else
  {
    v2 = 1;
  }
LABEL_19:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qdD(0x35u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v7, *(_DWORD *)(a1 + 40), v2);
  return v2;
}
