/*
 * XREFs of bCaptureBitmapInfo @ 0x1C009A230
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C00999B0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0099BE0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0099DE0 (NtGdiCreateDIBSection.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0103010 (NtGdiCreateSessionMappedDIBSection.c)
 * Callees:
 *     GreGetBitmapSizeInternal @ 0x1C00188FC (GreGetBitmapSizeInternal.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall bCaptureBitmapInfo(char *Src, int a2, unsigned int a3, unsigned int **a4)
{
  __int64 v4; // rbx
  unsigned int *v8; // rax
  unsigned int *v9; // rdi
  unsigned int v10; // eax

  v4 = a3;
  if ( a3 >= 4 )
  {
    if ( Src )
    {
      if ( a3 <= 0x2710000 )
      {
        v8 = (unsigned int *)AllocThreadBufferWithTag(a3, 1886221383LL, 0LL);
        *a4 = v8;
        if ( v8 )
        {
          if ( &Src[v4] < Src || (unsigned __int64)&Src[v4] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v8, Src, (unsigned int)v4);
          v9 = *a4;
          v10 = **a4;
          if ( v10 >= 0x28
            && (unsigned int)v4 >= v10
            && (_DWORD)v4 == (unsigned int)GreGetBitmapSizeInternal((__int64)*a4, a2, v10) )
          {
            return 1LL;
          }
          FreeThreadBufferWithTag(v9);
          *a4 = 0LL;
        }
      }
    }
  }
  return 0LL;
}
