/*
 * XREFs of ShellPositionerHelpers::ShellPositionerCallback__lambda_238c56b7c4acbb7818f4250acff55b47___::Invoke @ 0x180083F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerHelpers::ShellPositionerCallback__lambda_238c56b7c4acbb7818f4250acff55b47___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF

  v13 = 0LL;
  v4 = *(__int64 **)(*(_QWORD *)(a1 + 56) + 184LL);
  v5 = *v4;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v5 + 24))(
         v4,
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         v6);
  v8 = v7;
  if ( v7 < 0
    || (v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, &v14), v8 = v7, v7 < 0)
    || (v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(
               a2,
               v14,
               a1 + 64,
               *(_QWORD *)(a1 + 80)),
        v8 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v7);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0;
  }
  return v8;
}
