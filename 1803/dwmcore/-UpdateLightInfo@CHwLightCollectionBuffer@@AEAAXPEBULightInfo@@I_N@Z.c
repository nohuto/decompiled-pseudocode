/*
 * XREFs of ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x18001632C
 * Callers:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x18001622C (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18013F044 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CHwLightCollectionBuffer::UpdateLightInfo(
        CHwLightCollectionBuffer *this,
        const struct LightInfo *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // r10d
  float v7; // xmm0_4
  char v8; // r12
  char *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned int v12; // r11d
  unsigned int v13; // ebx
  char *v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int128 v23; // [rsp+48h] [rbp-19h] BYREF
  __int128 v24; // [rsp+58h] [rbp-9h]
  __int128 v25; // [rsp+68h] [rbp+7h]
  __int128 v26; // [rsp+78h] [rbp+17h]
  int v27; // [rsp+88h] [rbp+27h]

  v4 = a3;
  if ( a3 )
    v7 = FLOAT_1_0;
  else
    v7 = 0.0;
  *((float *)this + 69) = v7;
  v8 = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  if ( a3 )
  {
    v9 = (char *)a2 + 12;
    v10 = a3;
    do
    {
      if ( !*((_DWORD *)v9 - 3) )
      {
        v8 = 1;
        *(__m128 *)((char *)this + 504) = _mm_add_ps(*(__m128 *)((char *)this + 504), *(__m128 *)(v9 - 8));
      }
      v9 += 240;
      --v10;
    }
    while ( v10 );
  }
  *((_DWORD *)this + 4) = -1;
  v11 = 0;
  v12 = 0;
  if ( a3 )
  {
    v13 = 0;
    v14 = (char *)a2 + 12;
    do
    {
      if ( v13 >= 8 )
        break;
      if ( *((_DWORD *)v14 - 3) )
      {
        v15 = *(_OWORD *)(v14 + 92);
        v16 = *(_OWORD *)(v14 + 108);
        v27 = *((_DWORD *)v14 + 39);
        v23 = v15;
        v17 = *(_OWORD *)(v14 + 124);
        v24 = v16;
        v18 = *(_OWORD *)(v14 + 140);
        v25 = v17;
        v26 = v18;
        CMILMatrix::Transpose((CMILMatrix *)&v23);
        v19 = v24;
        v20 = (unsigned __int64)v11 << 7;
        v21 = v11++;
        v22 = 112 * v21;
        *(_OWORD *)((char *)this + v20 + 20) = v23;
        *(_OWORD *)((char *)this + v20 + 36) = v19;
        *(_OWORD *)((char *)this + v20 + 52) = v25;
        *(_OWORD *)((char *)this + v20 + 68) = v26;
        *(_OWORD *)((char *)this + v20 + 84) = *((_OWORD *)v14 + 10);
        *(_OWORD *)((char *)this + v20 + 100) = *((_OWORD *)v14 + 11);
        *(_OWORD *)((char *)this + v20 + 116) = *((_OWORD *)v14 + 12);
        *(_OWORD *)((char *)this + v20 + 132) = *((_OWORD *)v14 + 13);
        *(_OWORD *)((char *)this + v22 + 280) = *(_OWORD *)(v14 - 8);
        *(_QWORD *)((char *)this + v22 + 296) = *((_QWORD *)v14 + 3);
        *(_DWORD *)((char *)this + v22 + 304) = *((_DWORD *)v14 + 8);
        *(_DWORD *)((char *)this + v22 + 308) = *((_DWORD *)v14 + 15);
        *(_OWORD *)((char *)this + v22 + 312) = *(_OWORD *)(v14 + 8);
        *(_QWORD *)((char *)this + v22 + 328) = *(_QWORD *)(v14 + 36);
        *(_DWORD *)((char *)this + v22 + 336) = *((_DWORD *)v14 + 11);
        *(_DWORD *)((char *)this + v22 + 340) = *((_DWORD *)v14 + 16);
        *(_QWORD *)((char *)this + v22 + 344) = *((_QWORD *)v14 + 6);
        *(_DWORD *)((char *)this + v22 + 352) = *((_DWORD *)v14 + 14);
        *(_DWORD *)((char *)this + v22 + 356) = *((_DWORD *)v14 + 21);
        *(_OWORD *)((char *)this + v22 + 360) = *(_OWORD *)(v14 + 68);
        *(_DWORD *)((char *)this + v22 + 376) = *((_DWORD *)v14 + 22);
        *((_DWORD *)this + 4) = (*((_DWORD *)v14 - 3) << v13) | *((_DWORD *)this + 4) & ~(15 << v13);
        v13 += 4;
      }
      ++v12;
      v14 += 240;
    }
    while ( v12 < v4 );
  }
  memset_0((char *)this + 128 * (unsigned __int64)v11 + 20, 0, (2LL - v11) << 7);
  memset_0((char *)this + 112 * v11 + 280, 0, 112 * (2LL - v11));
  if ( v8 || !a4 )
    *((_DWORD *)this + 4) &= ~(15 << (4 * v11));
}
