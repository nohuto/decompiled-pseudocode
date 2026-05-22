/*
 * XREFs of ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800503A0
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004D1DC (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007E1C (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004D648 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004D8F4 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::OnHitTestingStateChanged(MPCHolographicInputManager *this, char a2)
{
  PSRWLOCK v3; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  struct IMPCInputPostProcessor *v5; // rcx
  struct IMPCInputPostProcessor *v6; // rdi
  __int64 v7; // rcx

  if ( a2 )
  {
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v3);
    v5 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 253);
    v6 = PostProcessor;
    if ( v5 != PostProcessor )
    {
      if ( PostProcessor )
      {
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
        v5 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 253);
      }
      *((_QWORD *)this + 253) = v6;
      if ( v5 )
        (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    MPCHolographicInputManager::Initialize3DComponents(this);
  }
  else
  {
    MPCHolographicInputManager::UnInitialize3DComponents(this);
    v7 = *((_QWORD *)this + 253);
    if ( v7 )
    {
      *((_QWORD *)this + 253) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
