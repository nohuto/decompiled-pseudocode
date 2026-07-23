/*
 * XREFs of HvSyncHive @ 0x140697218
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     HvRefreshHive @ 0x140696DF0 (HvRefreshHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     HvResetUnreconciledData @ 0x14046FB84 (HvResetUnreconciledData.c)
 *     HvResetDirtyData @ 0x140471CD4 (HvResetDirtyData.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     HvWriteLogFile @ 0x1404E3F18 (HvWriteLogFile.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404E63B0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpTruncateBins @ 0x14056556C (HvpTruncateBins.c)
 *     HvUpdateUnreconciledVector @ 0x14056FAF4 (HvUpdateUnreconciledVector.c)
 *     HvResetLogFileStatusAll @ 0x14059D9E8 (HvResetLogFileStatusAll.c)
 */

char __fastcall HvSyncHive(ULONG_PTR BugCheckParameter2)
{
  char v1; // si
  char v2; // di
  char v5; // r14
  BOOLEAN v6; // bp
  __int64 v7; // r9
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  v1 = 0;
  v2 = 0;
  if ( !*(_DWORD *)(BugCheckParameter2 + 88)
    && !*(_DWORD *)(BugCheckParameter2 + 112)
    && !*(_BYTE *)(BugCheckParameter2 + 175) )
  {
    return 1;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8000) != 0 )
    return 1;
  v5 = HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 )
    return 1;
  v6 = IoSetThreadHardErrorMode(0);
  if ( !*(_DWORD *)(BugCheckParameter2 + 88) && !*(_BYTE *)(BugCheckParameter2 + 175) )
    goto LABEL_15;
  if ( HvpMarkDirty(BugCheckParameter2, 0, 0x1000u, 0) )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
    {
      if ( (int)HvWriteLogFile(BugCheckParameter2, 0, v8, &v10) < 0 )
        goto LABEL_18;
      v1 = 1;
    }
    HvUpdateUnreconciledVector((_RTL_BITMAP *)BugCheckParameter2, 0);
    if ( !*(_BYTE *)(BugCheckParameter2 + 174)
      || (int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0, 0, 0) >= 0 )
    {
LABEL_15:
      if ( (int)HvWriteHivePrimaryFile(BugCheckParameter2, 0, 0LL, v7) >= 0
        && (int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0, 0) >= 0 )
      {
        v2 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 8LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
      }
    }
  }
LABEL_18:
  IoSetThreadHardErrorMode(v6);
  if ( v2 )
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( *(_DWORD *)(BugCheckParameter2 + 2964) < v9 || v5 == 1 )
      *(_DWORD *)(BugCheckParameter2 + 2964) = v9;
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
      HvResetLogFileStatusAll(BugCheckParameter2);
    HvResetDirtyData(BugCheckParameter2);
    HvResetUnreconciledData(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 160) = 0;
  }
  else if ( v1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 160) -= v10;
    --*(_DWORD *)(BugCheckParameter2 + 152);
  }
  return v2;
}
