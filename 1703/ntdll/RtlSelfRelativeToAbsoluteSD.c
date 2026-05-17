/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x180076420
 * Callers:
 *     <none>
 * Callees:
 *     sub_180076744 @ 0x180076744 (sub_180076744.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD(
        __int16 *Src,
        void *a2,
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
  unsigned int *v15; // rax
  unsigned int *v16; // rcx
  unsigned int *v17; // rdx
  unsigned int *v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  unsigned int v22; // r15d
  void *v23; // rbx
  void *v24; // rbx
  __int64 result; // rax
  void *v26; // rbx
  unsigned int v27; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-2Ch] BYREF
  void *Srca; // [rsp+58h] [rbp-28h] BYREF
  void *v30; // [rsp+60h] [rbp-20h] BYREF
  void *v31; // [rsp+68h] [rbp-18h] BYREF
  void *v32; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v34; // [rsp+B8h] [rbp+38h] BYREF

  if ( Src[1] >= 0 )
    return 3221225703LL;
  sub_180076744(
    (_DWORD)Src,
    (unsigned int)&Srca,
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
    memmove(a2, Src, 0x14uLL);
    *((_QWORD *)a2 + 1) = 0LL;
    *((_WORD *)a2 + 1) &= ~0x8000u;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( Srca )
    {
      v23 = a8;
      memmove(a8, Srca, 4LL * *((unsigned __int8 *)Srca + 1) + 8);
      *((_QWORD *)a2 + 1) = v23;
    }
    if ( v30 )
    {
      v24 = a10;
      memmove(a10, v30, 4LL * *((unsigned __int8 *)v30 + 1) + 8);
      *((_QWORD *)a2 + 2) = v24;
    }
    if ( v31 )
    {
      v26 = a6;
      memmove(a6, v31, *((unsigned __int16 *)v31 + 1));
      *((_QWORD *)a2 + 3) = v26;
    }
    if ( v32 )
    {
      memmove(a4, v32, *((unsigned __int16 *)v32 + 1));
      *((_QWORD *)a2 + 4) = a4;
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
