/*
 * XREFs of sub_18001DE44 @ 0x18001DE44
 * Callers:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_1800D7D58 @ 0x1800D7D58 (sub_1800D7D58.c)
 */

NTSTATUS __fastcall sub_18001DE44(ULONG a1)
{
  NTSTATUS result; // eax
  ULONG NewProtect; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  NewProtect = a1;
  if ( !qword_18016B278 )
    sub_1800D7D58();
  BaseAddress = (PVOID)qword_18016B278;
  RegionSize = qword_18016B268;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
