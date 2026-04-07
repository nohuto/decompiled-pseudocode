/*
 * XREFs of ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180075278
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007E074 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18007EC14 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18007F24C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180033ECC (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDisplayRect(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  int AllDisplaysNoRef; // eax
  unsigned int v8; // esi
  __int64 v10; // rax
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  unsigned int v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  a3[1] = 0LL;
  *a3 = 0LL;
  v6 = *(_QWORD *)(a1 + 152);
  if ( a2 )
  {
    *(_OWORD *)v11 = 0LL;
    v12 = 0LL;
    v13 = 0;
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v6, (__int64)v11);
    v8 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD0F,
        (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)AllDisplaysNoRef);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v11);
      return v8;
    }
    if ( v13 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * v3);
        if ( *(_QWORD *)(v10 + 16) == a2 )
          break;
        if ( ++v3 >= v13 )
          goto LABEL_9;
      }
      *(_OWORD *)a3 = *(_OWORD *)(v10 + 56);
    }
LABEL_9:
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v11);
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)(v6 + 16);
  }
  return 0LL;
}
