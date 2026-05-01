/*
 * XREFs of ?Uninitialize@Win32BackedViewHostItem@@UEAAJXZ @ 0x1801B9620
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall Win32BackedViewHostItem::Uninitialize(Win32BackedViewHostItem *this)
{
  SmartCookie::Unregister((Win32BackedViewHostItem *)((char *)this + 184));
  return 0LL;
}
