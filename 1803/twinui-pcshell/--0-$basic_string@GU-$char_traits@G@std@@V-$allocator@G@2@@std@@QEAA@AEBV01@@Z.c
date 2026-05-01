/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800F7430
 * Callers:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801945C4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801A9EC4 (--$_Uninitialized_copy_al_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18023CC54 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  void *v6; // rax

  v2 = (_OWORD *)a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v4 >= 8 )
  {
    v5 = v4 | 7;
    if ( (v4 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = std::_Allocate<std::_Default_allocate_traits<1>>(v5 + 1, 2uLL);
    *a1 = v6;
    memcpy_0(v6, v2, 2 * v4 + 2);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v4;
  a1[3] = v5;
  return a1;
}
