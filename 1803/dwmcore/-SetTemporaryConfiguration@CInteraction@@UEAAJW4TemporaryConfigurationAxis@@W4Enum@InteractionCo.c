/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180192940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801CED68 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  int ManipulationManager; // eax
  int v10; // ecx
  unsigned int v11; // edi
  int updated; // eax
  const struct _TlgProvider_t *v13; // rcx
  int v14; // r9d
  int v16; // [rsp+30h] [rbp-81h] BYREF
  int v17; // [rsp+34h] [rbp-7Dh] BYREF
  int v18; // [rsp+38h] [rbp-79h] BYREF
  int v19; // [rsp+3Ch] [rbp-75h] BYREF
  struct CManipulationManager *v20; // [rsp+40h] [rbp-71h] BYREF
  __int64 v21; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v23; // [rsp+70h] [rbp-41h]
  int v24; // [rsp+78h] [rbp-39h]
  int v25; // [rsp+7Ch] [rbp-35h]
  int *v26; // [rsp+80h] [rbp-31h]
  int v27; // [rsp+88h] [rbp-29h]
  int v28; // [rsp+8Ch] [rbp-25h]
  int *v29; // [rsp+90h] [rbp-21h]
  int v30; // [rsp+98h] [rbp-19h]
  int v31; // [rsp+9Ch] [rbp-15h]
  int *v32; // [rsp+A0h] [rbp-11h]
  int v33; // [rsp+A8h] [rbp-9h]
  int v34; // [rsp+ACh] [rbp-5h]
  int *v35; // [rsp+B0h] [rbp-1h]
  int v36; // [rsp+B8h] [rbp+7h]
  int v37; // [rsp+BCh] [rbp+Bh]

  v20 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v20);
  ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(a1 + 24), &v20);
  v11 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ManipulationManager, 0x2AFu);
  }
  else
  {
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v10, a1, a2, a3, a4, a5);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2B6u);
    }
    else
    {
      if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
      {
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v23 = &v21;
        v26 = &v16;
        v29 = &v17;
        v18 = a4;
        v32 = &v18;
        v35 = &v19;
        v21 = a1;
        v24 = 8;
        v16 = a2;
        v27 = v14;
        v17 = a3;
        v30 = v14;
        v33 = v14;
        v19 = a5;
        v36 = v14;
        TlgWrite(v13, &unk_1802A838B, 0LL, 0LL, 7u, &pData);
      }
      if ( dword_1802D66F0 )
        SetEvent(qword_1802D6988);
    }
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v20);
  return v11;
}
