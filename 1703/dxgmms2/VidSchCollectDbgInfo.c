/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00ACEE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001E7B4 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002AA3C (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C002AA60 (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002B5F4 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002B65C (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C002B700 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00AD6DC (VidSchQueryDmaHeader.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00ADA34 (VidSchiGetNumFlipAllocAttribs.c)
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
  unsigned int v12; // ebx
  int NumFlipAllocAttribs; // eax
  __int64 v14; // r11
  unsigned int v15; // ebx
  size_t v16; // r12
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // r12
  char *v22; // r11
  char *v23; // rax
  char *v24; // rdi
  _DWORD *v25; // rdx
  char *v26; // r13
  char **v27; // r10
  __int64 v28; // rcx
  char *v29; // r9
  unsigned int v30; // r12d
  __int64 v31; // rcx
  unsigned int v32; // r11d
  unsigned int v33; // eax
  int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rbx
  bool v39; // zf
  char *v40; // rcx
  unsigned int v41; // r8d
  unsigned int v42; // edx
  int v43; // r15d
  int v44; // eax
  char v45; // cl
  unsigned int v46; // r9d
  char v47; // cl
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // r9
  char *v51; // rdx
  __int64 v52; // rax
  int v53; // ecx
  int v54; // edx
  __int64 v55; // r8
  _DWORD *v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 i; // r9
  __int64 v60; // r8
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  int v67; // [rsp+30h] [rbp-69h]
  int v68; // [rsp+34h] [rbp-65h]
  int NumFlipQueueEntriesUsed; // [rsp+38h] [rbp-61h]
  int NumOverlayPlanesUsed; // [rsp+3Ch] [rbp-5Dh]
  int NumHistoryLayersUsed; // [rsp+40h] [rbp-59h]
  __int64 v72; // [rsp+48h] [rbp-51h]
  __int64 v73; // [rsp+48h] [rbp-51h]
  char *v74; // [rsp+58h] [rbp-41h]
  __int64 v75; // [rsp+60h] [rbp-39h]
  size_t v76; // [rsp+68h] [rbp-31h]
  _QWORD v77[2]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v78; // [rsp+80h] [rbp-19h]
  unsigned int v79; // [rsp+84h] [rbp-15h]
  int v80; // [rsp+88h] [rbp-11h]
  unsigned int v81; // [rsp+8Ch] [rbp-Dh]
  unsigned int v82; // [rsp+90h] [rbp-9h]
  char *v83; // [rsp+98h] [rbp-1h]
  char *v84; // [rsp+A0h] [rbp+7h]
  unsigned int v85; // [rsp+100h] [rbp+67h]
  unsigned int v86; // [rsp+100h] [rbp+67h]
  unsigned int v89; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2288LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 416);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 2832);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 552);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 2832), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
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
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 416), *(_DWORD *)(a1 + 80));
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, *(_DWORD *)(a1 + 80));
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, *(_DWORD *)(a1 + 80));
    v12 = ((_DWORD)v4 + 163) & 0xFFFFFFF8;
    LODWORD(v72) = v12 - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, *(unsigned int *)(a1 + 80));
    v14 = 4LL;
    HIDWORD(v72) = ((280 * NumFlipAllocAttribs + v12 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
    v15 = ((((280 * NumFlipAllocAttribs + v12 + 7) & 0xFFFFFFF8) + 40 * NumHistoryLayersUsed + 7) & 0xFFFFFFF8)
        - (_DWORD)v4;
    v16 = v15 + 48 * NumFlipQueueEntriesUsed;
    v76 = v16;
    if ( v3 >= v16 )
    {
      memset(v4, 0, (unsigned int)v16);
      *v4 = v15 + 48 * NumFlipQueueEntriesUsed;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8);
      v4[2] = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v4 + 16) = v72;
      v4[34] = v15;
      v17 = (unsigned int)v4[2];
      if ( (_DWORD)v17 != -1 && (unsigned int)v17 < *(_DWORD *)(v8 + 40) )
      {
        v18 = *(_QWORD *)(v8 + 8 * v17 + 2992);
        v73 = v18;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 16);
          if ( v19 )
          {
            VidSchiCaptureProcessName(v19, (_BYTE *)v4 + 16);
            v20 = 0;
            v85 = 0;
            v21 = 0LL;
            v89 = 0;
            v4[8] = *(_DWORD *)(v18 + 4);
            v22 = (char *)v4 + (unsigned int)v4[32];
            v23 = (char *)v4 + (unsigned int)v4[33];
            v24 = (char *)v4 + (unsigned int)v4[34];
            v84 = v22;
            v83 = v23;
            v67 = 0;
            v68 = 0;
            if ( *(_DWORD *)(v8 + 128) )
            {
              do
              {
                v25 = *(_DWORD **)(v18 + 8 * v21 + 24);
                if ( v25 )
                {
                  v26 = v83;
                  v27 = (char **)(v25 + 302);
                  v28 = 280LL * v20;
                  *(_DWORD *)&v22[v28] = v21;
                  v29 = &v22[v28 + 24];
                  v30 = v85;
                  *(_DWORD *)&v22[v28 + 4] = v25[8];
                  *(_DWORD *)&v22[v28 + 8] = v25[9];
                  *(_DWORD *)&v22[v28 + 12] = v25[10];
                  *(_DWORD *)&v22[v28 + 16] = v25[11];
                  *(_DWORD *)&v22[v28 + 20] = v25[13];
                  v31 = 64LL;
                  v32 = v89;
                  v75 = 64LL;
                  v74 = v29;
                  do
                  {
                    v33 = *((_DWORD *)v27 - 27);
                    if ( v33 <= 0xC && (v34 = 4673, _bittest(&v34, v33)) )
                    {
                      *(_DWORD *)v29 = -1;
                    }
                    else
                    {
                      *(_DWORD *)v29 = v32;
                      v35 = 0;
                      v36 = *((_DWORD *)v27 - 23);
                      if ( (v36 & 1) == 0 )
                      {
                        do
                        {
                          if ( v35 >= *(_DWORD *)(v8 + 56) )
                            break;
                          ++v35;
                        }
                        while ( !_bittest(&v36, v35) );
                      }
                      v37 = 0;
                      v77[0] = v8;
                      if ( v35 != *(_DWORD *)(v8 + 56) )
                        v37 = v35;
                      v86 = v37;
                      v38 = 6LL * v32;
                      *(_DWORD *)&v24[8 * v38] = v30;
                      v24[8 * v38 + 44] = **v27;
                      v39 = *(_BYTE *)(v8 + 132) == 0;
                      v40 = *v27;
                      v77[1] = v40;
                      v41 = (unsigned __int8)*(_DWORD *)v40;
                      v78 = v41;
                      if ( v39 )
                        v42 = 0;
                      else
                        v42 = (unsigned __int8)v40[1];
                      v43 = 0;
                      v79 = v42;
                      v80 = 0;
                      v39 = !_BitScanForward((unsigned int *)&v44, v41);
                      v45 = -1;
                      if ( !v39 )
                        v45 = v44;
                      v46 = v45;
                      v47 = -1;
                      v39 = !_BitScanForward((unsigned int *)&v48, v42);
                      v81 = v46;
                      if ( !v39 )
                        v47 = v48;
                      v49 = v47;
                      v82 = v47;
                      while ( v41 || v42 )
                      {
                        if ( v46 < v49 )
                        {
                          v50 = 5LL * v30;
                          *(_QWORD *)&v26[8 * v50] = *(_QWORD *)&(*v27)[48 * v43
                                                                      + 40
                                                                      + 48 * v86 * *((_DWORD *)*v27 + 1)
                                                                      + *((_DWORD *)*v27 + 1)
                                                                      * ((8 * *((_DWORD *)*v27 + 2) + 167) & 0xFFFFFFF8)];
                          v51 = *v27;
                          v52 = v43 * ((8 * *((_DWORD *)*v27 + 2) + 167) & 0xFFFFFFF8);
                          ++v30;
                          *(_OWORD *)&v26[8 * v50 + 8] = *(_OWORD *)&(*v27)[v52 + 144];
                          *(_OWORD *)&v26[8 * v50 + 24] = *(_OWORD *)&v51[v52 + 160];
                        }
                        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v77);
                        v49 = v82;
                        v42 = v79;
                        v41 = v78;
                        v46 = v81;
                        v43 = v80;
                      }
                      v29 = v74;
                      *(_DWORD *)&v24[8 * v38 + 4] = *((_DWORD *)v27 - 27);
                      *(_DWORD *)&v24[8 * v38 + 8] = *((_DWORD *)v27 - 26);
                      v85 = v30;
                      *(_DWORD *)&v24[8 * v38 + 44] ^= (*(_DWORD *)&v24[8 * v38 + 44] ^ (*((_DWORD *)v27 - 25) << 8)) & 0xF00;
                      *(_DWORD *)&v24[8 * v38 + 12] = *((_DWORD *)v27 - 23);
                      *(_QWORD *)&v24[8 * v38 + 16] = *(v27 - 9);
                      *(_QWORD *)&v24[8 * v38 + 24] = *(v27 - 8);
                      *(_DWORD *)&v24[8 * v38 + 36] = *((_DWORD *)v27 - 12);
                      *(_DWORD *)&v24[8 * v38 + 44] ^= (*(_DWORD *)&v24[8 * v38 + 44] ^ (*((unsigned __int8 *)v27 - 96) << 16)) & 0x10000;
                      v24[8 * v38 + 40] = *((_BYTE *)v27 - 84);
                      v24[8 * v38 + 41] = *((_BYTE *)v27 - 80);
                      *(_DWORD *)&v24[8 * v38 + 44] ^= (*(_DWORD *)&v24[8 * v38 + 44] ^ (*((_DWORD *)v27 - 10) << 8)) & 0x1000;
                      v53 = *(_DWORD *)&v24[8 * v38 + 44] ^ (*(_DWORD *)&v24[8 * v38 + 44] ^ (*((_DWORD *)v27 - 10) << 8)) & 0x2000;
                      *(_DWORD *)&v24[8 * v38 + 44] = v53;
                      v54 = v53 ^ ((unsigned __int16)v53 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v27 - 10) << 7)) & 0x4000;
                      v31 = v75;
                      *(_DWORD *)&v24[8 * v38 + 44] = v54;
                      *(_DWORD *)&v24[8 * v38 + 44] = v54 ^ ((unsigned __int16)v54 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v27 - 10) << 7)) & 0x8000;
                      ++v32;
                    }
                    v29 += 4;
                    v27 += 153;
                    --v31;
                    v74 = v29;
                    v75 = v31;
                  }
                  while ( v31 );
                  LODWORD(v21) = v68;
                  v20 = v67 + 1;
                  v18 = v73;
                  v89 = v32;
                  v22 = v84;
                  ++v67;
                }
                v21 = (unsigned int)(v21 + 1);
                v68 = v21;
              }
              while ( (unsigned int)v21 < *(_DWORD *)(v8 + 128) );
              v4 = a2;
              v3 = a3;
            }
            v16 = v76;
          }
        }
      }
      v55 = 0LL;
      v4[14] = *(_DWORD *)(v8 + 1976);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 128);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = NumHistoryLayersUsed;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 56); (unsigned int)v55 < *(_DWORD *)(v8 + 40); v55 = (unsigned int)(v55 + 1) )
        v4[v55 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2280LL) + 112LL)
                                 + 3208LL * (unsigned int)v55
                                 + 1028);
      v3 -= v16;
      v14 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v16);
    }
    if ( v3 >= 0x40 )
    {
      v56 = v4;
      v57 = 4LL;
      v58 = ((unsigned __int8)*(_DWORD *)(v8 + 5480) - 1) & 3;
      do
      {
        *(_QWORD *)v56 = *(_QWORD *)(v8 + 8 * v58 + 5488);
        v56[2] = *(_DWORD *)(v8 + 4 * v58 + 5520);
        v58 = ((_BYTE)v58 - 1) & 3;
        v56 += 4;
        --v57;
      }
      while ( v57 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 40); i = (unsigned int)(i + 1) )
    {
      v60 = *(_QWORD *)(v8 + 8 * i + 2992);
      if ( v3 >= 0x160 && v60 )
      {
        v61 = 4LL;
        v62 = ((unsigned __int8)*(_DWORD *)(v60 + 18900) - 1) & 3;
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)(v60 + 8 * v62 + 18904);
          v63 = 10 * v62;
          v62 = ((_BYTE)v62 - 1) & 3;
          *(_OWORD *)(v4 + 2) = *(_OWORD *)(v60 + 8 * v63 + 18936);
          *(_OWORD *)(v4 + 6) = *(_OWORD *)(v60 + 8 * v63 + 18952);
          *(_OWORD *)(v4 + 10) = *(_OWORD *)(v60 + 8 * v63 + 18968);
          *(_OWORD *)(v4 + 14) = *(_OWORD *)(v60 + 8 * v63 + 18984);
          *(_OWORD *)(v4 + 18) = *(_OWORD *)(v60 + 8 * v63 + 19000);
          v4 += 22;
          --v61;
        }
        while ( v61 );
        v3 -= 352LL;
      }
    }
    if ( v3 >= 0x160 )
    {
      v64 = ((unsigned __int8)*(_DWORD *)(v8 + 5120) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v64 + 5128);
        v65 = 10 * v64;
        v4 += 22;
        v64 = ((_BYTE)v64 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v65 + 5160);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v65 + 5176);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v65 + 5192);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v65 + 5208);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v65 + 5224);
        --v14;
      }
      while ( v14 );
    }
  }
  return 0LL;
}
