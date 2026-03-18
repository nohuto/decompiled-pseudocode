/*
 * XREFs of KeConfigureDynamicMemory @ 0x14023FC14
 * Callers:
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x14074AF30 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 * Callees:
 *     VslConfigureDynamicMemory @ 0x14022F5A8 (VslConfigureDynamicMemory.c)
 *     HvlpAddPhysicalMemory @ 0x1402CA3C0 (HvlpAddPhysicalMemory.c)
 */

NTSTATUS __fastcall KeConfigureDynamicMemory(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  NTSTATUS result; // eax

  if ( a1 > a2 )
    goto LABEL_9;
  v3 = a2 - a1;
  if ( v3 == -1LL )
    goto LABEL_9;
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    if ( !a3 )
    {
      result = HvlpAddPhysicalMemory(a1, v3 + 1);
      goto LABEL_10;
    }
    if ( (unsigned int)(a3 - 1) <= 1 )
    {
      result = 0;
      goto LABEL_10;
    }
LABEL_9:
    result = -1073741811;
LABEL_10:
    if ( result < 0 )
      return result;
  }
  return VslConfigureDynamicMemory();
}
