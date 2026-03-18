/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801673C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18018A5B8 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  int ManipulationManager; // eax
  int v10; // ecx
  unsigned int v11; // edi
  int updated; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v17; // [rsp+30h] [rbp-91h] BYREF
  int v18; // [rsp+34h] [rbp-8Dh] BYREF
  int v19; // [rsp+38h] [rbp-89h] BYREF
  int v20; // [rsp+3Ch] [rbp-85h] BYREF
  struct CManipulationManager *v21; // [rsp+40h] [rbp-81h] BYREF
  __int64 v22; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-71h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-51h]
  int v25; // [rsp+78h] [rbp-49h]
  int v26; // [rsp+7Ch] [rbp-45h]
  int *v27; // [rsp+80h] [rbp-41h]
  int v28; // [rsp+88h] [rbp-39h]
  int v29; // [rsp+8Ch] [rbp-35h]
  int *v30; // [rsp+90h] [rbp-31h]
  int v31; // [rsp+98h] [rbp-29h]
  int v32; // [rsp+9Ch] [rbp-25h]
  int *v33; // [rsp+A0h] [rbp-21h]
  int v34; // [rsp+A8h] [rbp-19h]
  int v35; // [rsp+ACh] [rbp-15h]
  int *v36; // [rsp+B0h] [rbp-11h]
  int v37; // [rsp+B8h] [rbp-9h]
  int v38; // [rsp+BCh] [rbp-5h]

  v21 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v21);
  ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(a1 + 24), &v21);
  v11 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x299u);
  }
  else
  {
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v10, a1, a2, a3, a4, a5);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2A0u);
    }
    else
    {
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v24 = &v22;
        v27 = &v17;
        v30 = &v18;
        v19 = a4;
        v33 = &v19;
        v36 = &v20;
        v22 = a1;
        v25 = 8;
        v17 = a2;
        v28 = (int)v15;
        v18 = a3;
        v31 = (int)v15;
        v34 = (int)v15;
        v20 = a5;
        v37 = (int)v15;
        TlgWrite(v13, &unk_1801F69E2, v14, v15, 7u, &pData);
      }
      if ( dword_18023E7E0 )
        SetEvent(hEvent);
    }
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v21);
  return v11;
}
