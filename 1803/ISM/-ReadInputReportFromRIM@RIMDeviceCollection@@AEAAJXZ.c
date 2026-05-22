/*
 * XREFs of ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18006DA4C
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18006DDB0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18006DF50 (-OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18006E058 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::ReadInputReportFromRIM(RIMDeviceCollection *this)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  *((_QWORD *)this + 337) = *((_QWORD *)this + 335);
  v2 = RIMReadInput(
         *((_QWORD *)this + 10),
         (char *)this + 2696,
         *((unsigned int *)this + 672),
         *((_QWORD *)this + 5),
         (char *)this + 2704,
         (char *)this + 2712,
         (char *)this + 2720);
  if ( v2 < 0 )
    return v2 | 0x10000000u;
  return v1;
}
