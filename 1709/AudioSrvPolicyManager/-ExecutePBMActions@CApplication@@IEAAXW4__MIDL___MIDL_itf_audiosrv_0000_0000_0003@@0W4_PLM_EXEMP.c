/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000C124
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     WPP_SF_SS @ 0x18000B4B0 (WPP_SF_SS.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000BE74 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000C3E0 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000C594 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18001073C (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180011F8C (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001435C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int i; // ebp
  BOOL v11; // edi
  int v12; // ecx
  BOOL v13; // esi
  int v14; // edi
  const wchar_t *v15; // rax
  __int64 v16; // r10
  int v17; // esi
  _QWORD *v18; // rdi
  CProcess *v19; // rcx
  __int64 v20; // rdx
  _DWORD v21[10]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = a5; i; i >>= 3 )
  {
    v11 = 0;
    switch ( i & 7 )
    {
      case 1u:
        v12 = *(_DWORD *)(a1 + 176);
        *(_DWORD *)(a1 + 176) = a3;
        v13 = v12 != a3;
        LOBYTE(v11) = v12 == 0;
        v14 = (a3 == 0) ^ v11;
        if ( v12 != a3
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v15 = (const wchar_t *)SoundLevelToString(a3, &WPP_GLOBAL_Control);
          WPP_SF_SS(
            *(_QWORD *)(v16 + 16),
            0xDu,
            &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids,
            *(const wchar_t **)(a1 + 24),
            v15);
        }
        if ( v13 )
        {
          if ( v14 )
          {
            a5 = 0;
            v17 = 0;
            v18 = *(_QWORD **)(a1 + 72);
            if ( v18 )
            {
              do
              {
                v19 = (CProcess *)v18[2];
                v18 = (_QWORD *)*v18;
                if ( !*((_DWORD *)v19 + 116) )
                {
                  CProcess::SimulateStreamStateChange(v19, a3 != 0, &a5);
                  v17 |= a5;
                }
              }
              while ( v18 );
              if ( v17 )
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
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids);
          }
          v21[1] = -1;
          v20 = *(_QWORD *)(a1 + 224);
          v21[0] = -4400000;
          (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _DWORD *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
            ThreadPool,
            v20,
            v21,
            0LL,
            0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
        }
        else if ( a6 )
        {
          CApplication::RecalculateVolume(a1, 3u);
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
