/*
 * XREFs of NtGdiCreateBitmap @ 0x1C00E7780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiCreateBitmap(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, char *Address)
{
  __int64 Bitmap; // rbx
  HANDLE v10; // rdi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  char *v14; // rcx

  Bitmap = 1LL;
  v10 = 0LL;
  if ( Address )
  {
    v12 = ((a1 * (unsigned __int16)a4 * (unsigned __int64)(unsigned __int16)a3 + 15) >> 3) & 0x1FFFFFFFFFFFFFFELL;
    if ( v12 <= 0xFFFFFFFF && (v13 = a2 * v12, v13 <= 0xFFFFFFFF) && (_DWORD)v13 )
    {
      v14 = &Address[(int)v13];
      if ( (unsigned __int64)v14 > W32UserProbeAddress || v14 < Address )
        *W32UserProbeAddress = 0;
      v10 = MmSecureVirtualMemory(Address, (int)v13, 2u);
      Bitmap = -(__int64)(v10 != 0LL) & 1;
    }
    else
    {
      Bitmap = 0LL;
    }
  }
  if ( Bitmap )
    Bitmap = GreCreateBitmap(a1, a2, a3, a4, Address);
  if ( v10 )
    MmUnsecureVirtualMemory(v10);
  return Bitmap;
}
