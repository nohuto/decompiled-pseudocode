/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x1800701D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180070500 @ 0x180070500 (sub_180070500.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        void *a4,
        unsigned int *a5,
        void *a6,
        unsigned int *a7,
        void *a8,
        unsigned int *a9,
        void *a10,
        unsigned int *a11)
{
  const void *v14; // rcx
  unsigned int *v15; // rax
  unsigned int *v16; // rdx
  unsigned int *v17; // r8
  unsigned int *v18; // r9
  unsigned int v19; // r10d
  unsigned int v20; // r11d
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  void *v23; // rbx
  void *v24; // rbx
  __int64 result; // rax
  void *v26; // rbx
  unsigned int v27; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-2Ch] BYREF
  void *Src; // [rsp+58h] [rbp-28h] BYREF
  void *v30; // [rsp+60h] [rbp-20h] BYREF
  void *v31; // [rsp+68h] [rbp-18h] BYREF
  void *v32; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v34; // [rsp+B8h] [rbp+38h] BYREF

  if ( *(__int16 *)(a1 + 2) >= 0 )
    return 3221225703LL;
  sub_180070500(
    a1,
    (unsigned int)&Src,
    (unsigned int)&v28,
    (unsigned int)&v30,
    (__int64)&v27,
    (__int64)&v32,
    (__int64)&v34,
    (__int64)&v31,
    (__int64)&v33);
  v15 = a11;
  v16 = a9;
  v17 = a7;
  v18 = a5;
  v19 = v33;
  v20 = v34;
  v21 = v27;
  v22 = v28;
  if ( a2 && *a3 >= 0x28u && v28 <= *a9 && v34 <= *a5 && v33 <= *a7 && v27 <= *a11 )
  {
    memmove((void *)a2, v14, 0x14uLL);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)(a2 + 2) &= ~0x8000u;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
    if ( Src )
    {
      v23 = a8;
      memmove(a8, Src, 4 * (unsigned int)*((unsigned __int8 *)Src + 1) + 8);
      *(_QWORD *)(a2 + 8) = v23;
    }
    if ( v30 )
    {
      v24 = a10;
      memmove(a10, v30, 4 * (unsigned int)*((unsigned __int8 *)v30 + 1) + 8);
      *(_QWORD *)(a2 + 16) = v24;
    }
    if ( v31 )
    {
      v26 = a6;
      memmove(a6, v31, *((unsigned __int16 *)v31 + 1));
      *(_QWORD *)(a2 + 24) = v26;
    }
    if ( v32 )
    {
      memmove(a4, v32, *((unsigned __int16 *)v32 + 1));
      *(_QWORD *)(a2 + 32) = a4;
    }
    return 0LL;
  }
  else
  {
    *a3 = 40;
    *v15 = v21;
    result = 3221225507LL;
    *v16 = v22;
    *v17 = v19;
    *v18 = v20;
  }
  return result;
}
