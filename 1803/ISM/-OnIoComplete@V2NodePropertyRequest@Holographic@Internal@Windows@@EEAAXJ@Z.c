/*
 * XREFs of ?OnIoComplete@V2NodePropertyRequest@Holographic@Internal@Windows@@EEAAXJ@Z @ 0x1800C2190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::V2NodePropertyRequest::OnIoComplete(
        Windows::Internal::Holographic::V2NodePropertyRequest *this,
        int a2)
{
  __int64 v3; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = *((_QWORD *)this + 28);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, Windows::Internal::Holographic::V2NodePropertyRequest *, int *))(*(_QWORD *)v3 + 16LL))(
    v3,
    this,
    &v4);
}
