/*
 * XREFs of ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180033ECC
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180075278 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800757A0 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DF88 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetAllDisplaysNoRef(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  unsigned int v6; // ebp
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 64) )
  {
    v6 = v11;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
      v8 = *(unsigned int *)(a2 + 24);
      v9 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v6 = v8 + 1;
      v2 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v9 >= (unsigned int)v8 )
      {
        if ( v6 > *(_DWORD *)(a2 + 20) )
        {
          v10 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8, 1, &v11);
          v2 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v8) = v11;
          *(_DWORD *)(a2 + 24) = v6;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
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
