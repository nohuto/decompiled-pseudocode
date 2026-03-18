/*
 * XREFs of WPP_IFR_SF_sq @ 0x1C00397D4
 * Callers:
 *     imp_WdfObjectGetTypedContextWorker @ 0x1C00012A0 (imp_WdfObjectGetTypedContextWorker.c)
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0032050 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfPdoGetParent @ 0x1C00387E0 (imp_WdfPdoGetParent.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C006E4DC (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00D61C4 (VfWdfObjectGetTypedContext.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const char *_a1,
        const void *_a2)
{
  const char *v7; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  const char *v19; // rax

  v7 = _a1;
  v10 = -1LL;
  v11 = (unsigned __int64)flags >> 16;
  v14 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * v11 + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v14, (flags - 1) & 0x1F) )
  {
    v16 = v11 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v16 + 1) >= level )
    {
      if ( _a1 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( _a1[v17] );
        v18 = v17 + 1;
      }
      else
      {
        v18 = 5LL;
      }
      v19 = _a1;
      if ( !_a1 )
        v19 = "NULL";
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v16),
        0x2Bu,
        traceGuid,
        id,
        v19,
        v18,
        &_a2,
        8LL,
        0LL);
    }
  }
  if ( _a1 )
  {
    do
      ++v10;
    while ( _a1[v10] );
    v15 = v10 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( !_a1 )
    v7 = "NULL";
  FxIFR(globals, level, flags, traceGuid, id, v7, v15, &_a2, 8LL, 0LL);
}
