/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x1406BD7B0
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmChangeKernelCfgBitmap(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  char v4; // r8
  struct _KTHREAD *result; // rax

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v3 = (unsigned __int64)PteAddress;
  if ( v4 )
  {
    *PteAddress = MiMakeValidPte((unsigned __int64)PteAddress, v2, 536870913);
    result = (struct _KTHREAD *)MiPteInShadowRange(v3);
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    *PteAddress = 0LL;
    result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)PteAddress);
    if ( !(_DWORD)result )
      return result;
  }
  return MiWritePteShadow();
}
