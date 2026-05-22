/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x1800AA68C
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800A98D8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9AA4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9C5C (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18001B510 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x1800A8588 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::Set3DFocusTarget(MPCInputRouter *this, struct IMPCInputTarget *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int updated; // eax
  struct IMPCInputTarget *v8; // rdi
  struct IMPCInputTarget *v9; // rbx
  _DWORD *v10; // rcx
  ISMTracing *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((struct IMPCInputTarget **)this + 92) != a2 )
  {
    v4 = *((_QWORD *)this + 92);
    if ( *((_QWORD *)this + 93) != v4 )
    {
      if ( v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 92));
      v5 = *((_QWORD *)this + 93);
      *((_QWORD *)this + 93) = v4;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( *((struct IMPCInputTarget **)this + 92) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *((_QWORD *)this + 92);
      *((_QWORD *)this + 92) = a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    updated = DWMInputRouter::UpdateFocusedInputTarget(this, *((struct IInputTarget **)this + 92));
    if ( updated < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x361,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)updated);
      JUMPOUT(0x1800AA7A6LL);
    }
    MPCInputRouter::Update3DFocusWNF(this);
    v8 = (struct IMPCInputTarget *)*((_QWORD *)this + 92);
    v9 = (struct IMPCInputTarget *)*((_QWORD *)this + 93);
    v10 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v10 )
    {
      if ( *v10 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCInputRouter_Set3DFocusTarget_(v11, v9, v8);
      }
    }
  }
}
