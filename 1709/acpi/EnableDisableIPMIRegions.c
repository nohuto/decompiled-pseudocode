/*
 * XREFs of EnableDisableIPMIRegions @ 0x1C00A2874
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00968E0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0013824 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x1C0013A80 (AMLIGetFirstChild.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AMLIGetNSObjectData @ 0x1C005B7A8 (AMLIGetNSObjectData.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall EnableDisableIPMIRegions(__int64 *a1, unsigned __int8 a2)
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
            AMLIDereferenceHandleEx((__int64)v9);
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
