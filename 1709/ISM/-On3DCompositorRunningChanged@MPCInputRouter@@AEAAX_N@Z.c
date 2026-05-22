/*
 * XREFs of ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800AA300
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800A8B3C (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007CD8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9AA4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9C5C (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::On3DCompositorRunningChanged(MPCInputRouter *this, char a2)
{
  PSRWLOCK v3; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct IMPCInputPostProcessor *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( a2 )
  {
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v3);
    v7 = PostProcessor;
    if ( *((struct IMPCInputPostProcessor **)this + 95) != PostProcessor )
    {
      if ( PostProcessor )
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
      v8 = *((_QWORD *)this + 95);
      *((_QWORD *)this + 95) = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    MPCInputRouter::Initialize3DComponents(this, v5, v6);
  }
  else
  {
    MPCInputRouter::UnInitialize3DComponents(this);
    v9 = *((_QWORD *)this + 95);
    if ( v9 )
    {
      *((_QWORD *)this + 95) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
