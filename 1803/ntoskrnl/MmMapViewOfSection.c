/*
 * XREFs of MmMapViewOfSection @ 0x1404EA390
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     PspMapView @ 0x140285744 (PspMapView.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     MiMapProcessExecutable @ 0x1404E94B0 (MiMapProcessExecutable.c)
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 *     PspMapSiloSharedDataView @ 0x1404EA270 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1404EA2A8 (MmMapApiSetView.c)
 *     NtGetNlsSectionPtr @ 0x14053EF74 (NtGetNlsSectionPtr.c)
 *     NtInitializeNlsFiles @ 0x14056CA6C (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x14056F3B0 (EtwpCoverageEnsureUserModeView.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 * Callees:
 *     MiMapParametersInitialize @ 0x140593DD0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _BYTE v13[24]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v14; // [rsp+58h] [rbp-60h]

  result = MiMapParametersInitialize(v13, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (unsigned int)v13, (_DWORD)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_1403CBEC4;
      else
        ++dword_1403CBEC0;
    }
    else
    {
      *a7 = v14;
      return (unsigned int)result;
    }
  }
  return result;
}
