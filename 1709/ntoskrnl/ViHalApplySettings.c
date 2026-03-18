/*
 * XREFs of ViHalApplySettings @ 0x1407AE1C0
 * Callers:
 *     VfHalVerifierInitialize @ 0x1407AC230 (VfHalVerifierInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1407BDC94 (VfSettingsCheckForChanges.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *ViHalApplySettings())(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 (__fastcall *result)(__int64, __int64, unsigned int, __int64 *); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, unsigned int, __int64 *))(unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x80u) != 0 )
  {
    if ( !ViHalEnabledInThePast )
    {
      ViVerifyDma = 1;
      if ( (unsigned int)HalPrivateDispatchTable >= 0x2C )
      {
        VfRealHalAllocateMapRegisters = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))off_140353330[0];
        result = VfHalAllocateMapRegisters;
        off_140353330[0] = (__int64 (__fastcall *)())VfHalAllocateMapRegisters;
      }
      ViDoubleBufferDma = 1;
      ViHalEnabledInThePast = 1;
    }
    ViDMADisabledNoRebootNeeded = 0;
  }
  else
  {
    ViDMADisabledNoRebootNeeded = 1;
  }
  return result;
}
