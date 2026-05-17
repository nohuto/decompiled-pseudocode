/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800CC730
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     LdrFindEntryForAddress @ 0x180054400 (LdrFindEntryForAddress.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2)
{
  __int16 v4; // di
  int EntryForAddress; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int8 v10; // bl
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v4 )
    sub_1800435B4(0);
  sub_180046FBC();
  if ( !qword_18015C340 )
  {
    qword_18015C340 = a1;
    sub_180055D80();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, (unsigned __int64 *)&v12);
  if ( EntryForAddress >= 0 )
  {
    sub_180059158(v12, v6, v7, v8);
    v10 = sub_1800559B0(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v9 = (unsigned int)dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2619,
        (unsigned int)"LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v9 = (unsigned int)dword_180156A70;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    v10 = 0;
  }
  LOBYTE(v9) = -v10;
  sub_180046F60(v9, 2, v10 == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    sub_180047B2C();
  return v10;
}
