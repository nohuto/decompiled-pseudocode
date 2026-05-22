/*
 * XREFs of ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x180018AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18000D318 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 */

char __fastcall DWMInputTarget::IsSameByLuid(DWMInputTarget *this, void *a2)
{
  __int64 v2; // rcx
  char v3; // bl
  LegacyInputSinkData *Attached; // rdi
  const struct _LUID *Luid; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v2 = *((_QWORD *)this + 14);
  v3 = 0;
  if ( !v2 )
    return 0;
  Attached = (LegacyInputSinkData *)InputSite::GetAttachedObject<LegacyInputSinkData>(v2);
  if ( !Attached || (int)NtQueryCompositionInputSinkLuid(a2, &v8) < 0 )
    return 0;
  Luid = LegacyInputSinkData::GetLuid(Attached);
  if ( v9 == Luid->HighPart )
    return v8 == Luid->LowPart;
  return v3;
}
