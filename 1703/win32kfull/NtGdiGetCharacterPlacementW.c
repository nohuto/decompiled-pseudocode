/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x1C028D200
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     GreGetCharacterPlacementW @ 0x1C0298268 (GreGetCharacterPlacementW.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(__int64 a1, char *a2, int a3, int a4, unsigned __int64 a5, int a6)
{
  unsigned int v6; // r12d
  char *v7; // r10
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rsi
  _BYTE *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // r14
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  size_t v21; // r8
  char *v22; // rcx
  __int64 v23; // rax
  void *v24; // rcx
  size_t v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r12
  const void *v28; // rdx
  const void *v29; // rdx
  const void *v30; // rdx
  const void *v31; // rdx
  const void *v32; // rdx
  const void *v33; // rdx
  unsigned int v35; // [rsp+34h] [rbp-B4h]
  unsigned int v36; // [rsp+38h] [rbp-B0h]
  unsigned int v37; // [rsp+3Ch] [rbp-ACh]
  unsigned int v38; // [rsp+40h] [rbp-A8h]
  unsigned int v39; // [rsp+44h] [rbp-A4h]
  unsigned int v40; // [rsp+48h] [rbp-A0h]
  int CharacterPlacementW; // [rsp+4Ch] [rbp-9Ch]
  void *v42[2]; // [rsp+60h] [rbp-88h]
  void *Src[2]; // [rsp+70h] [rbp-78h]
  void *v44[2]; // [rsp+80h] [rbp-68h]
  void *v45[2]; // [rsp+90h] [rbp-58h]

  v6 = a3;
  v7 = a2;
  v8 = 0;
  CharacterPlacementW = 0;
  v9 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 < 0 || a4 < -1 || !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a5;
    if ( a5 >= W32UserProbeAddress )
      v12 = (_BYTE *)W32UserProbeAddress;
    *v12 = *v12;
    v12[63] = v12[63];
    *(_OWORD *)v42 = *(_OWORD *)a5;
    *(_OWORD *)Src = *(_OWORD *)(a5 + 16);
    *(_OWORD *)v44 = *(_OWORD *)(a5 + 32);
    *(_OWORD *)v45 = *(_OWORD *)(a5 + 48);
    v6 = a3;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v45, 8));
    if ( a3 > v13 )
      v6 = v13;
  }
  if ( v6 > 0x9C4000 )
    return 0LL;
  v14 = 2 * v6;
  v15 = 4 * v6;
  if ( a5 )
  {
    v9 = 64;
    if ( v42[1] )
    {
      v35 = 64;
      v9 = ((v14 + 3) & 0xFFFFFFFC) + 64;
      if ( v9 < 0x40 )
        return 0LL;
    }
    if ( Src[0] )
    {
      v36 = v9;
      v9 += v15;
      if ( v9 < v36 )
        return 0LL;
    }
    v16 = (char *)Src[1];
    if ( Src[1] )
    {
      v17 = v9;
      v37 = v9;
      v9 += v15;
      if ( v9 < v17 )
        return 0LL;
    }
    if ( v44[0] )
    {
      v18 = v9;
      v38 = v9;
      v9 += v15;
      if ( v9 < v18 )
        return 0LL;
    }
    if ( v44[1] )
    {
      v19 = v9;
      v39 = v9;
      v9 += (v6 + 3) & 0xFFFFFFFC;
      if ( v9 < v19 )
        return 0LL;
    }
    if ( v45[0] )
    {
      v20 = v9;
      v40 = v9;
      v9 += v14;
      if ( v9 < v20 )
        return 0LL;
    }
  }
  else
  {
    v16 = (char *)Src[1];
  }
  if ( v9 <= 40960000 - (int)v14 )
  {
    v11 = AllocFreeTmpBuffer(v9 + (unsigned int)v14);
    v14 = 2 * v6;
    v7 = a2;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      v10 = v11;
      if ( v42[1] )
        *(_QWORD *)(v11 + 8) = v11 + v35;
      else
        *(_QWORD *)(v11 + 8) = 0LL;
      if ( Src[0] )
        *(_QWORD *)(v11 + 16) = v11 + v36;
      else
        *(_QWORD *)(v11 + 16) = 0LL;
      if ( v16 )
        *(_QWORD *)(v11 + 24) = v11 + v37;
      else
        *(_QWORD *)(v11 + 24) = 0LL;
      if ( v44[0] )
        *(_QWORD *)(v11 + 32) = v11 + v38;
      else
        *(_QWORD *)(v11 + 32) = 0LL;
      if ( v44[1] )
        *(_QWORD *)(v11 + 40) = v11 + v39;
      else
        *(_QWORD *)(v11 + 40) = 0LL;
      if ( v45[0] )
        *(_QWORD *)(v11 + 48) = v11 + v40;
      else
        *(_QWORD *)(v11 + 48) = 0LL;
      *(_DWORD *)v11 = v9;
      *(_DWORD *)(v11 + 56) = v6;
    }
    v21 = (unsigned int)v14;
    v22 = &v7[v14];
    if ( v22 < v7 || (unsigned __int64)v22 > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove((void *)(v11 + v9), v7, v21);
    if ( (a6 & 0x200000) != 0 && a5 && v16 )
    {
      v23 = 4 * v6;
      v24 = *(void **)(v10 + 24);
      if ( &v16[v23] < v16 || (unsigned __int64)&v16[v23] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v24, v16, 4 * v6);
    }
    CharacterPlacementW = GreGetCharacterPlacementW(a1, v11 + v9, v6, (unsigned int)a4, v10, a6);
    if ( CharacterPlacementW && a5 )
    {
      *(_DWORD *)(a5 + 60) = *(_DWORD *)(v10 + 60);
      v25 = *(int *)(v10 + 56);
      *(_DWORD *)(a5 + 56) = v25;
      v26 = (unsigned int)(2 * v25);
      v27 = (unsigned int)(4 * v25);
      if ( v42[1] )
      {
        v28 = *(const void **)(v10 + 8);
        if ( (unsigned __int64)v42[1] + v26 > W32UserProbeAddress || (char *)v42[1] + v26 <= v42[1] )
          *W32UserProbeAddress = 0;
        memmove(v42[1], v28, (unsigned int)v26);
      }
      if ( Src[0] )
      {
        v29 = *(const void **)(v10 + 16);
        if ( (unsigned __int64)Src[0] + v27 > W32UserProbeAddress || (char *)Src[0] + v27 <= Src[0] )
          *W32UserProbeAddress = 0;
        memmove(Src[0], v29, (unsigned int)v27);
      }
      if ( v16 )
      {
        v30 = *(const void **)(v10 + 24);
        if ( (unsigned __int64)&v16[v27] > W32UserProbeAddress || &v16[v27] <= v16 )
          *W32UserProbeAddress = 0;
        memmove(v16, v30, (unsigned int)v27);
      }
      if ( v44[0] )
      {
        v31 = *(const void **)(v10 + 32);
        if ( (unsigned __int64)v44[0] + v27 > W32UserProbeAddress || (char *)v44[0] + v27 <= v44[0] )
          *W32UserProbeAddress = 0;
        memmove(v44[0], v31, (unsigned int)v27);
      }
      if ( v44[1] )
      {
        v32 = *(const void **)(v10 + 40);
        if ( (char *)v44[1] + v25 > (void *)W32UserProbeAddress || (char *)v44[1] + v25 <= v44[1] )
          *W32UserProbeAddress = 0;
        memmove(v44[1], v32, v25);
      }
      if ( v45[0] )
      {
        v33 = *(const void **)(v10 + 48);
        if ( (unsigned __int64)v45[0] + v26 > W32UserProbeAddress || (char *)v45[0] + v26 <= v45[0] )
          *W32UserProbeAddress = 0;
        memmove(v45[0], v33, (unsigned int)v26);
      }
      v8 = 1;
    }
    else
    {
      v8 = 1;
    }
    FreeTmpBuffer(v11);
  }
  return CharacterPlacementW & (unsigned int)-(v8 != 0);
}
