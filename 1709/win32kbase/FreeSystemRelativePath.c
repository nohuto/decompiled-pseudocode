/*
 * XREFs of FreeSystemRelativePath @ 0x1C006E3F4
 * Callers:
 *     ldevLoadDriver @ 0x1C006DE40 (ldevLoadDriver.c)
 *     ldevLoadImage @ 0x1C006E0A0 (ldevLoadImage.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
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
