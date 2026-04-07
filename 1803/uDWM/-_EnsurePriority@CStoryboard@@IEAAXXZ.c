/*
 * XREFs of ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180009748
 * Callers:
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x180009FB0 (-Initialize@CStoryboard@@MEAAJXZ.c)
 * Callees:
 *     ?GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ @ 0x180009740 (-GetStoryboardInfo@CWindowClose@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A330 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A340 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000A350 (-GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStoryboard::_EnsurePriority(CStoryboard *this)
{
  __int64 v1; // rdi
  _DWORD *i; // rsi
  const struct StoryboardInfo *(__fastcall *v4)(CWindowClose *); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax

  v1 = 0LL;
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_1800B3FA0; ; i += 2 )
    {
      v4 = *(const struct StoryboardInfo *(__fastcall **)(CWindowClose *))(*(_QWORD *)this + 16LL);
      if ( v4 == CFadeIn::GetStoryboardInfo )
      {
        StoryboardInfo = CFadeIn::GetStoryboardInfo(this);
      }
      else if ( v4 == CLauncherDismiss::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(this);
      }
      else if ( v4 == CLauncherLaunch::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(this);
      }
      else
      {
        StoryboardInfo = v4 == CWindowClose::GetStoryboardInfo ? CWindowClose::GetStoryboardInfo(this) : v4(this);
      }
      if ( *i == *(_DWORD *)StoryboardInfo )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= 0x23 )
        return;
    }
    *((_DWORD *)this + 16) = dword_1800B3FA0[2 * v1 + 1];
  }
}
