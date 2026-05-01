/*
 * XREFs of ?PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z @ 0x1801F2BD0
 * Callers:
 *     _lambda_0a16d0eca28ea9e7f82fbcb6f342e453_::operator() @ 0x1801EFBE8 (_lambda_0a16d0eca28ea9e7f82fbcb6f342e453_--operator().c)
 *     _lambda_84ae6e21f9379359c5dabe643d80e783_::operator() @ 0x1801F0970 (_lambda_84ae6e21f9379359c5dabe643d80e783_--operator().c)
 *     _lambda_9d98ae836108ed552b593978131d342d_::operator() @ 0x1801F0DC8 (_lambda_9d98ae836108ed552b593978131d342d_--operator().c)
 *     _lambda_e908abeb5949f0a827fe286a35eddaf5_::operator() @ 0x1801F178C (_lambda_e908abeb5949f0a827fe286a35eddaf5_--operator().c)
 *     _lambda_fd219bb1245fb28d6d94040d1e618284_::operator() @ 0x1801F19F4 (_lambda_fd219bb1245fb28d6d94040d1e618284_--operator().c)
 * Callees:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18005B694 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall WindowWrapperBase::PushBoundsToWindow(__int64 a1, float *a2, char a3)
{
  UINT uFlags; // r10d
  const char *v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 168LL))(*(_QWORD *)(a1 + 312));
  if ( *(_QWORD *)(a1 + 160) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1) )
      a3 &= ~2u;
    uFlags = (2 * ((a3 & 1) == 0) + 82964) | 1;
    if ( (a3 & 2) != 0 )
      uFlags = 2 * ((a3 & 1) == 0) + 82964;
    if ( SetWindowPos((HWND)*(int *)(a1 + 328), 0LL, (int)*a2, (int)a2[1], (int)a2[2], (int)a2[3], uFlags) )
    {
      v8 = *(_QWORD *)(a1 + 336);
      v10 = *(_OWORD *)a2;
      v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 152LL))(v8, &v10);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2268LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 360), (int)a2[2], (int)a2[3]);
    }
    else
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x8DA,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v7);
    }
  }
  *(_OWORD *)(a1 + 216) = *(_OWORD *)a2;
}
