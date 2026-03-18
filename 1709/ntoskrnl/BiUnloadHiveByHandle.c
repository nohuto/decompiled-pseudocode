/*
 * XREFs of BiUnloadHiveByHandle @ 0x1407798B0
 * Callers:
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiUnloadHiveByName @ 0x140779940 (BiUnloadHiveByName.c)
 */

__int64 __fastcall BiUnloadHiveByHandle(void *a1, char a2)
{
  int RegistryValue; // edi
  __int64 v5; // r8
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = BiGetRegistryValue((__int64)a1, L"KeyName", (__int64)L"Description", 1, &P, &v8);
  BiCloseKey(a1);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  LOBYTE(v5) = a2;
  v7 = BiUnloadHiveByName(P, v8, v5);
  ExFreePoolWithTag(P, 0x4B444342u);
  return v7;
}
