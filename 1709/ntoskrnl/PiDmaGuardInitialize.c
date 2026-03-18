/*
 * XREFs of PiDmaGuardInitialize @ 0x140840328
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     PnpTraceDmaGuardSystemPolicy @ 0x1405C4690 (PnpTraceDmaGuardSystemPolicy.c)
 *     PipDmgIsDmaRemappingEnabled @ 0x1405C46C8 (PipDmgIsDmaRemappingEnabled.c)
 *     PiCslInitialize @ 0x14086B50C (PiCslInitialize.c)
 */

__int64 __fastcall PiDmaGuardInitialize(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  char IsDmaRemappingEnabled; // al
  int v5; // eax

  v2 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
      __fastfail(5u);
    if ( (unsigned int)(PipDmaGuardPolicy - 2) <= 1 )
    {
      LOBYTE(a2) = PipDmaGuardPolicy == 3;
      v5 = PiCslInitialize((unsigned int)PipDmaGuardPolicy, a2);
      if ( v5 < 0 )
        return (unsigned int)v5;
      ExInitializeResourceLite(&PipDgqListLock);
      qword_140382658 = (__int64)&PipDgqListHead;
      PipDgqListHead = (__int64)&PipDgqListHead;
    }
    return 0;
  }
  IsDmaRemappingEnabled = PipDmgIsDmaRemappingEnabled();
  PipDmaRemappingEnabled = IsDmaRemappingEnabled;
  if ( PipDmaGuardPolicyOverride )
    PipDmaGuardPolicy = PipDmaGuardPolicyOverride;
  else
    PipDmaGuardPolicy = (IsDmaRemappingEnabled != 0) + 1;
  PnpTraceDmaGuardSystemPolicy();
  return v2;
}
