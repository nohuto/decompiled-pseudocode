/*
 * XREFs of MiFreeDriverInitialization @ 0x1405F845C
 * Callers:
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x1406113D4 (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x1406275F8 (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x1405F8770 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  PVOID v1; // rbx
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(PVOID *)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( (!(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase) && (*(_DWORD *)(a1 + 104) & 0x800) == 0 )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 2, 0, (__int64)&v5, (__int64)&v6);
      v4 = result;
      if ( v5 )
        result = MiFreeInitializationCode(a1, v5, v6);
    }
    while ( v4 );
  }
  return result;
}
