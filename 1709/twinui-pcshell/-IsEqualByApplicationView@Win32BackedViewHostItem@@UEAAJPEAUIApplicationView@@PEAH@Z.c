/*
 * XREFs of ?IsEqualByApplicationView@Win32BackedViewHostItem@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180108D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32BackedViewHostItem::IsEqualByApplicationView(
        Win32BackedViewHostItem *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        int *a3)
{
  int (__fastcall **v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v13 = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  if ( (*v6)((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v7) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1C1,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_6;
    }
    *a3 = v14 == *((_QWORD *)this + 11);
  }
  v9 = 0;
LABEL_6:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
