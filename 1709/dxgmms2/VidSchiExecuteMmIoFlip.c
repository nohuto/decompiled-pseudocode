/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C00029E0
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0003BD0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F6B0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0012A30 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C00259C0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0004850 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011D98 (VidSchiPropagatePresentHistoryToken.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C00140F0 (VidMmFreeDeferredDmaBufferMapping.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00151C0 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0015590 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00246C0 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0024934 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     McTemplateK0pqqpxqqqq @ 0x1C00268E4 (McTemplateK0pqqpxqqqq.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C0026D64 (McTemplateK0pqqxpxqqqddddddddddddqqtq.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5)
{
  __int64 v6; // r12
  __int64 v7; // r14
  _DWORD *v8; // r13
  struct VIDSCH_FLIP_QUEUE *v9; // r15
  char *v10; // rbx
  bool v11; // zf
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // edx
  __int64 v18; // rcx
  char v19; // cl
  __int64 v20; // r15
  unsigned int v21; // edx
  unsigned int v22; // r12d
  _DWORD *v23; // rax
  int v24; // eax
  char v25; // cl
  char *v26; // r13
  int v27; // eax
  unsigned int v28; // r8d
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // r8d
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  char v36; // cl
  int v37; // eax
  char v38; // cl
  int v39; // eax
  unsigned int v40; // r8d
  char v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r12
  char *v45; // rcx
  char *v46; // rdx
  int v47; // eax
  char *v48; // rax
  __int64 v49; // r12
  char *v50; // rcx
  char *v51; // rdx
  int v52; // eax
  __int64 v53; // r12
  int v54; // r9d
  char *v55; // rdx
  char *v56; // r8
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // edx
  __int64 v61; // rcx
  unsigned __int8 (__fastcall *v62)(void *); // rdx
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // r12d
  _DWORD *v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // rdx
  char v75; // al
  int v76; // ecx
  _DWORD *v77; // rax
  __int64 v78; // r15
  CRefCountedBuffer *v79; // rcx
  unsigned int v80; // r15d
  int v81; // edx
  __int64 v82; // rcx
  _QWORD *v83; // rdi
  int v84; // ecx
  int v85; // ecx
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v91; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v92; // rdx
  unsigned int v93; // r15d
  __int64 v94; // rdi
  int v95; // r10d
  __int64 v96; // rax
  __int64 v97; // r9
  int v98; // edi
  struct VIDSCH_FLIP_QUEUE *v99; // rdx
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rbx
  __int64 v103; // rcx
  REGHANDLE EtwHandle; // rax
  int v105; // eax
  __int64 v106; // rax
  _QWORD *v107; // rax
  void *v108; // rcx
  char v109; // [rsp+E0h] [rbp-80h]
  char v110[7]; // [rsp+E1h] [rbp-7Fh] BYREF
  unsigned int v111; // [rsp+E8h] [rbp-78h]
  int v112; // [rsp+ECh] [rbp-74h]
  unsigned int v113; // [rsp+F0h] [rbp-70h]
  unsigned int v114; // [rsp+F4h] [rbp-6Ch]
  unsigned int v115; // [rsp+F8h] [rbp-68h]
  int v116; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v117; // [rsp+100h] [rbp-60h]
  int v118; // [rsp+108h] [rbp-58h]
  int v119; // [rsp+10Ch] [rbp-54h]
  int v120; // [rsp+110h] [rbp-50h]
  int v121; // [rsp+114h] [rbp-4Ch]
  _DWORD *v122; // [rsp+118h] [rbp-48h]
  struct VIDSCH_FLIP_QUEUE *v123; // [rsp+120h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+128h] [rbp-38h] BYREF
  _QWORD v125[276]; // [rsp+140h] [rbp-20h] BYREF
  char v126; // [rsp+9F0h] [rbp+890h] BYREF
  unsigned int v127; // [rsp+9F8h] [rbp+898h]
  unsigned int v128; // [rsp+A00h] [rbp+8A0h]
  unsigned int v129; // [rsp+A08h] [rbp+8A8h]

  v129 = a4;
  v128 = a3;
  v127 = a2;
  LODWORD(v6) = a2;
  v117 = a2;
  v7 = 2LL * a3;
  v8 = (_DWORD *)*((_QWORD *)a1 + a2 + 376);
  v9 = *(struct VIDSCH_FLIP_QUEUE **)&v8[v7 + 6];
  v10 = (char *)v9 + 1232 * a4;
  v122 = v8;
  v11 = v8[1] == 3;
  v123 = v9;
  if ( v11 || (*((_DWORD *)v10 + 294) & 0x100) != 0 )
  {
    v109 = 1;
    v116 = 11;
  }
  else
  {
    v109 = 0;
    v116 = 5;
  }
  memset(v125, 0, 0x858uLL);
  if ( !*((_BYTE *)a1 + 132) )
    goto LABEL_17;
  v13 = *(_QWORD *)&v8[v7 + 6];
  v14 = *(_DWORD *)(v13 + 48);
  v15 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
  if ( v14 != v15 )
  {
    while ( *(_DWORD *)(1232LL * v14 + v13 + 1108) != 14 )
    {
      v14 = ((_BYTE)v14 - 1) & 0x3F;
      if ( v14 == v15 )
        goto LABEL_9;
    }
    return 259LL;
  }
LABEL_9:
  v12 = *((unsigned int *)v10 + 294);
  if ( (v12 & 0x10) != 0 )
    v16 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
  else
    v16 = (1 << *((_DWORD *)a1 + 32)) - 1;
  if ( (v16 & v8[739]) != 0 )
    return 259LL;
  if ( *((_DWORD *)a1 + 34) <= 1u || v8[1] == 3 || (v12 & 0x100) != 0 || (v12 & 0x80u) == 0LL )
  {
LABEL_17:
    if ( (*((_DWORD *)v10 + 294) & 0x10) != 0 )
      v17 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
    else
      v17 = (1 << *((_DWORD *)a1 + 32)) - 1;
    if ( (v17 & v8[738]) != 0 )
      return 259LL;
  }
  if ( *((_DWORD *)a1 + 709)
    || (v18 = *((_QWORD *)v10 + 137), *(_BYTE *)(v18 + 164))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 160), 0, 0) )
  {
    *a5 = 1;
    goto LABEL_105;
  }
  if ( *((_BYTE *)a1 + 132) )
  {
    VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
      a1,
      v6,
      v128,
      (struct _VIDSCH_CALL_EXECUTE_FLIP *)v125,
      (enum _VIDSCH_FLIP_STATUS *)&v116,
      v9,
      v129);
    goto LABEL_99;
  }
  if ( (*((_DWORD *)v10 + 294) & 0x10) != 0 )
  {
    memset(v125, 0, 0x858uLL);
    v23 = (_DWORD *)*((_QWORD *)v10 + 152);
    v19 = -1;
    v20 = 0LL;
    v113 = 0;
    v21 = *v23 & 0x3FF;
    v22 = (*v23 >> 10) & 0x3FF;
    v115 = v21;
    v11 = !_BitScanForward((unsigned int *)&v23, v21);
    v118 = (int)v23;
    if ( !v11 )
      v19 = (char)v23;
    v11 = !_BitScanForward((unsigned int *)&v24, v22);
    v114 = v19;
    v25 = -1;
    if ( !v11 )
      v25 = v24;
    v119 = v24;
    v111 = v25;
    while ( v21 || v22 )
    {
      v26 = (char *)a1 + 120 * (unsigned int)v20;
      memset(v26 + 3152, 0, 0x78uLL);
      LOBYTE(v27) = v111;
      v28 = v114;
      if ( v114 >= v111 )
      {
        v21 = v115;
        *((_DWORD *)v26 + 788) = v111;
        v38 = -1;
        *((_DWORD *)v26 + 789) = 0;
        v22 &= ~(1 << v27);
        v11 = !_BitScanForward((unsigned int *)&v27, v22);
        v121 = v39;
        if ( !v11 )
          v38 = v27;
        v20 = (unsigned int)(v20 + 1);
        v111 = v38;
      }
      else
      {
        v29 = v113;
        *((_DWORD *)v26 + 789) = 1;
        *((_DWORD *)v26 + 788) = v28;
        v30 = *((_QWORD *)v10 + 152);
        v31 = v30 + v29 * ((8 * *(_DWORD *)(v30 + 8) + 175) & 0xFFFFFFF8) + 144LL;
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v30, v29, 0);
        v32 = v113;
        v33 = 6LL * v113;
        *((_DWORD *)v26 + 790) = *(unsigned __int16 *)(*((_QWORD *)v10 + 152)
                                                     + *(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                                     + 48LL * v113
                                                     + 32);
        *((_QWORD *)v26 + 396) = *(_QWORD *)(*((_QWORD *)v10 + 152)
                                           + *(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                                           * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                           + 8 * v33
                                           + 40);
        *((_QWORD *)v26 + 397) = *(_QWORD *)(*((_QWORD *)v10 + 152)
                                           + *(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                                           * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                           + 8 * v33
                                           + 24);
        *((_DWORD *)v26 + 796) ^= (*((_DWORD *)v26 + 796) ^ *(_DWORD *)(v31 + 28)) & 1;
        *((_DWORD *)v26 + 796) ^= ((unsigned __int8)*((_DWORD *)v26 + 796) ^ (unsigned __int8)*(_DWORD *)(v31 + 28)) & 2;
        *((_DWORD *)v26 + 797) = (unsigned __int16)*(_DWORD *)v31;
        *((_DWORD *)v26 + 798) = (unsigned __int16)*(_DWORD *)(v31 + 4);
        *((_DWORD *)v26 + 799) = *(unsigned __int16 *)(v31 + 2);
        *((_DWORD *)v26 + 800) = *(unsigned __int16 *)(v31 + 6);
        *((_DWORD *)v26 + 801) = *(__int16 *)(v31 + 8);
        *((_DWORD *)v26 + 802) = *(__int16 *)(v31 + 12);
        *((_DWORD *)v26 + 803) = *(unsigned __int16 *)(v31 + 10);
        *((_DWORD *)v26 + 804) = *(unsigned __int16 *)(v31 + 14);
        *((_DWORD *)v26 + 805) = (unsigned __int16)*(_DWORD *)(v31 + 16);
        *((_DWORD *)v26 + 806) = (unsigned __int16)*(_DWORD *)(v31 + 20);
        *((_DWORD *)v26 + 807) = *(unsigned __int16 *)(v31 + 18);
        *((_DWORD *)v26 + 808) = *(unsigned __int16 *)(v31 + 22);
        *((_DWORD *)v26 + 809) = ((*(_DWORD *)(v31 + 28) >> 3) & 3) + 1;
        LODWORD(v33) = v115;
        v113 = v32 + 1;
        *((_DWORD *)a1 + 30 * (unsigned int)v20 + 810) ^= (*((_DWORD *)a1 + 30 * (unsigned int)v20 + 810) ^ (*(_DWORD *)(v31 + 28) >> 2)) & 1;
        *((_DWORD *)v26 + 811) = (*(_DWORD *)(v31 + 28) >> 5) & 3;
        *((_DWORD *)v26 + 812) ^= (*((_DWORD *)v26 + 812) ^ (*(_DWORD *)(v31 + 28) >> 7)) & 1;
        v34 = *((_DWORD *)v26 + 812) ^ ((unsigned __int8)*((_DWORD *)v26 + 812) ^ (unsigned __int8)(*(_DWORD *)(v31 + 28) >> 7)) & 2;
        *((_DWORD *)v26 + 812) = v34;
        v35 = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)(*(_DWORD *)(v31 + 28) >> 7)) & 4;
        LOBYTE(v34) = v114;
        *((_DWORD *)v26 + 812) = v35;
        *((_DWORD *)v26 + 813) = (*(_DWORD *)(v31 + 28) >> 10) & 7;
        *((_DWORD *)v26 + 814) = (*(_DWORD *)(v31 + 28) >> 13) & 1;
        *((_DWORD *)v26 + 815) = (*(_DWORD *)(v31 + 28) >> 14) & 1;
        *((_DWORD *)v26 + 816) = (*(_DWORD *)(v31 + 28) >> 15) & 3;
        v37 = 1 << v34;
        v36 = -1;
        v21 = ~v37 & v33;
        v11 = !_BitScanForward((unsigned int *)&v37, v21);
        v115 = v21;
        v120 = v37;
        if ( !v11 )
          v36 = v37;
        v20 = (unsigned int)(v20 + 1);
        v114 = v36;
      }
    }
    v40 = 0;
    v41 = v127;
    LODWORD(v125[67]) |= 4u;
    v125[0] = a1;
    HIDWORD(v125[67]) = v127;
    LODWORD(v125[67]) ^= (LOBYTE(v125[67]) ^ (unsigned __int8)(8 * *((_DWORD *)v10 + 294))) & 8;
    LODWORD(v125[67]) ^= (LOBYTE(v125[67]) ^ (unsigned __int8)(8 * *((_DWORD *)v10 + 294))) & 0x10;
    LODWORD(v125[67]) ^= (LOBYTE(v125[67]) ^ (unsigned __int8)(8 * *((_DWORD *)v10 + 294))) & 0x20;
    LODWORD(v125[70]) = *((_DWORD *)v10 + 295);
    LODWORD(v125[265]) = -1073741823;
    LODWORD(v125[1]) = *((_DWORD *)v10 + 283);
    v111 = v125[1];
    if ( *((_DWORD *)v10 + 283) )
    {
      do
      {
        v42 = v40++;
        v125[v42 + 2] = *(_QWORD *)(*(_QWORD *)&v10[8 * v42 + 56] + 64LL);
      }
      while ( v40 < *((_DWORD *)v10 + 283) );
      v111 = v125[1];
    }
    v43 = *((_QWORD *)a1 + 2);
    v126 = 0;
    if ( *(_BYTE *)(v43 + 2230) )
    {
      v44 = (unsigned int)v20;
      memset((char *)a1 + 4352, 0, 112LL * (unsigned int)v20);
      if ( (_DWORD)v20 )
      {
        v45 = (char *)a1 + 4356;
        v46 = (char *)a1 + 3156;
        do
        {
          *((_DWORD *)v45 - 1) = *((_DWORD *)v46 - 1);
          v47 = *(_DWORD *)v46;
          *(_DWORD *)v45 = *(_DWORD *)v46;
          if ( v47 )
          {
            *((_DWORD *)v45 + 1) = *((_DWORD *)v46 + 1);
            *(_QWORD *)(v45 + 12) = *(_QWORD *)(v46 + 12);
            *(_QWORD *)(v45 + 20) = *(_QWORD *)(v46 + 20);
            *((_DWORD *)v45 + 7) = *((_DWORD *)v46 + 7);
            *((_OWORD *)v45 + 2) = *((_OWORD *)v46 + 2);
            *((_OWORD *)v45 + 3) = *((_OWORD *)v46 + 3);
            *((_DWORD *)v45 + 16) = *((_DWORD *)v46 + 20);
            *((_DWORD *)v45 + 17) = *((_DWORD *)v46 + 21);
            *((_DWORD *)v45 + 18) = 0;
            *(_QWORD *)(v45 + 76) = 0LL;
            *((_DWORD *)v45 + 21) = *((_DWORD *)v46 + 22);
            *((_DWORD *)v45 + 22) = *((_DWORD *)v46 + 23);
            *((_DWORD *)v45 + 23) = *((_DWORD *)v46 + 24);
            *((_DWORD *)v45 + 24) = *((_DWORD *)v46 + 25);
            *((_DWORD *)v45 + 25) = *((_DWORD *)v46 + 26);
            *((_DWORD *)v45 + 26) = *((_DWORD *)v46 + 27);
          }
          v46 += 120;
          v45 += 112;
          --v44;
        }
        while ( v44 );
      }
    }
    else
    {
      if ( !*(_BYTE *)(v43 + 2231) )
      {
        if ( *(_BYTE *)(v43 + 2232) && *(_QWORD *)(v43 + 872) )
        {
          v53 = (unsigned int)v20;
          memset((char *)a1 + 4352, 0, (unsigned __int64)(unsigned int)v20 << 7);
          v54 = 0;
          if ( (_DWORD)v20 )
          {
            v55 = (char *)a1 + 4356;
            v56 = (char *)a1 + 3156;
            do
            {
              *((_DWORD *)v55 - 1) = *((_DWORD *)v56 - 1);
              v57 = *(_DWORD *)v56;
              *(_DWORD *)v55 = *(_DWORD *)v56;
              if ( v57 )
              {
                *((_DWORD *)v55 + 1) = *((_DWORD *)v56 + 1);
                *(_QWORD *)(v55 + 12) = *(_QWORD *)(v56 + 12);
                *(_QWORD *)(v55 + 20) = *(_QWORD *)(v56 + 20);
                *((_DWORD *)v55 + 7) = *((_DWORD *)v56 + 7);
                *((_OWORD *)v55 + 2) = *((_OWORD *)v56 + 2);
                *((_OWORD *)v55 + 3) = *((_OWORD *)v56 + 3);
                *((_OWORD *)v55 + 4) = *((_OWORD *)v56 + 4);
                *((_DWORD *)v55 + 20) = *((_DWORD *)v56 + 20);
                *((_DWORD *)v55 + 21) = *((_DWORD *)v56 + 21);
                *((_DWORD *)v55 + 22) = *((_DWORD *)v56 + 22);
                *((_DWORD *)v55 + 24) = *((_DWORD *)v56 + 24);
                *((_DWORD *)v55 + 25) = *((_DWORD *)v56 + 25);
                *((_DWORD *)v55 + 26) = *((_DWORD *)v56 + 26);
                *((_DWORD *)v55 + 27) = *((_DWORD *)v56 + 27);
                *((_DWORD *)v55 + 28) = *((_DWORD *)v56 + 28);
                *((_DWORD *)v55 + 29) = 0;
                v58 = *((_QWORD *)v10 + 152);
                v59 = v54 * ((8 * *(_DWORD *)(v58 + 8) + 175) & 0xFFFFFFF8);
                ++v54;
                *((_DWORD *)v55 + 23) = *(_DWORD *)(v59 + v58 + 168);
              }
              v56 += 120;
              v55 += 128;
              --v53;
            }
            while ( v53 );
          }
          v60 = 0;
          if ( v111 )
          {
            do
            {
              v61 = v60++;
              v125[v61 + 2] = v125[v61 + 2];
            }
            while ( v60 < LODWORD(v125[1]) );
          }
          v48 = (char *)a1 + 4352;
          v62 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
          goto LABEL_71;
        }
        v48 = (char *)a1 + 3152;
LABEL_70:
        v62 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_71:
        v63 = *((unsigned int *)a1 + 8);
        v64 = *((_QWORD *)a1 + 3);
        v125[69] = v48;
        LODWORD(v125[68]) = v20;
        DpSynchronizeExecution(v64, v62, v125, v63, &v126);
        if ( bTracingEnabled )
        {
          v67 = 0;
          if ( (_DWORD)v20 )
          {
            v68 = (_DWORD *)((char *)a1 + 3224);
            v111 = v128;
            do
            {
              v65 = (unsigned int)*(v68 - 17);
              v12 = 0LL;
              v66 = 0LL;
              if ( (_DWORD)v65 )
              {
                v69 = *((_QWORD *)v10 + 152);
                v70 = v67 * ((8 * *(_DWORD *)(v69 + 8) + 175) & 0xFFFFFFF8);
                ++v67;
                v12 = *(unsigned int *)(v70 + v69 + 168);
                v66 = *(unsigned int *)(v70 + v69 + 176);
              }
              v112 = *((_DWORD *)v10 + 276);
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0pqqxpxqqqddddddddddddqqtq(
                  v66,
                  v65,
                  v12,
                  *((_QWORD *)a1 + 2),
                  v41,
                  *(v68 - 18),
                  v111,
                  *((_QWORD *)v68 - 6),
                  *((_QWORD *)v68 - 7),
                  *(v68 - 16),
                  *((_DWORD *)v10 + 278),
                  *((_DWORD *)v10 + 281),
                  *(v68 - 9),
                  *(v68 - 7),
                  *(v68 - 8),
                  *(v68 - 6),
                  *(v68 - 5),
                  *(v68 - 3),
                  *(v68 - 4),
                  *(v68 - 2),
                  *(v68 - 1),
                  v68[1],
                  *v68,
                  v68[2],
                  v12,
                  5,
                  v65,
                  v66);
              v68 += 30;
              --v20;
            }
            while ( v20 );
          }
        }
        v71 = SLODWORD(v125[265]);
        if ( LODWORD(v125[265]) )
        {
          v107 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v66, v65, v12);
          v107[6] = v125;
          v107[3] = 281LL;
          v107[4] = 11LL;
          v107[5] = v71;
          v107[7] = *((_QWORD *)a1 + 2);
          WdLogEvent5_WdCriticalError(v107);
          VidMmFreeDeferredDmaBufferMapping(v108);
          JUMPOUT(0x1C0003BC1LL);
        }
        v8 = v122;
        goto LABEL_105;
      }
      v49 = (unsigned int)v20;
      memset((char *)a1 + 4352, 0, (unsigned __int64)(unsigned int)v20 << 7);
      if ( (_DWORD)v20 )
      {
        v50 = (char *)a1 + 4356;
        v51 = (char *)a1 + 3156;
        do
        {
          *((_DWORD *)v50 - 1) = *((_DWORD *)v51 - 1);
          v52 = *(_DWORD *)v51;
          *(_DWORD *)v50 = *(_DWORD *)v51;
          if ( v52 )
          {
            *((_DWORD *)v50 + 1) = *((_DWORD *)v51 + 1);
            *(_QWORD *)(v50 + 12) = *(_QWORD *)(v51 + 12);
            *(_QWORD *)(v50 + 20) = *(_QWORD *)(v51 + 20);
            *((_DWORD *)v50 + 7) = *((_DWORD *)v51 + 7);
            *((_OWORD *)v50 + 2) = *((_OWORD *)v51 + 2);
            *((_OWORD *)v50 + 3) = *((_OWORD *)v51 + 3);
            *((_OWORD *)v50 + 4) = *((_OWORD *)v51 + 4);
            *((_DWORD *)v50 + 20) = *((_DWORD *)v51 + 20);
            *((_DWORD *)v50 + 21) = *((_DWORD *)v51 + 21);
            *((_DWORD *)v50 + 22) = 0;
            *(_QWORD *)(v50 + 92) = 0LL;
            *((_DWORD *)v50 + 25) = *((_DWORD *)v51 + 22);
            *((_DWORD *)v50 + 26) = *((_DWORD *)v51 + 23);
            *((_DWORD *)v50 + 27) = *((_DWORD *)v51 + 24);
            *((_DWORD *)v50 + 28) = *((_DWORD *)v51 + 25);
            *((_DWORD *)v50 + 29) = *((_DWORD *)v51 + 26);
            *((_DWORD *)v50 + 30) = *((_DWORD *)v51 + 27);
          }
          v51 += 120;
          v50 += 128;
          --v49;
        }
        while ( v49 );
        v48 = (char *)a1 + 4352;
        goto LABEL_70;
      }
    }
    v48 = (char *)a1 + 4352;
    goto LABEL_70;
  }
  memset(v125, 0, 0x858uLL);
  v125[0] = a1;
  LODWORD(v125[1]) = v6;
  v72 = *((_QWORD *)v10 + 152);
  v73 = *(_QWORD *)(*(_DWORD *)(v72 + 4) * ((8 * *(_DWORD *)(v72 + 8) + 175) & 0xFFFFFFF8) + v72 + 48);
  *(_QWORD *)(*(_DWORD *)(v72 + 4) * ((8 * *(_DWORD *)(v72 + 8) + 175) & 0xFFFFFFF8) + v72 + 40) = *(_QWORD *)(*(_QWORD *)(v73 + 96) + 24LL);
  v74 = *(_QWORD *)(v73 + 96);
  *(_WORD *)(*(_DWORD *)(v72 + 4) * ((8 * *(_DWORD *)(v72 + 8) + 175) & 0xFFFFFFF8) + v72 + 32) = *(_WORD *)(v74 + 6);
  HIDWORD(v125[1]) = *(unsigned __int16 *)(*(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                                         * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                         + *((_QWORD *)v10 + 152)
                                         + 32LL);
  v125[2] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                      * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                      + *((_QWORD *)v10 + 152)
                      + 40LL);
  v125[3] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                      * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                      + *((_QWORD *)v10 + 152)
                      + 24LL);
  LODWORD(v125[70]) ^= (LOBYTE(v125[70]) ^ (unsigned __int8)(8 * *((_DWORD *)v10 + 294))) & 8;
  LODWORD(v125[70]) ^= (LOBYTE(v125[70]) ^ (unsigned __int8)(8 * *((_DWORD *)v10 + 294))) & 0x10;
  LODWORD(v125[70]) ^= (LOBYTE(v125[70]) ^ (unsigned __int8)(8 * *((_DWORD *)v10 + 294))) & 0x20;
  HIDWORD(v125[70]) = *((_DWORD *)v10 + 295);
  LODWORD(v125[70]) ^= (LOBYTE(v125[70]) ^ (unsigned __int8)(8 * *((_DWORD *)v10 + 294))) & 0x40;
  v75 = LOBYTE(v125[70]) ^ (4 * *((_DWORD *)v10 + 294));
  LODWORD(v125[265]) = -1073741823;
  v76 = v75 & 0x80 ^ LODWORD(v125[70]);
  LODWORD(v125[70]) = v76;
  v77 = (_DWORD *)*((_QWORD *)v10 + 150);
  if ( v77 )
  {
    LODWORD(v125[263]) = *v77;
    v125[264] = *((_QWORD *)v10 + 150) + 8LL;
  }
  v78 = *((_QWORD *)v10 + 151);
  if ( v78 )
  {
    v6 = *((_QWORD *)v10 + 150);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v78 + 16), &LockHandle);
    v79 = *(CRefCountedBuffer **)(v78 + 8);
    if ( v79 )
      CRefCountedBuffer::RefCountedBufferRelease(v79);
    *(_QWORD *)(v78 + 8) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 4));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v76 = v125[70];
    LOBYTE(v6) = v127;
  }
  v80 = 0;
  LODWORD(v125[4]) = *((_DWORD *)v10 + 283);
  if ( *((_DWORD *)v10 + 283) )
  {
    do
    {
      v73 = *((_QWORD *)v10 + 152);
      v81 = *(_DWORD *)(v73 + 4);
      v82 = v81 * ((8 * *(_DWORD *)(v73 + 8) + 175) & 0xFFFFFFF8);
      v74 = 6LL * v81 * v80;
      v125[v80 + 5] = *(_QWORD *)(v73 + v82 + 8 * v74 + 16);
      if ( v80 )
      {
        v83 = &v125[3 * v80 + 68];
        *v83 = *(_QWORD *)(*((_QWORD *)v10 + 152)
                         + *(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                         * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                         + 48LL * *(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL) * v80
                         + 24);
        VidSchiBindFlipPhysicalAddress(*((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)v10 + 152), 0, v80);
        *((_WORD *)v83 + 4) = *(_WORD *)(*((_QWORD *)v10 + 152)
                                       + *(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                                       * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                       + 48LL * *(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL) * v80
                                       + 32);
        v73 = *((_QWORD *)v10 + 152);
        v84 = *(_DWORD *)(v73 + 4);
        v74 = v84 * ((8 * *(_DWORD *)(v73 + 8) + 175) & 0xFFFFFFF8);
        v83[2] = *(_QWORD *)(v73 + v74 + 48LL * v84 * v80 + 40);
      }
      ++v80;
    }
    while ( v80 < *((_DWORD *)v10 + 283) );
    v76 = v125[70];
  }
  if ( v109 )
    v85 = v76 | 2;
  else
    v85 = v76 | 4;
  LODWORD(v125[70]) = v85;
  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqpxqqqq(
      v85,
      v74,
      v73,
      *((_QWORD *)a1 + 2),
      v6,
      *((_DWORD *)v10 + 276),
      v125[3],
      v125[2],
      SBYTE4(v125[1]),
      *((_DWORD *)v10 + 278),
      *((_DWORD *)v10 + 281),
      v85);
  v86 = *((unsigned int *)a1 + 8);
  v87 = *((_QWORD *)a1 + 3);
  v110[0] = 0;
  DpSynchronizeExecution(v87, VidSchiExecuteMmIoFlipAtISR, v125, v86, v110);
LABEL_99:
  if ( SLODWORD(v125[265]) < 0 )
  {
    if ( LODWORD(v125[265]) == -1073741811 )
    {
      if ( (*((_DWORD *)v10 + 294) & 0x10) != 0 || (v125[70] & 0x40) == 0 )
      {
        v106 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v106);
        return 3221225485LL;
      }
      else
      {
        v88 = WdLogNewEntry5_WdAssertion();
        v89 = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 152) + 4LL)
                        * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                        + *((_QWORD *)v10 + 152)
                        + 24LL);
        *(_QWORD *)(v88 + 32) = v117;
        *(_QWORD *)(v88 + 24) = v89;
        WdLogEvent5_WdAssertion(v88);
        return 3221225485LL;
      }
    }
    if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 2266LL) && LODWORD(v125[265]) == -1073741267 )
      *((_DWORD *)v10 + 277) = 13;
    return 259LL;
  }
LABEL_105:
  v91 = *((unsigned int *)v10 + 294);
  if ( (v91 & 0x20) != 0 )
  {
    v92 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v10 + 149);
    if ( v92 )
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)v10 + 148),
        v92,
        1,
        (*((_DWORD *)v10 + 294) & 0x40) != 0,
        0,
        0,
        *((_QWORD *)v10 + 151),
        *((_QWORD *)v10 + 150),
        0LL);
  }
  v11 = v116 == 11;
  *((_DWORD *)v10 + 277) = v116;
  if ( v11 )
  {
    *((_QWORD *)v10 + 146) = HIDWORD(v125[265]);
    *((_QWORD *)v10 + 144) = v125[266];
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v91, v8, v10 + 56);
    VidSchiReferenceDisplayingAllocationsForThisEntry(a1, v8, v10 + 56);
    v93 = v129;
    v94 = *((_QWORD *)v10 + 137);
    v95 = VidSchiCompleteFlipEntry((_DWORD)a1, v127, v128, v129, v129, 0, 0LL);
    v96 = v117;
    v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v94 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v94 + 32) + 4LL))
                    + 8 * v117
                    + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + v117 + 757) + 8LL), -v95);
    **((_DWORD **)a1 + v96 + 757) += v95;
    v12 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v97 + 8), -v95);
    *(_DWORD *)v97 += v95;
  }
  else
  {
    if ( (*((_DWORD *)v10 + 294) & 0x10) != 0 )
      v98 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
    else
      v98 = (1 << *((_DWORD *)a1 + 32)) - 1;
    v8[738] |= v98;
    v93 = v129;
  }
  v99 = v123;
  *((_QWORD *)v10 + 143) = MEMORY[0xFFFFF78000000320];
  v100 = 1232LL * *((unsigned int *)v99 + 11);
  *((_DWORD *)v99 + 12) = v93;
  v101 = *(_DWORD *)((char *)v99 + v100 + 1108);
  if ( v101 != 5 && v101 != 15 )
    *((_DWORD *)v99 + 11) = v93;
  *((_DWORD *)v99 + 10) = ((_BYTE)v93 + 1) & 0x3F;
  v102 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 536LL);
  if ( *(_QWORD *)(v102 + 7840) <= (unsigned __int64)qword_1C00402B0 )
  {
    v105 = *(_DWORD *)(v102 + 7848);
    if ( v105 )
      *(_DWORD *)(v102 + 7848) = v105 - 1;
  }
  else
  {
    *(_DWORD *)(v102 + 7848) += dword_1C00402BC;
    if ( *(_DWORD *)(v102 + 7848) > (unsigned int)dword_1C00402B8
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v102 + 7856) > (unsigned __int64)qword_1C00402C0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer, v99, v12) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v11 = bTracingEnabled == 0;
      *(_QWORD *)(v102 + 7856) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v102 + 7848) = 0;
      if ( !v11 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0q(v103, &EventPerformanceWarning);
        _InterlockedExchange64((volatile __int64 *)(v102 + 7840), 0LL);
        return 0LL;
      }
    }
  }
  _InterlockedExchange64((volatile __int64 *)(v102 + 7840), 0LL);
  return 0LL;
}
