/*
 * XREFs of ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800863E0
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180084A78 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007E1C (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18008598C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180085B60 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::On3DCompositorRunningChanged(MPCInputRouter *this, char a2)
{
  PSRWLOCK v3; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct IMPCInputPostProcessor *v7; // rcx
  struct IMPCInputPostProcessor *v8; // rdi
  __int64 v9; // rcx

  if ( a2 )
  {
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v3);
    v7 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 94);
    v8 = PostProcessor;
    if ( v7 != PostProcessor )
    {
      if ( PostProcessor )
      {
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
        v7 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 94);
      }
      *((_QWORD *)this + 94) = v8;
      if ( v7 )
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    MPCInputRouter::Initialize3DComponents(this, v5, v6);
  }
  else
  {
    MPCInputRouter::UnInitialize3DComponents(this);
    v9 = *((_QWORD *)this + 94);
    if ( v9 )
    {
      *((_QWORD *)this + 94) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
