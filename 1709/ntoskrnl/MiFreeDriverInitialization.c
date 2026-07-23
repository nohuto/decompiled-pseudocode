/*
 * XREFs of MiFreeDriverInitialization @ 0x14058F310
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     MmFreeBootDriverInitializationCode @ 0x1405B7FF8 (MmFreeBootDriverInitializationCode.c)
 *     MiLoadImportDll @ 0x1405C9014 (MiLoadImportDll.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x140516C14 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  PVOID v1; // rbx
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(PVOID *)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( (!(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase) && (*(_DWORD *)(a1 + 104) & 0x800) == 0 )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 2, 0LL, &v5, &v6);
      v4 = result;
      if ( v5 )
        result = MiFreeInitializationCode(a1, v5, v6);
    }
    while ( v4 );
  }
  return result;
}
