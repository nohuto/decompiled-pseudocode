/*
 * XREFs of NtGdiGetBitmapBits @ 0x1C00F3020
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBits @ 0x1C00F30F0 (GreGetBitmapBits.c)
 */

__int64 __fastcall NtGdiGetBitmapBits(__int64 a1, unsigned int a2, volatile void *a3)
{
  unsigned int v6; // edi
  HANDLE v7; // rbx
  unsigned int BitmapBits; // eax
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v6 = 1;
  v7 = 0LL;
  v10 = 0;
  BitmapBits = GreGetBitmapBits(a1, 0LL, 0LL, &v10);
  if ( a2 > BitmapBits )
    a2 = BitmapBits;
  if ( a3 )
  {
    ProbeForWrite(a3, a2, 1u);
    v7 = MmSecureVirtualMemory((PVOID)a3, a2, 4u);
    v6 = v7 != 0LL;
  }
  if ( v6 )
    v6 = GreGetBitmapBits(a1, a2, a3, &v10);
  if ( v7 )
    MmUnsecureVirtualMemory(v7);
  return v6;
}
