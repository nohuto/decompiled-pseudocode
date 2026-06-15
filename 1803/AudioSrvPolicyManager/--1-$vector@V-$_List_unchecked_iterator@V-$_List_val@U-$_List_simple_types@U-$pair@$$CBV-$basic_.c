/*
 * XREFs of ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800193F8
 * Callers:
 *     ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x180018DB0 (--_GAudioStateMonitorManager@@UEAAPEAXI@Z.c)
 *     ??_ECEndpointVolumeStateManager@@UEAAPEAXI@Z @ 0x18002E830 (--_ECEndpointVolumeStateManager@@UEAAPEAXI@Z.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$17 @ 0x180037167 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMoni_ea_180037167.c)
 *     _TSSession::Create_::_1_::dtor$45 @ 0x1800376D9 (_TSSession--Create_--_1_--dtor$45.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  HANDLE ProcessHeap; // rax

  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_8:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v4 & 0x1F) == 0 )
      {
        v7 = *((_QWORD *)v4 - 1);
        if ( v7 < (unsigned __int64)v4 && (unsigned __int64)v4 - v7 - 8 <= 0x1F )
        {
          v4 = (void *)*((_QWORD *)v4 - 1);
          goto LABEL_8;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2, a3, a4);
    JUMPOUT(0x180019484LL);
  }
}
