/*
 * XREFs of MiCreatePebOrTeb @ 0x1405093E0
 * Callers:
 *     MmCreatePeb @ 0x1404DAD28 (MmCreatePeb.c)
 *     MmCreateTeb @ 0x1405091B0 (MmCreateTeb.c)
 *     MiInitializeWowPeb @ 0x1405917C8 (MiInitializeWowPeb.c)
 * Callees:
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
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
    v5 = 1968;
  }
  else if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
      v5 = 12288;
    }
    else if ( a1 == 8 )
    {
      v5 = 1168;
    }
  }
  if ( (a1 & 0xC) == 0 && (a1 & 3) != 0 && a2 )
    v4 = 2LL;
  return MiAllocateFromSubAllocatedRegion(v4, (v5 + 4095) & 0xFFFFF000, a3, 0LL);
}
