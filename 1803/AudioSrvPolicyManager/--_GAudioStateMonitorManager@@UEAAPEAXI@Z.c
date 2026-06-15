/*
 * XREFs of ??_GAudioStateMonitorManager@@UEAAPEAXI@Z @ 0x180018DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$list@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAA@XZ @ 0x180019304 (--1-$list@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@.c)
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800193F8 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$basic_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AudioStateMonitorManager *__fastcall AudioStateMonitorManager::`scalar deleting destructor'(
        AudioStateMonitorManager *this,
        char a2)
{
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>((char *)this + 80);
  std::list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::~list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>((char *)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
