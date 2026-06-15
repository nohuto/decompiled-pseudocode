/*
 * XREFs of ??_ECEndpointVolumeStateManager@@UEAAPEAXI@Z @ 0x18002E830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800193F8 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-$basic_.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@@Z @ 0x18002E798 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

CEndpointVolumeStateManager *__fastcall CEndpointVolumeStateManager::`vector deleting destructor'(
        CEndpointVolumeStateManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bp
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  HANDLE ProcessHeap; // rax

  v4 = a2;
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>(
    (__int64)this + 80,
    a2,
    a3,
    a4);
  v8 = (_QWORD **)*((_QWORD *)this + 8);
  v9 = *v8;
  *v8 = v8;
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
  v10 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v9 != v10 )
  {
    do
    {
      v11 = (_QWORD *)*v9;
      std::_List_buy<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::_Freenode(v7, v9);
      v9 = v11;
      v10 = (_QWORD *)*((_QWORD *)this + 8);
    }
    while ( v11 != v10 );
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
