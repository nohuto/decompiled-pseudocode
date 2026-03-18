/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00BF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00157C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0033D40 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C0033D64 (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0034970 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00349EC (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0034A94 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00BFA1C (VidSchQueryDmaHeader.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00BFD0C (VidSchiGetNumFlipAllocAttribs.c)
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
  struct _VIDSCH_GLOBAL *v12; // rcx
  unsigned int v13; // r10d
  int NumHistoryLayersUsed; // eax
  unsigned int v15; // edi
  int v16; // r12d
  int NumFlipAllocAttribs; // eax
  __int64 v18; // r11
  unsigned int v19; // edx
  unsigned int v20; // ebx
  size_t v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // r12
  char *v27; // r11
  char *v28; // rax
  char *v29; // rdi
  char *v30; // rsi
  _DWORD *v31; // rdx
  _DWORD *v32; // r10
  __int64 v33; // rcx
  char *v34; // r9
  unsigned int v35; // r12d
  __int64 v36; // rcx
  unsigned int v37; // r11d
  unsigned int v38; // eax
  int v39; // edx
  unsigned int v40; // eax
  int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // rbx
  unsigned int v44; // edx
  unsigned int v45; // r8d
  bool v46; // zf
  unsigned int v47; // edx
  int v48; // r15d
  int v49; // eax
  char v50; // cl
  unsigned int v51; // r9d
  char v52; // cl
  int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // ecx
  int v59; // edx
  int v60; // eax
  int v61; // ecx
  int v62; // edx
  __int64 v63; // r8
  _DWORD *v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 i; // r9
  __int64 v68; // r8
  __int64 v69; // r10
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  int v75; // [rsp+30h] [rbp-59h]
  int v76; // [rsp+34h] [rbp-55h]
  int NumFlipQueueEntriesUsed; // [rsp+38h] [rbp-51h]
  __int64 v78; // [rsp+40h] [rbp-49h]
  __int64 v79; // [rsp+48h] [rbp-41h]
  __int64 v80; // [rsp+48h] [rbp-41h]
  int NumOverlayPlanesUsed; // [rsp+58h] [rbp-31h]
  int v82; // [rsp+5Ch] [rbp-2Dh]
  char *v83; // [rsp+60h] [rbp-29h]
  size_t v84; // [rsp+68h] [rbp-21h]
  __int64 v85; // [rsp+70h] [rbp-19h] BYREF
  unsigned int *v86; // [rsp+78h] [rbp-11h]
  unsigned int v87; // [rsp+80h] [rbp-9h]
  unsigned int v88; // [rsp+84h] [rbp-5h]
  int v89; // [rsp+88h] [rbp-1h]
  unsigned int v90; // [rsp+8Ch] [rbp+3h]
  unsigned int v91; // [rsp+90h] [rbp+7h]
  char *v92; // [rsp+98h] [rbp+Fh]
  unsigned int v93; // [rsp+F0h] [rbp+67h]
  unsigned int v94; // [rsp+F0h] [rbp+67h]
  unsigned int v97; // [rsp+108h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2464LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 528);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 2872);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 552);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 2872), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
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
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 528), *(_DWORD *)(a1 + 80));
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed(v12, v13);
    v15 = *(_DWORD *)(a1 + 80);
    v82 = NumHistoryLayersUsed;
    v16 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v15);
    LODWORD(v79) = (((_DWORD)v4 + 163) & 0xFFFFFFF8) - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, v15);
    v18 = 4LL;
    v19 = (280 * NumFlipAllocAttribs + (((_DWORD)v4 + 163) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8;
    v20 = ((v19 + 48 * v16 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
    HIDWORD(v79) = v19 - (_DWORD)v4;
    v21 = v20 + 48 * NumFlipQueueEntriesUsed;
    v84 = v21;
    if ( v3 >= v21 )
    {
      memset(v4, 0, (unsigned int)v21);
      *v4 = v20 + 48 * NumFlipQueueEntriesUsed;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8);
      v4[2] = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v4 + 16) = v79;
      v4[34] = v20;
      v22 = (unsigned int)v4[2];
      if ( (_DWORD)v22 != -1 && (unsigned int)v22 < *(_DWORD *)(v8 + 40) )
      {
        v23 = *(_QWORD *)(v8 + 8 * v22 + 3032);
        v80 = v23;
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 16);
          if ( v24 )
          {
            VidSchiCaptureProcessName(v24, (_BYTE *)v4 + 16);
            v25 = 0;
            v93 = 0;
            v26 = 0LL;
            v97 = 0;
            v4[8] = *(_DWORD *)(v23 + 4);
            v27 = (char *)v4 + (unsigned int)v4[32];
            v28 = (char *)v4 + (unsigned int)v4[33];
            v29 = (char *)v4 + (unsigned int)v4[34];
            v92 = v27;
            v75 = 0;
            v76 = 0;
            if ( *(_DWORD *)(v8 + 132) )
            {
              v30 = v28;
              do
              {
                v31 = *(_DWORD **)(v23 + 8 * v26 + 24);
                if ( v31 )
                {
                  v32 = v31 + 304;
                  v33 = 280LL * v25;
                  *(_DWORD *)&v27[v33] = v26;
                  v34 = &v27[v33 + 24];
                  v35 = v93;
                  *(_DWORD *)&v27[v33 + 4] = v31[8];
                  *(_DWORD *)&v27[v33 + 8] = v31[9];
                  *(_DWORD *)&v27[v33 + 12] = v31[10];
                  *(_DWORD *)&v27[v33 + 16] = v31[11];
                  *(_DWORD *)&v27[v33 + 20] = v31[13];
                  v36 = 64LL;
                  v37 = v97;
                  v78 = 64LL;
                  v83 = v34;
                  do
                  {
                    v38 = *(v32 - 27);
                    if ( v38 <= 0xC && (v39 = 4673, _bittest(&v39, v38)) )
                    {
                      *(_DWORD *)v34 = -1;
                    }
                    else
                    {
                      *(_DWORD *)v34 = v37;
                      v40 = 0;
                      v41 = *(v32 - 23);
                      if ( (v41 & 1) == 0 )
                      {
                        do
                        {
                          if ( v40 >= *(_DWORD *)(v8 + 60) )
                            break;
                          ++v40;
                        }
                        while ( !_bittest(&v41, v40) );
                      }
                      v42 = 0;
                      v85 = v8;
                      if ( v40 != *(_DWORD *)(v8 + 60) )
                        v42 = v40;
                      v94 = v42;
                      v43 = 6LL * v37;
                      *(_DWORD *)&v29[8 * v43] = v35;
                      *(_DWORD *)&v29[8 * v43 + 44] ^= (*(_DWORD *)&v29[48 * v37 + 44] ^ **(_DWORD **)v32) & 0x3FF;
                      v86 = *(unsigned int **)v32;
                      v44 = *v86;
                      v45 = *v86 & 0x3FF;
                      v46 = *(_BYTE *)(v8 + 136) == 0;
                      v87 = v45;
                      if ( v46 )
                        v47 = 0;
                      else
                        v47 = (v44 >> 10) & 0x3FF;
                      v48 = 0;
                      v88 = v47;
                      v89 = 0;
                      v46 = !_BitScanForward((unsigned int *)&v49, v45);
                      v50 = -1;
                      if ( !v46 )
                        v50 = v49;
                      v51 = v50;
                      v52 = -1;
                      v46 = !_BitScanForward((unsigned int *)&v53, v47);
                      v90 = v51;
                      if ( !v46 )
                        v52 = v53;
                      v54 = v52;
                      v91 = v52;
                      while ( v45 || v47 )
                      {
                        if ( v51 < v54 )
                        {
                          v55 = 6LL * v35;
                          *(_QWORD *)&v30[8 * v55] = *(_QWORD *)(*(_QWORD *)v32
                                                               + *(_DWORD *)(*(_QWORD *)v32 + 4LL)
                                                               * ((8 * *(_DWORD *)(*(_QWORD *)v32 + 8LL) + 175) & 0xFFFFFFF8)
                                                               + 48LL * (v48 + v94 * *(_DWORD *)(*(_QWORD *)v32 + 4LL))
                                                               + 40);
                          v56 = *(_QWORD *)v32;
                          v57 = v48 * ((8 * *(_DWORD *)(*(_QWORD *)v32 + 8LL) + 175) & 0xFFFFFFF8);
                          ++v35;
                          *(_OWORD *)&v30[8 * v55 + 8] = *(_OWORD *)(v57 + *(_QWORD *)v32 + 144);
                          *(_OWORD *)&v30[8 * v55 + 24] = *(_OWORD *)(v57 + v56 + 160);
                          *(_DWORD *)&v30[8 * v55 + 40] = *(_DWORD *)(v57 + v56 + 176);
                        }
                        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v85);
                        v54 = v91;
                        v47 = v88;
                        v45 = v87;
                        v51 = v90;
                        v48 = v89;
                      }
                      v34 = v83;
                      *(_DWORD *)&v29[8 * v43 + 4] = *(v32 - 27);
                      *(_DWORD *)&v29[8 * v43 + 8] = *(v32 - 26);
                      v93 = v35;
                      *(_DWORD *)&v29[8 * v43 + 44] ^= (*(_DWORD *)&v29[8 * v43 + 44] ^ (*(v32 - 25) << 10)) & 0x3C00;
                      v58 = *(_DWORD *)&v29[8 * v43 + 44];
                      *(_DWORD *)&v29[8 * v43 + 12] = *(v32 - 23);
                      *(_QWORD *)&v29[8 * v43 + 16] = *((_QWORD *)v32 - 9);
                      *(_QWORD *)&v29[8 * v43 + 24] = *((_QWORD *)v32 - 8);
                      *(_DWORD *)&v29[8 * v43 + 36] = *(v32 - 12);
                      v59 = v58 ^ (v58 ^ (*((unsigned __int8 *)v32 - 96) << 18)) & 0x40000;
                      *(_DWORD *)&v29[8 * v43 + 44] = v59;
                      v29[8 * v43 + 40] = *((_BYTE *)v32 - 84);
                      v29[8 * v43 + 41] = *((_BYTE *)v32 - 80);
                      v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(v32 - 10) << 10)) & 0x4000;
                      *(_DWORD *)&v29[8 * v43 + 44] = v60;
                      v61 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*(v32 - 10) << 10)) & 0x8000;
                      *(_DWORD *)&v29[8 * v43 + 44] = v61;
                      v62 = v61 ^ (v61 ^ (*(v32 - 10) << 9)) & 0x10000;
                      v36 = v78;
                      *(_DWORD *)&v29[8 * v43 + 44] = v62;
                      *(_DWORD *)&v29[8 * v43 + 44] = v62 ^ (v62 ^ (*(v32 - 10) << 9)) & 0x20000;
                      ++v37;
                    }
                    v34 += 4;
                    v32 += 320;
                    --v36;
                    v83 = v34;
                    v78 = v36;
                  }
                  while ( v36 );
                  LODWORD(v26) = v76;
                  v25 = v75 + 1;
                  v23 = v80;
                  v97 = v37;
                  v27 = v92;
                  ++v75;
                }
                v26 = (unsigned int)(v26 + 1);
                v76 = v26;
              }
              while ( (unsigned int)v26 < *(_DWORD *)(v8 + 132) );
              v4 = a2;
              v3 = a3;
            }
            v21 = v84;
          }
        }
      }
      v63 = 0LL;
      v4[14] = *(_DWORD *)(v8 + 2008);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 132);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v82;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 60); (unsigned int)v63 < *(_DWORD *)(v8 + 40); v63 = (unsigned int)(v63 + 1) )
        v4[v63 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2456LL) + 112LL)
                                 + 3760LL * (unsigned int)v63
                                 + 1068);
      v3 -= v21;
      v18 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v21);
    }
    if ( v3 >= 0x40 )
    {
      v64 = v4;
      v65 = 4LL;
      v66 = ((unsigned __int8)*(_DWORD *)(v8 + 6184) - 1) & 3;
      do
      {
        *(_QWORD *)v64 = *(_QWORD *)(v8 + 8 * v66 + 6192);
        v64[2] = *(_DWORD *)(v8 + 4 * v66 + 6224);
        v66 = ((_BYTE)v66 - 1) & 3;
        v64 += 4;
        --v65;
      }
      while ( v65 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 40); i = (unsigned int)(i + 1) )
    {
      if ( v3 >= 0x160 )
      {
        v68 = *(_QWORD *)(v8 + 8 * i + 3032);
        if ( v68 )
        {
          v69 = 4LL;
          v70 = ((unsigned __int8)*(_DWORD *)(v68 + 28132) - 1) & 3;
          do
          {
            *(_QWORD *)v4 = *(_QWORD *)(v68 + 8 * v70 + 28136);
            v71 = 10 * v70;
            v70 = ((_BYTE)v70 - 1) & 3;
            *(_OWORD *)(v4 + 2) = *(_OWORD *)(v68 + 8 * v71 + 28168);
            *(_OWORD *)(v4 + 6) = *(_OWORD *)(v68 + 8 * v71 + 28184);
            *(_OWORD *)(v4 + 10) = *(_OWORD *)(v68 + 8 * v71 + 28200);
            *(_OWORD *)(v4 + 14) = *(_OWORD *)(v68 + 8 * v71 + 28216);
            *(_OWORD *)(v4 + 18) = *(_OWORD *)(v68 + 8 * v71 + 28232);
            v4 += 22;
            --v69;
          }
          while ( v69 );
          v3 -= 352LL;
        }
      }
    }
    if ( v3 >= 0x160 )
    {
      v72 = ((unsigned __int8)*(_DWORD *)(v8 + 5824) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v72 + 5832);
        v73 = 10 * v72;
        v4 += 22;
        v72 = ((_BYTE)v72 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v73 + 5864);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v73 + 5880);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v73 + 5896);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v73 + 5912);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v73 + 5928);
        --v18;
      }
      while ( v18 );
    }
  }
  return 0LL;
}
