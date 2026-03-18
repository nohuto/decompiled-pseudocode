/*
 * XREFs of RtlPcToFileName @ 0x14015A240
 * Callers:
 *     KitLogFeatureUsage @ 0x1402885E0 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     MmLockLoadedModuleListShared @ 0x1400D5670 (MmLockLoadedModuleListShared.c)
 */

__int64 __fastcall RtlPcToFileName(unsigned __int64 a1, UNICODE_STRING *a2)
{
  PVOID *v4; // r8
  unsigned int v5; // ebx
  PVOID *v6; // rdx
  PVOID v7; // rcx
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  MmLockLoadedModuleListShared(&v9);
  v4 = (PVOID *)PsLoadedModuleList;
  v5 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v4 != &PsLoadedModuleList )
    {
      v6 = v4;
      v4 = (PVOID *)*v4;
      v7 = v6[6];
      if ( a1 >= (unsigned __int64)v7 && a1 < (unsigned __int64)v7 + *((unsigned int *)v6 + 16) )
      {
        RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v6 + 11));
        goto LABEL_6;
      }
    }
  }
  v5 = -1073741275;
LABEL_6:
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v9);
  return v5;
}
