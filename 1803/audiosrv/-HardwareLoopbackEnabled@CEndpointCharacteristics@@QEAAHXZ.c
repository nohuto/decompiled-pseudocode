/*
 * XREFs of ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800955A0
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::HardwareLoopbackEnabled(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 4);
  memset(pvar, 0, 24);
  v2 = 1;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
         v1,
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v2 = 0;
  }
  PropVariantClear(pvar);
  return v2;
}
