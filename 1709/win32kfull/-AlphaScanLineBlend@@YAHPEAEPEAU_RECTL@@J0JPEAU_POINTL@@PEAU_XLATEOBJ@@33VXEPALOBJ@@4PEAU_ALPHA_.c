/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00133B0
 * Callers:
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        int *a6,
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
  unsigned int *v17; // r12
  int v18; // r10d
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned int *v23; // r15
  __int64 v24; // r8
  int *v25; // rbx
  __int64 v26; // rcx
  int *v28; // rbx
  unsigned int *v29; // rdi
  __int64 (__fastcall *v30)(); // rax
  unsigned int v31; // r9d
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // r10d
  unsigned int v36; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // [rsp+40h] [rbp-98h]
  int *v42; // [rsp+68h] [rbp-70h]
  int *i; // [rsp+70h] [rbp-68h]
  __int64 v44; // [rsp+78h] [rbp-60h]
  __int64 v45; // [rsp+A0h] [rbp-38h]
  unsigned int v46; // [rsp+E8h] [rbp+10h]
  int Size; // [rsp+130h] [rbp+58h]

  v13 = *a2;
  v14 = a2[2] - *a2;
  v46 = v14;
  v15 = a2[1];
  v41 = a2[3] - v15;
  v16 = 4 * v14;
  v17 = 0LL;
  Size = 0;
  v18 = *(_DWORD *)(a12 + 4) >> 3;
  v19 = *(_DWORD *)a12 >> 3;
  v42 = 0LL;
  v44 = 0LL;
  if ( !a9 )
    return 0LL;
  v45 = *(_QWORD *)(a9 + 56);
  if ( v16 < v14 )
    return 0LL;
  v20 = a3 * v15;
  if ( v19 )
  {
    v21 = (unsigned int)(v13 * v19);
    v22 = (int)v21 + (__int64)v20;
  }
  else
  {
    v21 = (unsigned int)(v13 >> 31);
    if ( *(_DWORD *)a12 == 1 )
    {
      v21 &= 7u;
      v38 = ((int)v21 + v13) >> 3;
    }
    else
    {
      v38 = v13 / 2;
    }
    v22 = v38 + (__int64)v20;
  }
  v23 = (unsigned int *)(v22 + a1);
  if ( v18 )
  {
    v24 = v18 * *a6 + (__int64)(a5 * a6[1]);
  }
  else
  {
    v39 = *a6;
    v21 = (unsigned int)(*a6 >> 31);
    if ( *(_DWORD *)(a12 + 4) == 1 )
    {
      v21 &= 7u;
      v40 = ((int)v21 + v39) >> 3;
    }
    else
    {
      v40 = (v39 - (int)v21) >> 1;
    }
    v24 = v40 + (__int64)(a5 * a6[1]);
  }
  v25 = (int *)(v24 + a4);
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
    v44 = PALLOCMEM2((unsigned int)Size);
    if ( !v44 )
      return 0LL;
  }
  v26 = v44;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v42 = (int *)v44;
    v26 = v16 + v44;
  }
  if ( *(_QWORD *)(a12 + 16) )
    v17 = (unsigned int *)v26;
  for ( i = v25; v41--; i = (int *)((char *)i + a5) )
  {
    v28 = i;
    v29 = v23;
    if ( v42 )
    {
      (*(void (__fastcall **)(int *, int *, _QWORD, _QWORD, __int64))(a12 + 8))(v42, i, 0LL, v46, a7);
      v28 = v42;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(unsigned int *, unsigned int *, _QWORD, _QWORD, __int64))(a12 + 16))(
        v17,
        v23,
        0LL,
        v46,
        a8);
      v29 = v17;
    }
    v30 = *(__int64 (__fastcall **)())(a12 + 32);
    if ( v30 == vAlphaPerPixelOnly )
    {
      v31 = v46;
      while ( v31-- )
      {
        v33 = *v28;
        v34 = HIBYTE(*v28);
        if ( HIBYTE(*v28) )
        {
          v35 = *v29;
          if ( (_BYTE)v34 != 0xFF )
          {
            v36 = 255 - v34;
            v24 = v36 * ((v35 >> 8) & 0xFF00FF) + 8388736;
            v21 = ((_DWORD)v24 + (((unsigned int)v24 >> 8) & 0xFF00FF)) & 0xFF00FF00;
            v33 += v21
                 + (((v36 * (v35 & 0xFF00FF) + 8388736 + (((v36 * (v35 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
          }
          *v29 = v33;
        }
        ++v28;
        ++v29;
      }
    }
    else
    {
      ((void (__fastcall *)(unsigned int *, int *, _QWORD))v30)(v29, v28, v46);
    }
    if ( v17 )
      (*(void (__fastcall **)(unsigned int *, unsigned int *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v23,
        v17,
        v46,
        0LL,
        a9,
        a10,
        v45);
    v23 = (unsigned int *)((char *)v23 + a3);
  }
  if ( Size )
    Win32FreePool(v44, v21, v24);
  return 1LL;
}
