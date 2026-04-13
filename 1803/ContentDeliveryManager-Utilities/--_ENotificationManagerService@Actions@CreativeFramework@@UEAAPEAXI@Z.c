/*
 * XREFs of ??_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x18008B0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x180046D84 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     ?_Delete@?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@AEAAXXZ @ 0x18008B500 (-_Delete@-$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U-$default_delete@VTo.c)
 */

CreativeFramework::Actions::NotificationManagerService *__fastcall CreativeFramework::Actions::NotificationManagerService::`vector deleting destructor'(
        CreativeFramework::Actions::NotificationManagerService *this,
        char a2)
{
  char *v4; // rbx

  std::unique_ptr<CreativeFramework::NotificationManager::ToastHelpers>::_Delete((char *)this + 136);
  v4 = (char *)this + 120;
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
    (__int64)this + 120,
    *(__int64 **)(*((_QWORD *)this + 15) + 8LL));
  *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)v4;
  **(_QWORD **)v4 = *(_QWORD *)v4;
  *(_QWORD *)(*(_QWORD *)v4 + 16LL) = *(_QWORD *)v4;
  *((_QWORD *)this + 16) = 0LL;
  operator delete(*((void **)this + 15));
  if ( *((_QWORD *)this + 13) >= 8uLL )
    operator delete(*((void **)this + 10));
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  if ( *((_QWORD *)this + 9) >= 8uLL )
    operator delete(*((void **)this + 6));
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 5) >= 8uLL )
    operator delete(*((void **)this + 2));
  *((_QWORD *)this + 5) = 7LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
