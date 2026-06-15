/*
 * XREFs of ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140046854
 * Callers:
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140013A90 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140013B00 (-Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z.c)
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140013B80 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013EC0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x1400158B4 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140046660 (-AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140046930 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z @ 0x1400469C0 (-GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z.c)
 *     ?GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z @ 0x140046A50 (-GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x140046AE0 (-GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140046B70 (-GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x140046C00 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140046C90 (-IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140046D20 (-LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z @ 0x140046DD0 (-RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z.c)
 *     ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x140046E60 (-Reset@CSystemEffectWrapper@@UEAAJXZ.c)
 *     ?SetHeadTracking@CSystemEffectWrapper@@UEAAJH@Z @ 0x140046EF0 (-SetHeadTracking@CSystemEffectWrapper@@UEAAJH@Z.c)
 *     ?SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z @ 0x140046F80 (-SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z.c)
 *     ?SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z @ 0x140047010 (-SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z.c)
 *     ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x1400470B0 (-UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ.c)
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
