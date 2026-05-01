/*
 * XREFs of ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEBUtagSIZE@@@Z @ 0x1800EC37C
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800C9FC4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<PeoplePaneViewInfo,unsigned short const * &,enum ViewType,tagSIZE const &>(
        _QWORD *a1,
        void ***a2,
        int *a3)
{
  char *v6; // r15
  _WORD *v7; // rsi
  int v8; // edi
  void **v9; // rdx

  v6 = (char *)operator new(0x58uLL);
  *((_DWORD *)v6 + 2) = 1;
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  v7 = v6 + 16;
  if ( v6 != (char *)-16LL )
  {
    v8 = *a3;
    v9 = *a2;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 7LL;
    *v7 = 0;
    std::wstring::assign((void **)v6 + 2, v9);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_DWORD *)v6 + 14) = 0;
    *((_QWORD *)v6 + 8) = 0LL;
    v6[72] = 0;
    *((_DWORD *)v6 + 19) = v8;
    *((_QWORD *)v6 + 10) = 0x28800000168LL;
  }
  a1[1] = v6;
  *a1 = v7;
  return a1;
}
