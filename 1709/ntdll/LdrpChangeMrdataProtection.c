/*
 * XREFs of LdrpChangeMrdataProtection @ 0x180038980
 * Callers:
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     LdrpLocateMrdata @ 0x1800D6C64 (LdrpLocateMrdata.c)
 */

NTSTATUS __fastcall LdrpChangeMrdataProtection(ULONG a1)
{
  NTSTATUS result; // eax
  ULONG NewProtect; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  NewProtect = a1;
  if ( !LdrpMrdataBase )
    LdrpLocateMrdata();
  BaseAddress = (PVOID)LdrpMrdataBase;
  RegionSize = LdrpMrdataSize;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
