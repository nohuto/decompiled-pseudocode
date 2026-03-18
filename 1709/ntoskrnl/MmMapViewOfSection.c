/*
 * XREFs of MmMapViewOfSection @ 0x140460870
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     PspMapView @ 0x14024FC7C (PspMapView.c)
 *     NtInitializeNlsFiles @ 0x14045DFB4 (NtInitializeNlsFiles.c)
 *     MiMapProcessExecutable @ 0x14045EF60 (MiMapProcessExecutable.c)
 *     PspMapSiloSharedDataView @ 0x14045FBB0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14045FBE8 (MmMapApiSetView.c)
 *     PspMapSystemDll @ 0x14045FDEC (PspMapSystemDll.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     MmCreatePeb @ 0x1404DAD28 (MmCreatePeb.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1405791A0 (EtwpCoverageEnsureUserModeView.c)
 *     NtGetNlsSectionPtr @ 0x140593170 (NtGetNlsSectionPtr.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        int a1,
        int a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax

  result = MiMapViewOfSection(a1, a2, (_DWORD)a3, a4, a5, a6, a7, a8, a9, a10, 2, 0LL);
  if ( (int)result < 0 )
  {
    if ( *a3 )
      ++dword_140388C28;
    else
      ++dword_140388C24;
  }
  return result;
}
