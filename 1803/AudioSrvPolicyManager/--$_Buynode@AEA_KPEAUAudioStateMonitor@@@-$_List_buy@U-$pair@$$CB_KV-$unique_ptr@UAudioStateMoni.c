/*
 * XREFs of ??$_Buynode@AEA_KPEAUAudioStateMonitor@@@?$_List_buy@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@1@PEAU21@0AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x18002F6C4
 * Callers:
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002ED64 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@2@PEAU32@0@Z @ 0x180018E04 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::_Buynode<unsigned __int64 &,AudioStateMonitor *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>::_Buynode0(
             a1,
             a2,
             a3);
  try
  {
    result[2] = *a4;
    result[3] = *a5;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>::deallocate(
      (__int64)a5,
      result);
    throw;
  }
  return result;
}
