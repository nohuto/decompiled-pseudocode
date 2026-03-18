/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x1406EA590
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmChangeKernelCfgBitmap(unsigned __int64 a1)
{
  struct _KTHREAD **PteAddress; // rax
  __int64 v2; // r9
  struct _KTHREAD **v3; // rbx
  char v4; // r8
  struct _KTHREAD *result; // rax

  PteAddress = (struct _KTHREAD **)MiGetPteAddress(a1);
  v3 = PteAddress;
  if ( v4 )
  {
    result = (struct _KTHREAD *)MiMakeValidPte((unsigned __int64)PteAddress, v2, 536870913);
    *v3 = result;
    if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
      return MiWritePteShadow();
  }
  else
  {
    *PteAddress = 0LL;
    result = (struct _KTHREAD *)0xFFFFF6FB7DBED000LL;
    if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = (struct _KTHREAD *)0xFFFFF6FB7DBED7F8LL;
      if ( (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
        return MiWritePteShadow();
    }
  }
  return result;
}
