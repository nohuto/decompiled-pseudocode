/*
 * XREFs of ?Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008F720
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x18008FA8C (-NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 */

void __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::Commit(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 124) )
  {
    v1 = CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(this);
    if ( v1 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)(unsigned int)v1);
      JUMPOUT(0x18008F751LL);
    }
  }
}
