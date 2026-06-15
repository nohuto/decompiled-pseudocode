/*
 * XREFs of ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140048634
 * Callers:
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x140012560 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140013D70 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140013DE0 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140013E50 (-Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z.c)
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140013ED0 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400141F0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140048440 (-AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z @ 0x140048710 (-GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x1400487A0 (-GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140048830 (-GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1400488C0 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140048950 (-IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x1400489E0 (-LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z @ 0x140048A90 (-RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z.c)
 *     ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x140048B20 (-Reset@CSystemEffectWrapper@@UEAAJXZ.c)
 *     ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x140048BB0 (-UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CollectExceptionDataAndContinue(struct _EXCEPTION_POINTERS *a1)
{
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  DWORD v5; // [rsp+68h] [rbp+20h] BYREF

  v3 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"PreventAudioDGCrashOrReportOnAPOException",
         0x18u,
         &v5,
         &v4,
         &v3)
    || !v4 )
  {
    RtlReportException(a1->ExceptionRecord, a1->ContextRecord, 6LL);
  }
  return 1LL;
}
