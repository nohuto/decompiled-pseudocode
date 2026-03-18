/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x1407543C8
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmChangeKernelCfgBitmap(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  __int64 v2; // rdx
  __int64 v3; // r9
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  char v6; // r8
  struct _KTHREAD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v4 = PteAddress;
  v5 = (unsigned __int64)PteAddress;
  if ( v6 )
  {
    *PteAddress = MiMakeValidPte((unsigned __int64)PteAddress, v2, 536870913LL, v3);
    v5 = (unsigned __int64)v4;
  }
  else
  {
    *PteAddress = ZeroPte;
  }
  result = (struct _KTHREAD *)MiPteInShadowRange(v5);
  if ( (_DWORD)result )
    return MiWritePteShadow(v9, v8, v10);
  return result;
}
