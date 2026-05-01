/*
 * XREFs of ?Clear@CEnumerableObjectCollection@@UEAAJXZ @ 0x180023660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Clear(CEnumerableObjectCollection *this)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rcx
  void *v4; // rcx

  for ( i = 0LL; i < *((_QWORD *)this + 6); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 8) = 0;
  return 0LL;
}
