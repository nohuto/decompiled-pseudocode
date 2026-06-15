/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18000F4C0
 * Callers:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18000F638 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x18002A470 (-_Destroy@-$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18000F354 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180011D34 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(CPlaybackNotifier *a1, int a2, _WORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  char *v8; // r15
  size_t v9; // rbx
  unsigned int v10; // r8d
  const char *v11; // r9
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  bool v15; // al
  size_t v16; // rbx
  __int64 v17; // [rsp+28h] [rbp-60h] BYREF
  void *v18[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]
  unsigned __int64 v20; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v19 = 0LL;
    v20 = 7LL;
    LOWORD(v18[0]) = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    if ( v6 <= 7 )
    {
      v19 = v6;
      v16 = 2 * v6;
      memmove(v18, a3, v16);
      *(_WORD *)((char *)v18 + v16) = 0;
    }
    else
    {
      v7 = 0x7FFFFFFFFFFFFFFELL;
      if ( v6 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlength_error("string too long");
      if ( (v6 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v7 = v6 | 7;
        if ( (v6 | 7) < 0xA )
          v7 = 10LL;
      }
      v8 = (char *)std::_Allocate(v7 + 1, 2uLL, (bool)a3);
      v19 = v6;
      v20 = v7;
      v9 = 2 * v6;
      memcpy_0(v8, a3, v9);
      *(_WORD *)&v8[v9] = 0;
      v18[0] = v8;
    }
    std::map<std::wstring,ENDPOINT_REF_DATA>::_Try_emplace<std::wstring,>((char *)a1 + 80, &v17, v18);
    v12 = v17;
    if ( v20 >= 8 )
      std::_Deallocate(v18[0], v20 + 1, 2uLL);
    v19 = 0LL;
    v20 = 7LL;
    LOWORD(v18[0]) = 0;
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v13 = *(_DWORD *)(v12 + 64);
      if ( !v13 )
        return;
      v14 = v13 - 1;
      *(_DWORD *)(v12 + 64) = v14;
      if ( !v14 )
      {
LABEL_15:
        CPlaybackNotifier::PublishPlaybackAudioStatus(a1);
        return;
      }
      v15 = 0;
    }
    else
    {
      v15 = ++*(_DWORD *)(v12 + 64) == 1;
    }
    if ( v15 )
      goto LABEL_15;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x160, v10, v11);
  }
}
