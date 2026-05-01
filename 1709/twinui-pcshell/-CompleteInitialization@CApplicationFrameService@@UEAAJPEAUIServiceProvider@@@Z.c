/*
 * XREFs of ?CompleteInitialization@CApplicationFrameService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18004D9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameService::CompleteInitialization(
        CApplicationFrameService *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx

  v2 = (_QWORD *)((char *)this + 152);
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_d6f29401_6ea3_4757_a73c_b30abb699dc3,
           &GUID_d6f29401_6ea3_4757_a73c_b30abb699dc3,
           v2);
}
