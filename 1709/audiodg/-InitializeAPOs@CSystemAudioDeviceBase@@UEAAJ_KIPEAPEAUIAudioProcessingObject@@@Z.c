/*
 * XREFs of ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140014B70
 * Callers:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006230 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::InitializeAPOs(
        CSystemAudioDeviceBase *this,
        __int64 a2,
        __int64 a3,
        struct IAudioProcessingObject **a4)
{
  CSystemAudioDeviceSharedBase *v4; // rcx
  __int64 (__fastcall *v5)(CSystemAudioDeviceSharedBase *, __int64, unsigned int, struct IAudioProcessingObject **); // rax

  v4 = (CSystemAudioDeviceBase *)((char *)this - 8);
  v5 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *, __int64, unsigned int, struct IAudioProcessingObject **))(*(_QWORD *)v4 + 200LL);
  if ( v5 == CSystemAudioDeviceSharedBase::InnerInitializeAPO )
    return CSystemAudioDeviceSharedBase::InnerInitializeAPO(v4, a2, a3, a4);
  else
    return v5(v4, a2, a3, a4);
}
