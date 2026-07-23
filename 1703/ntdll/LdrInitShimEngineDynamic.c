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

__int64 __fastcall LdrInitShimEngineDynamic(PVOID DllHandle, __int64 a2)
{
  __int16 v4; // di
  NTSTATUS EntryForAddress; // eax
  __int64 v6; // rcx
  unsigned __int8 v7; // bl
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v4 )
    sub_18001AE14(0);
  sub_180019FC0();
  if ( !::DllHandle )
  {
    ::DllHandle = DllHandle;
    sub_18006F46C();
  }
  EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( EntryForAddress >= 0 )
  {
    sub_18001A084((__int64)Entry);
    v7 = sub_18006F0A0(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v6 = (unsigned int)dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2644,
        (unsigned int)"LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v6 = (unsigned int)dword_180155A10;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    v7 = 0;
  }
  LOBYTE(v6) = -v7;
  sub_18001A028(v6, 2, v7 == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    sub_18001A338();
  return v7;
}
