/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x1400281E0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 **a7,
        unsigned __int64 *a8)
{
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v11; // rbp
  __int64 *v12; // r12
  unsigned int v14; // r14d
  int v15; // r15d
  __int64 *i; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // r11
  __int64 v23; // rdi
  unsigned int v24; // r10d
  __int64 v25; // rcx
  __int64 *v26; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 result; // rax
  __int64 v35; // [rsp+78h] [rbp+10h]

  v8 = *(_QWORD *)(a2 + 168);
  CurrentThread = KeGetCurrentThread();
  v11 = *(_QWORD *)(a2 + 224);
  v12 = *(__int64 **)(a2 + 200);
  v14 = 1;
  v35 = *v12;
  if ( (v8 & 0x400) == 0 )
    goto LABEL_8;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_8;
  v15 = *(_DWORD *)(*v12 + 56);
  if ( (v15 & 8) != 0 && BYTE4(CurrentThread[1].Queue) != 2 )
    goto LABEL_8;
  if ( *(__int64 *)(a1 + 6016) < 160 )
    goto LABEL_8;
  if ( dword_140389164 )
  {
    --dword_140389164;
LABEL_8:
    i = (__int64 *)v11;
    v17 = v11;
    goto LABEL_9;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 320LL) )
    goto LABEL_8;
  v21 = *(_DWORD *)(a2 + 180);
  if ( v21 == 1 )
    goto LABEL_8;
  v22 = a3;
  v17 = a4 + 8LL * *((unsigned int *)v12 + 11) - 8;
  if ( !a3 )
  {
    if ( (v15 & 0x20) != 0 )
    {
      v21 = 4;
      if ( (v12[4] & 4) != 0 )
        v21 = 8;
    }
    else if ( !v21 )
    {
      v21 = LODWORD(CurrentThread[1].WaitListEntry.Flink) + 1;
    }
  }
  v23 = 8LL * v21;
  if ( v17 > v23 + v11 - 8 )
    v17 = v23 + v11 - 8;
  if ( a3 || (v15 & 0x20000000) == 0 )
  {
    v24 = 0;
  }
  else
  {
    v24 = MiStartingOffset(v12, v11, a5);
    v22 = 0LL;
    v25 = (dword_14038916C - (v24 & (dword_14038916C - 1))) >> 12;
    if ( v17 > v11 - 8 + 8 * v25 )
      v17 = v11 - 8 + 8 * v25;
  }
  if ( v17 > (v11 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v17 = v11 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v26 = (__int64 *)v17;
  if ( v17 > v11 )
  {
    do
    {
      PteShadow = *v26;
      if ( (unsigned __int64)v26 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v26 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v26, *v26);
      if ( PteShadow == v8 )
      {
        ++v14;
      }
      else if ( v26 == (__int64 *)v17 )
      {
        v17 -= 8LL;
      }
      --v26;
    }
    while ( (unsigned __int64)v26 > v11 );
  }
  v28 = v17 - v23 + 8;
  if ( v28 < a4 )
    v28 = a4;
  v29 = v11 & 0xFFFFFFFFFFFFF000uLL;
  if ( v28 >= (v11 & 0xFFFFFFFFFFFFF000uLL) )
    v29 = v28;
  if ( v22 || (*(_BYTE *)(a2 + 189) & 0x20) != 0 )
  {
    v30 = (__int64 *)v11;
  }
  else
  {
    v30 = (__int64 *)v29;
    if ( (*(_DWORD *)(v35 + 56) & 0x20000000) != 0 )
    {
      v31 = (v24 >> 12) & ((unsigned int)(dword_14038916C - 1) >> 12);
      if ( v29 < v11 - 8 * v31 )
        v30 = (__int64 *)(v11 - 8 * v31);
    }
  }
  for ( i = v30; (unsigned __int64)v30 < v11; ++v30 )
  {
    v32 = *v30;
    if ( (unsigned __int64)v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v30 <= 0xFFFFF6FB7DBED7F8uLL )
      v32 = MiReadPteShadow(v30, *v30);
    if ( v32 == v8 )
    {
      ++v14;
    }
    else if ( v30 == i )
    {
      ++i;
    }
  }
LABEL_9:
  v18 = v14 - 1;
  if ( a6 == -1 )
    v18 = v14;
  if ( (_DWORD)v18 )
  {
    v19 = 1LL;
    if ( a6 == -1 )
      v19 = 3LL;
    v20 = MiObtainFaultCharges(a1, v18, v19);
  }
  else
  {
    v20 = 0;
  }
  result = v20 + 1;
  if ( a6 == -1 )
    result = v20;
  *a7 = i;
  *a8 = v17;
  return result;
}
