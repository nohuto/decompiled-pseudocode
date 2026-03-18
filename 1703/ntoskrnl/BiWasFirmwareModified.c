/*
 * XREFs of BiWasFirmwareModified @ 0x140265E9C
 * Callers:
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  char v1; // di
  int v2; // ebx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v2 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v2 != 0;
  }
  return v1;
}
