/*
 * XREFs of IovInitializeTimer @ 0x1407633E0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall IovInitializeTimer(ULONG_PTR BugCheckParameter2)
{
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    KeBugCheckEx(0xC9u, 0xAuLL, BugCheckParameter2, 0LL, 0LL);
  return ((__int64 (*)(void))pXdvIoInitializeTimer)();
}
