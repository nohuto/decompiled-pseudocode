/*
 * XREFs of NtGdiGetTextExtent @ 0x1C028A860
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtent(HDC a1, char *Src, signed int a3, struct tagSIZE *a4, char a5)
{
  struct tagSIZE *v5; // r15
  __int64 v6; // r14
  char *v10; // rdi
  unsigned int TextExtentW; // ebx
  char *v12; // rax
  struct tagSIZE v14; // [rsp+50h] [rbp-78h] BYREF
  HDC v15; // [rsp+58h] [rbp-70h]
  struct tagSIZE *v16; // [rsp+60h] [rbp-68h]
  char v17; // [rsp+68h] [rbp-60h] BYREF

  v5 = a4;
  v6 = a3;
  v15 = a1;
  v16 = a4;
  v10 = 0LL;
  TextExtentW = 0;
  if ( a3 < 0 )
    return TextExtentW;
  if ( !a3 )
  {
    v14.cx = 0;
    v14.cy = 0;
    TextExtentW = 1;
LABEL_20:
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (struct tagSIZE *)MmUserProbeAddress;
    *v5 = v14;
    return TextExtentW;
  }
  if ( Src )
  {
    if ( a3 > 16 )
    {
      if ( (unsigned int)a3 <= 0x1388000 )
        v10 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * a3));
    }
    else
    {
      v10 = &v17;
    }
    if ( v10 )
    {
      v12 = &Src[2 * v6];
      if ( v12 < Src || (unsigned __int64)v12 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, Src, 2 * v6);
      TextExtentW = 1;
    }
  }
  if ( TextExtentW )
    TextExtentW = GreGetTextExtentW(a1, (unsigned __int16 *)v10, a3, &v14, a5);
  if ( (int)v6 > 16 && v10 )
    FreeTmpBuffer(v10);
  if ( TextExtentW )
    goto LABEL_20;
  return TextExtentW;
}
