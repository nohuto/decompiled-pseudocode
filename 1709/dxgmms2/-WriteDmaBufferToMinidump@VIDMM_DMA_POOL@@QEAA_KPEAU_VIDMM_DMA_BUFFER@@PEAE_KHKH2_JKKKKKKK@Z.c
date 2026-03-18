/*
 * XREFs of ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00A2B8C
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00A2F2C (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     memmove @ 0x1C00180C0 (memmove.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        unsigned int a15,
        unsigned int a16)
{
  unsigned __int64 v16; // rdi
  unsigned __int8 *v17; // rbx
  unsigned __int64 v20; // r9
  unsigned int v21; // r11d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned int v24; // ecx
  unsigned int v25; // r10d
  size_t v26; // r14
  size_t v27; // r15
  __int64 v28; // r12
  unsigned __int64 v29; // r8
  unsigned int v30; // ebx
  unsigned int v31; // edi
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r11d
  unsigned int v37; // edx
  unsigned int *v38; // r10
  unsigned __int64 v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // rax
  unsigned int v42; // edx
  unsigned __int64 v43; // r8
  unsigned int v44; // edi
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned __int64 v47; // rdx
  unsigned int v48; // ecx
  __int64 v49; // rsi
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r14
  unsigned int v52; // [rsp+20h] [rbp-60h]
  unsigned __int64 v53; // [rsp+28h] [rbp-58h]
  __int128 v54; // [rsp+40h] [rbp-40h]
  __int128 v55; // [rsp+50h] [rbp-30h]
  __int128 v56; // [rsp+60h] [rbp-20h]
  unsigned int v57; // [rsp+C0h] [rbp+40h]
  unsigned int v60; // [rsp+E0h] [rbp+60h]
  unsigned int v61; // [rsp+E8h] [rbp+68h]
  unsigned int v62; // [rsp+F0h] [rbp+70h]

  v16 = a4;
  v17 = a3;
  if ( a4 < 0x48 )
    return 0LL;
  v20 = *((_QWORD *)a2 + 5);
  v21 = 0;
  v61 = 0;
  v22 = v16 - 72;
  v23 = a16;
  v24 = 0;
  v62 = 0;
  v25 = -1;
  v26 = 0LL;
  v57 = 0;
  v27 = 0LL;
  v60 = 0;
  v28 = 0LL;
  v52 = -1;
  v53 = v16 - 72;
  v29 = v16 - 72;
  if ( v16 != 72 )
  {
    v30 = 0;
    v31 = a13;
    do
    {
      if ( v23 )
      {
        v32 = 64LL;
        if ( v29 < 0x40 )
          v32 = v29;
        if ( v32 >= v23 )
        {
          v33 = v23;
        }
        else
        {
          v33 = 64LL;
          if ( v29 < 0x40 )
            v33 = v29;
        }
        v27 += v33;
        v23 -= v33;
        v29 -= v33;
      }
      else if ( !v20 )
      {
        break;
      }
      if ( v20 )
      {
        v34 = 1024LL;
        if ( v29 < 0x400 )
          v34 = v29;
        if ( v34 >= v20 )
        {
          v35 = v20;
        }
        else
        {
          v35 = 1024LL;
          if ( v29 < 0x400 )
            v35 = v29;
        }
        v26 += v35;
        v20 -= v35;
        v29 -= v35;
        if ( v31 )
        {
          v36 = 0;
          v37 = a12;
          if ( a12 < v31 )
          {
            v38 = (unsigned int *)(*((_QWORD *)a2 + 15) + 8 * (3LL * a12 + 2));
            do
            {
              if ( *v38 >= v26 )
              {
                v24 = v60;
              }
              else
              {
                if ( !v36 )
                {
                  v30 = v37;
                  v36 = 1;
                }
                v24 = v37;
                v60 = v37;
              }
              ++v37;
              v38 += 6;
            }
            while ( v37 < v31 );
            v25 = v52;
            v61 = v30;
          }
          v39 = v29 / 0x18;
          v40 = v24 - v30 - v28 + 1;
          if ( (unsigned int)(v29 / 0x18) >= v40 )
            v39 = v40;
          v28 = (unsigned int)(v39 + v28);
          v41 = 3 * v39;
          v42 = v30;
          v43 = v29 - 8 * v41;
          if ( v30 <= v60 )
          {
            v44 = v62;
            do
            {
              v45 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 24LL * v42);
              if ( v25 >= v45 )
                v25 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 24LL * v42);
              if ( v44 <= v45 )
                v44 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 24LL * v42);
              ++v42;
            }
            while ( v42 <= v60 );
            v30 = v61;
            v62 = v44;
            v31 = a13;
            v52 = v25;
          }
          v46 = *((_DWORD *)a2 + 13) - 1;
          if ( v62 < v46 )
            v46 = v62;
          v62 = v46;
          v47 = v43 / 0x18;
          v48 = v46 - v25 - v57 + 1;
          if ( (unsigned int)(v43 / 0x18) >= v48 )
            v47 = v48;
          v24 = v60;
          v21 = v47 + v57;
          v57 += v47;
          v29 = v43 - 24 * v47;
        }
      }
    }
    while ( v29 );
    v17 = a3;
    v16 = a4;
    v22 = v53;
  }
  v49 = 0LL;
  LODWORD(v56) = 0;
  *(_QWORD *)&v54 = __PAIR64__(a10, a16);
  *((_QWORD *)&v54 + 1) = __PAIR64__(a12, a11);
  *(_QWORD *)&v55 = __PAIR64__(a14, a13);
  *((_QWORD *)&v55 + 1) = __PAIR64__(v27, a15);
  *((_QWORD *)&v56 + 1) = __PAIR64__(v28, v61);
  DWORD1(v56) = v26;
  if ( v16 >= 0x48 )
  {
    v49 = 72LL;
    v16 = v22;
    *(_OWORD *)v17 = __PAIR128__(a9, a8);
    *((_OWORD *)v17 + 1) = v54;
    *((_OWORD *)v17 + 2) = v55;
    *((_OWORD *)v17 + 3) = v56;
    *((_QWORD *)v17 + 8) = __PAIR64__(v21, v25);
    v17 += 72;
  }
  if ( v27 && v27 <= v16 )
  {
    memmove(v17, *((const void **)a2 + 16), v27);
    v17 += v27;
    v49 += v27;
    v16 -= v27;
  }
  if ( v26 && v26 <= v16 )
  {
    memmove(v17, *(const void **)(*((_QWORD *)a2 + 7) + 368LL), v26);
    v17 += v26;
    v49 += v26;
    v16 -= v26;
  }
  v50 = 24 * v28;
  if ( (_DWORD)v28 && v50 <= v16 )
  {
    memmove(v17, (const void *)(*((_QWORD *)a2 + 15) + 24LL * v61), 24 * v28);
    v17 += v50;
    v49 += v50;
    v16 -= v50;
  }
  v51 = 24LL * v57;
  if ( v57 )
  {
    if ( v51 <= v16 )
    {
      memmove(v17, (const void *)(*((_QWORD *)a2 + 14) + 24LL * v52), 24LL * v57);
      v49 += v51;
    }
  }
  return v49;
}
