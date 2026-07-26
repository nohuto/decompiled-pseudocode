/*
 * XREFs of NdisMRegisterMiniport @ 0x1C00DFCA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisRegisterMiniportDriver @ 0x1C01046B8 (ndisRegisterMiniportDriver.c)
 */

NDIS_STATUS __stdcall NdisMRegisterMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength)
{
  __int64 v3; // rdi
  int v7; // ebx
  int v8; // eax
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)NdisWrapperHandle);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( CharacteristicsLength >= 0x70 )
  {
    if ( *(_BYTE *)MiniportCharacteristics < 6u )
    {
      v8 = ndisRegisterMiniportDriver(NdisWrapperHandle, MiniportCharacteristics, CharacteristicsLength, &v10);
      v3 = v10;
      v7 = v8;
    }
    else
    {
      v7 = -1073676284;
    }
  }
  else
  {
    v7 = -1073676283;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xBu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, v3, v7);
  return v7;
}
