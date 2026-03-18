/*
 * XREFs of PiDmaGuardProcessRegistry @ 0x1408CA168
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

void __fastcall PiDmaGuardProcessRegistry(void *a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  if ( IopGetRegistryValue(a1, L"DmaGuardPolicyOverride", 4, &P) >= 0
    && *((_DWORD *)P + 3) == 4
    && (unsigned int)(*(_DWORD *)((char *)P + *((unsigned int *)P + 2)) - 1) <= 2 )
  {
    PipDmaGuardPolicyOverride = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
}
