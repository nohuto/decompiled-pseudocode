/*
 * XREFs of ?IsEqualByApplicationView@ApplicationViewBackedViewHostItem@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18010EFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewBackedViewHostItem::IsEqualByApplicationView(
        ApplicationViewBackedViewHostItem *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        int *a3)
{
  __int64 (__fastcall **v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v17 = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v17);
  v8 = (*v6)((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x255,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v16 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v16);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = 600LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v16 + 104LL))(v16, *((_QWORD *)this + 12), a3);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = 602LL;
    goto LABEL_7;
  }
  v9 = 0;
LABEL_9:
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_11:
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v9;
}
