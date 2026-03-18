/*
 * XREFs of VfThunkAddTargetNotify @ 0x1407A1FC4
 * Callers:
 *     VfTargetDriversAdd @ 0x1400F9990 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkCreateSharedExportInformation @ 0x1407A1F08 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFreeSharedThunksArray @ 0x1407A2148 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(__int64 *a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

  v1 = a1 + 3;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        (__int64)&VfRegularThunks,
                        40LL,
                        &VfRegularThunksBitMapHeader,
                        a1 + 3)
    || !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        (__int64)&VfPoolThunks,
                        40LL,
                        &VfPoolThunksBitMapHeader,
                        a1 + 4)
    || !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        (__int64)&VfOrderDependentThunks,
                        48LL,
                        &VfOrderDependentThunksBitMapHeader,
                        a1 + 5)
    || (result = ViThunkCreateSharedExportInformation(
                   *a1,
                   (__int64)&VfXdvThunks,
                   40LL,
                   &VfXdvThunksBitMapHeader,
                   a1 + 6),
        !(_DWORD)result) )
  {
    ViThunkFreeSharedThunksArray(v1);
    ViThunkFreeSharedThunksArray(a1 + 4);
    ViThunkFreeSharedThunksArray(a1 + 5);
    result = ViThunkFreeSharedThunksArray(a1 + 6);
    *v1 |= 1u;
  }
  return result;
}
