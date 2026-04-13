/*
 * XREFs of ?DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z @ 0x180096370
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180038F04 (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180066F5C (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x180096650 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@1@@Z @ 0x180096C2C (--0-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::CommonHelper::SettingsContainer::DeleteContainer(
        CreativeFramework::CommonHelper::SettingsContainer *this,
        HSTRING a2)
{
  char *StringRawBuffer; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  __int64 *v9; // rbx
  _QWORD *v10; // rdi
  void *v11[3]; // [rsp+20h] [rbp-40h] BYREF
  void *v12[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-10h]

  v11[2] = (void *)-2LL;
  CreativeFramework::CommonHelper::SettingsContainer::ResolveContainers(this);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(
    v11,
    (char *)this + 16);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
  v13 = 7LL;
  v12[2] = 0LL;
  LOWORD(v12[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&StringRawBuffer[2 * v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::wstring::assign(v12, StringRawBuffer, v5);
  v7 = v11[0];
  v8 = v11[0];
  v9 = (__int64 *)*((_QWORD *)v11[0] + 1);
  v10 = v11[0];
  if ( !*((_BYTE *)v9 + 25) )
  {
    do
    {
      if ( (unsigned __int8)std::less<std::wstring>::operator()(v6, v9 + 4, v12) )
      {
        v9 = (__int64 *)v9[2];
      }
      else
      {
        v10 = v9;
        v9 = (__int64 *)*v9;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    v7 = v11[0];
    if ( v10 != v11[0] )
    {
      if ( !(unsigned __int8)std::less<std::wstring>::operator()(v6, v12, v10 + 4) )
        goto LABEL_14;
      v7 = v11[0];
    }
  }
  v10 = v7;
LABEL_14:
  if ( v13 >= 8 )
    operator delete(v12[0]);
  if ( v10 != v8 )
  {
    (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 1) + 88LL))(*((_QWORD *)this + 1), a2);
    *((_BYTE *)this + 32) = 1;
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(v11);
}
