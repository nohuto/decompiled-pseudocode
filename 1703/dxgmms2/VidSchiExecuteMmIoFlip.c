/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000C430
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C000C020 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F360 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000FCE8 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 * Callees:
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0002E00 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001236C (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0012F58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00132FC (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C00224E8 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     Template_pqqpxqqqq @ 0x1C00248AC (Template_pqqpxqqqq.c)
 *     Template_pqqxpxqqqddddddddddddqqt @ 0x1C0024D18 (Template_pqqxpxqqqddddddddddddqqt.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5)
{
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r14
  struct VIDSCH_FLIP_QUEUE *v9; // r15
  _DWORD *v10; // rbx
  int v11; // edx
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // edx
  char v16; // al
  int v17; // ecx
  _DWORD *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r10d
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // zf
  int v29; // edi
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rbx
  int v33; // eax
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // r11
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r11
  _QWORD *v41; // r9
  struct _D3DKMT_PRESENTHISTORYTOKEN *v42; // rdx
  char *v43; // rax
  unsigned __int8 (__fastcall *v44)(void *); // rdx
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  _DWORD *v51; // r12
  char v52; // r13
  unsigned int v53; // edi
  char v54; // r10
  char v55; // r11
  char *v56; // r10
  __int64 v57; // rcx
  __int64 v58; // r9
  unsigned int v59; // r8d
  unsigned int v60; // edx
  char v61; // cl
  unsigned int v62; // r8d
  int v63; // eax
  unsigned int v64; // r13d
  unsigned int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r8d
  char *v69; // rcx
  __int64 v70; // r9
  char *v71; // rdx
  int v72; // eax
  unsigned int v73; // edx
  char v74; // cl
  int v75; // eax
  char *v76; // rcx
  __int64 v77; // r9
  char *v78; // rdx
  int v79; // eax
  unsigned int v80; // r10d
  char *v81; // rdx
  char *v82; // r8
  __int64 v83; // rcx
  int v84; // r11d
  int v85; // eax
  unsigned int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // r9
  unsigned int v89; // edx
  int v90; // r8d
  int *v91; // rcx
  char v92; // cl
  int v93; // eax
  char v94; // cl
  int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // rax
  CRefCountedBuffer *v98; // rcx
  struct VIDSCH_FLIP_QUEUE *v99; // rcx
  __int64 v100; // rcx
  REGHANDLE EtwHandle; // rax
  unsigned int v102; // [rsp+E0h] [rbp-80h]
  unsigned int v103; // [rsp+E0h] [rbp-80h]
  char v104; // [rsp+E4h] [rbp-7Ch]
  char v105[3]; // [rsp+E5h] [rbp-7Bh] BYREF
  unsigned int v106; // [rsp+E8h] [rbp-78h]
  unsigned int v107; // [rsp+ECh] [rbp-74h]
  unsigned int v108; // [rsp+F0h] [rbp-70h]
  int v109; // [rsp+F4h] [rbp-6Ch] BYREF
  unsigned int v110; // [rsp+F8h] [rbp-68h]
  char *v111; // [rsp+100h] [rbp-60h]
  __int64 v112; // [rsp+108h] [rbp-58h]
  struct VIDSCH_FLIP_QUEUE *v113; // [rsp+110h] [rbp-50h]
  unsigned int *v114; // [rsp+118h] [rbp-48h]
  __int64 v115; // [rsp+120h] [rbp-40h]
  int v116; // [rsp+128h] [rbp-38h]
  int v117; // [rsp+12Ch] [rbp-34h]
  int v118; // [rsp+130h] [rbp-30h]
  int v119; // [rsp+134h] [rbp-2Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-28h] BYREF
  _QWORD v121[276]; // [rsp+150h] [rbp-10h] BYREF
  char v122; // [rsp+A00h] [rbp+8A0h] BYREF
  unsigned int v123; // [rsp+A08h] [rbp+8A8h]
  unsigned int v124; // [rsp+A10h] [rbp+8B0h]
  signed int v125; // [rsp+A18h] [rbp+8B8h]

  v125 = a4;
  v124 = a3;
  v123 = a2;
  v6 = a4;
  v7 = *((_QWORD *)a1 + a2 + 374);
  v115 = a2;
  v112 = v7;
  v8 = 8LL * a3;
  v9 = *(struct VIDSCH_FLIP_QUEUE **)(v8 + v7 + 24);
  v10 = (_DWORD *)((char *)v9 + 1224 * a4);
  v113 = v9;
  if ( *(_DWORD *)(v7 + 4) == 3 || (v10[292] & 0x100) != 0 )
  {
    v104 = 1;
    v109 = 11;
  }
  else
  {
    v104 = 0;
    v109 = 5;
  }
  memset(v121, 0, 0x858uLL);
  if ( !*((_BYTE *)a1 + 132) )
    goto LABEL_7;
  v88 = *(_QWORD *)(v8 + v7 + 24);
  v89 = *(_DWORD *)(v88 + 48);
  v90 = ((unsigned __int8)*(_DWORD *)(v88 + 44) - 1) & 0x3F;
  if ( v89 != v90 )
  {
    while ( *(_DWORD *)(1224LL * v89 + v88 + 1100) != 14 )
    {
      v89 = ((_BYTE)v89 - 1) & 0x3F;
      if ( v89 == v90 )
        goto LABEL_109;
    }
    return 259LL;
  }
LABEL_109:
  if ( *((_DWORD *)a1 + 34) <= 1u || *(_DWORD *)(v7 + 4) == 3 || (v10[292] & 0x180) != 0x80 )
  {
LABEL_7:
    v11 = (v10[292] & 0x10) != 0
        ? (unsigned __int8)**((_DWORD **)v10 + 151) | *(unsigned __int8 *)(*((_QWORD *)v10 + 151) + 1LL)
        : (1 << *((_DWORD *)a1 + 32)) - 1;
    if ( (v11 & *(_DWORD *)(v7 + 2316)) != 0 )
      return 259LL;
  }
  if ( !*((_DWORD *)a1 + 705) )
  {
    v12 = 0;
    if ( v10[282] )
    {
      do
      {
        v13 = *(_QWORD *)(*(_QWORD *)&v10[2 * v12 + 14] + 104LL);
        if ( *(_BYTE *)(v13 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 160), 0, 0) )
          goto LABEL_49;
      }
      while ( (unsigned int)++v12 < v10[282] );
    }
    if ( *((_BYTE *)a1 + 132) )
    {
      VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        a1,
        v123,
        v124,
        (struct _VIDSCH_CALL_EXECUTE_FLIP *)v121,
        (enum _VIDSCH_FLIP_STATUS *)&v109,
        v9,
        v6);
LABEL_27:
      if ( SLODWORD(v121[265]) >= 0 )
        goto LABEL_28;
      if ( LODWORD(v121[265]) == -1073741811 )
      {
        if ( (v10[292] & 0x10) != 0 || (v121[70] & 0x40) == 0 )
        {
          v39 = WdLogNewEntry5_WdAssertion(LODWORD(v121[265]), v26);
        }
        else
        {
          v39 = WdLogNewEntry5_WdAssertion(LODWORD(v121[265]), v26);
          v40 = v115;
          *(_QWORD *)(v39 + 24) = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                            * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                            + *((_QWORD *)v10 + 151)
                                            + 24LL);
          *(_QWORD *)(v39 + 32) = v40;
        }
        WdLogEvent5_WdAssertion(v39);
        return 3221225485LL;
      }
      if ( LODWORD(v121[265]) == -1073741267 && *(_BYTE *)(*((_QWORD *)a1 + 2) + 2242LL) )
        v10[275] = 13;
      return 259LL;
    }
    if ( (v10[292] & 0x10) == 0 )
    {
      memset(v121, 0, 0x858uLL);
      v15 = v123;
      LODWORD(v121[1]) = v123;
      v121[0] = a1;
      HIDWORD(v121[1]) = *(unsigned __int16 *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                             * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                             + *((_QWORD *)v10 + 151)
                                             + 32LL);
      v121[2] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                          * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                          + *((_QWORD *)v10 + 151)
                          + 40LL);
      v121[3] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                          * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                          + *((_QWORD *)v10 + 151)
                          + 24LL);
      LODWORD(v121[70]) ^= (LOBYTE(v121[70]) ^ (unsigned __int8)(8 * v10[292])) & 8;
      LODWORD(v121[70]) ^= (LOBYTE(v121[70]) ^ (unsigned __int8)(8 * v10[292])) & 0x10;
      LODWORD(v121[70]) ^= (LOBYTE(v121[70]) ^ (unsigned __int8)(8 * v10[292])) & 0x20;
      HIDWORD(v121[70]) = v10[293];
      LODWORD(v121[70]) ^= (LOBYTE(v121[70]) ^ (unsigned __int8)(8 * v10[292])) & 0x40;
      v16 = LOBYTE(v121[70]) ^ (4 * v10[292]);
      LODWORD(v121[265]) = -1073741823;
      v17 = v16 & 0x80 ^ LODWORD(v121[70]);
      LODWORD(v121[70]) = v17;
      v18 = (_DWORD *)*((_QWORD *)v10 + 149);
      if ( v18 )
      {
        LODWORD(v121[263]) = *v18;
        v121[264] = *((_QWORD *)v10 + 149) + 8LL;
      }
      v19 = *((_QWORD *)v10 + 150);
      v112 = v19;
      if ( v19 )
      {
        v113 = (struct VIDSCH_FLIP_QUEUE *)*((_QWORD *)v10 + 149);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 16), &LockHandle);
        v97 = v112;
        v98 = *(CRefCountedBuffer **)(v112 + 8);
        if ( v98 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v98);
          v97 = v112;
        }
        v99 = v113;
        *(_QWORD *)(v97 + 8) = v113;
        _InterlockedIncrement((volatile signed __int32 *)v99 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v17 = v121[70];
        v15 = v123;
      }
      v20 = 0;
      LODWORD(v121[4]) = v10[281];
      if ( v10[281] )
      {
        do
        {
          v14 = *((_QWORD *)v10 + 151);
          v121[v20 + 5] = *(_QWORD *)(v14
                                    + *(_DWORD *)(v14 + 4) * ((8 * *(_DWORD *)(v14 + 8) + 167) & 0xFFFFFFF8)
                                    + 48LL * *(_DWORD *)(v14 + 4) * v20
                                    + 16);
          if ( v20 )
          {
            v41 = &v121[3 * v20 + 68];
            *v41 = *(_QWORD *)(*((_QWORD *)v10 + 151)
                             + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                             * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                             + 48LL * *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL) * v20
                             + 24);
            *((_WORD *)v41 + 4) = *(_WORD *)(*((_QWORD *)v10 + 151)
                                           + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                           * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                           + 48LL * *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL) * v20
                                           + 32);
            v14 = *((_QWORD *)v10 + 151);
            v41[2] = *(_QWORD *)(v14
                               + *(_DWORD *)(v14 + 4) * ((8 * *(_DWORD *)(v14 + 8) + 167) & 0xFFFFFFF8)
                               + 48LL * *(_DWORD *)(v14 + 4) * v20
                               + 40);
          }
          ++v20;
        }
        while ( v20 < v10[281] );
        v17 = v121[70];
        v15 = v123;
      }
      v21 = v17;
      v22 = v17 | 4;
      v23 = v21 | 2;
      if ( v104 )
        v22 = v23;
      LODWORD(v121[70]) = v22;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pqqpxqqqq(
          v22,
          v15,
          v14,
          *((_QWORD *)a1 + 2),
          v15,
          v10[274],
          v121[3],
          v121[2],
          SBYTE4(v121[1]),
          v10[276],
          v10[279],
          v22);
      v24 = *((unsigned int *)a1 + 8);
      v25 = *((_QWORD *)a1 + 3);
      v105[0] = 0;
      DpSynchronizeExecution(v25, VidSchiExecuteMmIoFlipAtISR, v121, v24, v105);
      goto LABEL_27;
    }
    memset(v121, 0, 0x858uLL);
    v91 = (int *)*((_QWORD *)v10 + 151);
    v64 = 0;
    v102 = 0;
    v93 = *v91;
    v60 = *((unsigned __int8 *)v91 + 1);
    v92 = -1;
    v62 = (unsigned __int8)v93;
    v28 = !_BitScanForward((unsigned int *)&v93, (unsigned __int8)v93);
    v108 = v62;
    v116 = v93;
    if ( !v28 )
      v92 = v93;
    v107 = v60;
    v95 = v92;
    v94 = -1;
    v110 = v95;
    v28 = !_BitScanForward((unsigned int *)&v95, v60);
    v117 = v95;
    if ( !v28 )
      v94 = v95;
    v106 = v94;
    while ( v62 || v60 )
    {
      v111 = (char *)a1 + 120 * v64;
      v114 = (unsigned int *)(v111 + 3136);
      memset(v111 + 3136, 0, 0x78uLL);
      v54 = v106;
      v55 = v110;
      if ( v110 >= v106 )
      {
        v73 = v107;
        v62 = v108;
        *v114 = v106;
        *((_DWORD *)v111 + 785) = 0;
        v74 = -1;
        v60 = ~(1 << v54) & v73;
        v28 = !_BitScanForward((unsigned int *)&v75, v60);
        v107 = v60;
        v119 = v75;
        if ( !v28 )
          v74 = v75;
        v106 = v74;
      }
      else
      {
        v56 = v111;
        *v114 = v110;
        *((_DWORD *)v56 + 785) = 1;
        *((_DWORD *)v56 + 786) = *(unsigned __int16 *)(*((_QWORD *)v10 + 151)
                                                     + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                                     * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                                     + 48LL * v102
                                                     + 32);
        v57 = *((_QWORD *)v10 + 151);
        v58 = v102 * ((8 * *(_DWORD *)(v57 + 8) + 167) & 0xFFFFFFF8) + v57 + 144;
        *((_QWORD *)v56 + 394) = *(_QWORD *)(v57
                                           + *(_DWORD *)(v57 + 4) * ((8 * *(_DWORD *)(v57 + 8) + 167) & 0xFFFFFFF8)
                                           + 48LL * v102
                                           + 40);
        *((_QWORD *)v56 + 395) = *(_QWORD *)(*((_QWORD *)v10 + 151)
                                           + *(_DWORD *)(*((_QWORD *)v10 + 151) + 4LL)
                                           * ((8 * *(_DWORD *)(*((_QWORD *)v10 + 151) + 8LL) + 167) & 0xFFFFFFF8)
                                           + 48LL * v102
                                           + 24);
        *((_DWORD *)v56 + 792) ^= (*((_DWORD *)v56 + 792) ^ *(_DWORD *)(v58 + 28)) & 1;
        *((_DWORD *)v56 + 792) ^= (*(_DWORD *)(v58 + 28) ^ *((_DWORD *)v56 + 792)) & 2;
        *((_DWORD *)v56 + 793) = (unsigned __int16)*(_DWORD *)v58;
        *((_DWORD *)v56 + 794) = (unsigned __int16)*(_DWORD *)(v58 + 4);
        *((_DWORD *)v56 + 795) = *(unsigned __int16 *)(v58 + 2);
        *((_DWORD *)v56 + 796) = *(unsigned __int16 *)(v58 + 6);
        *((_DWORD *)v56 + 797) = *(__int16 *)(v58 + 8);
        *((_DWORD *)v56 + 798) = *(__int16 *)(v58 + 12);
        *((_DWORD *)v56 + 799) = *(unsigned __int16 *)(v58 + 10);
        *((_DWORD *)v56 + 800) = *(unsigned __int16 *)(v58 + 14);
        *((_DWORD *)v56 + 801) = (unsigned __int16)*(_DWORD *)(v58 + 16);
        *((_DWORD *)v56 + 802) = (unsigned __int16)*(_DWORD *)(v58 + 20);
        *((_DWORD *)v56 + 803) = *(unsigned __int16 *)(v58 + 18);
        *((_DWORD *)v56 + 804) = *(unsigned __int16 *)(v58 + 22);
        *((_DWORD *)v56 + 805) = ((*(_DWORD *)(v58 + 28) >> 3) & 3) + 1;
        ++v102;
        *((_DWORD *)v56 + 806) ^= (*((_DWORD *)v56 + 806) ^ (*(_DWORD *)(v58 + 28) >> 2)) & 1;
        *((_DWORD *)v56 + 807) = (*(_DWORD *)(v58 + 28) >> 5) & 3;
        *((_DWORD *)v56 + 808) ^= (*((_DWORD *)v56 + 808) ^ (*(_DWORD *)(v58 + 28) >> 7)) & 1;
        LODWORD(v57) = *((_DWORD *)v56 + 808) ^ ((unsigned __int8)*((_DWORD *)v56 + 808) ^ (unsigned __int8)(*(_DWORD *)(v58 + 28) >> 7)) & 2;
        *((_DWORD *)v56 + 808) = v57;
        *((_DWORD *)v56 + 808) = v57 ^ ((unsigned __int8)v57 ^ (unsigned __int8)(*(_DWORD *)(v58 + 28) >> 7)) & 4;
        *((_DWORD *)v56 + 809) = (*(_DWORD *)(v58 + 28) >> 10) & 7;
        *((_DWORD *)a1 + 30 * v64 + 810) = (*(_DWORD *)(v58 + 28) >> 13) & 1;
        v59 = v108;
        v60 = v107;
        *((_DWORD *)v56 + 811) = (*(_DWORD *)(v58 + 28) >> 14) & 1;
        *((_DWORD *)v56 + 812) = (*(_DWORD *)(v58 + 28) >> 15) & 3;
        v61 = -1;
        v62 = ~(1 << v55) & v59;
        v28 = !_BitScanForward((unsigned int *)&v63, v62);
        v108 = v62;
        v118 = v63;
        if ( !v28 )
          v61 = v63;
        v110 = v61;
      }
      ++v64;
    }
    v65 = 0;
    HIDWORD(v121[67]) = v123;
    v121[0] = a1;
    LODWORD(v121[67]) |= 4u;
    v103 = v64;
    v7 = v112;
    LODWORD(v121[67]) ^= (LOBYTE(v121[67]) ^ (unsigned __int8)(8 * v10[292])) & 8;
    LODWORD(v121[67]) ^= (LOBYTE(v121[67]) ^ (unsigned __int8)(8 * v10[292])) & 0x10;
    LODWORD(v121[67]) ^= (LOBYTE(v121[67]) ^ (unsigned __int8)(8 * v10[292])) & 0x20;
    LODWORD(v121[70]) = v10[293];
    LODWORD(v121[265]) = -1073741823;
    LODWORD(v121[1]) = v10[281];
    v106 = v121[1];
    if ( v10[281] )
    {
      do
      {
        v66 = v65++;
        v121[v66 + 2] = *(_QWORD *)(*(_QWORD *)&v10[2 * v66 + 14] + 64LL);
      }
      while ( v65 < v10[281] );
      v106 = v121[1];
    }
    v67 = *((_QWORD *)a1 + 2);
    v122 = 0;
    if ( *(_BYTE *)(v67 + 2206) )
    {
      memset((char *)a1 + 4096, 0, 112LL * v103);
      v68 = v103;
      if ( v103 )
      {
        v69 = (char *)a1 + 4100;
        v70 = v103;
        v71 = (char *)a1 + 3140;
        do
        {
          *((_DWORD *)v69 - 1) = *((_DWORD *)v71 - 1);
          v72 = *(_DWORD *)v71;
          *(_DWORD *)v69 = *(_DWORD *)v71;
          if ( v72 )
          {
            *((_DWORD *)v69 + 1) = *((_DWORD *)v71 + 1);
            *(_QWORD *)(v69 + 12) = *(_QWORD *)(v71 + 12);
            *(_QWORD *)(v69 + 20) = *(_QWORD *)(v71 + 20);
            *((_DWORD *)v69 + 7) = *((_DWORD *)v71 + 7);
            *((_OWORD *)v69 + 2) = *((_OWORD *)v71 + 2);
            *((_OWORD *)v69 + 3) = *((_OWORD *)v71 + 3);
            *((_DWORD *)v69 + 16) = *((_DWORD *)v71 + 20);
            *((_DWORD *)v69 + 17) = *((_DWORD *)v71 + 21);
            *((_DWORD *)v69 + 18) = 0;
            *(_QWORD *)(v69 + 76) = 0LL;
            *((_DWORD *)v69 + 21) = *((_DWORD *)v71 + 22);
            *((_DWORD *)v69 + 22) = *((_DWORD *)v71 + 23);
            *((_DWORD *)v69 + 23) = *((_DWORD *)v71 + 24);
            *((_DWORD *)v69 + 24) = *((_DWORD *)v71 + 25);
            *((_DWORD *)v69 + 25) = *((_DWORD *)v71 + 26);
            *((_DWORD *)v69 + 26) = *((_DWORD *)v71 + 27);
          }
          v71 += 120;
          v69 += 112;
          --v70;
        }
        while ( v70 );
      }
    }
    else
    {
      if ( !*(_BYTE *)(v67 + 2207) )
      {
        if ( *(_BYTE *)(v67 + 2208) && *(_QWORD *)(v67 + 872) )
        {
          memset((char *)a1 + 4096, 0, (unsigned __int64)v103 << 7);
          v80 = 0;
          if ( v103 )
          {
            v81 = (char *)a1 + 4100;
            v82 = (char *)a1 + 3140;
            do
            {
              v83 = *((_QWORD *)v10 + 151);
              v84 = 8 * *(_DWORD *)(v83 + 8) + 160;
              *((_DWORD *)v81 - 1) = *((_DWORD *)v82 - 1);
              v85 = *(_DWORD *)v82;
              *(_DWORD *)v81 = *(_DWORD *)v82;
              if ( v85 )
              {
                *((_DWORD *)v81 + 1) = *((_DWORD *)v82 + 1);
                *(_QWORD *)(v81 + 12) = *(_QWORD *)(v82 + 12);
                *(_QWORD *)(v81 + 20) = *(_QWORD *)(v82 + 20);
                *((_DWORD *)v81 + 7) = *((_DWORD *)v82 + 7);
                *((_OWORD *)v81 + 2) = *((_OWORD *)v82 + 2);
                *((_OWORD *)v81 + 3) = *((_OWORD *)v82 + 3);
                *((_OWORD *)v81 + 4) = *((_OWORD *)v82 + 4);
                *((_DWORD *)v81 + 20) = *((_DWORD *)v82 + 20);
                *((_DWORD *)v81 + 21) = *((_DWORD *)v82 + 21);
                *((_DWORD *)v81 + 22) = *((_DWORD *)v82 + 22);
                *((_DWORD *)v81 + 24) = *((_DWORD *)v82 + 24);
                *((_DWORD *)v81 + 25) = *((_DWORD *)v82 + 25);
                *((_DWORD *)v81 + 26) = *((_DWORD *)v82 + 26);
                *((_DWORD *)v81 + 27) = *((_DWORD *)v82 + 27);
                *((_DWORD *)v81 + 28) = *((_DWORD *)v82 + 28);
                *((_DWORD *)v81 + 29) = 0;
                *((_DWORD *)v81 + 23) = *(_DWORD *)(v80 * ((v84 + 7) & 0xFFFFFFF8) + v83 + 168);
              }
              ++v80;
              v82 += 120;
              v81 += 128;
            }
            while ( v80 < v103 );
          }
          v86 = 0;
          if ( v106 )
          {
            do
            {
              v87 = v86++;
              v121[v87 + 2] = v121[v87 + 2];
            }
            while ( v86 < LODWORD(v121[1]) );
          }
          LODWORD(v121[68]) = v103;
          v43 = (char *)a1 + 4096;
          v44 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
          goto LABEL_62;
        }
        LODWORD(v121[68]) = v103;
        v43 = (char *)a1 + 3136;
LABEL_61:
        v44 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_62:
        v45 = *((unsigned int *)a1 + 8);
        v46 = *((_QWORD *)a1 + 3);
        v121[69] = v43;
        DpSynchronizeExecution(v46, v44, v121, v45, &v122);
        if ( bTracingEnabled && v103 )
        {
          v51 = (_DWORD *)((char *)a1 + 3208);
          v52 = v123;
          v53 = 0;
          LODWORD(v111) = v124;
          do
          {
            v47 = *((_QWORD *)v10 + 151);
            HIDWORD(v111) = v10[274];
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              v96 = v53 * ((8 * *(_DWORD *)(v47 + 8) + 167) & 0xFFFFFFF8);
              Template_pqqxpxqqqddddddddddddqqt(
                v96,
                v47,
                v49,
                *((_QWORD *)a1 + 2),
                v52,
                *(v51 - 18),
                (char)v111,
                *((_QWORD *)v51 - 6),
                *((_QWORD *)v51 - 7),
                *(v51 - 16),
                v10[276],
                v10[279],
                *(v51 - 9),
                *(v51 - 7),
                *(v51 - 8),
                *(v51 - 6),
                *(v51 - 5),
                *(v51 - 3),
                *(v51 - 4),
                *(v51 - 2),
                *(v51 - 1),
                v51[1],
                *v51,
                v51[2],
                *(_DWORD *)(v96 + v47 + 168),
                5,
                *(v51 - 17));
            }
            ++v53;
            v51 += 30;
          }
          while ( v53 < v103 );
          v9 = v113;
          v7 = v112;
          v6 = v125;
        }
        v125 = v121[265];
        if ( LODWORD(v121[265]) )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47, v49);
          v50[5] = v125;
          v50[6] = v121;
          v50[3] = 281LL;
          v50[4] = 11LL;
          v50[7] = *((_QWORD *)a1 + 2);
          WdLogEvent5_WdCriticalError(v50);
          __debugbreak();
        }
        goto LABEL_28;
      }
      memset((char *)a1 + 4096, 0, (unsigned __int64)v103 << 7);
      v68 = v103;
      if ( v103 )
      {
        v76 = (char *)a1 + 4100;
        v77 = v103;
        v78 = (char *)a1 + 3140;
        do
        {
          *((_DWORD *)v76 - 1) = *((_DWORD *)v78 - 1);
          v79 = *(_DWORD *)v78;
          *(_DWORD *)v76 = *(_DWORD *)v78;
          if ( v79 )
          {
            *((_DWORD *)v76 + 1) = *((_DWORD *)v78 + 1);
            *(_QWORD *)(v76 + 12) = *(_QWORD *)(v78 + 12);
            *(_QWORD *)(v76 + 20) = *(_QWORD *)(v78 + 20);
            *((_DWORD *)v76 + 7) = *((_DWORD *)v78 + 7);
            *((_OWORD *)v76 + 2) = *((_OWORD *)v78 + 2);
            *((_OWORD *)v76 + 3) = *((_OWORD *)v78 + 3);
            *((_OWORD *)v76 + 4) = *((_OWORD *)v78 + 4);
            *((_DWORD *)v76 + 20) = *((_DWORD *)v78 + 20);
            *((_DWORD *)v76 + 21) = *((_DWORD *)v78 + 21);
            *((_DWORD *)v76 + 22) = 0;
            *(_QWORD *)(v76 + 92) = 0LL;
            *((_DWORD *)v76 + 25) = *((_DWORD *)v78 + 22);
            *((_DWORD *)v76 + 26) = *((_DWORD *)v78 + 23);
            *((_DWORD *)v76 + 27) = *((_DWORD *)v78 + 24);
            *((_DWORD *)v76 + 28) = *((_DWORD *)v78 + 25);
            *((_DWORD *)v76 + 29) = *((_DWORD *)v78 + 26);
            *((_DWORD *)v76 + 30) = *((_DWORD *)v78 + 27);
          }
          v78 += 120;
          v76 += 128;
          --v77;
        }
        while ( v77 );
        LODWORD(v121[68]) = v103;
        v43 = (char *)a1 + 4096;
        goto LABEL_61;
      }
    }
    LODWORD(v121[68]) = v68;
    v43 = (char *)a1 + 4096;
    goto LABEL_61;
  }
LABEL_49:
  *a5 = 1;
LABEL_28:
  v27 = (unsigned int)v10[292];
  if ( (v27 & 0x20) != 0 )
  {
    v42 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v10 + 148);
    if ( v42 )
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)v10 + 147),
        v42,
        1,
        (v10[292] & 0x40) != 0,
        0,
        0,
        *((_QWORD *)v10 + 150),
        *((_QWORD *)v10 + 149),
        0LL);
  }
  v28 = v109 == 11;
  v10[275] = v109;
  if ( v28 )
  {
    *((_QWORD *)v10 + 145) = HIDWORD(v121[265]);
    *((_QWORD *)v10 + 143) = v121[266];
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v27, v7, v10 + 14);
    VidSchiReferenceDisplayingAllocationsForThisEntry((__int64)a1, (_WORD *)v7, (__int64)(v10 + 14));
    v35 = *(_QWORD *)(*((_QWORD *)v10 + 7) + 104LL);
    v36 = VidSchiCompleteFlipEntry((__int64)a1, v123, v124, v6, v6, 0, 0LL);
    v37 = v115;
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v35 + 32) + 4LL))
                    + 8 * v115
                    + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + v115 + 693) + 8LL), -v36);
    **((_DWORD **)a1 + v37 + 693) += v36;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 8), -v36);
    *(_DWORD *)v38 += v36;
  }
  else
  {
    if ( (v10[292] & 0x10) != 0 )
      v29 = (unsigned __int8)**((_DWORD **)v10 + 151) | *(unsigned __int8 *)(*((_QWORD *)v10 + 151) + 1LL);
    else
      v29 = (1 << *((_DWORD *)a1 + 32)) - 1;
    *(_DWORD *)(v7 + 2316) |= v29;
  }
  *((_QWORD *)v10 + 142) = MEMORY[0xFFFFF78000000320];
  v30 = 1224LL * *((unsigned int *)v9 + 11);
  *((_DWORD *)v9 + 12) = v6;
  v31 = *(_DWORD *)((char *)v9 + v30 + 1100);
  if ( v31 != 5 && v31 != 15 )
    *((_DWORD *)v9 + 11) = v6;
  *((_DWORD *)v9 + 10) = ((_BYTE)v6 + 1) & 0x3F;
  v32 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 440LL);
  if ( *(_QWORD *)(v32 + 7840) > (unsigned __int64)qword_1C003C278 )
  {
    *(_DWORD *)(v32 + 7848) += dword_1C003C284;
    if ( *(_DWORD *)(v32 + 7848) > (unsigned int)dword_1C003C280
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v32 + 7856) > (unsigned __int64)qword_1C003C288 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v28 = bTracingEnabled == 0;
      *(_QWORD *)(v32 + 7856) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v32 + 7848) = 0;
      if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v100, &EventPerformanceWarning);
    }
  }
  else
  {
    v33 = *(_DWORD *)(v32 + 7848);
    if ( v33 )
      *(_DWORD *)(v32 + 7848) = v33 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)(v32 + 7840), 0LL);
  return 0LL;
}
