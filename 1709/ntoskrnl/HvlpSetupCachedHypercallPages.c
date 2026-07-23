/*
 * XREFs of HvlpSetupCachedHypercallPages @ 0x1401EB48C
 * Callers:
 *     HvlInitializeProcessor @ 0x1405B7BCC (HvlInitializeProcessor.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     InterlockedPushListSList @ 0x140189020 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY __fastcall HvlpSetupCachedHypercallPages(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // r14
  __int64 v2; // rdi
  PHYSICAL_ADDRESS *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v7; // rax

  v1 = a1 + 1540;
  v2 = a1[1544].Alignment + 0x2000;
  InitializeSListHead(a1 + 1540);
  v3 = (PHYSICAL_ADDRESS *)v2;
  v4 = (char *)v2;
  v5 = 3LL;
  do
  {
    PhysicalAddress = MmGetPhysicalAddress(v4);
    v4 += 4096;
    v3[2] = PhysicalAddress;
    v3->QuadPart = (LONGLONG)v4;
    v3 += 512;
    --v5;
  }
  while ( v5 );
  v7 = MmGetPhysicalAddress((PVOID)(v2 + 12288));
  *(_QWORD *)(v2 + 12288) = 0LL;
  *(PHYSICAL_ADDRESS *)(v2 + 12304) = v7;
  return InterlockedPushListSList(v1, (PSLIST_ENTRY)v2, (PSLIST_ENTRY)(v2 + 12288), 4u);
}
