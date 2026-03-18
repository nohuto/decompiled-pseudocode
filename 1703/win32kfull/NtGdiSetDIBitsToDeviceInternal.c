/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x1C00476C0
 * Callers:
 *     <none>
 * Callees:
 *     bCaptureBitmapInfo @ 0x1C0047C90 (bCaptureBitmapInfo.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        void *Src,
        char a12,
        SIZE_T Size,
        int a14,
        int a15,
        __int64 a16)
{
  unsigned int v16; // ebx
  HANDLE v17; // rsi
  char *v18; // rcx

  v16 = 1;
  v17 = 0LL;
  if ( !(unsigned int)bCaptureBitmapInfo(Src) )
    goto LABEL_11;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v18 > W32UserProbeAddress || v18 < Address )
        *W32UserProbeAddress = 0;
    }
    v17 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    if ( !v17 )
LABEL_11:
      v16 = 0;
  }
  if ( v16 == 1 )
    v16 = GreSetDIBitsToDeviceInternal(a1, a5, a6, a7, a8, a9, (__int64)Address, 0LL, a12 & 3, Size, a14, a15, a16);
  if ( v17 )
    MmUnsecureVirtualMemory(v17);
  return v16;
}
