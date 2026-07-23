/*
 * XREFs of sub_180028724 @ 0x180028724
 * Callers:
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     sub_1800D0CF4 @ 0x1800D0CF4 (sub_1800D0CF4.c)
 */

NTSTATUS __fastcall sub_180028724(ULONG a1)
{
  NTSTATUS result; // eax
  ULONG NewProtect; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  NewProtect = a1;
  if ( !qword_18016F288 )
    sub_1800D0CF4();
  BaseAddress = (PVOID)qword_18016F288;
  RegionSize = qword_18016F278;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
