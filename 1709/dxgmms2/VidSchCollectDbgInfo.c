/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00B58D0
 * Callers:
 *     <none>
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001537C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002C53C (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C002C560 (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002DBC0 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002DC3C (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002DCE4 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00B60EC (VidSchQueryDmaHeader.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00B6444 (VidSchiGetNumFlipAllocAttribs.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, _DWORD *a2, size_t a3)
{
  size_t v3; // r15
  _DWORD *v4; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  unsigned int v12; // r10d
  int NumHistoryLayersUsed; // eax
  unsigned int v14; // edi
  int v15; // r12d
  int NumFlipAllocAttribs; // eax
  __int64 v17; // r11
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  size_t v20; // r12
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // r12
  char *v26; // r11
  char *v27; // rax
  char *v28; // rdi
  _DWORD *v29; // rdx
  char *v30; // r13
  _DWORD *v31; // r10
  __int64 v32; // rcx
  char *v33; // r9
  unsigned int v34; // r12d
  __int64 v35; // rcx
  unsigned int v36; // r11d
  unsigned int v37; // eax
  int v38; // edx
  unsigned int v39; // eax
  int v40; // ecx
  unsigned int v41; // ecx
  __int64 v42; // rbx
  unsigned int v43; // edx
  unsigned int v44; // r8d
  bool v45; // zf
  unsigned int v46; // edx
  int v47; // r15d
  int v48; // eax
  char v49; // cl
  unsigned int v50; // r9d
  char v51; // cl
  int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // ecx
  int v58; // edx
  __int64 v59; // r8
  _DWORD *v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 i; // r9
  __int64 v64; // r8
  __int64 v65; // r10
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  int v71; // [rsp+30h] [rbp-69h]
  int v72; // [rsp+34h] [rbp-65h]
  int NumFlipQueueEntriesUsed; // [rsp+38h] [rbp-61h]
  int NumOverlayPlanesUsed; // [rsp+3Ch] [rbp-5Dh]
  int v75; // [rsp+40h] [rbp-59h]
  __int64 v76; // [rsp+48h] [rbp-51h]
  __int64 v77; // [rsp+48h] [rbp-51h]
  char *v78; // [rsp+58h] [rbp-41h]
  __int64 v79; // [rsp+60h] [rbp-39h]
  size_t v80; // [rsp+68h] [rbp-31h]
  __int64 v81; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v82; // [rsp+78h] [rbp-21h]
  unsigned int v83; // [rsp+80h] [rbp-19h]
  unsigned int v84; // [rsp+84h] [rbp-15h]
  int v85; // [rsp+88h] [rbp-11h]
  unsigned int v86; // [rsp+8Ch] [rbp-Dh]
  unsigned int v87; // [rsp+90h] [rbp-9h]
  char *v88; // [rsp+98h] [rbp-1h]
  char *v89; // [rsp+A0h] [rbp+7h]
  unsigned int v90; // [rsp+100h] [rbp+67h]
  unsigned int v91; // [rsp+100h] [rbp+67h]
  unsigned int v94; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2312LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 512);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 2848);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 552);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 2848), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
      v11 += 7;
      --v10;
    }
    while ( v10 );
    if ( v3 >= 0x390 )
      v3 = 912LL;
    memmove(v4, (const void *)(v9 + 488), v3);
  }
  else if ( v7 == 3 )
  {
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 512), *(_DWORD *)(a1 + 80));
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, v12);
    v14 = *(_DWORD *)(a1 + 80);
    v75 = NumHistoryLayersUsed;
    v15 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v14);
    LODWORD(v76) = (((_DWORD)v4 + 163) & 0xFFFFFFF8) - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, v14);
    v17 = 4LL;
    v18 = (280 * NumFlipAllocAttribs + (((_DWORD)v4 + 163) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8;
    HIDWORD(v76) = v18 - (_DWORD)v4;
    v19 = ((v18 + 48 * v15 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
    v20 = v19 + 48 * NumFlipQueueEntriesUsed;
    v80 = v20;
    if ( v3 >= v20 )
    {
      memset(v4, 0, (unsigned int)v20);
      *v4 = v19 + 48 * NumFlipQueueEntriesUsed;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8);
      v4[2] = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v4 + 16) = v76;
      v4[34] = v19;
      v21 = (unsigned int)v4[2];
      if ( (_DWORD)v21 != -1 && (unsigned int)v21 < *(_DWORD *)(v8 + 40) )
      {
        v22 = *(_QWORD *)(v8 + 8 * v21 + 3008);
        v77 = v22;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 16);
          if ( v23 )
          {
            VidSchiCaptureProcessName(v23, (_BYTE *)v4 + 16);
            v24 = 0;
            v90 = 0;
            v25 = 0LL;
            v94 = 0;
            v4[8] = *(_DWORD *)(v22 + 4);
            v26 = (char *)v4 + (unsigned int)v4[32];
            v27 = (char *)v4 + (unsigned int)v4[33];
            v28 = (char *)v4 + (unsigned int)v4[34];
            v89 = v26;
            v88 = v27;
            v71 = 0;
            v72 = 0;
            if ( *(_DWORD *)(v8 + 128) )
            {
              do
              {
                v29 = *(_DWORD **)(v22 + 8 * v25 + 24);
                if ( v29 )
                {
                  v30 = v88;
                  v31 = v29 + 304;
                  v32 = 280LL * v24;
                  *(_DWORD *)&v26[v32] = v25;
                  v33 = &v26[v32 + 24];
                  v34 = v90;
                  *(_DWORD *)&v26[v32 + 4] = v29[8];
                  *(_DWORD *)&v26[v32 + 8] = v29[9];
                  *(_DWORD *)&v26[v32 + 12] = v29[10];
                  *(_DWORD *)&v26[v32 + 16] = v29[11];
                  *(_DWORD *)&v26[v32 + 20] = v29[13];
                  v35 = 64LL;
                  v36 = v94;
                  v79 = 64LL;
                  v78 = v33;
                  do
                  {
                    v37 = *(v31 - 27);
                    if ( v37 <= 0xC && (v38 = 4673, _bittest(&v38, v37)) )
                    {
                      *(_DWORD *)v33 = -1;
                    }
                    else
                    {
                      *(_DWORD *)v33 = v36;
                      v39 = 0;
                      v40 = *(v31 - 23);
                      if ( (v40 & 1) == 0 )
                      {
                        do
                        {
                          if ( v39 >= *(_DWORD *)(v8 + 56) )
                            break;
                          ++v39;
                        }
                        while ( !_bittest(&v40, v39) );
                      }
                      v41 = 0;
                      v81 = v8;
                      if ( v39 != *(_DWORD *)(v8 + 56) )
                        v41 = v39;
                      v91 = v41;
                      v42 = 6LL * v36;
                      *(_DWORD *)&v28[8 * v42] = v34;
                      *(_DWORD *)&v28[8 * v42 + 44] ^= (*(_DWORD *)&v28[48 * v36 + 44] ^ **(_DWORD **)v31) & 0x3FF;
                      v82 = *(unsigned int **)v31;
                      v43 = *v82;
                      v44 = *v82 & 0x3FF;
                      v45 = *(_BYTE *)(v8 + 132) == 0;
                      v83 = v44;
                      if ( v45 )
                        v46 = 0;
                      else
                        v46 = (v43 >> 10) & 0x3FF;
                      v47 = 0;
                      v84 = v46;
                      v85 = 0;
                      v45 = !_BitScanForward((unsigned int *)&v48, v44);
                      v49 = -1;
                      if ( !v45 )
                        v49 = v48;
                      v50 = v49;
                      v51 = -1;
                      v45 = !_BitScanForward((unsigned int *)&v52, v46);
                      v86 = v50;
                      if ( !v45 )
                        v51 = v52;
                      v53 = v51;
                      v87 = v51;
                      while ( v44 || v46 )
                      {
                        if ( v50 < v53 )
                        {
                          v54 = 6LL * v34;
                          *(_QWORD *)&v30[8 * v54] = *(_QWORD *)(*(_QWORD *)v31
                                                               + *(_DWORD *)(*(_QWORD *)v31 + 4LL)
                                                               * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 175) & 0xFFFFFFF8)
                                                               + 48LL * (v47 + v91 * *(_DWORD *)(*(_QWORD *)v31 + 4LL))
                                                               + 40);
                          v55 = *(_QWORD *)v31;
                          v56 = v47 * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 175) & 0xFFFFFFF8);
                          ++v34;
                          *(_OWORD *)&v30[8 * v54 + 8] = *(_OWORD *)(v56 + *(_QWORD *)v31 + 144);
                          *(_OWORD *)&v30[8 * v54 + 24] = *(_OWORD *)(v56 + v55 + 160);
                          *(_DWORD *)&v30[8 * v54 + 40] = *(_DWORD *)(v56 + v55 + 176);
                        }
                        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v81);
                        v53 = v87;
                        v46 = v84;
                        v44 = v83;
                        v50 = v86;
                        v47 = v85;
                      }
                      v33 = v78;
                      *(_DWORD *)&v28[8 * v42 + 4] = *(v31 - 27);
                      *(_DWORD *)&v28[8 * v42 + 8] = *(v31 - 26);
                      v90 = v34;
                      *(_DWORD *)&v28[8 * v42 + 44] ^= (*(_DWORD *)&v28[8 * v42 + 44] ^ (*(v31 - 25) << 10)) & 0x3C00;
                      *(_DWORD *)&v28[8 * v42 + 12] = *(v31 - 23);
                      *(_QWORD *)&v28[8 * v42 + 16] = *((_QWORD *)v31 - 9);
                      *(_QWORD *)&v28[8 * v42 + 24] = *((_QWORD *)v31 - 8);
                      *(_DWORD *)&v28[8 * v42 + 36] = *(v31 - 12);
                      *(_DWORD *)&v28[8 * v42 + 44] ^= (*(_DWORD *)&v28[8 * v42 + 44] ^ (*((unsigned __int8 *)v31 - 96) << 18)) & 0x40000;
                      v28[8 * v42 + 40] = *((_BYTE *)v31 - 84);
                      v28[8 * v42 + 41] = *((_BYTE *)v31 - 80);
                      *(_DWORD *)&v28[8 * v42 + 44] ^= (*(_DWORD *)&v28[8 * v42 + 44] ^ (*(v31 - 10) << 10)) & 0x4000;
                      v57 = *(_DWORD *)&v28[8 * v42 + 44] ^ ((unsigned __int16)*(_DWORD *)&v28[8 * v42 + 44] ^ (unsigned __int16)((unsigned __int16)*(v31 - 10) << 10)) & 0x8000;
                      *(_DWORD *)&v28[8 * v42 + 44] = v57;
                      v58 = v57 ^ (v57 ^ (*(v31 - 10) << 9)) & 0x10000;
                      v35 = v79;
                      *(_DWORD *)&v28[8 * v42 + 44] = v58;
                      *(_DWORD *)&v28[8 * v42 + 44] = v58 ^ (v58 ^ (*(v31 - 10) << 9)) & 0x20000;
                      ++v36;
                    }
                    v33 += 4;
                    v31 += 308;
                    --v35;
                    v78 = v33;
                    v79 = v35;
                  }
                  while ( v35 );
                  LODWORD(v25) = v72;
                  v24 = v71 + 1;
                  v22 = v77;
                  v94 = v36;
                  v26 = v89;
                  ++v71;
                }
                v25 = (unsigned int)(v25 + 1);
                v72 = v25;
              }
              while ( (unsigned int)v25 < *(_DWORD *)(v8 + 128) );
              v4 = a2;
              v3 = a3;
            }
            v20 = v80;
          }
        }
      }
      v59 = 0LL;
      v4[14] = *(_DWORD *)(v8 + 1992);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 128);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v75;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 56); (unsigned int)v59 < *(_DWORD *)(v8 + 40); v59 = (unsigned int)(v59 + 1) )
        v4[v59 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2304LL) + 112LL)
                                 + 3760LL * (unsigned int)v59
                                 + 1068);
      v3 -= v20;
      v17 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v20);
    }
    if ( v3 >= 0x40 )
    {
      v60 = v4;
      v61 = 4LL;
      v62 = ((unsigned __int8)*(_DWORD *)(v8 + 5992) - 1) & 3;
      do
      {
        *(_QWORD *)v60 = *(_QWORD *)(v8 + 8 * v62 + 6000);
        v60[2] = *(_DWORD *)(v8 + 4 * v62 + 6032);
        v62 = ((_BYTE)v62 - 1) & 3;
        v60 += 4;
        --v61;
      }
      while ( v61 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 40); i = (unsigned int)(i + 1) )
    {
      if ( v3 >= 0x160 )
      {
        v64 = *(_QWORD *)(v8 + 8 * i + 3008);
        if ( v64 )
        {
          v65 = 4LL;
          v66 = ((unsigned __int8)*(_DWORD *)(v64 + 23652) - 1) & 3;
          do
          {
            *(_QWORD *)v4 = *(_QWORD *)(v64 + 8 * v66 + 23656);
            v67 = 10 * v66;
            v66 = ((_BYTE)v66 - 1) & 3;
            *(_OWORD *)(v4 + 2) = *(_OWORD *)(v64 + 8 * v67 + 23688);
            *(_OWORD *)(v4 + 6) = *(_OWORD *)(v64 + 8 * v67 + 23704);
            *(_OWORD *)(v4 + 10) = *(_OWORD *)(v64 + 8 * v67 + 23720);
            *(_OWORD *)(v4 + 14) = *(_OWORD *)(v64 + 8 * v67 + 23736);
            *(_OWORD *)(v4 + 18) = *(_OWORD *)(v64 + 8 * v67 + 23752);
            v4 += 22;
            --v65;
          }
          while ( v65 );
          v3 -= 352LL;
        }
      }
    }
    if ( v3 >= 0x160 )
    {
      v68 = ((unsigned __int8)*(_DWORD *)(v8 + 5632) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v68 + 5640);
        v69 = 10 * v68;
        v4 += 22;
        v68 = ((_BYTE)v68 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v69 + 5672);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v69 + 5688);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v69 + 5704);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v69 + 5720);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v69 + 5736);
        --v17;
      }
      while ( v17 );
    }
  }
  return 0LL;
}
