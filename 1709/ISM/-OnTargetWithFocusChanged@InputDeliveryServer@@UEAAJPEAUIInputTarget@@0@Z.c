/*
 * XREFs of ?OnTargetWithFocusChanged@InputDeliveryServer@@UEAAJPEAUIInputTarget@@0@Z @ 0x18007FAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputDeliveryServer::OnTargetWithFocusChanged(
        InputDeliveryServer *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v5; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  struct IInputTarget *v9; // [rsp+58h] [rbp+20h]

  v7 = 0;
  v9 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3, a2);
  v8 = 0LL;
  if ( a3
    && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
         a3,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v8) >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
  }
  *(_DWORD *)(*((_QWORD *)this + 70) + 72LL) = v7;
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, struct IInputTarget *))(*(_QWORD *)v5 + 16LL))(v5, a2);
  }
  if ( a3 )
    (*(void (__fastcall **)(struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)a3 + 16LL))(a3, a2);
  return 0LL;
}
