/*
 * XREFs of ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C009A774
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C009AB18 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     memmove @ 0x1C0015C80 (memmove.c)
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
  unsigned int v21; // r10d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned int v24; // ecx
  unsigned int v25; // r11d
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
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned __int64 v41; // r8
  unsigned int v42; // edi
  unsigned int v43; // eax
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // r14
  unsigned int v49; // [rsp+20h] [rbp-60h]
  unsigned __int64 v50; // [rsp+28h] [rbp-58h]
  __int128 v51; // [rsp+40h] [rbp-40h]
  __int128 v52; // [rsp+50h] [rbp-30h]
  __int128 v53; // [rsp+60h] [rbp-20h]
  unsigned int v54; // [rsp+C0h] [rbp+40h]
  unsigned int v57; // [rsp+E0h] [rbp+60h]
  unsigned int v58; // [rsp+E8h] [rbp+68h]
  unsigned int v59; // [rsp+F0h] [rbp+70h]

  v16 = a4;
  v17 = a3;
  if ( a4 < 0x48 )
    return 0LL;
  v20 = *((_QWORD *)a2 + 5);
  v21 = 0;
  v58 = 0;
  v22 = v16 - 72;
  v23 = a16;
  v24 = 0;
  v59 = 0;
  v25 = -1;
  v26 = 0LL;
  v54 = 0;
  v27 = 0LL;
  v57 = 0;
  v28 = 0LL;
  v49 = -1;
  v50 = v16 - 72;
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
                v24 = v57;
              }
              else
              {
                if ( !v36 )
                {
                  v30 = v37;
                  v36 = 1;
                }
                v24 = v37;
                v57 = v37;
              }
              ++v37;
              v38 += 6;
            }
            while ( v37 < v31 );
            v21 = v54;
            v58 = v30;
          }
          v25 = v49;
          v39 = v24 - v30 - (unsigned int)v28 + 1;
          if ( (unsigned int)(v29 / 0x18) < (unsigned int)v39 )
            v39 = (unsigned int)(v29 / 0x18);
          v40 = v30;
          v28 = (unsigned int)(v39 + v28);
          v41 = v29 - 24 * v39;
          if ( v30 <= v57 )
          {
            v42 = v59;
            do
            {
              v43 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 24LL * v40);
              if ( v25 >= v43 )
                v25 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 24LL * v40);
              if ( v42 <= v43 )
                v42 = *(_DWORD *)(*((_QWORD *)a2 + 15) + 24LL * v40);
              ++v40;
            }
            while ( v40 <= v57 );
            v21 = v54;
            v30 = v58;
            v59 = v42;
            v31 = a13;
            v49 = v25;
          }
          v44 = v59;
          if ( v59 >= *((_DWORD *)a2 + 13) - 1 )
            v44 = *((_DWORD *)a2 + 13) - 1;
          v59 = v44;
          v45 = v44 - v25 - v21 + 1;
          if ( (unsigned int)(v41 / 0x18) < (unsigned int)v45 )
            v45 = (unsigned int)(v41 / 0x18);
          v21 += v45;
          v54 = v21;
          v29 = v41 - 24 * v45;
          v24 = v57;
        }
      }
    }
    while ( v29 );
    v17 = a3;
    v16 = a4;
    v22 = v50;
  }
  v46 = 0LL;
  LODWORD(v53) = 0;
  *(_QWORD *)&v51 = __PAIR64__(a10, a16);
  *((_QWORD *)&v51 + 1) = __PAIR64__(a12, a11);
  *(_QWORD *)&v52 = __PAIR64__(a14, a13);
  *((_QWORD *)&v52 + 1) = __PAIR64__(v27, a15);
  *((_QWORD *)&v53 + 1) = __PAIR64__(v28, v58);
  DWORD1(v53) = v26;
  if ( v16 >= 0x48 )
  {
    v46 = 72LL;
    v16 = v22;
    *(_OWORD *)v17 = __PAIR128__(a9, a8);
    *((_OWORD *)v17 + 1) = v51;
    *((_OWORD *)v17 + 2) = v52;
    *((_OWORD *)v17 + 3) = v53;
    *((_QWORD *)v17 + 8) = __PAIR64__(v21, v25);
    v17 += 72;
  }
  if ( v27 && v27 <= v16 )
  {
    memmove(v17, *((const void **)a2 + 16), v27);
    v17 += v27;
    v46 += v27;
    v16 -= v27;
  }
  if ( v26 && v26 <= v16 )
  {
    memmove(v17, *(const void **)(*((_QWORD *)a2 + 7) + 368LL), v26);
    v17 += v26;
    v46 += v26;
    v16 -= v26;
  }
  v47 = 24 * v28;
  if ( (_DWORD)v28 && v47 <= v16 )
  {
    memmove(v17, (const void *)(*((_QWORD *)a2 + 15) + 24LL * v58), 24 * v28);
    v17 += v47;
    v46 += v47;
    v16 -= v47;
  }
  v48 = 24LL * v54;
  if ( v54 )
  {
    if ( v48 <= v16 )
    {
      memmove(v17, (const void *)(*((_QWORD *)a2 + 14) + 24LL * v49), 24LL * v54);
      v46 += v48;
    }
  }
  return v46;
}
