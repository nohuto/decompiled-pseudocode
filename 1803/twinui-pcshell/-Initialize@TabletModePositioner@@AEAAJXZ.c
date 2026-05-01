/*
 * XREFs of ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1802C7E10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_836355970810da4d6888afdea5197ae5__&___ptr64_::Run @ 0x1802C9E20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_836355970810da4d6888afdea5197ae5__-___ptr64.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1802C7EC4 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D4170 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D494C (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::Initialize(IUnknown *punkSite)
{
  IUnknown *v2; // rsi
  const struct _GUID *v3; // rdx
  int Instance; // ebx
  __int64 v5; // rdx
  const struct _GUID *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !LODWORD(punkSite[29].lpVtbl) )
  {
    v2 = punkSite + 39;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[39]);
    Instance = ChromeManager_CreateInstance(punkSite, v3, (void **)&v2->lpVtbl);
    if ( Instance < 0 )
    {
      v5 = 1456LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
    IUnknown_SetSite((IUnknown *)v2->lpVtbl, punkSite);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[40]);
    Instance = PositionAdjustmentHistory_CreateInstance(v7, (void **)&punkSite[40].lpVtbl);
    if ( Instance < 0 )
    {
      v5 = 1461LL;
      goto LABEL_4;
    }
    Instance = TabletModePositioner::InitializeAppLayoutForStartup((TabletModePositioner *)punkSite);
    if ( Instance < 0 )
    {
      v5 = 1465LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
