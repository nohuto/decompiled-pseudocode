/*
 * XREFs of ?Set@?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAJPEBXK@Z @ 0x180023B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@Property@Input@@UEAAJPEBXK@Z @ 0x1800314C0 (-Set@Property@Input@@UEAAJPEBXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::Set(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  int v4; // edi
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, __int128 *); // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = Input::Property::Set((Input::Property *)a1, a2, a3);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 24LL);
      v8 = *(_OWORD *)(a1 + 8);
      v6(v5, &v8);
    }
  }
  return (unsigned int)v4;
}
