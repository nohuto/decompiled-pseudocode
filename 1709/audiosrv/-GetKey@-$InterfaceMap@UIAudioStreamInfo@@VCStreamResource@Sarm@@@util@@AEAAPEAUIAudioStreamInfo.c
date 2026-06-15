/*
 * XREFs of ?GetKey@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo@@PEAU3@@Z @ 0x180030B64
 * Callers:
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002EC50 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x1800BFA24 (-Add@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetKey(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    (**a2)(a2, &GUID_61109534_0908_443e_8fc9_d09276dc6f1d, &v3);
    return v3;
  }
  return result;
}
