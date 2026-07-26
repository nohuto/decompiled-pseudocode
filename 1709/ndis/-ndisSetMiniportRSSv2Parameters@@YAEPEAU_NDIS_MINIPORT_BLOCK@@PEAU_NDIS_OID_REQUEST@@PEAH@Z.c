/*
 * XREFs of ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B6BC
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C007C0D0 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0079E88 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007B854 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSv2Parameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  unsigned __int8 v6; // r15
  int v7; // eax
  int v8; // r14d
  unsigned __int16 v9; // cx
  KIRQL v10; // bl
  int CombinedRSSParameters; // eax
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x1Bu, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v6 = 1;
  v7 = ndisSetMiniportRSSv2ParametersHelper(a1, a2);
  v8 = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
    {
      v9 = 28;
      LODWORD(v13) = v7;
LABEL_6:
      WPP_SF_qqd(v9, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, v13);
    }
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 4131722;
    CombinedRSSParameters = ndisAllocateCombinedRSSParameters(a1, a2, 0LL, 0LL, 0LL, 0LL);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    v8 = CombinedRSSParameters;
    KeReleaseSpinLock(&a1->Lock, v10);
    if ( !v8 )
    {
      v6 = 0;
      goto LABEL_11;
    }
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
    {
      v9 = 29;
      LODWORD(v13) = v8;
      goto LABEL_6;
    }
  }
LABEL_11:
  *a3 = v8;
  if ( v8 && (unsigned __int8)byte_1C0098752 >= 2u )
  {
    LODWORD(v13) = v8;
    WPP_SF_qqd(0x1Eu, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, v13);
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v14) = *a3;
    LODWORD(v13) = v6;
    WPP_SF_qqDD(0x1Fu, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, v13, v14);
  }
  return v6;
}
