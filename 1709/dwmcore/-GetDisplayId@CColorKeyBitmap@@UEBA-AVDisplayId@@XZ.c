/*
 * XREFs of ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ @ 0x1801D1700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmap::GetDisplayId(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16));
  return a2;
}
