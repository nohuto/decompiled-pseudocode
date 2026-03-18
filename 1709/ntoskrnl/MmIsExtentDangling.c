/*
 * XREFs of MmIsExtentDangling @ 0x1406E4398
 * Callers:
 *     FsRtlIsExtentDangling @ 0x1406B0F40 (FsRtlIsExtentDangling.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 */

unsigned __int64 __fastcall MmIsExtentDangling(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  _QWORD *v3; // r10
  unsigned __int64 v4; // r11

  v2 = a1;
  if ( a1 < a1 + a2 )
  {
    do
    {
      if ( MiIsPfn(v2) && (*v3 & 0x10000000000000LL) != 0 )
        break;
      ++v2;
    }
    while ( v2 < v4 );
  }
  return v2;
}
