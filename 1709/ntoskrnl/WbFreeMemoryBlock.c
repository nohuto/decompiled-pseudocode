/*
 * XREFs of WbFreeMemoryBlock @ 0x14057631C
 * Callers:
 *     WbAllocateMemoryBlock @ 0x140575B10 (WbAllocateMemoryBlock.c)
 *     WbFreeWarbirdProcess @ 0x140575EBC (WbFreeWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x14017DC80 (ZwFreeVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 *     sub_1405763A4 @ 0x1405763A4 (sub_1405763A4.c)
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
      sub_1405763A4(v4);
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
