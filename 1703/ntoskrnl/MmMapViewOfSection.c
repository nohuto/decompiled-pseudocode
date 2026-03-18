/*
 * XREFs of MmMapViewOfSection @ 0x14049C1F0
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     PspMapView @ 0x14023A764 (PspMapView.c)
 *     NtGetNlsSectionPtr @ 0x1404618FC (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 *     NtInitializeNlsFiles @ 0x14049A2B4 (NtInitializeNlsFiles.c)
 *     MiMapProcessExecutable @ 0x14049A420 (MiMapProcessExecutable.c)
 *     MmCreatePeb @ 0x14049B450 (MmCreatePeb.c)
 *     PspMapSiloSharedDataView @ 0x14049BEE0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14049BF18 (MmMapApiSetView.c)
 *     PspMapSystemDll @ 0x14049C0D0 (PspMapSystemDll.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
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
      ++dword_14036CA30;
    else
      ++dword_14036CA2C;
  }
  return result;
}
