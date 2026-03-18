/*
 * XREFs of ?GetPixelFormatInfo@CHwCompSwapChainTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801E46F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 120LL) + 24LL))(*(_QWORD *)(a1 + 200) + 120LL);
  return a2;
}
