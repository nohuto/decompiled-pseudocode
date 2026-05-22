/*
 * XREFs of ??8PropertyNode@Input@@UEBA_NAEBV01@@Z @ 0x180016A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Input::PropertyNode::operator==(__int64 a1)
{
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1) == 0;
}
