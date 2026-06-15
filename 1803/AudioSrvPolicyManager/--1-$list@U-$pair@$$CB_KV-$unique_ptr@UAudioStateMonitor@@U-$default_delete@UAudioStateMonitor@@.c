/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAA@XZ @ 0x180019304
 * Callers:
 *     ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x180018DB0 (--_GAudioStateMonitorManager@@UEAAPEAXI@Z.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$16 @ 0x180037157 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMoni_ea_180037157.c)
 * Callees:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x180019294 (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 */

BOOL __fastcall std::list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::~list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>(
        __int64 a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(v2 + 3);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  v6 = GetProcessHeap();
  return HeapFree(v6, 0, v3);
}
