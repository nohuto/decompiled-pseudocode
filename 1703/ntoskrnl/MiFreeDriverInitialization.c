/*
 * XREFs of MiFreeDriverInitialization @ 0x1404B1608
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x140586D2C (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x1405A8064 (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x1404B1FD8 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // r11
  int v4; // edi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48));
  if ( (!(_DWORD)result || v3 == PsNtosImageBase || v3 == PsHalImageBase) && (*(_DWORD *)(a1 + 104) & 0x800) == 0 )
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
