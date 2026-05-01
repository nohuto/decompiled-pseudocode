/*
 * XREFs of ?AnimatePositionChanged@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1802A0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802A0B28 (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 */

void __fastcall SwitchItemCloseAnimationCoordinator::AnimatePositionChanged(
        SwitchItemCloseAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 19LL);
  }
  else
  {
    v5 = 0LL;
    v3 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(a2, &v5);
    if ( v3 >= 0 )
    {
      if ( *((_DWORD *)a2 + 2) == 3 )
      {
        (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v5 + 112LL))(v5, (char *)a2 + 28, 19LL);
      }
      else if ( *((_DWORD *)a2 + 2) == 4 )
      {
        (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v5 + 120LL))(v5, (char *)a2 + 28, 19LL);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        49LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcloseanimationcoordinator.cpp",
        (const char *)(unsigned int)v3);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
