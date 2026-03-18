/*
 * XREFs of WbFreeMemoryBlock @ 0x14053A648
 * Callers:
 *     WbAllocateMemoryBlock @ 0x140539864 (WbAllocateMemoryBlock.c)
 *     WbFreeWarbirdProcess @ 0x1405399A8 (WbFreeWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x14053A19C (WbAllocateUserMemory.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     sub_14053AB64 @ 0x14053AB64 (sub_14053AB64.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
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
      sub_14053AB64(v4);
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
