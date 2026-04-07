/*
 * XREFs of ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000513C
 * Callers:
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x180005F40 (-Initialize@CStoryboard@@MEAAJXZ.c)
 * Callees:
 *     ?GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017090 (-GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017100 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x180017340 (-GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800173D0 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800173E0 (-GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStoryboard::_EnsurePriority(CStoryboard *this)
{
  __int64 v1; // rdi
  _DWORD *i; // rsi
  const struct StoryboardInfo *(__fastcall *v4)(CSlideInCharm *__hidden); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax

  v1 = 0LL;
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_1800ABC20; ; i += 2 )
    {
      v4 = *(const struct StoryboardInfo *(__fastcall **)(CSlideInCharm *__hidden))(*(_QWORD *)this + 16LL);
      if ( v4 == CFadeIn::GetStoryboardInfo )
      {
        StoryboardInfo = CFadeIn::GetStoryboardInfo(this);
      }
      else if ( v4 == CWindowClose::GetStoryboardInfo )
      {
        StoryboardInfo = CWindowClose::GetStoryboardInfo(this);
      }
      else if ( v4 == CLauncherLaunch::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(this);
      }
      else if ( v4 == CSlideOutCharm::GetStoryboardInfo )
      {
        StoryboardInfo = CSlideOutCharm::GetStoryboardInfo(this);
      }
      else
      {
        StoryboardInfo = v4 == CSlideInCharm::GetStoryboardInfo ? CSlideInCharm::GetStoryboardInfo(this) : v4(this);
      }
      if ( *i == *(_DWORD *)StoryboardInfo )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= 0x22 )
        return;
    }
    *((_DWORD *)this + 16) = dword_1800ABC20[2 * v1 + 1];
  }
}
