/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0003@@@Z @ 0x180054DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180052660 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        unsigned __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0316_0003 *a2)
{
  __int64 v4; // rcx
  signed int Object; // ebx
  struct IUnknown *v6; // rbx
  __int64 *v7; // rax
  struct IUnknown *v8; // rcx
  __int64 v9; // rcx
  struct IUnknown *v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  struct IUnknown *v14; // [rsp+60h] [rbp+30h] BYREF

  LODWORD(v12) = 0;
  *(_DWORD *)a2 = 0;
  v4 = 0LL;
  v13 = 0LL;
  Object = *(_BYTE *)(this + 576) != 0 ? 0x8007139F : 0;
  if ( !*(_BYTE *)(this + 576) )
  {
    v14 = 0LL;
    LODWORD(v12) = 1;
    (*(void (__fastcall **)(unsigned __int64, GUID *, struct IUnknown **))(*(_QWORD *)(this - 56) + 32LL))(
      this - 56,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v14);
    v6 = v14;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
    Object = IAMPrivate_QueryObject(
               v6,
               (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
               &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
               (void **)v7);
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
    }
    if ( Object < 0 )
      goto LABEL_15;
    v12 = 0LL;
    Object = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 56LL))(
               v13,
               *(_QWORD *)(this + 432),
               &v12);
    if ( Object >= 0 )
    {
      *(_DWORD *)a2 = *(_DWORD *)(this + 340);
      Object = 0;
      v9 = v12;
      if ( !*(_BYTE *)(v12 + 33) && !*(_BYTE *)(v12 + 35) )
      {
LABEL_13:
        if ( v9 )
        {
          v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
LABEL_15:
        v4 = v13;
        goto LABEL_16;
      }
      v14 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v13 + 104LL))(
             v13,
             this & ((unsigned __int128)-(__int128)(this - 112) >> 64),
             &v14) < 0 )
        *(_DWORD *)a2 |= 0x80000000;
      v10 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      }
    }
    v9 = v12;
    goto LABEL_13;
  }
LABEL_16:
  if ( v4 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)Object;
}
