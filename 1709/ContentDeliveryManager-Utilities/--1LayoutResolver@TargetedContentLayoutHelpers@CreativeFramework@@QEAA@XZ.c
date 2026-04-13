/*
 * XREFs of ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18008B258
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::dtor$1 @ 0x1800BBE94 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAA@XZ @ 0x18008DF44 (--1-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$allocat.c)
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::~LayoutResolver(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 9);
    while ( v1 != v3 )
    {
      if ( *(_QWORD *)(v1 + 24) >= 8uLL )
        operator delete(*(void **)v1);
      *(_QWORD *)(v1 + 24) = 7LL;
      *(_QWORD *)(v1 + 16) = 0LL;
      *(_WORD *)v1 = 0;
      v1 += 56LL;
    }
    operator delete(*((void **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((char *)this + 40);
  std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((char *)this + 16);
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
