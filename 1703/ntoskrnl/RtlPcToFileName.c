/*
 * XREFs of RtlPcToFileName @ 0x140165994
 * Callers:
 *     KitLogFeatureUsage @ 0x14025EA90 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14006CF18 (MmLockLoadedModuleListShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
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
        goto LABEL_8;
      }
    }
  }
  v5 = -1073741275;
LABEL_8:
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v9);
  return v5;
}
