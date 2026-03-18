/*
 * XREFs of EnableDisableRegions @ 0x1C008FEB4
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0010698 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0010900 (ACPIDetectFilterDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00968E0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00A2270 (ACPIFilterIrpStopDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNSObjectType @ 0x1C00113A0 (AMLIGetNSObjectType.c)
 *     AMLIIterateSiblingsNext @ 0x1C0013824 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x1C0013A80 (AMLIGetFirstChild.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 */

__int64 __fastcall EnableDisableRegions(__int64 *a1, char a2, char a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rsi
  __int64 i; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
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
    AMLIDereferenceHandleEx((__int64)v6);
  }
  if ( IsNsobjPciBus((volatile signed __int32 *)a1) || a3 )
  {
    for ( i = (__int64)AMLIGetFirstChild(a1); ; i = AMLIIterateSiblingsNext(v9) )
    {
      v9 = (volatile signed __int32 *)i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !IsNsobjPciBus(v10) )
      {
        LOBYTE(v11) = a2;
        v12 = EnableDisableRegions(v9, v11, 0LL);
        if ( v12 < 0 )
          v5 = v12;
      }
    }
  }
  return v5;
}
