/*
 * XREFs of ??1?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@XZ @ 0x18007D0D0
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$1 @ 0x180059A6C (_BuildDeviceGraphForStream_--_1_--dtor$1.c)
 *     _DeriveProcessSubmixParametersForStream_::_1_::dtor$0 @ 0x18005BC50 (_DeriveProcessSubmixParametersForStream_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void *)v1[1];
    if ( v2 )
      CoTaskMemFree(v2);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
}
