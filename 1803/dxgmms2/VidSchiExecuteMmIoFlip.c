/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000D930
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0004130 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000D690 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C001161C (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0028540 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0031368 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E10 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0012384 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C001451C (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00271BC (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0027464 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     McTemplateK0pqqpxqqqq @ 0x1C0029538 (McTemplateK0pqqpxqqqq.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C00299F0 (McTemplateK0pqqxpxqqqddddddddddddqqtq.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5)
{
  _DWORD *v6; // r15
  __int64 v7; // rax
  struct VIDSCH_FLIP_QUEUE *v8; // r13
  _DWORD *v9; // rbx
  bool v10; // zf
  _DWORD *v11; // r14
  char v12; // al
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // r10
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // cl
  int v22; // ecx
  _DWORD *v23; // rax
  __int64 v24; // r15
  unsigned int v25; // r15d
  int v26; // edx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r12d
  unsigned int v35; // r15d
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rbx
  int v39; // ecx
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // r11
  __int64 v44; // r9
  unsigned int v45; // ecx
  unsigned int v46; // edx
  int v47; // r8d
  char v48; // cl
  unsigned int v49; // r15d
  unsigned int v50; // r8d
  unsigned int v51; // edx
  _DWORD *v52; // rax
  int v53; // eax
  unsigned int v54; // r14d
  char v55; // cl
  unsigned int v56; // r13d
  unsigned int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r8d
  char *v61; // rcx
  __int64 v62; // r9
  char *v63; // rdx
  int v64; // eax
  char *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdi
  _DWORD *v68; // r9
  int v69; // ecx
  unsigned int v70; // r8d
  int v71; // ecx
  char v72; // cl
  int v73; // eax
  unsigned int v74; // edx
  char v75; // cl
  int v76; // eax
  char *v77; // rcx
  __int64 v78; // r9
  char *v79; // rdx
  int v80; // eax
  unsigned int v81; // ecx
  int v82; // r10d
  _DWORD *v83; // r9
  char *v84; // rdx
  char *v85; // r8
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned __int8 (__fastcall *v89)(void *); // rdx
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // r8
  _DWORD *v94; // r13
  char v95; // r15
  int v96; // r9d
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdi
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  CRefCountedBuffer *v102; // rcx
  struct VIDSCH_FLIP_QUEUE *v103; // rax
  _QWORD *v104; // rdi
  int v105; // ecx
  __int64 v106; // rax
  __int64 v107; // r11
  __int64 v108; // rcx
  REGHANDLE EtwHandle; // rax
  unsigned int v110; // [rsp+E0h] [rbp-80h]
  unsigned int v111; // [rsp+E0h] [rbp-80h]
  char v112; // [rsp+E4h] [rbp-7Ch]
  char v113[3]; // [rsp+E5h] [rbp-7Bh] BYREF
  unsigned int v114; // [rsp+E8h] [rbp-78h]
  unsigned int v115; // [rsp+ECh] [rbp-74h]
  int v116; // [rsp+F0h] [rbp-70h] BYREF
  _DWORD *v117; // [rsp+F8h] [rbp-68h]
  _DWORD *v118; // [rsp+100h] [rbp-60h]
  unsigned int *v119; // [rsp+108h] [rbp-58h]
  struct VIDSCH_FLIP_QUEUE *v120; // [rsp+110h] [rbp-50h]
  _DWORD *v121; // [rsp+118h] [rbp-48h]
  __int64 v122; // [rsp+120h] [rbp-40h]
  int v123; // [rsp+128h] [rbp-38h]
  int v124; // [rsp+12Ch] [rbp-34h]
  int v125; // [rsp+130h] [rbp-30h]
  int v126; // [rsp+134h] [rbp-2Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-28h] BYREF
  _QWORD v128[276]; // [rsp+150h] [rbp-10h] BYREF
  _DWORD *v129; // [rsp+A00h] [rbp+8A0h] BYREF
  unsigned int v130; // [rsp+A08h] [rbp+8A8h]
  unsigned int v131; // [rsp+A10h] [rbp+8B0h]
  unsigned int v132; // [rsp+A18h] [rbp+8B8h]

  v132 = a4;
  v131 = a3;
  v130 = a2;
  v122 = a2;
  v6 = (_DWORD *)*((_QWORD *)a1 + a2 + 379);
  v7 = a3 + 3LL;
  v121 = v6;
  v8 = *(struct VIDSCH_FLIP_QUEUE **)&v6[2 * v7];
  v129 = &v6[2 * v7];
  v120 = v8;
  v9 = (_DWORD *)((char *)v8 + 1280 * a4);
  v10 = v6[1] == 3;
  v11 = v9 + 294;
  v117 = v9 + 294;
  if ( v10 || (*v11 & 0x100) != 0 )
  {
    v12 = 1;
    v117 = v9 + 294;
  }
  else
  {
    v12 = 0;
  }
  v112 = v12;
  v13 = 11;
  if ( !v12 )
    v13 = 5;
  v116 = v13;
  memset(v128, 0, 0x858uLL);
  if ( !*((_BYTE *)a1 + 136) )
    goto LABEL_7;
  v46 = *(_DWORD *)(*(_QWORD *)v129 + 48LL);
  v47 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v129 + 44LL) - 1) & 0x3F;
  if ( v46 != v47 )
  {
    while ( *(_DWORD *)(1280LL * v46 + *(_QWORD *)v129 + 1108) != 14 )
    {
      v46 = ((_BYTE)v46 - 1) & 0x3F;
      if ( v46 == v47 )
        goto LABEL_54;
    }
    return 259LL;
  }
LABEL_54:
  if ( (v9[294] & 0x10) != 0 )
    v14 = ((unsigned __int16)**((_DWORD **)v9 + 152) | (unsigned __int16)(**((_DWORD **)v9 + 152) >> 10)) & 0x3FF;
  else
    v14 = (unsigned int)((1 << *((_DWORD *)a1 + 33)) - 1);
  if ( ((unsigned int)v14 & v6[579]) != 0 )
    return 259LL;
  if ( *((_DWORD *)a1 + 35) <= 1u || v6[1] == 3 || (v9[294] & 0x180) != 0x80 )
  {
LABEL_7:
    if ( (*v11 & 0x10) != 0 )
      v14 = ((unsigned __int16)**((_DWORD **)v9 + 152) | (unsigned __int16)(**((_DWORD **)v9 + 152) >> 10)) & 0x3FF;
    else
      v14 = (unsigned int)((1 << *((_DWORD *)a1 + 33)) - 1);
    if ( ((unsigned int)v14 & v6[578]) != 0 )
      return 259LL;
  }
  if ( !*((_DWORD *)a1 + 715) )
  {
    v15 = *((_QWORD *)v9 + 137);
    if ( !*(_BYTE *)(v15 + 188) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v15 + 184), 0, 0) )
      {
        if ( *((_BYTE *)a1 + 136) )
        {
          VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
            a1,
            v130,
            v131,
            (struct _VIDSCH_CALL_EXECUTE_FLIP *)v128,
            (enum _VIDSCH_FLIP_STATUS *)&v116,
            v8,
            v132);
LABEL_30:
          if ( SLODWORD(v128[265]) >= 0 )
          {
LABEL_31:
            v13 = v116;
            goto LABEL_32;
          }
          if ( LODWORD(v128[265]) == -1073741811 )
          {
            if ( (*v11 & 0x10) != 0 || (v128[70] & 0x40) == 0 )
            {
              v106 = WdLogNewEntry5_WdAssertion(LODWORD(v128[265]), v14);
            }
            else
            {
              v106 = WdLogNewEntry5_WdAssertion(LODWORD(v128[265]), v14);
              v107 = v122;
              *(_QWORD *)(v106 + 24) = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                                                 * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                                 + *((_QWORD *)v9 + 152)
                                                 + 24LL);
              *(_QWORD *)(v106 + 32) = v107;
            }
            WdLogEvent5_WdAssertion(v106);
            return 3221225485LL;
          }
          if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 2410LL) && LODWORD(v128[265]) == -1073741267 )
            v9[277] = 13;
          return 259LL;
        }
        if ( (*v11 & 0x10) == 0 )
        {
          memset(v128, 0, 0x858uLL);
          v16 = v130;
          LODWORD(v128[1]) = v130;
          v128[0] = a1;
          v17 = *((_QWORD *)v9 + 152);
          v18 = *(_QWORD *)(*(_DWORD *)(v17 + 4) * ((8 * *(_DWORD *)(v17 + 8) + 175) & 0xFFFFFFF8) + v17 + 48);
          *(_QWORD *)(*(_DWORD *)(v17 + 4) * ((8 * *(_DWORD *)(v17 + 8) + 175) & 0xFFFFFFF8) + v17 + 40) = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 24LL);
          v19 = *(_QWORD *)(v18 + 96);
          *(_WORD *)(*(_DWORD *)(v17 + 4) * ((8 * *(_DWORD *)(v17 + 8) + 175) & 0xFFFFFFF8) + v17 + 32) = *(_WORD *)(v19 + 6);
          v20 = *(unsigned int *)(*(_QWORD *)(v18 + 96) + 12LL);
          if ( !(_DWORD)v20 )
          {
            v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v18);
            v101[3] = 281LL;
            v101[4] = 0x4000LL;
            v101[5] = 0LL;
            v101[6] = 0LL;
            v101[7] = 0LL;
            WdLogEvent5_WdCriticalError(v101);
            JUMPOUT(0x1C001F8EALL);
          }
          HIDWORD(v128[1]) = *(unsigned __int16 *)(*(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                                                 * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                                 + *((_QWORD *)v9 + 152)
                                                 + 32LL);
          v128[2] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                              * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                              + *((_QWORD *)v9 + 152)
                              + 40LL);
          v128[3] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                              * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                              + *((_QWORD *)v9 + 152)
                              + 24LL);
          LODWORD(v128[70]) ^= (LOBYTE(v128[70]) ^ (unsigned __int8)(8 * *v11)) & 8;
          LODWORD(v128[70]) ^= (LOBYTE(v128[70]) ^ (unsigned __int8)(8 * *v11)) & 0x10;
          LODWORD(v128[70]) ^= (LOBYTE(v128[70]) ^ (unsigned __int8)(8 * *v11)) & 0x20;
          HIDWORD(v128[70]) = v9[295];
          LODWORD(v128[70]) ^= (LOBYTE(v128[70]) ^ (unsigned __int8)(8 * *v11)) & 0x40;
          v21 = LOBYTE(v128[70]) ^ (4 * *v11);
          LODWORD(v128[265]) = -1073741823;
          v22 = LODWORD(v128[70]) ^ v21 & 0x80;
          LODWORD(v128[70]) = v22;
          v23 = (_DWORD *)*((_QWORD *)v9 + 150);
          if ( v23 )
          {
            LODWORD(v128[263]) = *v23;
            v128[264] = *((_QWORD *)v9 + 150) + 8LL;
          }
          v24 = *((_QWORD *)v9 + 151);
          if ( v24 )
          {
            v120 = (struct VIDSCH_FLIP_QUEUE *)*((_QWORD *)v9 + 150);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v24 + 16), &LockHandle);
            v102 = *(CRefCountedBuffer **)(v24 + 8);
            if ( v102 )
              CRefCountedBuffer::RefCountedBufferRelease(v102);
            v103 = v120;
            *(_QWORD *)(v24 + 8) = v120;
            _InterlockedIncrement((volatile signed __int32 *)v103 + 1);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v22 = v128[70];
            v16 = v130;
          }
          v25 = 0;
          LODWORD(v128[4]) = v9[283];
          if ( v9[283] )
          {
            do
            {
              v18 = *((_QWORD *)v9 + 152);
              v26 = *(_DWORD *)(v18 + 4);
              v27 = v26 * ((8 * *(_DWORD *)(v18 + 8) + 175) & 0xFFFFFFF8);
              v19 = 6LL * v26 * v25;
              v128[v25 + 5] = *(_QWORD *)(v18 + v27 + 8 * v19 + 16);
              if ( v25 )
              {
                v104 = &v128[3 * v25 + 68];
                *v104 = *(_QWORD *)(*((_QWORD *)v9 + 152)
                                  + *(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                                  * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                  + 48LL * *(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL) * v25
                                  + 24);
                VidSchiBindFlipPhysicalAddress(*((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)v9 + 152), 0, v25);
                *((_WORD *)v104 + 4) = *(_WORD *)(*((_QWORD *)v9 + 152)
                                                + *(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                                                * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                                + 48LL * *(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL) * v25
                                                + 32);
                v18 = *((_QWORD *)v9 + 152);
                v105 = *(_DWORD *)(v18 + 4);
                v19 = v105 * ((8 * *(_DWORD *)(v18 + 8) + 175) & 0xFFFFFFF8);
                v104[2] = *(_QWORD *)(v18 + v19 + 48LL * v105 * v25 + 40);
              }
              ++v25;
            }
            while ( v25 < v9[283] );
            v22 = v128[70];
            v16 = v130;
          }
          if ( v112 )
            v28 = v22 | 2;
          else
            v28 = v22 | 4;
          LODWORD(v128[70]) = v28;
          if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqqpxqqqq(
              v28,
              v19,
              v18,
              *((_QWORD *)a1 + 2),
              v16,
              v9[276],
              v128[3],
              v128[2],
              SBYTE4(v128[1]),
              v9[278],
              v9[281],
              v28);
          v29 = *((unsigned int *)a1 + 8);
          v30 = *((_QWORD *)a1 + 3);
          v113[0] = 0;
          DpSynchronizeExecution(v30, VidSchiExecuteMmIoFlipAtISR, v128, v29, v113);
          v6 = v121;
          goto LABEL_30;
        }
        memset(v128, 0, 0x858uLL);
        v52 = (_DWORD *)*((_QWORD *)v9 + 152);
        v48 = -1;
        v49 = 0;
        v110 = 0;
        v50 = *v52 & 0x3FF;
        v51 = (*v52 >> 10) & 0x3FF;
        v114 = v50;
        v10 = !_BitScanForward((unsigned int *)&v52, v50);
        v115 = v51;
        v123 = (int)v52;
        if ( !v10 )
          v48 = (char)v52;
        v10 = !_BitScanForward((unsigned int *)&v53, v51);
        v54 = v48;
        v55 = -1;
        v124 = v53;
        if ( !v10 )
          v55 = v53;
        v56 = v55;
        while ( v50 || v51 )
        {
          v118 = (_DWORD *)((char *)a1 + 120 * v49);
          v119 = v118 + 836;
          memset(v118 + 836, 0, 0x78uLL);
          if ( v54 >= v56 )
          {
            v74 = v115;
            v50 = v114;
            *v119 = v56;
            v118[837] = 0;
            v75 = -1;
            v51 = ~(1 << v56) & v74;
            v10 = !_BitScanForward((unsigned int *)&v76, v51);
            v115 = v51;
            v126 = v76;
            if ( !v10 )
              v75 = v76;
            v56 = v75;
          }
          else
          {
            *v119 = v54;
            v118[837] = 1;
            v66 = *((_QWORD *)v9 + 152);
            v67 = v66 + v110 * ((8 * *(_DWORD *)(v66 + 8) + 175) & 0xFFFFFFF8) + 144LL;
            VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v66, v110, 0);
            v68 = v118;
            v118[838] = *(unsigned __int16 *)(*((_QWORD *)v9 + 152)
                                            + *(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                                            * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                            + 48LL * v110
                                            + 32);
            *((_QWORD *)a1 + 15 * v49 + 420) = *(_QWORD *)(*((_QWORD *)v9 + 152)
                                                         + *(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                                                         * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                                         + 48LL * v110
                                                         + 40);
            v69 = v68[844];
            *((_QWORD *)v68 + 421) = *(_QWORD *)(*((_QWORD *)v9 + 152)
                                               + *(_DWORD *)(*((_QWORD *)v9 + 152) + 4LL)
                                               * ((8 * *(_DWORD *)(*((_QWORD *)v9 + 152) + 8LL) + 175) & 0xFFFFFFF8)
                                               + 48LL * v110
                                               + 24);
            v68[844] ^= (*(_DWORD *)(v67 + 28) ^ v69) & 1;
            v68[844] ^= ((unsigned __int8)v68[844] ^ (unsigned __int8)*(_DWORD *)(v67 + 28)) & 2;
            v68[845] = (unsigned __int16)*(_DWORD *)v67;
            v68[846] = (unsigned __int16)*(_DWORD *)(v67 + 4);
            v68[847] = *(unsigned __int16 *)(v67 + 2);
            v68[848] = *(unsigned __int16 *)(v67 + 6);
            v68[849] = *(__int16 *)(v67 + 8);
            v68[850] = *(__int16 *)(v67 + 12);
            v68[851] = *(unsigned __int16 *)(v67 + 10);
            v68[852] = *(unsigned __int16 *)(v67 + 14);
            v68[853] = (unsigned __int16)*(_DWORD *)(v67 + 16);
            v68[854] = (unsigned __int16)*(_DWORD *)(v67 + 20);
            v68[855] = *(unsigned __int16 *)(v67 + 18);
            v68[856] = *(unsigned __int16 *)(v67 + 22);
            v70 = v114;
            v51 = v115;
            v68[857] = ((*(_DWORD *)(v67 + 28) >> 3) & 3) + 1;
            ++v110;
            v68[858] ^= (v68[858] ^ (*(_DWORD *)(v67 + 28) >> 2)) & 1;
            v68[859] = (*(_DWORD *)(v67 + 28) >> 5) & 3;
            v68[860] ^= (v68[860] ^ (*(_DWORD *)(v67 + 28) >> 7)) & 1;
            v71 = v68[860] ^ ((unsigned __int8)v68[860] ^ (unsigned __int8)(*(_DWORD *)(v67 + 28) >> 7)) & 2;
            v68[860] = v71;
            v68[860] = v71 ^ ((unsigned __int8)v71 ^ (unsigned __int8)(*(_DWORD *)(v67 + 28) >> 7)) & 4;
            v68[861] = (*(_DWORD *)(v67 + 28) >> 10) & 7;
            v68[862] = (*(_DWORD *)(v67 + 28) >> 13) & 1;
            v68[863] = (*(_DWORD *)(v67 + 28) >> 14) & 1;
            v68[864] = (*(_DWORD *)(v67 + 28) >> 15) & 3;
            v72 = -1;
            v50 = ~(1 << v54) & v70;
            v10 = !_BitScanForward((unsigned int *)&v73, v50);
            v114 = v50;
            v125 = v73;
            if ( !v10 )
              v72 = v73;
            v54 = v72;
          }
          ++v49;
        }
        v11 = v117;
        v57 = 0;
        v8 = v120;
        HIDWORD(v128[67]) = v130;
        v128[0] = a1;
        LODWORD(v128[67]) |= 4u;
        v111 = v49;
        v6 = v121;
        LODWORD(v128[67]) ^= (LOBYTE(v128[67]) ^ (unsigned __int8)(8 * *v117)) & 8;
        LODWORD(v128[67]) ^= (LOBYTE(v128[67]) ^ (unsigned __int8)(8 * *v117)) & 0x10;
        LODWORD(v128[67]) ^= (LOBYTE(v128[67]) ^ (unsigned __int8)(8 * *v117)) & 0x20;
        LODWORD(v128[70]) = v9[295];
        LODWORD(v128[265]) = -1073741823;
        LODWORD(v128[1]) = v9[283];
        if ( v9[283] )
        {
          do
          {
            v58 = v57++;
            v128[v58 + 2] = *(_QWORD *)(*(_QWORD *)&v9[2 * v58 + 14] + 64LL);
          }
          while ( v57 < v9[283] );
        }
        v59 = *((_QWORD *)a1 + 2);
        LOBYTE(v129) = 0;
        if ( *(_BYTE *)(v59 + 2374) )
        {
          memset((char *)a1 + 4544, 0, 112LL * v111);
          v60 = v111;
          if ( v111 )
          {
            v61 = (char *)a1 + 4548;
            v62 = v111;
            v63 = (char *)a1 + 3348;
            do
            {
              *((_DWORD *)v61 - 1) = *((_DWORD *)v63 - 1);
              v64 = *(_DWORD *)v63;
              *(_DWORD *)v61 = *(_DWORD *)v63;
              if ( v64 )
              {
                *((_DWORD *)v61 + 1) = *((_DWORD *)v63 + 1);
                *(_QWORD *)(v61 + 12) = *(_QWORD *)(v63 + 12);
                *(_QWORD *)(v61 + 20) = *(_QWORD *)(v63 + 20);
                *((_DWORD *)v61 + 7) = *((_DWORD *)v63 + 7);
                *((_OWORD *)v61 + 2) = *((_OWORD *)v63 + 2);
                *((_OWORD *)v61 + 3) = *((_OWORD *)v63 + 3);
                *((_DWORD *)v61 + 16) = *((_DWORD *)v63 + 20);
                *((_DWORD *)v61 + 17) = *((_DWORD *)v63 + 21);
                *((_DWORD *)v61 + 18) = 0;
                *(_QWORD *)(v61 + 76) = 0LL;
                *((_DWORD *)v61 + 21) = *((_DWORD *)v63 + 22);
                *((_DWORD *)v61 + 22) = *((_DWORD *)v63 + 23);
                *((_DWORD *)v61 + 23) = *((_DWORD *)v63 + 24);
                *((_DWORD *)v61 + 24) = *((_DWORD *)v63 + 25);
                *((_DWORD *)v61 + 25) = *((_DWORD *)v63 + 26);
                *((_DWORD *)v61 + 26) = *((_DWORD *)v63 + 27);
              }
              v63 += 120;
              v61 += 112;
              --v62;
            }
            while ( v62 );
          }
        }
        else
        {
          if ( !*(_BYTE *)(v59 + 2375) )
          {
            if ( *(_BYTE *)(v59 + 2376) && *(_QWORD *)(v59 + 872) )
            {
              v117 = (_DWORD *)v111;
              memset((char *)a1 + 4544, 0, (unsigned __int64)v111 << 7);
              v81 = v111;
              v82 = 0;
              if ( v111 )
              {
                v83 = v117;
                v84 = (char *)a1 + 4548;
                v85 = (char *)a1 + 3348;
                do
                {
                  *((_DWORD *)v84 - 1) = *((_DWORD *)v85 - 1);
                  v86 = *(_DWORD *)v85;
                  *(_DWORD *)v84 = *(_DWORD *)v85;
                  if ( v86 )
                  {
                    *((_DWORD *)v84 + 1) = *((_DWORD *)v85 + 1);
                    *(_QWORD *)(v84 + 12) = *(_QWORD *)(v85 + 12);
                    *(_QWORD *)(v84 + 20) = *(_QWORD *)(v85 + 20);
                    *((_DWORD *)v84 + 7) = *((_DWORD *)v85 + 7);
                    *((_OWORD *)v84 + 2) = *((_OWORD *)v85 + 2);
                    *((_OWORD *)v84 + 3) = *((_OWORD *)v85 + 3);
                    *((_OWORD *)v84 + 4) = *((_OWORD *)v85 + 4);
                    *((_DWORD *)v84 + 20) = *((_DWORD *)v85 + 20);
                    *((_DWORD *)v84 + 21) = *((_DWORD *)v85 + 21);
                    *((_DWORD *)v84 + 22) = *((_DWORD *)v85 + 22);
                    *((_DWORD *)v84 + 24) = *((_DWORD *)v85 + 24);
                    *((_DWORD *)v84 + 25) = *((_DWORD *)v85 + 25);
                    *((_DWORD *)v84 + 26) = *((_DWORD *)v85 + 26);
                    *((_DWORD *)v84 + 27) = *((_DWORD *)v85 + 27);
                    *((_DWORD *)v84 + 28) = *((_DWORD *)v85 + 28);
                    *((_DWORD *)v84 + 29) = 0;
                    v87 = *((_QWORD *)v9 + 152);
                    v88 = v82 * ((8 * *(_DWORD *)(v87 + 8) + 175) & 0xFFFFFFF8);
                    ++v82;
                    *((_DWORD *)v84 + 23) = *(_DWORD *)(v88 + v87 + 168);
                  }
                  v85 += 120;
                  v84 += 128;
                  v83 = (_DWORD *)((char *)v83 - 1);
                }
                while ( v83 );
                v81 = v111;
              }
              LODWORD(v128[68]) = v81;
              v65 = (char *)a1 + 4544;
              v89 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
              goto LABEL_106;
            }
            LODWORD(v128[68]) = v111;
            v65 = (char *)a1 + 3344;
LABEL_105:
            v89 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_106:
            v90 = *((unsigned int *)a1 + 8);
            v91 = *((_QWORD *)a1 + 3);
            v128[69] = v65;
            DpSynchronizeExecution(v91, v89, v128, v90, &v129);
            if ( bTracingEnabled )
            {
              v92 = v111;
              v14 = 0LL;
              v114 = 0;
              if ( v111 )
              {
                v94 = (_DWORD *)((char *)a1 + 3416);
                v95 = v130;
                LODWORD(v117) = v131;
                v119 = (unsigned int *)v111;
                do
                {
                  v93 = (unsigned int)*(v94 - 17);
                  LOBYTE(v96) = 0;
                  v92 = 0LL;
                  if ( (_DWORD)v93 )
                  {
                    v97 = *((_QWORD *)v9 + 152);
                    v98 = (unsigned int)v14 * ((8 * *(_DWORD *)(v97 + 8) + 175) & 0xFFFFFFF8);
                    v14 = (unsigned int)(v14 + 1);
                    v114 = v14;
                    v96 = *(_DWORD *)(v98 + v97 + 168);
                    v92 = *(unsigned int *)(v98 + v97 + 176);
                  }
                  HIDWORD(v117) = v9[276];
                  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    McTemplateK0pqqxpxqqqddddddddddddqqtq(
                      v92,
                      v14,
                      v93,
                      *((_QWORD *)a1 + 2),
                      v95,
                      *(v94 - 18),
                      (char)v117,
                      *((_QWORD *)v94 - 6),
                      *((_QWORD *)v94 - 7),
                      *(v94 - 16),
                      v9[278],
                      v9[281],
                      *(v94 - 9),
                      *(v94 - 7),
                      *(v94 - 8),
                      *(v94 - 6),
                      *(v94 - 5),
                      *(v94 - 3),
                      *(v94 - 4),
                      *(v94 - 2),
                      *(v94 - 1),
                      v94[1],
                      *v94,
                      v94[2],
                      v96,
                      5,
                      v93,
                      v92);
                    v14 = v114;
                  }
                  v94 += 30;
                  v119 = (unsigned int *)((char *)v119 - 1);
                }
                while ( v119 );
                v8 = v120;
                v6 = v121;
              }
            }
            v99 = SLODWORD(v128[265]);
            if ( LODWORD(v128[265]) )
            {
              v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v14, v93);
              v100[6] = v128;
              v100[3] = 281LL;
              v100[4] = 11LL;
              v100[5] = v99;
              v100[7] = *((_QWORD *)a1 + 2);
              WdLogEvent5_WdCriticalError(v100);
              JUMPOUT(0x1C001F8BELL);
            }
            goto LABEL_31;
          }
          memset((char *)a1 + 4544, 0, (unsigned __int64)v111 << 7);
          v60 = v111;
          if ( v111 )
          {
            v77 = (char *)a1 + 4548;
            v78 = v111;
            v79 = (char *)a1 + 3348;
            do
            {
              *((_DWORD *)v77 - 1) = *((_DWORD *)v79 - 1);
              v80 = *(_DWORD *)v79;
              *(_DWORD *)v77 = *(_DWORD *)v79;
              if ( v80 )
              {
                *((_DWORD *)v77 + 1) = *((_DWORD *)v79 + 1);
                *(_QWORD *)(v77 + 12) = *(_QWORD *)(v79 + 12);
                *(_QWORD *)(v77 + 20) = *(_QWORD *)(v79 + 20);
                *((_DWORD *)v77 + 7) = *((_DWORD *)v79 + 7);
                *((_OWORD *)v77 + 2) = *((_OWORD *)v79 + 2);
                *((_OWORD *)v77 + 3) = *((_OWORD *)v79 + 3);
                *((_OWORD *)v77 + 4) = *((_OWORD *)v79 + 4);
                *((_DWORD *)v77 + 20) = *((_DWORD *)v79 + 20);
                *((_DWORD *)v77 + 21) = *((_DWORD *)v79 + 21);
                *((_DWORD *)v77 + 22) = 0;
                *(_QWORD *)(v77 + 92) = 0LL;
                *((_DWORD *)v77 + 25) = *((_DWORD *)v79 + 22);
                *((_DWORD *)v77 + 26) = *((_DWORD *)v79 + 23);
                *((_DWORD *)v77 + 27) = *((_DWORD *)v79 + 24);
                *((_DWORD *)v77 + 28) = *((_DWORD *)v79 + 25);
                *((_DWORD *)v77 + 29) = *((_DWORD *)v79 + 26);
                *((_DWORD *)v77 + 30) = *((_DWORD *)v79 + 27);
              }
              v79 += 120;
              v77 += 128;
              --v78;
            }
            while ( v78 );
            LODWORD(v128[68]) = v111;
            v65 = (char *)a1 + 4544;
            goto LABEL_105;
          }
        }
        LODWORD(v128[68]) = v60;
        v65 = (char *)a1 + 4544;
        goto LABEL_105;
      }
      v13 = v116;
    }
  }
  *a5 = 1;
LABEL_32:
  v31 = (unsigned int)*v11;
  v32 = 0LL;
  if ( (v31 & 0x20) != 0 )
  {
    v14 = *((_QWORD *)v9 + 149);
    if ( v14 )
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)v9 + 148),
        (struct _D3DKMT_PRESENTHISTORYTOKEN *)v14,
        1,
        (*v11 & 0x40) != 0,
        0,
        0,
        *((_QWORD *)v9 + 151),
        *((_QWORD *)v9 + 150),
        0LL);
  }
  v33 = *v11 & 0x10;
  v9[277] = v13;
  if ( v13 == 11 )
  {
    *((_QWORD *)v9 + 146) = HIDWORD(v128[265]);
    *((_QWORD *)v9 + 144) = v128[266];
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v32, v6, v9 + 14);
    VidSchiReferenceDisplayingAllocationsForThisEntry(a1, v6, v9 + 14);
    v35 = v132;
    v41 = *((_QWORD *)v9 + 137);
    v42 = VidSchiCompleteFlipEntry((_DWORD)a1, v130, v131, v132, v132, 0, 0LL);
    v43 = v122;
    v14 = *((_QWORD *)a1 + v122 + 781);
    v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v41 + 32) + 4LL))
                    + 8 * v122
                    + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), -v42);
    **((_DWORD **)a1 + v43 + 781) += v42;
    v31 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 8), -v42);
    *(_DWORD *)v44 += v42;
  }
  else
  {
    if ( v33 )
      v34 = ((unsigned __int16)**((_DWORD **)v9 + 152) | (unsigned __int16)(**((_DWORD **)v9 + 152) >> 10)) & 0x3FF;
    else
      v34 = (1 << *((_DWORD *)a1 + 33)) - 1;
    v6[578] |= v34;
    v35 = v132;
  }
  *((_QWORD *)v9 + 143) = MEMORY[0xFFFFF78000000320];
  v36 = *((unsigned int *)v8 + 11);
  *((_DWORD *)v8 + 12) = v35;
  v37 = *((_DWORD *)v8 + 320 * v36 + 277);
  if ( v37 != 5 && v37 != 15 )
    *((_DWORD *)v8 + 11) = v35;
  *((_DWORD *)v8 + 10) = ((_BYTE)v35 + 1) & 0x3F;
  v38 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 552LL);
  v39 = *(_DWORD *)(v38 + 8424);
  if ( *(_QWORD *)(v38 + 8416) > (unsigned __int64)qword_1C00472B0 )
  {
    v45 = dword_1C00472BC + v39;
    *(_DWORD *)(v38 + 8424) = v45;
    if ( v45 > dword_1C00472B8
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v38 + 8432) > (unsigned __int64)qword_1C00472C0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer, v14, v31) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v10 = bTracingEnabled == 0;
      *(_QWORD *)(v38 + 8432) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v38 + 8424) = 0;
      if ( !v10 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v108, &EventPerformanceWarning);
    }
  }
  else if ( v39 )
  {
    *(_DWORD *)(v38 + 8424) = v39 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)(v38 + 8416), 0LL);
  return 0LL;
}
