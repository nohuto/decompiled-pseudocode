/*
 * XREFs of ?PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ @ 0x1801332D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x18013362C (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FrameWrapper::PrepareFrameForDestroy(FrameWrapper *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(FrameWrapper *, __int64))(*(_QWORD *)this + 40LL))(this, 1LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      67LL,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v2);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v3 = (*(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL))(this, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, 0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      *((_DWORD *)this + 12) &= ~1u;
      FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 32));
      v4 = 0;
      goto LABEL_9;
    }
    v5 = 73LL;
  }
  else
  {
    v5 = 72LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
