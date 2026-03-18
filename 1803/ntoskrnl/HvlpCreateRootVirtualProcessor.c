/*
 * XREFs of HvlpCreateRootVirtualProcessor @ 0x140717C40
 * Callers:
 *     HvlpEnableRootVirtualProcessor @ 0x140717D50 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14015D800 (HvcallInitiateHypercall.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvcallInitInputControl @ 0x1402C0D94 (HvcallInitInputControl.c)
 */

__int64 __fastcall HvlpCreateRootVirtualProcessor(__int64 a1, int a2)
{
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rax
  __int16 v7; // bx
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 12)] + 160);
  HvcallInitInputControl(78, &v9);
  while ( 1 )
  {
    result = HvlpDepositPages(*(_WORD *)(a1 + 12));
    if ( (_DWORD)result )
      break;
    v6 = HvlpAcquireHypercallPage(v8, 1, 0LL, 32LL);
    *(_QWORD *)v6 = HvlPartitionId;
    *(_DWORD *)(v6 + 8) = a2;
    *(_DWORD *)(v6 + 16) = v4;
    *(_DWORD *)(v6 + 20) = -2147483647;
    *(_QWORD *)(v6 + 24) = *(unsigned int *)(a1 + 4);
    v7 = HvcallInitiateHypercall();
    HvlpReleaseHypercallPage((__int64)v8);
    if ( v7 != 11 )
      return v7 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
