/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_1b8bc1ec9f882b9c346a65f9a9da87be___ @ 0x18011531C
 * Callers:
 *     ?GetMobodyApplicationNoLock@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180115EB0 (-GetMobodyApplicationNoLock@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_1b8bc1ec9f882b9c346a65f9a9da87be___(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _BYTE v7[80]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 344LL))(v6, v7);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 280LL))(v6) & 4) != 0 )
      (**(void (__fastcall ***)(__int64, GUID *, _QWORD))v6)(v6, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, *a2);
    if ( *(_QWORD *)*a2 )
      break;
  }
}
