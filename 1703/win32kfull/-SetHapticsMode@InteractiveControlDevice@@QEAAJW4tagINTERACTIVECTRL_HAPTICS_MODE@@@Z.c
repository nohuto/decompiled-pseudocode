/*
 * XREFs of ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0220B64
 * Callers:
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021B938 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0223984 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SetHapticsMode(__int64 a1, int a2)
{
  int v2; // edi
  unsigned __int16 v5; // bp
  SimpleHapticsController *v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v10; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-58h] BYREF
  int *v13; // [rsp+70h] [rbp-48h]
  int v14; // [rsp+78h] [rbp-40h]
  int v15; // [rsp+7Ch] [rbp-3Ch]

  v2 = 0;
  v5 = 2;
  if ( !a2
    && !*(_DWORD *)(a1 + 64)
    && !*((_DWORD *)InteractiveControlManager::Instance() + 21)
    && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
  {
    v5 = 3;
  }
  v6 = *(SimpleHapticsController **)(a1 + 376);
  if ( v6 )
  {
    v2 = SimpleHapticsController::SetAutoTriggerWaveform(v6, v5);
    if ( v2 >= 0 )
    {
      *(_DWORD *)(a1 + 60) = a2;
    }
    else if ( (unsigned int)dword_1C0324190 > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v15 = 0;
      v13 = &v10;
      v10 = v2;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v7, v8, 4u, &pData);
    }
  }
  return (unsigned int)v2;
}
