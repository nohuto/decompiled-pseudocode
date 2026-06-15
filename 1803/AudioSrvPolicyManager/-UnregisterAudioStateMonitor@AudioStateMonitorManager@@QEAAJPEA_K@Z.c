/*
 * XREFs of ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18002F0BC
 * Callers:
 *     ?UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z @ 0x1800169B0 (-UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@1@V21@@Z @ 0x18002F394 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$unique_ptr@UAudio.c)
 */

__int64 __fastcall AudioStateMonitorManager::UnregisterAudioStateMonitor(
        AudioStateMonitorManager *this,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  _QWORD *v11; // r10
  _QWORD *j; // r8
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a2 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = *((_QWORD *)this + 10);
  v9 = v5 & *((_QWORD *)this + 13);
  v10 = 2 * v9;
  v11 = *(_QWORD **)(v8 + 16 * v9);
  for ( j = v11; ; j = (_QWORD *)*j )
  {
    v13 = v11 == *((_QWORD **)this + 8) ? (_QWORD *)*((_QWORD *)this + 8) : **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( j == v13 )
      break;
    if ( j[2] == *a2 )
      goto LABEL_11;
  }
  j = (_QWORD *)*((_QWORD *)this + 8);
LABEL_11:
  if ( j == *((_QWORD **)this + 8) )
  {
    v14 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>,void>(
      (char *)this + 56,
      &v17);
    *a2 = 0LL;
    v14 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v14;
}
