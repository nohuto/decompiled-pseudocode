/*
 * XREFs of EnableDisableIPMIRegions @ 0x1C007DF7C
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0078860 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIGetFirstChild @ 0x1C00439BC (AMLIGetFirstChild.c)
 *     AMLIGetNSObjectData @ 0x1C0043A34 (AMLIGetNSObjectData.c)
 *     AMLIIterateSiblingsNext @ 0x1C0043EB0 (AMLIIterateSiblingsNext.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall EnableDisableIPMIRegions(_QWORD *a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // si
  volatile signed __int32 *i; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  int v10; // eax
  volatile signed __int32 *v11; // rbx
  _QWORD v13[13]; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+B0h] [rbp+18h]

  v2 = 0;
  v3 = a2;
  for ( i = AMLIGetFirstChild(a1); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v11) )
  {
    v11 = i;
    if ( !i )
      break;
    v7 = *(unsigned __int16 *)(AMLIGetNSObjectData(i) + 2);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = v3;
      v10 = EnableDisableIPMIRegions(v11, v6);
      if ( v10 < 0 )
        v2 = v10;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(AMLIGetNSObjectData(v11) + 32);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 7 )
        {
          v9 = AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v13, 0, 0x50uLL);
            WORD1(v13[0]) = 1;
            WORD1(v13[5]) = 1;
            v13[2] = 7LL;
            v13[7] = a2;
            v15 = AMLIAsyncEvalObject(v9, 0LL, 2u, v13, 0LL, 0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
            v3 = a2;
            if ( v15 < 0 )
              v2 = v15;
          }
          else
          {
            v3 = a2;
          }
        }
      }
    }
  }
  return v2;
}
