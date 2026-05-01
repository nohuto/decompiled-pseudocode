/*
 * XREFs of ?GetMobodyApplicationNoLock@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18002EBF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::GetMobodyApplicationNoLock(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v6; // r14
  _BYTE v8[80]; // [rsp+20h] [rbp-78h] BYREF

  *a2 = 0LL;
  v2 = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    do
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 344LL))(v6, v8);
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 280LL))(v6) & 4) != 0 )
        (**(void (__fastcall ***)(__int64, GUID *, struct IImmersiveApplicationInternal **))v6)(
          v6,
          &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
          a2);
      if ( *a2 )
        break;
      ++v2;
    }
    while ( v2 < v3 );
  }
  return *a2 == 0LL ? 0x8002802B : 0;
}
