/*
 * XREFs of ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I@Z @ 0x180199F3C
 * Callers:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z @ 0x1801999D4 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180186894 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CHwLightCollectionBuffer::UpdateLightInfo(__m128 *this, const struct LightInfo *a2, __int64 a3)
{
  unsigned int v4; // r9d
  float v5; // xmm0_4
  float v6; // xmm1_4
  char v7; // r13
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // r11d
  char *v13; // r10
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm1
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __m128 v21; // xmm1
  __int64 v22; // rax
  __m128 *v23; // r14
  __m128 *v24; // r15
  __int64 v25; // r12
  __int32 *v26; // r8
  unsigned int i; // ecx
  __int32 v28; // edx
  __int32 v29; // edx
  int v30; // eax
  __m128 v31; // [rsp+48h] [rbp-19h] BYREF
  __m128 v32; // [rsp+58h] [rbp-9h]
  __m128 v33; // [rsp+68h] [rbp+7h]
  __m128 v34; // [rsp+78h] [rbp+17h]
  int v35; // [rsp+88h] [rbp+27h]

  v4 = a3;
  v5 = 0.0;
  if ( (_DWORD)a3 )
    v6 = FLOAT_1_0;
  else
    v6 = 0.0;
  this[18].m128_f32[0] = v6;
  if ( (_DWORD)a3 )
    v5 = FLOAT_1_0;
  this[32].m128_f32[0] = v5;
  v7 = 0;
  this[31].m128_u64[0] = 0LL;
  this[31].m128_u64[1] = 0LL;
  if ( (_DWORD)a3 )
  {
    v8 = (char *)a2 + 12;
    v9 = (unsigned int)a3;
    do
    {
      if ( !*((_DWORD *)v8 - 3) )
      {
        v7 = 1;
        this[31] = _mm_add_ps(this[31], *(__m128 *)(v8 - 8));
      }
      v8 += 232;
      --v9;
    }
    while ( v9 );
  }
  v10 = 0LL;
  v11 = 0;
  v12 = 2;
  if ( (_DWORD)a3 )
  {
    v13 = (char *)a2 + 12;
    do
    {
      if ( (unsigned int)v10 >= v12 )
        break;
      if ( *((_DWORD *)v13 - 3) )
      {
        v14 = *(__m128 *)(v13 + 84);
        v15 = *(__m128 *)(v13 + 100);
        v35 = *((_DWORD *)v13 + 37);
        v31 = v14;
        v16 = *(__m128 *)(v13 + 116);
        v32 = v15;
        v17 = *(__m128 *)(v13 + 132);
        v33 = v16;
        v34 = v17;
        CMILMatrix::Transpose((CMILMatrix *)&v31, (__int64)a2, a3);
        v18 = v32;
        v19 = 6 * v10;
        v20 = (unsigned __int64)(unsigned int)v10 << 7;
        *(__m128 *)((char *)this + v20 + 32) = v31;
        *(__m128 *)((char *)this + v20 + 48) = v18;
        v21 = v34;
        *(__m128 *)((char *)this + v20 + 64) = v33;
        *(__m128 *)((char *)this + v20 + 80) = v21;
        *(__m128 *)((char *)this + v20 + 96) = *(__m128 *)(v13 + 152);
        *(__m128 *)((char *)this + v20 + 112) = *(__m128 *)(v13 + 168);
        *(__m128 *)((char *)this + v20 + 128) = *(__m128 *)(v13 + 184);
        *(__m128 *)((char *)this + v20 + 144) = *(__m128 *)(v13 + 200);
        this[v19 + 23].m128_i32[3] = *((_DWORD *)v13 - 3);
        this[v19 + 19] = *(__m128 *)(v13 - 8);
        this[v19 + 20].m128_u64[0] = *((_QWORD *)v13 + 3);
        this[v19 + 20].m128_i32[2] = *((_DWORD *)v13 + 8);
        this[v19 + 21] = *(__m128 *)(v13 + 8);
        this[v19 + 22].m128_u64[0] = *(_QWORD *)(v13 + 36);
        this[v19 + 22].m128_i32[2] = *((_DWORD *)v13 + 11);
        this[v19 + 23].m128_u64[0] = *((_QWORD *)v13 + 6);
        this[v19 + 23].m128_i32[2] = *((_DWORD *)v13 + 14);
        this[v19 + 20].m128_i32[3] = *((_DWORD *)v13 + 15);
        this[v19 + 22].m128_i32[3] = *((_DWORD *)v13 + 16);
        v22 = 6 * (v10 + 4);
        v10 = (unsigned int)(v10 + 1);
        this[v22] = *(__m128 *)(v13 + 68);
      }
      ++v11;
      v13 += 232;
    }
    while ( v11 < v4 );
  }
  if ( (unsigned int)v10 < v12 )
  {
    v23 = &this[6 * v10 + 19];
    v24 = &this[8 * (unsigned __int64)(unsigned int)v10 + 2];
    v25 = v12 - (unsigned int)v10;
    do
    {
      memset_0(v24, 0, 0x80uLL);
      memset_0(v23, 0, 0x60uLL);
      v23[4].m128_i32[3] = 15;
      v24 += 8;
      v23 += 6;
      --v25;
    }
    while ( v25 );
  }
  this[1].m128_i32[0] = -1;
  v26 = &this[23].m128_i32[3];
  for ( i = 0; i < 8; i += 4 )
  {
    v28 = *v26;
    v26 += 24;
    v29 = v28 << i;
    v30 = this[1].m128_i32[0] & ~(15 << i);
    this[1].m128_i32[0] = v29 | v30;
  }
  if ( v7 )
    this[1].m128_i32[0] &= ~(15 << (4 * v10));
}
