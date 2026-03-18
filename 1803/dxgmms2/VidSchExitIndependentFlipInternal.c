/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C0015004
 * Callers:
 *     VidSchExitIndependentFlip @ 0x1C0014B90 (VidSchExitIndependentFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C001532C (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C001541C (VidSchiFlushPendingTokenList.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0015490 (VidSchiCancelIndependentFlips.c)
 *     McTemplateK0txqqqtxtx @ 0x1C002E008 (McTemplateK0txqqqtxtx.c)
 */

__int64 __fastcall VidSchExitIndependentFlipInternal(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        char *a6,
        _QWORD *a7)
{
  int v7; // r13d
  int v8; // r10d
  __int64 v10; // r14
  _DWORD *v11; // rcx
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // r15d
  unsigned __int8 v18; // r9
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r8
  bool v24; // zf
  __int64 v25; // rax
  int v26; // ecx
  __int64 result; // rax
  unsigned int v28; // r12d
  unsigned int v29; // r15d
  unsigned int v30; // edi
  __int64 v31; // rsi
  __int64 v32; // r12
  unsigned int v33; // edi
  char v34; // r15
  unsigned int v35; // ebx
  unsigned int v36; // r8d
  __int64 v37; // r11
  unsigned int v38; // r9d
  unsigned int v39; // r10d
  int v40; // r8d
  __int64 v41; // r12
  unsigned int v42; // edi
  unsigned int v43; // r15d
  unsigned int v44; // ebx
  __int64 v45; // r9
  _DWORD *v46; // rdx
  int v47; // [rsp+68h] [rbp-91h]
  struct _VIDSCH_INDEPENDENT_FLIP_STATE *v48; // [rsp+70h] [rbp-89h]
  unsigned int v49; // [rsp+78h] [rbp-81h] BYREF
  unsigned int v50; // [rsp+7Ch] [rbp-7Dh]
  unsigned int v51; // [rsp+80h] [rbp-79h]
  __int64 v52; // [rsp+88h] [rbp-71h]
  _DWORD v53[4]; // [rsp+90h] [rbp-69h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-59h]
  _DWORD v55[4]; // [rsp+A8h] [rbp-51h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-41h]
  unsigned int v57; // [rsp+C0h] [rbp-39h] BYREF
  int v58; // [rsp+C4h] [rbp-35h]
  unsigned int v59; // [rsp+C8h] [rbp-31h]
  __int64 v60; // [rsp+D0h] [rbp-29h]
  _DWORD v61[4]; // [rsp+D8h] [rbp-21h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-11h]

  v7 = 0;
  v8 = *(_DWORD *)(a1 + 3320);
  v47 = 0;
  v10 = a1;
  *a6 = 0;
  if ( v8 >= 0 )
  {
    v11 = *(_DWORD **)(a1 + 3160);
    v12 = *a2;
    do
    {
      if ( *v11 == v12 && v11[1] == a2[1] )
        break;
      ++v7;
      v11 += 34;
    }
    while ( v7 <= v8 );
    v47 = v7;
  }
  v13 = *(_QWORD *)(v10 + 3160) + 136LL * v7;
  v48 = (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v13;
  VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
    (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v49,
    (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v13);
  v16 = v49;
  v17 = 3;
  v18 = a5;
  v19 = v51;
  while ( v16 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v15, v14);
    v21 = v19;
    v22 = v52;
    v20[3] = *(_QWORD *)a2;
    v20[4] = a3;
    v20[5] = *(unsigned int *)(v22 + 4 * v21);
    v20[6] = a5;
    WdLogEvent5_WdPresentTokenEvent(v20);
    v18 = a5;
    v14 = *(_QWORD *)(v13 + 88);
    v23 = 216LL * *(unsigned int *)(v22 + 4 * v21) + *(_QWORD *)(v10 + 8LL * v50 + 3032);
    v15 = 5LL * *(unsigned int *)(v23 + 312);
    *(_QWORD *)(v23 + 8 * v15 + 184) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v23 + 8 * v15 + 152) = 0;
    *(_BYTE *)(v23 + 8 * v15 + 153) = a5;
    *(_QWORD *)(v23 + 8 * v15 + 156) = *(_QWORD *)a2;
    *(_QWORD *)(v23 + 8 * v15 + 168) = a3;
    *(_QWORD *)(v23 + 8 * v15 + 176) = v14;
    *(_DWORD *)(v23 + 312) = (*(_DWORD *)(v23 + 312) + 1) & 3;
    v24 = v49 >> 1 == 0;
    v16 = v49 >> 1;
    v49 >>= 1;
    if ( !v24 )
    {
      do
      {
        if ( (v16 & 1) != 0 )
          break;
        ++v50;
        v16 >>= 1;
      }
      while ( v16 );
      v49 = v16;
    }
    v19 = ++v51;
  }
  v25 = *(_QWORD *)(v13 + 88);
  ++*(_QWORD *)(v10 + 3312);
  v26 = *(_DWORD *)(v13 + 112);
  *a7 = v25;
  if ( (unsigned int)(v26 - 1) > 1 )
  {
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v53,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v13);
    v41 = v54;
    v42 = v53[2];
    v43 = v53[1];
    v44 = v53[0];
    while ( v44 )
    {
      result = VidSchiCancelIndependentFlips(v10, v43, *(unsigned int *)(v41 + 4LL * v42), a6);
      while ( 1 )
      {
        v44 >>= 1;
        if ( !v44 || (v44 & 1) != 0 )
          break;
        ++v43;
      }
      ++v42;
    }
    *(_DWORD *)(v13 + 112) = 0;
  }
  else
  {
    if ( v18 || v26 != 1 )
      v17 = 0;
    *(_DWORD *)(v13 + 112) = v17;
    *(_WORD *)(v13 + 96) = 0;
    *(_DWORD *)(v13 + 100) = 0;
    *(_DWORD *)(v13 + 104) = 0;
    *(_BYTE *)(v13 + 98) = 0;
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v55,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v13);
    v28 = v55[2];
    v29 = v55[1];
    v30 = v55[0];
    v31 = v56;
    while ( v30 )
    {
      VidSchiCancelIndependentFlips(v10, v29, *(unsigned int *)(v31 + 4LL * v28), a6);
      result = VidSchiFlushPendingTokenList(v10, v29, *(unsigned int *)(v31 + 4LL * v28));
      while ( 1 )
      {
        v30 >>= 1;
        if ( !v30 || (v30 & 1) != 0 )
          break;
        ++v29;
      }
      ++v28;
    }
    v13 = (__int64)v48;
    v7 = v47;
  }
  if ( bTracingEnabled )
  {
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v57,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v13);
    v32 = v60;
    v33 = v59;
    v34 = v58;
    v35 = v57;
    while ( v35 )
    {
      result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        result = McTemplateK0txqqqtxtx(
                   a5,
                   (unsigned __int8)*a6,
                   v33,
                   0,
                   *(_QWORD *)a2,
                   v34,
                   *(_DWORD *)(v32 + 4LL * v33),
                   a4,
                   *a6,
                   a3,
                   a5,
                   *a7);
      while ( 1 )
      {
        v35 >>= 1;
        if ( !v35 || (v35 & 1) != 0 )
          break;
        ++v34;
      }
      ++v33;
    }
    v13 = (__int64)v48;
    v10 = a1;
    v7 = v47;
  }
  if ( a5 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v61,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v13);
    v36 = v61[0];
    v37 = v62;
    v38 = v61[2];
    v39 = v61[1];
    while ( v36 )
    {
      *(_DWORD *)(216LL * *(unsigned int *)(v37 + 4LL * v38) + *(_QWORD *)(v10 + 8LL * v39 + 3032) + 140) = -1;
      while ( 1 )
      {
        v36 >>= 1;
        if ( !v36 || (v36 & 1) != 0 )
          break;
        ++v39;
      }
      ++v38;
    }
    result = 0LL;
    *(_QWORD *)v13 = 0LL;
    *(_DWORD *)(v13 + 16) = 0;
    if ( v7 == *(_DWORD *)(v10 + 3320) )
    {
      v40 = v7 - 1;
      if ( v7 - 1 >= 0 )
      {
        v45 = v40;
        v46 = (_DWORD *)(*(_QWORD *)(v10 + 3160) + 136LL * v40);
        do
        {
          result = (unsigned int)(*v46 | v46[1]);
          if ( *(_QWORD *)v46 )
            break;
          --v40;
          v46 -= 34;
          --v45;
        }
        while ( v45 >= 0 );
      }
      *(_DWORD *)(v10 + 3320) = v40;
    }
  }
  return result;
}
