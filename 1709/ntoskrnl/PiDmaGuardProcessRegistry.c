/*
 * XREFs of PiDmaGuardProcessRegistry @ 0x140857F90
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
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
