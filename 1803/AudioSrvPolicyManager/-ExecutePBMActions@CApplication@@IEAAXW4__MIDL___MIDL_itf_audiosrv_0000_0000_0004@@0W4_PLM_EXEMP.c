/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x1800110B8
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001CF54 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     WPP_SF_SS @ 0x1800102C4 (WPP_SF_SS.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180010E10 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180011370 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180011524 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180016138 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001A228 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int i; // ebp
  BOOL v11; // edi
  int v12; // esi
  int v13; // edi
  const wchar_t *v14; // rax
  __int64 v15; // r10
  int v16; // esi
  _QWORD *v17; // rdi
  CProcess *v18; // rcx
  __int64 v19; // rdx
  _DWORD v20[10]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = a5; i; i >>= 3 )
  {
    v11 = 0;
    switch ( i & 7 )
    {
      case 1u:
        v12 = *(_DWORD *)(a1 + 176);
        *(_DWORD *)(a1 + 176) = a3;
        LOBYTE(v11) = v12 == 0;
        v13 = (a3 == 0) ^ v11;
        if ( v12 == a3 )
          goto LABEL_34;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v14 = (const wchar_t *)SoundLevelToString(a3);
          WPP_SF_SS(
            *(_QWORD *)(v15 + 16),
            0xDu,
            &WPP_16513b4b06ea364292c42252679a25cf_Traceguids,
            *(const wchar_t **)(a1 + 24),
            v14);
        }
        if ( v12 == a3 )
        {
LABEL_34:
          if ( a6 )
            CApplication::RecalculateVolume(a1, 3u);
        }
        else
        {
          if ( v13 )
          {
            a5 = 0;
            v16 = 0;
            v17 = *(_QWORD **)(a1 + 72);
            if ( v17 )
            {
              do
              {
                v18 = (CProcess *)v17[2];
                v17 = (_QWORD *)*v17;
                if ( !*((_DWORD *)v18 + 118) )
                {
                  CProcess::SimulateStreamStateChange(v18, a3 != 0, &a5);
                  v16 |= a5;
                }
              }
              while ( v17 );
              if ( v16 )
                CApplicationManager::UpdateVolumeForAllAppsInSession(
                  g_ApplicationManager,
                  *(unsigned int *)(a1 + 172),
                  3LL);
            }
          }
          CApplication::RecalculateVolume(a1, 3u);
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
          *(_DWORD *)(a1 + 232) = 1;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids);
          }
          v20[1] = -1;
          v19 = *(_QWORD *)(a1 + 224);
          v20[0] = -4400000;
          (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _DWORD *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
            ThreadPool,
            v19,
            v20,
            0LL,
            0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
        }
        break;
      case 2u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
        *(_DWORD *)(a1 + 284) = a2;
        if ( a2 < *(_DWORD *)(a1 + 288) )
          v11 = *(_DWORD *)(a1 + 232) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 240));
        if ( !v11 )
          CApplication::ProcessPendingSoundLevelNotification((CApplication *)a1);
        break;
      case 3u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 296));
        *(_DWORD *)(a1 + 340) = a4;
        if ( a4 == 1 )
          v11 = *(_DWORD *)(a1 + 232) != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 296));
        if ( !v11 )
          CApplication::ProcessPendingPLMExemptionChange((CApplication *)a1);
        break;
      case 4u:
        Sleep(0xAu);
        break;
    }
  }
}
