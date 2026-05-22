/*
 * XREFs of ?Append@?$PropertyVectorModifiedAdapter@V?$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UEAAJ$$QEAVPropertyNode@2@@Z @ 0x180023D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Append@PropertyVector@Input@@UEAAJ$$QEAVPropertyNode@2@@Z @ 0x180032160 (-Append@PropertyVector@Input@@UEAAJ$$QEAVPropertyNode@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>::Append(
        __int64 a1,
        __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  void (__fastcall *v5)(__int64, __int128 *); // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = Input::PropertyVector::Append(a1, a2);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
    {
      v5 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 24LL);
      v7 = *(_OWORD *)(a1 + 8);
      v5(v4, &v7);
    }
  }
  return (unsigned int)v3;
}
