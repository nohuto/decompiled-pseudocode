/*
 * XREFs of ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x180083564
 * Callers:
 *     ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800823F0 (-MakeAddTileToCollectionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 * Callees:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800811B8 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::AddTileToCollectionService,wchar_t const *,CreativeFramework::Actions::PinToStartProperties &>(
        _QWORD *a1,
        wchar_t **a2,
        void **a3)
{
  _DWORD *v6; // rbx

  v6 = operator new(0xD0uLL);
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
      (CreativeFramework::Actions::AddTileToCollectionService *)(v6 + 4),
      *a2,
      a3);
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6;
  *a1 = v6 + 4;
  return a1;
}
