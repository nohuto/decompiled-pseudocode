/*
 * XREFs of MiIsStoreProcess @ 0x1400D5C14
 * Callers:
 *     MiCombineWorkingSet @ 0x140004854 (MiCombineWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCheckFatalAccessViolation @ 0x14003B348 (MiCheckFatalAccessViolation.c)
 *     MiStoreCheckCandidatePage @ 0x1400D64CC (MiStoreCheckCandidatePage.c)
 *     MiCapturePfnVm @ 0x140124730 (MiCapturePfnVm.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiOrderTrimList @ 0x140259ADC (MiOrderTrimList.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1144) )
  {
    if ( *(_QWORD *)(v1 + 1264) == a1 )
      return 1LL;
  }
  return result;
}
