/*
 * XREFs of NtGdiGetTextExtentExW @ 0x1C008A2E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreGetTextExtentExW @ 0x1C013F8F0 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        char *a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        char *a6,
        __int64 *a7,
        int a8)
{
  __int64 v8; // rdi
  HDC v10; // r10
  unsigned int v11; // r13d
  unsigned __int16 *v12; // rcx
  _BYTE *v13; // r15
  int v14; // r14d
  unsigned int TextExtent; // ebx
  unsigned __int16 *v16; // r9
  char *v17; // rax
  __int64 *v18; // r12
  int *v19; // r8
  unsigned int *v20; // rdx
  size_t v21; // r8
  __int64 v23; // [rsp+48h] [rbp-110h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-108h]
  int v25; // [rsp+58h] [rbp-100h]
  unsigned int v26; // [rsp+60h] [rbp-F8h]
  int v27; // [rsp+68h] [rbp-F0h]
  int v28; // [rsp+6Ch] [rbp-ECh]
  unsigned __int16 *v29; // [rsp+70h] [rbp-E8h]
  __int64 *v30; // [rsp+78h] [rbp-E0h]
  __int64 v31; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int16 *v32; // [rsp+88h] [rbp-D0h]
  HDC v33; // [rsp+90h] [rbp-C8h]
  char *v34; // [rsp+98h] [rbp-C0h]
  __int64 *v35; // [rsp+A0h] [rbp-B8h]
  HDC v36; // [rsp+A8h] [rbp-B0h]
  _BYTE Src[64]; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v38[32]; // [rsp+F0h] [rbp-68h] BYREF

  v25 = a4;
  v8 = a3;
  v10 = a1;
  v33 = a1;
  v27 = a4;
  v36 = a1;
  v26 = a3;
  v34 = a6;
  v30 = a7;
  v35 = a7;
  v11 = 0;
  LODWORD(v23) = 0;
  v12 = 0LL;
  v29 = 0LL;
  v13 = 0LL;
  v24 = 0LL;
  v14 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( a3 )
  {
    LOBYTE(v14) = a3 <= 0x10;
    v28 = v14;
    if ( a2 )
    {
      if ( a3 > 0x10 )
      {
        if ( a3 <= 0x682AAA )
        {
          v13 = (_BYTE *)AllocFreeTmpBuffer(6 * a3);
          v24 = v13;
        }
        v16 = (unsigned __int16 *)&v13[4 * v8];
        v29 = v16;
      }
      else
      {
        v16 = (unsigned __int16 *)v38;
        v29 = (unsigned __int16 *)v38;
        v13 = Src;
        v24 = Src;
      }
      v32 = v16;
      if ( v13 )
      {
        v17 = &a2[2 * v8];
        if ( v17 < a2 || (unsigned __int64)v17 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v16, a2, 2 * v8);
        TextExtent = 1;
      }
      v12 = v32;
      v18 = v30;
      v10 = v33;
    }
    else
    {
      v18 = a7;
    }
    if ( TextExtent )
    {
      v19 = 0LL;
      if ( a6 )
        v19 = (int *)v13;
      TextExtent = GreGetTextExtentExW(v10, v12, v8, (__int64)&v23, v19, (__int64)&v31, a8);
      v14 = v28;
      v11 = v23;
    }
    v20 = a5;
    if ( !TextExtent )
      goto LABEL_35;
  }
  else
  {
    LODWORD(v23) = 0;
    v31 = 0LL;
    TextExtent = 1;
    v20 = a5;
    v18 = a7;
  }
  if ( v11 > (unsigned int)v8 )
  {
    TextExtent = 0;
  }
  else
  {
    if ( (unsigned __int64)v18 >= W32UserProbeAddress )
      v18 = (__int64 *)W32UserProbeAddress;
    *v18 = v31;
    if ( v20 )
    {
      if ( (unsigned __int64)v20 >= W32UserProbeAddress )
        v20 = (unsigned int *)W32UserProbeAddress;
      *v20 = v11;
    }
    if ( v11 && a6 && v13 )
    {
      v21 = 4LL * v11;
      if ( (unsigned __int64)&a6[v21] > W32UserProbeAddress || &a6[v21] <= a6 || ((unsigned __int8)a6 & 3) != 0 )
        *W32UserProbeAddress = 0;
      memmove(a6, v13, v21);
    }
  }
LABEL_35:
  if ( !v14 && v13 )
    FreeTmpBuffer(v13);
  return TextExtent;
}
