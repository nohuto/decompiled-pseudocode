/*
 * XREFs of ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1801C111C
 * Callers:
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801C1204 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::FindAllApplicationsByAppID(
        __int64 (__fastcall ***this)(CallerIdentity *, GUID *, __int64 *),
        struct IUnknown *a2,
        const unsigned __int16 *a3,
        struct IObjectArray **a4)
{
  __int64 (__fastcall **v5)(CallerIdentity *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // ebx
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v5 = *this;
  v17 = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v17);
  v9 = (*v5)((CallerIdentity *)this, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, v8);
  if ( v9 >= 0 )
  {
    v10 = v17;
    v16 = 0LL;
    v11 = *v17;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, SID *, GUID *, __int64 *))(v11 + 24))(
           v10,
           &SID_ImmersiveApplicationArrayService,
           &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a,
           v12);
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, const unsigned __int16 *))(*(_QWORD *)v16 + 40LL))(
             v16,
             a2,
             a3);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v14 = (__int64)v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v9;
}
