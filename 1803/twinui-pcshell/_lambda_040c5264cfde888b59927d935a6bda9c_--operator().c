/*
 * XREFs of _lambda_040c5264cfde888b59927d935a6bda9c_::operator() @ 0x180104AA8
 * Callers:
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x180109DB0 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_040c5264cfde888b59927d935a6bda9c_::operator()(int *a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+74h] [rbp+1Ch]

  v8 = 0LL;
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 1) != 0 )
  {
    v4 = (__int64 *)*((_QWORD *)a1 + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v8);
    v5 = *v4;
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 384LL))(a2);
    if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, GUID *, __int64 *))(v5 + 88))(
           v4,
           v6,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v8) >= 0 )
    {
      v9 = *a1;
      v10 = 0;
      (*(void (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)a2 + 456LL))(a2, v8, &v9, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v8);
  return 1;
}
