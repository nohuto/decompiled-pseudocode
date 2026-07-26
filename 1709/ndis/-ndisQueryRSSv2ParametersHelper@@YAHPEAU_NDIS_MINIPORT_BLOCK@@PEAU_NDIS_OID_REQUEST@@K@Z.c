/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007AF1C
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007AE10 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007AE84 (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ?ndisCalculateRssV2ParametersFlags@@YAKPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C007A0D0 (-ndisCalculateRssV2ParametersFlags@@YAKPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007A438 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007AA30 (-ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  KIRQL v6; // r12
  unsigned int v7; // edi
  unsigned int HashSecretKeyOffset; // edx
  unsigned int v9; // ecx
  UINT v10; // ebp
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v11; // rcx
  int v12; // eax
  __int64 v13; // r10
  _DWORD *v14; // r11
  int v15; // eax
  unsigned int v16; // eax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v18; // [rsp+70h] [rbp+8h] BYREF
  struct _NDIS_VPORT_BLOCK *v19; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xFu, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2);
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 4131407;
  if ( a1->RecvScaleCapabilities.Header.Size )
  {
    ndisGetCombinedRSSParameters(a1, a2, &v19, &v18, 0LL, 0LL);
    if ( ndisIsRssEnabledForRequest(a1, a2) )
    {
      HashSecretKeyOffset = v18->HashSecretKeyOffset;
      v9 = HashSecretKeyOffset + v18->HashSecretKeySize;
      if ( v9 >= HashSecretKeyOffset )
      {
        v10 = v9 + 28;
        v7 = 0;
        if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v9 + 28 )
        {
          v11 = v18;
          *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer = 1835392;
          v12 = ndisCalculateRssV2ParametersFlags(v11);
          v14[1] = v12;
          v14[5] = v19->VPortParams.NumQueuePairs;
          v14[6] = *(unsigned __int16 *)(v13 + 12) >> 2;
          v15 = *(_DWORD *)(v13 + 8);
          if ( a3 )
            v14[2] = a3 | (unsigned __int8)v15;
          else
            v14[2] = v15;
          v16 = *(unsigned __int16 *)(v13 + 20);
          v14[3] = v16;
          v14[4] = 28;
          if ( v16 )
            memmove(v14 + 7, (const void *)(v13 + *(unsigned int *)(v13 + 24)), v16);
          a2->DATA.QUERY_INFORMATION.BytesWritten = v10;
        }
        else
        {
          a2->DATA.QUERY_INFORMATION.BytesNeeded = v10;
          v7 = -1073676268;
        }
      }
      else
      {
        v7 = -1073676267;
      }
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x10u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, (__int64)a1, v7);
  return v7;
}
