/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C0019AF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapSizeInternal @ 0x1C00188FC (GreGetBitmapSizeInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
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
        char *Src,
        int a12,
        int a13,
        size_t Size,
        SIZE_T a15,
        __int64 a16)
{
  unsigned int *v16; // rbx
  unsigned int v17; // edi
  HANDLE v18; // r12
  __int64 v19; // r15
  int v20; // esi
  unsigned int v21; // r8d
  int v22; // r14d
  HDC v24; // [rsp+E0h] [rbp+8h]

  v24 = a1;
  v16 = 0LL;
  v17 = 1;
  v18 = 0LL;
  v19 = (__int64)Address;
  if ( !Address || !Src )
  {
    v20 = Size;
    goto LABEL_32;
  }
  v20 = Size;
  if ( !(_DWORD)Size )
  {
LABEL_32:
    v19 = 0LL;
    v22 = a15;
    goto LABEL_25;
  }
  if ( (unsigned int)Size >= 4 && (unsigned int)Size <= 0x2710000 )
  {
    v16 = (unsigned int *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
    if ( v16 )
    {
      if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, Src, (unsigned int)Size);
      v21 = *v16;
      if ( *v16 >= 0x28
        && (unsigned int)Size >= v21
        && (_DWORD)Size == (unsigned int)GreGetBitmapSizeInternal((__int64)v16, a12, v21) )
      {
        v22 = a15;
        if ( (_DWORD)a15 )
        {
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&Address[(unsigned int)a15] > MmUserProbeAddress
            || &Address[(unsigned int)a15] < Address )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
        }
        v18 = MmSecureVirtualMemory(Address, (unsigned int)a15, 2u);
        if ( v18 )
          goto LABEL_24;
        goto LABEL_23;
      }
      FreeThreadBufferWithTag(v16);
      v16 = 0LL;
    }
  }
  v22 = a15;
LABEL_23:
  v17 = 0;
LABEL_24:
  a1 = v24;
LABEL_25:
  if ( v17 )
  {
    v17 = GreStretchDIBitsInternal(a1, a5, a6, a7, a8, a9, v19, (__int64)v16, a12, a13, v20, v22, a16);
    if ( v18 )
      MmUnsecureVirtualMemory(v18);
  }
  if ( v16 )
    FreeThreadBufferWithTag(v16);
  return v17;
}
