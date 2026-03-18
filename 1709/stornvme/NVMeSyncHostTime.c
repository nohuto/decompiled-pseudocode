/*
 * XREFs of NVMeSyncHostTime @ 0x1C001238C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000D554 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall NVMeSyncHostTime(__int64 a1)
{
  __int64 PhysicalAddress; // rax
  void *v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  unsigned int v7; // ebx
  int i; // edx
  unsigned __int64 v9; // [rsp+30h] [rbp-10h]
  int v10; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 *v11; // [rsp+70h] [rbp+30h]
  unsigned __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0LL;
  v10 = 0;
  StorPortQuerySystemTime(&v12);
  v9 = (v12 / 0x2710 - 11644754400000LL) & 0xFFFFFFFFFFFFLL;
  NVMeAllocateDmaBuffer(a1, 8u);
  if ( !v11 )
    return 3238002691LL;
  *v11 = 0LL;
  *v11 = v9;
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v11, &v10);
  v4 = *(void **)(a1 + 656);
  *(_BYTE *)(a1 + 571) = 0;
  v5 = PhysicalAddress;
  memset(v4, 0, 0x1098uLL);
  v6 = *(_QWORD **)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v6;
  *(_DWORD *)(a1 + 560) = 1;
  v10 = SetPrpFromBuffer(a1, v6, v5, 8u);
  if ( v10 )
  {
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) |= i )
      ++i;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) |= 4u;
    SrbAssignQueueId(a1, a1 + 568);
    *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4100LL) = -1;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4096LL) = 9;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4136LL) = 14;
    ProcessCommand(a1, a1 + 568);
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, 1, 10000LL);
    v7 = *(_BYTE *)(a1 + 571) != 1 ? 0xC1000001 : 0;
  }
  else
  {
    v7 = -1056964607;
  }
  if ( v11 )
    StorPortExtendedFunction(25LL, a1, v11, 8LL);
  return v7;
}
