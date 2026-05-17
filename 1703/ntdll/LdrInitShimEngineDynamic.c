/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800D6C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_18006F46C @ 0x18006F46C (sub_18006F46C.c)
 *     LdrFindEntryForAddress @ 0x180076210 (LdrFindEntryForAddress.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int16 v7; // di
  int EntryForAddress; // eax
  __int64 v9; // rcx
  unsigned __int8 v10; // bl
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = 4096LL;
  v7 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v7 )
    sub_18001AE14(0);
  sub_180019FC0(v5, a2, a3, a4);
  if ( !qword_18015B310 )
  {
    qword_18015B310 = a1;
    sub_18006F46C();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, (unsigned __int64 *)&v12);
  if ( EntryForAddress >= 0 )
  {
    sub_18001A084(v12);
    v10 = sub_18006F0A0(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v9 = (unsigned int)dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2644,
        (unsigned int)"LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v9 = (unsigned int)dword_180155A10;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    v10 = 0;
  }
  LOBYTE(v9) = -v10;
  sub_18001A028(v9, 2, v10 == 0 ? 0xC0000001 : 0);
  if ( !v7 )
    sub_18001A338();
  return v10;
}
