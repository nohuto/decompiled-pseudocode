/*
 * XREFs of ?IsSeparateGlomForSameApp@CImmersiveApp@@UEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1800558D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::IsSeparateGlomForSameApp(
        CImmersiveApp *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  bool v4; // si
  __int64 (__fastcall **v5)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  char v8; // bl
  bool v9; // al
  __int64 v10; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  v4 = ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *)))(*a2)[20])(a2) != *((_DWORD *)this + 106);
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  v7 = (*v5)((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v6);
  v8 = 1;
  v9 = v7 >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v13 + 88LL))(v13, *((_QWORD *)this + 52), &v12) >= 0
    && v12;
  if ( !v4 || !v9 )
    v8 = 0;
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
