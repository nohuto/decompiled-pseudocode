/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18016A040
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180196780 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  signed int ManipulationManager; // eax
  int v10; // ecx
  unsigned int v11; // edi
  signed int updated; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v17; // [rsp+30h] [rbp-81h] BYREF
  int v18; // [rsp+34h] [rbp-7Dh] BYREF
  int v19; // [rsp+38h] [rbp-79h] BYREF
  int v20; // [rsp+3Ch] [rbp-75h] BYREF
  struct CManipulationManager *v21; // [rsp+40h] [rbp-71h] BYREF
  __int64 v22; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-41h]
  int v25; // [rsp+78h] [rbp-39h]
  int v26; // [rsp+7Ch] [rbp-35h]
  int *v27; // [rsp+80h] [rbp-31h]
  int v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+8Ch] [rbp-25h]
  int *v30; // [rsp+90h] [rbp-21h]
  int v31; // [rsp+98h] [rbp-19h]
  int v32; // [rsp+9Ch] [rbp-15h]
  int *v33; // [rsp+A0h] [rbp-11h]
  int v34; // [rsp+A8h] [rbp-9h]
  int v35; // [rsp+ACh] [rbp-5h]
  int *v36; // [rsp+B0h] [rbp-1h]
  int v37; // [rsp+B8h] [rbp+7h]
  int v38; // [rsp+BCh] [rbp+Bh]

  v21 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v21);
  ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(a1 + 24), &v21);
  v11 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ManipulationManager, 0x29Bu);
  }
  else
  {
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v10, a1, a2, a3, a4, a5);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x2A2u);
    }
    else
    {
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
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
        TlgWrite(v13, &unk_18021380E, v14, v15, 7u, &pData);
      }
      if ( dword_180272550 )
        SetEvent(qword_1802727E0);
    }
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v21);
  return v11;
}
