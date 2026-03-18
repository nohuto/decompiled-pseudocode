/*
 * XREFs of HvpViewMapExtendStorage @ 0x140566FA8
 * Callers:
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1406F86F4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x1400BD7E8 (CmSiExtendSection.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140496F3C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140497274 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1404E366C (HvpViewMapFindViewForFileOffset.c)
 */

int __fastcall HvpViewMapExtendStorage(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  _QWORD *ViewForFileOffset; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  int result; // eax

  v2 = (unsigned int)(a2 + 4096);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return 0;
  if ( v2 > *(_QWORD *)(a1 + 16) )
  {
    result = CmSiExtendSection(*(void **)a1, (LARGE_INTEGER)(unsigned int)(a2 + 4096));
    if ( result < 0 )
      return result;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4
    || (ViewForFileOffset = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, v4 - 1)) == 0LL
    || (v6 = ViewForFileOffset[6], v7 = ViewForFileOffset[4], v6 >= v7) )
  {
LABEL_10:
    if ( v4 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion(a1, v4, v2);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) = v2;
    }
    return 0;
  }
  v4 = ViewForFileOffset[4];
  if ( v7 > v2 )
    v4 = v2;
  result = HvpViewMapMakeViewRangeValid(a1, ViewForFileOffset, v6, v4);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1 + 8) = v4;
    goto LABEL_10;
  }
  return result;
}
