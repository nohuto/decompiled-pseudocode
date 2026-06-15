/*
 * XREFs of ?GetKey@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo@@PEAU3@@Z @ 0x180099FD8
 * Callers:
 *     ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x1800F2254 (-Add@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
    (**a2)(a2, &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, &v3);
    return v3;
  }
  return result;
}
