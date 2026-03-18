/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x1C0099BE0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     bCaptureBitmapInfo @ 0x1C009A230 (bCaptureBitmapInfo.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        unsigned int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        char *Address,
        void *Src,
        char a12,
        SIZE_T Size,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  unsigned int v19; // ebx
  HANDLE v20; // rsi
  char *v21; // rcx

  v19 = 1;
  v20 = 0LL;
  if ( !(unsigned int)bCaptureBitmapInfo(Src) )
    goto LABEL_11;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v21 > MmUserProbeAddress || v21 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    if ( !v20 )
LABEL_11:
      v19 = 0;
  }
  if ( v19 == 1 )
    v19 = GreSetDIBitsToDeviceInternal(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            (__int64)Address,
            0LL,
            a12 & 3,
            Size,
            a14,
            a15,
            a16);
  if ( v20 )
    MmUnsecureVirtualMemory(v20);
  return v19;
}
