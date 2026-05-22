/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x180086834
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800857B8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18008598C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180085B60 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x180050B54 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800802D0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x1800842C0 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180086D80 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::Set3DFocusTarget(MPCInputRouter *this, struct IMPCInputTarget *a2)
{
  struct IMPCInputTarget *v2; // rbx
  struct IMPCInputTarget *v5; // rcx
  struct IMPCInputTarget *v6; // rbx
  __int64 v7; // rcx
  MPCHolographicInputManager *v8; // rax
  struct IMPCInputTarget *v9; // rdx
  int updated; // eax
  struct IMPCInputTarget *v11; // rbx
  struct IMPCInputTarget *v12; // rdi
  _DWORD *v13; // rcx
  ISMTracing *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IMPCInputTarget *)*((_QWORD *)this + 91);
  if ( v2 != a2 )
  {
    v5 = (struct IMPCInputTarget *)*((_QWORD *)this + 92);
    if ( v5 != v2 )
    {
      if ( v2 )
      {
        (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v2 + 8LL))(v2);
        v5 = (struct IMPCInputTarget *)*((_QWORD *)this + 92);
      }
      *((_QWORD *)this + 92) = v2;
      if ( v5 )
        (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = (struct IMPCInputTarget *)*((_QWORD *)this + 91);
    if ( v6 != a2 )
    {
      v7 = *((_QWORD *)this + 91);
      if ( a2 )
      {
        (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
        v7 = *((_QWORD *)this + 91);
      }
      *((_QWORD *)this + 91) = a2;
      v6 = a2;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v6 = (struct IMPCInputTarget *)*((_QWORD *)this + 91);
      }
    }
    MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::OnTargetWithFocus3dChanged(v8, v9, v6);
    updated = DWMInputRouter::UpdateFocusedInputTarget(this, *((struct IInputTarget **)this + 91));
    if ( updated < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x36D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)updated);
      JUMPOUT(0x18008696DLL);
    }
    MPCInputRouter::Update3DFocusWNF(this);
    v11 = (struct IMPCInputTarget *)*((_QWORD *)this + 91);
    v12 = (struct IMPCInputTarget *)*((_QWORD *)this + 92);
    v13 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v13 )
    {
      if ( *v13 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCInputRouter_Set3DFocusTarget_(v14, v12, v11);
      }
    }
  }
}
