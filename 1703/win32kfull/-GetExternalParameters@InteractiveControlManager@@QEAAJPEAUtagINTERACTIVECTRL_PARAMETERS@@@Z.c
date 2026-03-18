/*
 * XREFs of ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C021A714
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0108C18 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlManager::GetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        __int64 a3)
{
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  unsigned int v7; // r9d
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  int Settings; // [rsp+30h] [rbp-19h] BYREF
  int v14; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *p_Settings; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]

  Settings = 0;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetExternalParameters entry");
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC18D, v5, v6, 3u, &pData);
  }
  if ( a2 )
  {
    Settings = InteractiveControlSettings::ReadSettings(
                 (InteractiveControlManager *)((char *)this + 84),
                 (__int64)a2,
                 a3);
    v7 = Settings;
    if ( Settings < 0 && (unsigned int)dword_1C0324190 > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v19 = 0;
      p_Settings = &v14;
      v14 = (int)v8;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v9, v8, 4u, &pData);
      v7 = Settings;
    }
    *(_DWORD *)a2 = *((_DWORD *)this + 25);
  }
  else
  {
    v7 = -1073741811;
    Settings = -1073741811;
  }
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetExternalParameters exit");
    v19 = 0;
    p_Settings = &Settings;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v10, v11, 4u, &pData);
    return (unsigned int)Settings;
  }
  return v7;
}
