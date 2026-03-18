/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C0085610
 * Callers:
 *     EngAlphaBlend @ 0x1C0085010 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        size_t Sizea,
        __int64 a12)
{
  int v13; // r11d
  int v14; // r15d
  int v15; // r8d
  int v16; // esi
  char *v17; // r12
  int v18; // r10d
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  unsigned int *v22; // r15
  __int64 v23; // r8
  int *v24; // rbx
  char *v25; // rcx
  int *v27; // rbx
  unsigned int *v28; // rdi
  __int64 (__fastcall *v29)(); // rax
  unsigned int v30; // r9d
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // r10d
  int v36; // eax
  int v37; // eax
  int v38; // [rsp+40h] [rbp-98h]
  int *v39; // [rsp+68h] [rbp-70h]
  int *i; // [rsp+70h] [rbp-68h]
  char *v41; // [rsp+78h] [rbp-60h]
  __int64 v42; // [rsp+A0h] [rbp-38h]
  unsigned int v43; // [rsp+E8h] [rbp+10h]
  int Size; // [rsp+130h] [rbp+58h]

  v13 = *a2;
  v14 = a2[2] - *a2;
  v43 = v14;
  v15 = a2[1];
  v38 = a2[3] - v15;
  v16 = 4 * v14;
  v17 = 0LL;
  Size = 0;
  v18 = *(_DWORD *)(a12 + 4) >> 3;
  v19 = *(_DWORD *)a12 >> 3;
  v39 = 0LL;
  v41 = 0LL;
  if ( !a9 )
    return 0LL;
  v42 = *(_QWORD *)(a9 + 56);
  if ( v16 < v14 )
    return 0LL;
  v20 = a3 * v15;
  if ( v19 )
  {
    v21 = v13 * v19 + (__int64)v20;
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v36 = v13 / 8;
    else
      v36 = v13 / 2;
    v21 = v36 + (__int64)v20;
  }
  v22 = (unsigned int *)(v21 + a1);
  if ( v18 )
  {
    v23 = v18 * *a6 + (__int64)(a5 * a6[1]);
  }
  else
  {
    if ( *(_DWORD *)(a12 + 4) == 1 )
      v37 = *a6 / 8;
    else
      v37 = *a6 / 2;
    v23 = v37 + (__int64)(a5 * a6[1]);
  }
  v24 = (int *)(v23 + a4);
  if ( *(_QWORD *)(a12 + 16) )
    Size = v16;
  if ( *(_QWORD *)(a12 + 8) )
  {
    Size += v16;
    if ( Size < v16 )
      return 0LL;
  }
  if ( Size )
  {
    v41 = (char *)PALLOCMEM2((unsigned int)Size, 1886150983LL, 1);
    if ( !v41 )
      return 0LL;
  }
  v25 = v41;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v39 = (int *)v41;
    v25 = &v41[v16];
  }
  if ( *(_QWORD *)(a12 + 16) )
    v17 = v25;
  for ( i = v24; v38--; i = (int *)((char *)i + a5) )
  {
    v27 = i;
    v28 = v22;
    if ( v39 )
    {
      (*(void (__fastcall **)(int *, int *, _QWORD, _QWORD, __int64))(a12 + 8))(v39, i, 0LL, v43, a7);
      v27 = v39;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(char *, unsigned int *, _QWORD, _QWORD, __int64))(a12 + 16))(v17, v22, 0LL, v43, a8);
      v28 = (unsigned int *)v17;
    }
    v29 = *(__int64 (__fastcall **)())(a12 + 32);
    if ( v29 == vAlphaPerPixelOnly )
    {
      v30 = v43;
      while ( v30-- )
      {
        v32 = *v27;
        v33 = HIBYTE(*v27);
        if ( HIBYTE(*v27) )
        {
          if ( (_BYTE)v33 != 0xFF )
          {
            v34 = *v28;
            v32 += (((255 - v33) * ((v34 >> 8) & 0xFF00FF)
                   + 8388736
                   + ((((255 - v33) * ((v34 >> 8) & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) & 0xFF00FF00)
                 + ((((255 - v33) * (v34 & 0xFF00FF)
                    + 8388736
                    + ((((255 - v33) * (v34 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
          }
          *v28 = v32;
        }
        ++v27;
        ++v28;
      }
    }
    else
    {
      ((void (__fastcall *)(unsigned int *, int *, _QWORD))v29)(v28, v27, v43);
    }
    if ( v17 )
      (*(void (__fastcall **)(unsigned int *, char *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v22,
        v17,
        v43,
        0LL,
        a9,
        a10,
        v42);
    v22 = (unsigned int *)((char *)v22 + a3);
  }
  if ( Size )
    Win32FreePool(v41);
  return 1LL;
}
