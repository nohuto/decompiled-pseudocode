/*
 * XREFs of FxpBugCheckCallback @ 0x1C00A53B0
 * Callers:
 *     <none>
 * Callees:
 *     FxpBugCheckCallbackFilter @ 0x1C00A5460 (FxpBugCheckCallbackFilter.c)
 */

void __fastcall FxpBugCheckCallback(
        _KBUGCHECK_CALLBACK_REASON Reason,
        _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _GUID *ReasonSpecificData,
        unsigned int ReasonSpecificLength)
{
  unsigned int v4; // ecx
  _FX_DRIVER_GLOBALS *p_Checksum; // rbx
  unsigned __int64 Checksum; // rax
  unsigned int v8; // esi

  v4 = *(_DWORD *)&ReasonSpecificData->Data4[4];
  if ( v4 >= 0x1000 )
  {
    p_Checksum = (_FX_DRIVER_GLOBALS *)&Record[-8].Checksum;
    Checksum = Record[-6].Checksum;
    if ( Checksum )
    {
      v8 = *(_DWORD *)(Checksum + 24) + 72;
      if ( v8 <= v4 )
      {
        if ( FxpBugCheckCallbackFilter((_FX_DRIVER_GLOBALS *)&Record[-8].Checksum) )
        {
          FxLibraryGlobals.BestDriverForDumpLog = p_Checksum;
LABEL_9:
          *(_QWORD *)&ReasonSpecificData[2].Data1 = p_Checksum->WdfLogHeader;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v8;
          ReasonSpecificData[1] = WdfDumpGuid;
          return;
        }
        if ( !FxLibraryGlobals.BestDriverForDumpLog
          && p_Checksum->FxTrackDriverForMiniDumpLog
          && *(_FX_DRIVER_GLOBALS **)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + HIDWORD(KeGetPcr()[1].LockArray) * FxLibraryGlobals.DriverTracker.m_EntrySize) == p_Checksum )
        {
          goto LABEL_9;
        }
      }
    }
  }
}
