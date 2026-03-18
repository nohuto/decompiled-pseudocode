/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180002E7C
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x18000345C (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180076E2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18012DF4C (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18012E1DC (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
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
  int v20; // r9d
  __int64 v21; // rax
  bool v22; // zf
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r9d
  int v29; // r9d
  char *v30; // rax
  signed __int64 v31; // r8
  int v32; // ecx
  int v33; // edx
  int v34; // r9d
  int v35; // r9d
  int v36; // r9d
  int v37; // r9d
  _DWORD *v38; // rax
  unsigned __int64 v39; // r14
  unsigned __int16 *v40; // rax
  int v41; // ebp
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rdx
  struct _GUID v45; // xmm0
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v47; // [rsp+50h] [rbp+8h]

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
  v24 = 2 * v13;
  v16 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v25 = (unsigned __int64)v24 >> 3;
    v24 -= 8 * ((unsigned __int64)v24 >> 3);
    do
    {
      v26 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v16))))));
      v27 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v16 = v27 + 37 * v26;
      --v25;
    }
    while ( v25 );
  }
  if ( v24 < 1 || v24 > 7 )
    goto LABEL_4;
  v28 = v24 - 1;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( v29 )
    {
      v34 = v29 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 != 1 )
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
    v20 = *((_DWORD *)this + 137) >> 5;
    if ( !v20 )
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
          + HIBYTE(v19)) & (unsigned int)(v20 - 1));
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
      v21 = *(_QWORD *)(v18 + 32) - *(_QWORD *)&a2->Data1;
      if ( !v21 )
        v21 = *(_QWORD *)(v18 + 40) - *(_QWORD *)a2->Data4;
      v22 = v21 == 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v18 + 24) == v13 )
    {
      v30 = *(char **)(v18 + 16);
      v31 = (char *)v10 - v30;
      do
      {
        v32 = *(unsigned __int16 *)&v30[v31];
        v33 = *(unsigned __int16 *)v30 - v32;
        if ( v33 )
          break;
        v30 += 2;
      }
      while ( v32 );
      v22 = v33 == 0;
LABEL_15:
      if ( v22 )
        goto LABEL_16;
    }
  }
  if ( *((_DWORD *)this + 136) < 0x40u )
  {
    v38 = WPF::ProcessHeapImpl::AllocClear(0x98uLL);
    v18 = (__int64)v38;
    if ( !v38 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v38[30] = -1;
    *((_QWORD *)v38 + 6) = v16;
    if ( a2 )
    {
      v45 = *a2;
      v41 = 0;
      *((struct _GUID *)v38 + 2) = v45;
    }
    else
    {
      *((_QWORD *)v38 + 3) = v13;
      v39 = v13 + 1;
      v40 = (unsigned __int16 *)operator new(saturated_mul(v39, 2uLL));
      *(_QWORD *)(v18 + 16) = v40;
      if ( v40 )
      {
        v41 = 0;
        StringCchCopyW(v40, v39, v10);
      }
      else
      {
        v41 = -2147024882;
      }
    }
    *(_QWORD *)(v18 + 8) = v16;
    v42 = *((_DWORD *)this + 137);
    v47 = v16 & (-1LL << (v42 & 0x1F));
    v43 = *((_QWORD *)this + 69);
    v44 = (37
         * (BYTE6(v47)
          + 37
          * (BYTE5(v47)
           + 37
           * (BYTE4(v47)
            + 37
            * ((((unsigned int)v16 & (-1 << (v42 & 0x1F))) >> 24)
             + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v47 + 11623883)))))))
         + HIBYTE(v47)) & ((v42 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v43 + 8 * v44);
    *(_QWORD *)(v43 + 8 * v44) = v18;
    ++*((_DWORD *)this + 136);
    if ( v41 < 0 )
    {
      CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        (CAnimationTracking::AnimationScenarioLongtermStatistics *)v18,
        v44);
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
        if ( a4 > 5 )
        {
          if ( a4 > 0xA )
          {
            if ( a4 <= 0xF )
            {
              ++*(_DWORD *)(v18 + 108);
            }
            else if ( a4 > 0x19 )
            {
              if ( a4 <= 0x32 )
                ++*(_DWORD *)(v18 + 116);
            }
            else
            {
              ++*(_DWORD *)(v18 + 112);
            }
          }
          else
          {
            ++*(_DWORD *)(v18 + 104);
          }
        }
        else
        {
          ++*(_DWORD *)(v18 + 100);
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
        else if ( a7 >= 0xC8 )
        {
          if ( a7 < 0x1F4 )
            ++*(_DWORD *)(v18 + 80);
        }
        else
        {
          ++*(_DWORD *)(v18 + 76);
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
      v23 = 1000 * a9 / a5;
      if ( v23 >= 0x32 )
      {
        if ( v23 >= 0x96 )
          ++*(_DWORD *)(v18 + 64);
        else
          ++*(_DWORD *)(v18 + 60);
      }
    }
  }
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
