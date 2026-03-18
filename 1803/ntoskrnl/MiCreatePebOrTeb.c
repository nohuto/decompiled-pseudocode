/*
 * XREFs of MiCreatePebOrTeb @ 0x140592AA8
 * Callers:
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 *     MmCreateTeb @ 0x140592878 (MmCreateTeb.c)
 *     MiInitializeWowPeb @ 0x1405BDD10 (MiInitializeWowPeb.c)
 * Callees:
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 */

__int64 __fastcall MiCreatePebOrTeb(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  int v5; // eax

  v4 = 0LL;
  *a3 = 0LL;
  v5 = 6200;
  if ( a1 == 4 )
  {
    v5 = 1976;
  }
  else if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
      v5 = 12288;
    }
    else if ( a1 == 8 )
    {
      v5 = 1176;
    }
  }
  if ( (a1 & 0xC) == 0 && (a1 & 3) != 0 && a2 )
    v4 = 2LL;
  return MiAllocateFromSubAllocatedRegion(v4, (v5 + 4095) & 0xFFFFF000, a3, 0LL);
}
