/*
 * XREFs of ObpIncrPointerCountEx @ 0x14008AB18
 * Callers:
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
