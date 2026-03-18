/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x1406137F8
 * Callers:
 *     VfThunkApplyMandatoryThunks @ 0x140823D28 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140823DFC (VfThunkApplyThunks.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
