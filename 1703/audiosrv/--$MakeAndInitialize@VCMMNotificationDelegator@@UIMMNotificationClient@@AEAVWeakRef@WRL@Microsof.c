/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800A4948
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002BE9C (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0CMMNotificationDelegator@@QEAA@XZ @ 0x1800A4D20 (--0CMMNotificationDelegator@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3,
        int *a4)
{
  CMMNotificationDelegator *v8; // rax
  CMMNotificationDelegator *v9; // rax
  int v10; // ebp
  CMMNotificationDelegator *v11; // rdi
  __int64 v12; // rbx
  int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // ebx

  *a1 = 0LL;
  v8 = (CMMNotificationDelegator *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = CMMNotificationDelegator::CMMNotificationDelegator(v8);
    v10 = *a4;
    v11 = v9;
    v12 = *a2;
    v13 = *a3;
    if ( *((_QWORD *)v9 + 5) != *a2 )
    {
      if ( v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*a2);
      v14 = *((_QWORD *)v11 + 5);
      *((_QWORD *)v11 + 5) = v12;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    *((_DWORD *)v11 + 12) = v13;
    *((_DWORD *)v11 + 13) = v10;
    v15 = (**(__int64 (__fastcall ***)(CMMNotificationDelegator *, GUID *, _QWORD *))v11)(
            v11,
            &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0,
            a1);
    (*(void (__fastcall **)(CMMNotificationDelegator *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v15;
}
