/*
 * XREFs of ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180032A98
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180017828 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x18006ED60 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetAllDisplaysNoRef(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 64) )
  {
    v6 = v12;
    while ( 1 )
    {
      v7 = *(unsigned int *)(a2 + 24);
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
      v8 = v7 + 1;
      v9 = v7 + 1;
      if ( (int)v7 + 1 < (unsigned int)v7 )
        v9 = v6;
      v2 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
      v6 = v9;
      if ( v8 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v9 <= *(_DWORD *)(a2 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = v12;
        *(_DWORD *)(a2 + 24) = v9;
      }
      else
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v12);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
      }
      if ( v2 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
        return (unsigned int)v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x140u);
  }
  return (unsigned int)v2;
}
