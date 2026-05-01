/*
 * XREFs of ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x1801E4E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5caa8e8c6a5ac1da53360b2df0ff3904___ @ 0x1801E3E3C (Windows--Internal--ComTaskPool--QueueTask__lambda_5caa8e8c6a5ac1da53360b2df0ff3904___.c)
 *     ?ChangeRefcountedBooleanValue@@YA?AW4StateChangeResult@@AEA_KW4PopupCountOperation@@_K@Z @ 0x1801E4E2C (-ChangeRefcountedBooleanValue@@YA-AW4StateChangeResult@@AEA_KW4PopupCountOperation@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::ChangeSuppressPopupsCount(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  CWinRTApplicationView *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  CWinRTApplicationView *v9; // [rsp+28h] [rbp-20h] BYREF
  CWinRTApplicationView *v10; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CWinRTApplicationView *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = ChangeRefcountedBooleanValue((unsigned __int64 *)(a1 + 296), a2, a3);
  if ( v4 == 1 )
  {
    v5 = (CWinRTApplicationView *)(a1 - 8);
    v12 = v5;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v12);
    v9 = v5;
    v10 = v5;
    v12 = 0LL;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_5caa8e8c6a5ac1da53360b2df0ff3904___(v6, &v9);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        954LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  return v4;
}
