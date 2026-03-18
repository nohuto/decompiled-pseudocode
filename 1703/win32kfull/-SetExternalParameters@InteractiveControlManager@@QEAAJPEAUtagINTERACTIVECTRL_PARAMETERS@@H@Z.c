/*
 * XREFs of ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C021BADC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021B938 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C021F0D4 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlManager::SetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        int a3)
{
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  unsigned int v7; // r9d
  int v8; // eax
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v16; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v17[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  int v23; // [rsp+D0h] [rbp+77h] BYREF

  v23 = a3;
  v16 = 0;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetExternalParameters entry");
    v22 = 0;
    v20 = &v23;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC1BD, v5, v6, 4u, &pData);
  }
  if ( a2 )
  {
    v8 = *(_DWORD *)a2;
    *((_DWORD *)this + 25) = *(_DWORD *)a2;
    v16 = InteractiveControlManager::SetDeviceHapticsMode((__int64)this, (__int64)a2, v8 == 0);
    v7 = v16;
    if ( v16 < 0 && (unsigned int)dword_1C0324190 > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v22 = 0;
      v20 = v17;
      v17[0] = (_DWORD)v9;
      v21 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v10, v9, 4u, &pData);
      v7 = v16;
    }
    if ( v23 )
    {
      v16 = InteractiveControlSettings::WriteSettings((InteractiveControlManager *)((char *)this + 84));
      v7 = v16;
      if ( v16 < 0 && (unsigned int)dword_1C0324190 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v22 = 0;
        v20 = v17;
        v17[0] = (_DWORD)v11;
        v21 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v12, v11, 4u, &pData);
        v7 = v16;
      }
    }
  }
  else
  {
    v7 = -1073741811;
    v16 = -1073741811;
  }
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetExternalParameters exit");
    v22 = 0;
    v20 = &v16;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v13, v14, 4u, &pData);
    return (unsigned int)v16;
  }
  return v7;
}
