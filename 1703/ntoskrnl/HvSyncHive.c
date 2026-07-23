/*
 * XREFs of HvSyncHive @ 0x14066CBA0
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     HvRefreshHive @ 0x14066C778 (HvRefreshHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404394A0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvResetUnreconciledData @ 0x14045D4C8 (HvResetUnreconciledData.c)
 *     HvResetLogFileStatusAll @ 0x14045DEE8 (HvResetLogFileStatusAll.c)
 *     HvUpdateUnreconciledVector @ 0x1404B64D8 (HvUpdateUnreconciledVector.c)
 *     HvResetDirtyData @ 0x1404B7098 (HvResetDirtyData.c)
 *     HvpTruncateBins @ 0x1404B7E28 (HvpTruncateBins.c)
 *     HvWriteLogFile @ 0x1404D3CF0 (HvWriteLogFile.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 */

char __fastcall HvSyncHive(ULONG_PTR BugCheckParameter2)
{
  char v1; // si
  char v2; // di
  char v5; // r14
  BOOLEAN v6; // bp
  __int64 v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
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
  if ( HvpMarkDirty(BugCheckParameter2, 0, 4096, 0) )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
    {
      if ( (int)HvWriteLogFile(BugCheckParameter2, 0, v8, &v13) < 0 )
        goto LABEL_18;
      v1 = 1;
    }
    HvUpdateUnreconciledVector((_RTL_BITMAP *)BugCheckParameter2, 0);
    if ( !*(_BYTE *)(BugCheckParameter2 + 174)
      || (int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0, 0, 0) >= 0 )
    {
LABEL_15:
      if ( (int)HvWriteHivePrimaryFile(BugCheckParameter2, 0LL, 0LL, v7) >= 0
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
    v12 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( *(_DWORD *)(BugCheckParameter2 + 2964) < v12 || v5 == 1 )
      *(_DWORD *)(BugCheckParameter2 + 2964) = v12;
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
      HvResetLogFileStatusAll(BugCheckParameter2, v9, v10, v11);
    HvResetDirtyData(BugCheckParameter2);
    HvResetUnreconciledData(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 160) = 0;
  }
  else if ( v1 )
  {
    *(_DWORD *)(BugCheckParameter2 + 160) -= v13;
    --*(_DWORD *)(BugCheckParameter2 + 152);
  }
  return v2;
}
