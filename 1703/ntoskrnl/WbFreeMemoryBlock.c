/*
 * XREFs of WbFreeMemoryBlock @ 0x140548FA4
 * Callers:
 *     WbAllocateMemoryBlock @ 0x14043EE04 (WbAllocateMemoryBlock.c)
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 *     sub_140547D68 @ 0x140547D68 (sub_140547D68.c)
 */

void __fastcall WbFreeMemoryBlock(PVOID *BaseAddress)
{
  _KPROCESS *v2; // rdi
  _KPROCESS *Process; // rsi
  struct _MDL *v4; // rcx
  PVOID v5; // rcx

  if ( BaseAddress )
  {
    v2 = (_KPROCESS *)BaseAddress[2];
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v2 == Process )
    {
      v5 = BaseAddress[135];
      if ( v5 )
        MmUnsecureVirtualMemory(v5);
    }
    v4 = (struct _MDL *)BaseAddress[3];
    if ( v4 )
    {
      sub_140547D68(v4);
      BaseAddress[3] = 0LL;
    }
    BaseAddress[4] = 0LL;
    if ( *BaseAddress )
    {
      if ( v2 == Process )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, (PSIZE_T)BaseAddress + 1, 0x8000u);
      *BaseAddress = 0LL;
      BaseAddress[1] = 0LL;
    }
    ExFreePoolWithTag(BaseAddress, 0x42524157u);
  }
}
