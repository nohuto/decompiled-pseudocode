/*
 * XREFs of FreeSystemRelativePath @ 0x1C005FE54
 * Callers:
 *     ldevLoadDriver @ 0x1C005F8A0 (ldevLoadDriver.c)
 *     ldevLoadImage @ 0x1C005FB00 (ldevLoadImage.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall FreeSystemRelativePath(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = Win32FreePool(v2);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
  return result;
}
