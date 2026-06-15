/*
 * XREFs of ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140047604
 * Callers:
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140015F00 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140015F70 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140015FE0 (-IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140016050 (-Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z.c)
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x1400160C0 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400163C0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x140016C2C (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140047410 (-AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z @ 0x1400476E0 (-GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x140047770 (-GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140047800 (-GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x140047890 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140047920 (-LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z @ 0x1400479D0 (-RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z.c)
 *     ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x140047A60 (-Reset@CSystemEffectWrapper@@UEAAJXZ.c)
 *     ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x140047AF0 (-UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ.c)
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
