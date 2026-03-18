/*
 * XREFs of HvGetEffectiveLogSizeCapForHive @ 0x140499BCC
 * Callers:
 *     HvTruncateCurrentLogFileIfRequired @ 0x140499B4C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpGenerateFlushControlData @ 0x14049A2D0 (CmpGenerateFlushControlData.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x14049A5D8 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpDoReconcileNextHive @ 0x14049A6D0 (CmpDoReconcileNextHive.c)
 *     CmpAdjustRequestedFileSize @ 0x140566B68 (CmpAdjustRequestedFileSize.c)
 *     HvSwapLogFiles @ 0x14057DB90 (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1405839A4 (HvTruncateAllLogFilesIfRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvGetEffectiveLogSizeCapForHive(unsigned int *a1)
{
  unsigned int v1; // r9d
  unsigned __int64 v2; // rdx
  int v3; // ecx
  unsigned __int64 v4; // r8
  unsigned int v5; // r9d

  if ( (a1[1038] & 0x800) != 0 )
    return 0x2000000LL;
  v1 = a1[68];
  v2 = a1[46];
  v3 = 0x2000;
  if ( v1 < 0x2000 )
    v3 = v1;
  v4 = (unsigned int)(8 * v3);
  v5 = v1 - v3;
  if ( v5 )
    v4 += (unsigned __int64)v5 >> 2;
  if ( v4 < v2 )
    LODWORD(v2) = v4;
  if ( (unsigned int)CmpLogFileSizeCap >= 0x80000 && CmpLogFileSizeCap < (unsigned int)v2 )
    LODWORD(v2) = CmpLogFileSizeCap;
  if ( (unsigned int)v2 < 0x8000 )
    LODWORD(v2) = 0x8000;
  return (unsigned int)v2;
}
