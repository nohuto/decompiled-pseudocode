/*
 * XREFs of ?IsViewForSameApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x1800519B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::IsViewForSameApp(
        CImmersiveApp *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        int *a3)
{
  __int64 (__fastcall **v6)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  v13 = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  v8 = (*v6)((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v7);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)this;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
    v8 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64, int *))(v9 + 88))(this, v10, a3);
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v8;
}
