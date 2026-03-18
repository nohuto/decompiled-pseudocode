/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x1C00999B0
 * Callers:
 *     <none>
 * Callees:
 *     bCaptureBitmapInfo @ 0x1C009A230 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     GreCreateDIBitmapComp @ 0x1C0114450 (GreCreateDIBitmapComp.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        int a2,
        __int64 a3,
        char a4,
        char *Address,
        void *Src,
        int a7,
        int a8,
        SIZE_T Size)
{
  __int64 v11; // rdi
  HANDLE v12; // r14
  char *v13; // rdx
  __int64 DIBitmapReal; // rax
  int v16; // [rsp+D8h] [rbp+10h]

  v16 = a2;
  v11 = 1LL;
  v12 = 0LL;
  if ( Src && a8 )
  {
    if ( !(unsigned int)bCaptureBitmapInfo(Src) )
      goto LABEL_13;
    if ( Address )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Address & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = &Address[(unsigned int)Size];
        if ( (unsigned __int64)v13 > MmUserProbeAddress || v13 < Address )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v12 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
      if ( !v12 )
LABEL_13:
        v11 = 0LL;
    }
    a2 = v16;
  }
  if ( v11 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal((_DWORD)a1, a2, (_DWORD)Address, 0, a7, a8, Size, 0LL, 0, 0LL, 0, 0LL, 0LL);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a1, (__int64)Address, 0LL, a7, a8, Size);
    v11 = DIBitmapReal;
  }
  if ( v12 )
    MmUnsecureVirtualMemory(v12);
  return v11;
}
