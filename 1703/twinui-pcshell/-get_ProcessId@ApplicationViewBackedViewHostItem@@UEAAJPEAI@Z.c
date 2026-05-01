/*
 * XREFs of ?get_ProcessId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x1800E5C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_ProcessId(
        ApplicationViewBackedViewHostItem *this,
        unsigned int *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v12 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 10);
  v4 = *v3;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v4 + 24))(
         v3,
         1LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 48LL))(v12, a2);
    v7 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v6);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
