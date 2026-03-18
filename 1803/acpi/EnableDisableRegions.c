/*
 * XREFs of EnableDisableRegions @ 0x1C007FB94
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0024910 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0078860 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007C600 (ACPIFilterIrpStopDevice.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C0001D20 (AMLIGetNSObjectType.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIGetFirstChild @ 0x1C00439BC (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0043EB0 (AMLIIterateSiblingsNext.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C007FC90 (IsNsobjPciBus.c)
 */

__int64 __fastcall EnableDisableRegions(_QWORD *a1, char a2, char a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rsi
  __int64 i; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  volatile signed __int32 *v11; // rbx
  _QWORD v13[10]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v6 = AMLIGetNamedChild(a1, 1195725407);
  if ( v6 )
  {
    memset(v13, 0, sizeof(v13));
    WORD1(v13[0]) = 1;
    WORD1(v13[5]) = 1;
    v13[2] = 2LL;
    v13[7] = a2 != 0;
    v5 = AMLIEvalNameSpaceObject(v6, 0LL, 2u, v13);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  }
  if ( (unsigned __int8)IsNsobjPciBus(a1) || a3 )
  {
    for ( i = (__int64)AMLIGetFirstChild(a1); ; i = AMLIIterateSiblingsNext(v11) )
    {
      v11 = (volatile signed __int32 *)i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !(unsigned __int8)IsNsobjPciBus(v8) )
      {
        LOBYTE(v9) = a2;
        v10 = EnableDisableRegions(v11, v9, 0LL);
        if ( v10 < 0 )
          v5 = v10;
      }
    }
  }
  return v5;
}
