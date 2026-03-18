/*
 * XREFs of VfThunkAddTargetNotify @ 0x14080EF64
 * Callers:
 *     VfTargetDriversAdd @ 0x140161440 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkCreateSharedExportInformation @ 0x14080F03C (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFreeSharedThunksArray @ 0x14080F2A4 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkAddTargetNotify(_QWORD *a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax

  v1 = a1 + 3;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfRegularThunks,
                        40LL,
                        &VfRegularThunksBitMapHeader,
                        a1 + 3)
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, &VfPoolThunks, 40LL, &VfPoolThunksBitMapHeader, a1 + 4)
    || !(unsigned int)ViThunkCreateSharedExportInformation(
                        *a1,
                        &VfOrderDependentThunks,
                        48LL,
                        &VfOrderDependentThunksBitMapHeader,
                        a1 + 5)
    || (result = ViThunkCreateSharedExportInformation(*a1, &VfXdvThunks, 40LL, &VfXdvThunksBitMapHeader, a1 + 6),
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
