/*
 * XREFs of BiWasFirmwareModified @ 0x140134A10
 * Callers:
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v3 != 0;
  }
  return v1;
}
