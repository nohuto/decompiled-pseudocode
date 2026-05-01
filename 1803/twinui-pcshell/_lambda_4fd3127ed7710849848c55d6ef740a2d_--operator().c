/*
 * XREFs of _lambda_4fd3127ed7710849848c55d6ef740a2d_::operator() @ 0x18009EE60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4fd3127ed7710849848c55d6ef740a2d___::Run @ 0x18009F570 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4fd3127ed7710849848c55d6ef740a2d___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801AC368 (--0-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@QEAA@QEAV1@I@Z @ 0x1801AC868 (--0Iterator@-$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@QEAA@QEAV1@I@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@QEAA?AV?$ComPtr@UIHolographicViewTransitionNotification@@@WRL@Microsoft@@XZ @ 0x1801AD290 (--DIterator@-$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@QEAA-AV-$ComPtr@UIHo.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAXXZ @ 0x1801AE544 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAX.c)
 */

// Hidden C++ exception states: #wind=4
unsigned int __fastcall lambda_4fd3127ed7710849848c55d6ef740a2d_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
  void *v8; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 *v15; // [rsp+80h] [rbp+10h] BYREF

  ObjectArrayAdapter<IImmersiveApplicationInternal>::ObjectArrayAdapter<IImmersiveApplicationInternal>(
    &v8,
    *(_QWORD *)a1);
  ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::Iterator(&v10, &v8, 0LL);
  ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::Iterator(&v12, &v8, v9);
  while ( v10 != v12 || v11[1] != v13[1] )
  {
    ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::operator*(&v10, &v15);
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *v15;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 32))(v15, v2);
      v5 = retaddr;
      if ( v4 >= 0 )
        goto LABEL_10;
      v6 = 1858LL;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 24))(v15, v2);
      v5 = retaddr;
      if ( v4 >= 0 )
        goto LABEL_10;
      v6 = 1859LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v5,
      v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    ++v10;
    ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::GetCurrentObject(&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v8);
}
