/*
 * XREFs of ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEAUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEAUtagSIZE@@@Z @ 0x1800EC448
 * Callers:
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1800E8600 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800C9FC4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<PeoplePaneViewInfo,unsigned short const * &,enum ViewType,tagSIZE &>(
        _QWORD *a1,
        void ***a2,
        int *a3,
        __int64 *a4)
{
  char *v8; // r15
  _WORD *v9; // rsi
  __int64 v10; // rbx
  int v11; // edi
  void **v12; // rdx

  v8 = (char *)operator new(0x58uLL);
  *((_DWORD *)v8 + 2) = 1;
  *((_DWORD *)v8 + 3) = 1;
  *(_QWORD *)v8 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  v9 = v8 + 16;
  if ( v8 != (char *)-16LL )
  {
    v10 = *a4;
    v11 = *a3;
    v12 = *a2;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 5) = 7LL;
    *v9 = 0;
    std::wstring::assign((void **)v8 + 2, v12);
    *((_QWORD *)v8 + 6) = 0LL;
    *((_DWORD *)v8 + 14) = 0;
    *((_QWORD *)v8 + 8) = 0LL;
    v8[72] = 0;
    *((_DWORD *)v8 + 19) = v11;
    *((_QWORD *)v8 + 10) = v10;
  }
  a1[1] = v8;
  *a1 = v9;
  return a1;
}
