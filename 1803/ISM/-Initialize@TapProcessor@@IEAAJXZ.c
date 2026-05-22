/*
 * XREFs of ?Initialize@TapProcessor@@IEAAJXZ @ 0x1800B618C
 * Callers:
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1800B60A4 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateInputServiceProxy @ 0x1800258D8 (CreateInputServiceProxy.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180061518 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800B6348 (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TapProcessor::Initialize(TapProcessor *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int InteractionContext; // eax
  int v6; // eax
  __int64 v7; // rcx
  int InputServiceProxy; // eax
  PointerInfoAdapter *v9; // rax
  PointerInfoAdapter *v10; // rdi
  PointerInfoAdapter *v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 40);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  InteractionContext = CreateInteractionContext((char *)this + 64);
  if ( InteractionContext < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InteractionContext);
    __debugbreak();
  }
  v6 = TapProcessor::ResetAndInitializeInteractionContext(this);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  InputServiceProxy = CreateInputServiceProxy(
                        (struct IInputServiceProxyOwner *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
                        (_QWORD *)this + 7);
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InputServiceProxy);
    JUMPOUT(0x1800B6344LL);
  }
  v9 = (PointerInfoAdapter *)malloc(0x60uLL);
  v10 = v9;
  if ( v9 )
    memset_0(v9, 0, 0x60uLL);
  if ( v10 )
    v10 = PointerInfoAdapter::PointerInfoAdapter(
            v10,
            (struct IPointerInfoAdapterClient *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v11 = (PointerInfoAdapter *)*((_QWORD *)this + 6);
  if ( v11 != v10 )
  {
    v12 = *((_QWORD *)this + 6);
    if ( v10 )
    {
      (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v10 + 8LL))(v10);
      v12 = *((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = v10;
    v11 = v10;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = (PointerInfoAdapter *)*((_QWORD *)this + 6);
    }
  }
  return v11 == 0LL ? 0x8007000E : 0;
}
