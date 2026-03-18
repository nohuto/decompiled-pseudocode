/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C0018440
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapSizeInternal @ 0x1C00188FC (GreGetBitmapSizeInternal.c)
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C009A190 (GreGetBitmapBitsSize.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r12
  unsigned int v9; // r13d
  size_t v10; // r14
  unsigned int BitmapSizeInternal; // eax
  __int64 v12; // r8
  struct tagBITMAPINFO *v13; // rax
  struct tagBITMAPINFO *v14; // rsi
  int biHeight; // eax
  int v16; // ecx
  unsigned int v17; // eax
  bool v18; // zf
  int v19; // eax
  unsigned int biWidth_high; // eax
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int DIBitsInternal; // ebx
  unsigned int Length; // [rsp+58h] [rbp-E0h]
  int v27; // [rsp+60h] [rbp-D8h]
  int v28; // [rsp+68h] [rbp-D0h]
  int v29; // [rsp+70h] [rbp-C8h]
  HANDLE SecureHandle; // [rsp+88h] [rbp-B0h]
  _DWORD v35[10]; // [rsp+C8h] [rbp-70h] BYREF

  v28 = a3;
  v27 = a4;
  Length = a8;
  v29 = 1;
  SecureHandle = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  v9 = *(_DWORD *)Address;
  ProbeForWrite(Address, *(unsigned int *)Address, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( v9 == 12 && !*((_WORD *)Address + 5) )
      goto LABEL_42;
    LODWORD(v10) = 0;
    if ( v9 >= 0x28 && !*((_WORD *)Address + 7) )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_42:
    memmove(v35, Address, (unsigned int)v10);
    v35[0] = v10;
LABEL_43:
    v14 = (struct tagBITMAPINFO *)v35;
    goto LABEL_34;
  }
  if ( *(_DWORD *)Address == 40 )
    *((_DWORD *)Address + 8) = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, v9);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_43;
  v13 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal, 1886221383LL);
  v14 = v13;
  if ( v13 )
    memset(v13, 0, (unsigned int)v10);
  if ( v14 )
  {
    if ( &Address[v10] < Address || (unsigned __int64)&Address[v10] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, Address, v10);
    v14->bmiHeader.biSize = v9;
    if ( (unsigned int)GreGetBitmapSizeInternal(v14, a7, v9) != (_DWORD)v10 )
    {
LABEL_57:
      LODWORD(v10) = 0;
      goto LABEL_60;
    }
    if ( v9 >= 0x28 )
      v14->bmiHeader.biClrUsed = 0;
    if ( v27 )
    {
      if ( v14->bmiHeader.biSize < 0x28 )
      {
        biWidth_high = HIWORD(v14->bmiHeader.biWidth);
        v21 = biWidth_high;
        if ( biWidth_high >= a3 )
          v21 = a3;
        v28 = v21;
        v22 = biWidth_high - v21;
        if ( v22 >= a4 )
          v22 = a4;
        v27 = v22;
        if ( !LOWORD(v14->bmiHeader.biWidth) || !LOWORD(v14->bmiHeader.biHeight) )
          goto LABEL_48;
        v18 = HIWORD(v14->bmiHeader.biHeight) == 0;
      }
      else
      {
        biHeight = v14->bmiHeader.biHeight;
        if ( biHeight < 0 )
          biHeight = -biHeight;
        v16 = a3;
        if ( biHeight < a3 )
          v16 = biHeight;
        v28 = v16;
        v17 = biHeight - v16;
        if ( v17 >= a4 )
          v17 = a4;
        v27 = v17;
        if ( !v14->bmiHeader.biWidth || !v14->bmiHeader.biPlanes )
          goto LABEL_48;
        v18 = v14->bmiHeader.biBitCount == 0;
      }
      v19 = 0;
      if ( !v18 )
      {
LABEL_33:
        v29 = v19;
        goto LABEL_34;
      }
LABEL_48:
      v19 = 1;
      goto LABEL_33;
    }
  }
LABEL_34:
  if ( (_DWORD)v10 && v8 && v14 )
  {
    if ( v14->bmiHeader.biSize < 0x28 || v14->bmiHeader.biCompression - 1 > 1 || v14->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize(v14)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        SecureHandle = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_60;
    }
    goto LABEL_57;
  }
LABEL_60:
  v23 = a2;
  if ( v8 && v29 || !(_DWORD)v10 || !v14 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, a2, v28, v27, (__int64)v8, v14, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v14, (unsigned int)v10);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v14 )
  {
    if ( v14 != (struct tagBITMAPINFO *)v35 )
      Win32FreePool(v14, v23, v12);
  }
  return DIBitsInternal;
}
