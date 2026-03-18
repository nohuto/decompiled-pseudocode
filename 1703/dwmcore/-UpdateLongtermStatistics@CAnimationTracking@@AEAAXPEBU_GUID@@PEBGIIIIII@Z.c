/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B96A8
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801420C8 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014236C (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  const unsigned __int16 *v10; // r12
  __int64 v13; // r14
  const struct _GUID *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 Data1_low; // rax
  __int64 v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r9d
  int v28; // r9d
  char *v29; // rax
  signed __int64 v30; // r8
  int v31; // ecx
  int v32; // edx
  int v33; // r9d
  int v34; // r9d
  int v35; // r9d
  int v36; // r9d
  _DWORD *v37; // rax
  unsigned __int64 v38; // r14
  unsigned __int16 *v39; // rax
  int v40; // ebp
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  struct _GUID v44; // xmm0
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v46; // [rsp+50h] [rbp+8h]

  v10 = a3;
  v13 = 0LL;
  if ( !a3 )
  {
    v14 = a2;
    v15 = 2LL;
    v16 = 314159LL;
    do
    {
      Data1_low = LOBYTE(v14->Data1);
      v14 = (const struct _GUID *)((char *)v14 + 8);
      v16 = v14[-1].Data4[7]
          + 37
          * (v14[-1].Data4[6]
           + 37
           * (v14[-1].Data4[5]
            + 37
            * (v14[-1].Data4[4]
             + 37 * (v14[-1].Data4[3] + 37 * (v14[-1].Data4[2] + 37 * (v14[-1].Data4[1] + 37 * (Data1_low + 37 * v16)))))));
      --v15;
    }
    while ( v15 );
    goto LABEL_4;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v23 = 2 * v13;
  v16 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v24 = v23 >> 3;
    v23 -= 8 * (v23 >> 3);
    do
    {
      v25 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v16))))));
      v26 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v16 = v26 + 37 * v25;
      --v24;
    }
    while ( v24 );
  }
  if ( v23 - 1 > 6 )
    goto LABEL_4;
  v27 = v23 - 1;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v28 )
    {
      v33 = v28 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 != 1 )
                goto LABEL_4;
              v16 = *(unsigned __int8 *)a3 + 37 * v16;
              a3 = (const unsigned __int16 *)((char *)a3 + 1);
            }
            v16 = *(unsigned __int8 *)a3 + 37 * v16;
            a3 = (const unsigned __int16 *)((char *)a3 + 1);
          }
          v16 = *(unsigned __int8 *)a3 + 37 * v16;
          a3 = (const unsigned __int16 *)((char *)a3 + 1);
        }
        v16 = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (const unsigned __int16 *)((char *)a3 + 1);
      }
      v16 = *(unsigned __int8 *)a3 + 37 * v16;
      a3 = (const unsigned __int16 *)((char *)a3 + 1);
    }
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
  }
  v16 = *(unsigned __int8 *)a3 + 37 * v16;
LABEL_4:
  v18 = 0LL;
  v19 = v16 & (-1LL << (*((_BYTE *)this + 548) & 0x1F));
  while ( 1 )
  {
    if ( v18 )
      goto LABEL_8;
    if ( *((_DWORD *)this + 137) < 0x20u )
      break;
    v18 = *((_QWORD *)this + 69)
        + 8LL
        * ((37
          * (BYTE6(v19)
           + 37
           * (BYTE5(v19)
            + 37
            * (BYTE4(v19)
             + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v19)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1));
LABEL_8:
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v19 == ((-1LL << (*((_BYTE *)this + 548) & 0x1F)) & *(_QWORD *)(v18 + 8)) )
        goto LABEL_10;
    }
    v18 = 0LL;
LABEL_10:
    if ( !v18 )
      break;
    if ( a2 )
    {
      v20 = *(_QWORD *)(v18 + 32) - *(_QWORD *)&a2->Data1;
      if ( !v20 )
        v20 = *(_QWORD *)(v18 + 40) - *(_QWORD *)a2->Data4;
      v21 = v20 == 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v18 + 24) == v13 )
    {
      v29 = *(char **)(v18 + 16);
      v30 = (char *)v10 - v29;
      do
      {
        v31 = *(unsigned __int16 *)&v29[v30];
        v32 = *(unsigned __int16 *)v29 - v31;
        if ( v32 )
          break;
        v29 += 2;
      }
      while ( v31 );
      v21 = v32 == 0;
LABEL_15:
      if ( v21 )
        goto LABEL_16;
    }
  }
  if ( *((_DWORD *)this + 136) < 0x40u )
  {
    v37 = WPF::ProcessHeapImpl::AllocClear(0x98uLL);
    v18 = (__int64)v37;
    if ( !v37 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    v37[30] = -1;
    *((_QWORD *)v37 + 6) = v16;
    if ( a2 )
    {
      v44 = *a2;
      v40 = 0;
      *((struct _GUID *)v37 + 2) = v44;
    }
    else
    {
      *((_QWORD *)v37 + 3) = v13;
      v38 = v13 + 1;
      v39 = (unsigned __int16 *)operator new(saturated_mul(v38, 2uLL));
      *(_QWORD *)(v18 + 16) = v39;
      if ( v39 )
      {
        v40 = 0;
        StringCchCopyW(v39, v38, v10);
      }
      else
      {
        v40 = -2147024882;
      }
    }
    *(_QWORD *)(v18 + 8) = v16;
    v41 = *((_DWORD *)this + 137);
    v46 = v16 & (-1LL << (v41 & 0x1F));
    v42 = *((_QWORD *)this + 69);
    v43 = (37
         * (BYTE6(v46)
          + 37
          * (BYTE5(v46)
           + 37
           * (BYTE4(v46)
            + 37
            * ((((unsigned int)v16 & (-1 << (v41 & 0x1F))) >> 24)
             + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
         + HIBYTE(v46)) & ((v41 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v42 + 8 * v43);
    *(_QWORD *)(v42 + 8 * v43) = v18;
    ++*((_DWORD *)this + 136);
    if ( v40 < 0 )
    {
      CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        (CAnimationTracking::AnimationScenarioLongtermStatistics *)v18,
        v43);
      v18 = 0LL;
    }
    if ( v18 )
    {
LABEL_16:
      ++*(_DWORD *)(v18 + 56);
      if ( a5 < *(_DWORD *)(v18 + 120) )
        *(_DWORD *)(v18 + 120) = a5;
      if ( a5 > *(_DWORD *)(v18 + 124) )
        *(_DWORD *)(v18 + 124) = a5;
      *(_QWORD *)(v18 + 128) += a6;
      *(_QWORD *)(v18 + 136) += a9;
      *(_QWORD *)(v18 + 144) += a7;
      if ( a4 )
      {
        if ( a4 <= 5 )
        {
          ++*(_DWORD *)(v18 + 100);
        }
        else if ( a4 <= 0xA )
        {
          ++*(_DWORD *)(v18 + 104);
        }
        else if ( a4 <= 0xF )
        {
          ++*(_DWORD *)(v18 + 108);
        }
        else if ( a4 <= 0x19 )
        {
          ++*(_DWORD *)(v18 + 112);
        }
        else if ( a4 <= 0x32 )
        {
          ++*(_DWORD *)(v18 + 116);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 96);
      }
      if ( a7 >= 0x32 )
      {
        if ( a7 < 0x64 )
        {
          ++*(_DWORD *)(v18 + 72);
        }
        else if ( a7 < 0xC8 )
        {
          ++*(_DWORD *)(v18 + 76);
        }
        else if ( a7 < 0x1F4 )
        {
          ++*(_DWORD *)(v18 + 80);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 68);
      }
      if ( a8 < 0xC8 )
      {
        ++*(_DWORD *)(v18 + 84);
      }
      else if ( a8 >= 0x1F4 )
      {
        if ( a8 < 0x7D0 )
          ++*(_DWORD *)(v18 + 92);
      }
      else
      {
        ++*(_DWORD *)(v18 + 88);
      }
      v22 = 1000 * a9 / a5;
      if ( v22 >= 0x32 )
      {
        if ( v22 >= 0x96 )
          ++*(_DWORD *)(v18 + 64);
        else
          ++*(_DWORD *)(v18 + 60);
      }
    }
  }
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
