/*
 * XREFs of RtlIsPackageSid @ 0x180082440
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x18009F080 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &unk_180114628, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
