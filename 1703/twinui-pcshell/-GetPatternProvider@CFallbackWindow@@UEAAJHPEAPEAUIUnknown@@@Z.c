/*
 * XREFs of ?GetPatternProvider@CFallbackWindow@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x18002D6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFallbackWindow::GetPatternProvider(
        __int64 (__fastcall ***this)(char *, GUID *),
        int a2,
        struct IUnknown **a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = 0LL;
  if ( a2 == 10000 )
    return (**(this - 9))((char *)this - 72, &GUID_00000000_0000_0000_c000_000000000046);
  return result;
}
