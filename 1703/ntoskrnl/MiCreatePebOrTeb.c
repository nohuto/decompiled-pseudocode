/*
 * XREFs of MiCreatePebOrTeb @ 0x1405162FC
 * Callers:
 *     MiInitializeWowPeb @ 0x14042AE48 (MiInitializeWowPeb.c)
 *     MmCreatePeb @ 0x14049B450 (MmCreatePeb.c)
 *     MmCreateTeb @ 0x140516370 (MmCreateTeb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCreatePebOrTeb(int a1, __int64 a2, unsigned __int64 *a3)
{
  int v3; // r10d
  __int64 v5; // rdx

  v3 = 0;
  *a3 = 0LL;
  if ( a1 == 4 )
  {
    v5 = 1952LL;
  }
  else
  {
    v5 = 6200LL;
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        v5 = 12288LL;
      }
      else if ( a1 == 8 )
      {
        v5 = 1152LL;
      }
    }
  }
  if ( (a1 & 0xC) == 0 && (a1 & 3) != 0 && a2 )
    v3 = 2;
  return MiAllocateFromSubAllocatedRegion(v3, (v5 + 4095) & 0xFFFFF000LL, a3, 0LL);
}
