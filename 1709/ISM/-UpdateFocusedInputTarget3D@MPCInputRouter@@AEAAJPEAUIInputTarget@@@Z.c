/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800A98D8
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800A91E0 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800122B4 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18001B510 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z @ 0x1800A82B0 (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0@Z.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800AA0A0 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x1800AA68C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 *     ?AreTargetsTheSame@MPCInputRouter@@AEAA_NPEAUIInputTarget@@0@Z @ 0x1800AA7A8 (-AreTargetsTheSame@MPCInputRouter@@AEAA_NPEAUIInputTarget@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget3D(
        struct IInputTarget **this,
        int (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  int (__fastcall **v4)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  MPCInputRouter *v6; // rcx
  int v7; // eax
  MPCInputRouter *v8; // rcx
  char v9; // r14
  int v10; // eax
  struct IMPCInputTarget *v11; // rbx
  struct IMPCInputTarget *v12; // rdi
  struct IMPCInputTarget *v13; // rcx
  char v14; // bl
  struct IMPCInputTarget *v15; // rdi
  _DWORD *v16; // rcx
  ISMTracing *v17; // rcx
  int updated; // eax
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IMPCInputTarget *v22; // [rsp+68h] [rbp+38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    v4 = *a2;
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v23);
    if ( (*v4)((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v5) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 64LL))(v23, &v24);
      v6 = retaddr;
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v7);
    }
    if ( MPCInputRouter::IsTargetHolographic(v6, (struct IInputTarget *)a2) )
    {
      v9 = MPCInputRouter::AreTargetsTheSame(v8, this[92], (struct IInputTarget *)a2);
      if ( !v9 )
      {
        v22 = 0LL;
        v10 = MPCInputRouter::CreateMPCTarget((MPCInputRouter *)this, (struct IInputTarget *)a2, 0LL, &v22);
        v11 = v22;
        if ( v10 < 0 )
        {
          v12 = this[94];
          if ( v22 != v12 )
          {
            if ( v12 )
              (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v12 + 8LL))(this[94]);
            v13 = v11;
            v11 = v12;
            v22 = v12;
            if ( v13 )
              (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
        MPCInputRouter::Set3DFocusTarget((MPCInputRouter *)this, v11);
        if ( v11 )
          (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v14 = (*(unsigned int (__fastcall **)(struct IInputTarget *))(*(_QWORD *)this[92] + 56LL))(this[92]) == 1;
      v15 = this[92];
      v16 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v16 && *v16 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(v17, v9, v15, v14);
      }
    }
    else if ( v24 )
    {
      updated = DWMInputRouter::UpdateFocusedInputTarget((DWMInputRouter *)this, (struct IInputTarget *)a2);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x22B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)updated);
    }
  }
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return 0LL;
}
