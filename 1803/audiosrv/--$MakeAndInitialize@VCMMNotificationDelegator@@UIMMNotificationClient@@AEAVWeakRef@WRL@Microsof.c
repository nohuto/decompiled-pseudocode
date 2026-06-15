/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800C78A4
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18001DC70 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0CMMNotificationDelegator@@QEAA@XZ @ 0x1800C7D98 (--0CMMNotificationDelegator@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3,
        int *a4)
{
  CMMNotificationDelegator *v8; // rax
  unsigned int v9; // ebx
  CMMNotificationDelegator *v10; // rax
  int v11; // ebp
  CMMNotificationDelegator *v12; // rdi
  __int64 v13; // rbx
  int v14; // esi
  __int64 v15; // rcx

  *a1 = 0LL;
  v8 = (CMMNotificationDelegator *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CMMNotificationDelegator::CMMNotificationDelegator(v8);
    v11 = *a4;
    v12 = v10;
    v13 = *a2;
    v14 = *a3;
    v15 = *((_QWORD *)v10 + 5);
    if ( v15 != *a2 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*a2);
        v15 = *((_QWORD *)v12 + 5);
      }
      *((_QWORD *)v12 + 5) = v13;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    *((_DWORD *)v12 + 12) = v14;
    *((_DWORD *)v12 + 13) = v11;
    v9 = (**(__int64 (__fastcall ***)(CMMNotificationDelegator *, GUID *, _QWORD *))v12)(
           v12,
           &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0,
           a1);
    (*(void (__fastcall **)(CMMNotificationDelegator *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
