/*
 * XREFs of MiIsStoreProcess @ 0x1400E6B90
 * Callers:
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiCombineWorkingSet @ 0x1400CF650 (MiCombineWorkingSet.c)
 *     MiCapturePfnVm @ 0x1400E6A5C (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCheckFatalAccessViolation @ 0x140125200 (MiCheckFatalAccessViolation.c)
 *     MiOrderTrimList @ 0x14021D9B0 (MiOrderTrimList.c)
 *     MiStoreCheckCandidatePage @ 0x14022C1C4 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 1452));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1144) )
  {
    if ( *(_QWORD *)(v1 + 1264) == a1 )
      return 1LL;
  }
  return result;
}
