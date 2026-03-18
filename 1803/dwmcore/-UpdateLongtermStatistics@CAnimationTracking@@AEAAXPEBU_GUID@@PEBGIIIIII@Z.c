/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800D0538
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800D0B18 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18014C184 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014C448 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  size_t *v10; // r12
  const struct _GUID *v11; // rbp
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdi
  unsigned __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  int v20; // r9d
  __int64 v21; // rbx
  __int64 v22; // r10
  int v23; // r9d
  char *v24; // rax
  signed __int64 v25; // r8
  int v26; // ecx
  int v27; // edx
  bool v28; // zf
  unsigned int v29; // eax
  const struct _GUID *v30; // r8
  __int64 v31; // r9
  __int64 Data1_low; // rax
  int v33; // r9d
  int v34; // r9d
  int v35; // r9d
  int v36; // r9d
  __int64 v37; // rax
  _DWORD *v38; // rax
  unsigned __int64 v39; // r14
  unsigned __int16 *v40; // rax
  unsigned int v41; // r8d
  char v42; // al
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  struct _GUID v45; // xmm0
  void *retaddr; // [rsp+48h] [rbp+0h]

  v10 = (size_t *)a3;
  v11 = a2;
  v13 = 0LL;
  if ( !a3 )
  {
    v30 = a2;
    v15 = 314159LL;
    v31 = 2LL;
    do
    {
      Data1_low = LOBYTE(v30->Data1);
      v30 = (const struct _GUID *)((char *)v30 + 8);
      v15 = v30[-1].Data4[7]
          + 37
          * (v30[-1].Data4[6]
           + 37
           * (v30[-1].Data4[5]
            + 37
            * (v30[-1].Data4[4]
             + 37 * (v30[-1].Data4[3] + 37 * (v30[-1].Data4[2] + 37 * (v30[-1].Data4[1] + 37 * (Data1_low + 37 * v15)))))));
      --v31;
    }
    while ( v31 );
    goto LABEL_13;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v14 = 2 * v13;
  v15 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v16 = (unsigned __int64)v14 >> 3;
    v14 -= 8 * ((unsigned __int64)v14 >> 3);
    do
    {
      v17 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v15))))));
      v18 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v15 = v18 + 37 * v17;
      --v16;
    }
    while ( v16 );
  }
  if ( v14 < 1 || v14 > 7 )
    goto LABEL_13;
  v19 = v14 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v33 = v20 - 1;
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
                goto LABEL_13;
              v15 = *(unsigned __int8 *)a3 + 37 * v15;
              a3 = (unsigned __int16 *)((char *)a3 + 1);
            }
            v15 = *(unsigned __int8 *)a3 + 37 * v15;
            a3 = (unsigned __int16 *)((char *)a3 + 1);
          }
          v15 = *(unsigned __int8 *)a3 + 37 * v15;
          a3 = (unsigned __int16 *)((char *)a3 + 1);
        }
        v15 = *(unsigned __int8 *)a3 + 37 * v15;
        a3 = (unsigned __int16 *)((char *)a3 + 1);
      }
      v15 = *(unsigned __int8 *)a3 + 37 * v15;
      a3 = (unsigned __int16 *)((char *)a3 + 1);
    }
    v15 = *(unsigned __int8 *)a3 + 37 * v15;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
  }
  v15 = *(unsigned __int8 *)a3 + 37 * v15;
LABEL_13:
  v21 = 0LL;
  v22 = v15 & (-1LL << (*((_BYTE *)this + 548) & 0x1F));
  while ( 1 )
  {
    if ( v21 )
      goto LABEL_17;
    v23 = *((_DWORD *)this + 137) >> 5;
    if ( !v23 )
      break;
    v21 = *((_QWORD *)this + 69)
        + 8LL
        * ((37
          * (BYTE6(v22)
           + 37
           * (BYTE5(v22)
            + 37
            * (BYTE4(v22)
             + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
          + HIBYTE(v22)) & (unsigned int)(v23 - 1));
LABEL_17:
    while ( 1 )
    {
      v21 = *(_QWORD *)v21;
      if ( (v21 & 1) != 0 )
        break;
      if ( v22 == ((-1LL << (*((_BYTE *)this + 548) & 0x1F)) & *(_QWORD *)(v21 + 8)) )
        goto LABEL_19;
    }
    v21 = 0LL;
LABEL_19:
    if ( !v21 )
      break;
    if ( v11 )
    {
      v37 = *(_QWORD *)(v21 + 32) - *(_QWORD *)&v11->Data1;
      if ( !v37 )
        v37 = *(_QWORD *)(v21 + 40) - *(_QWORD *)v11->Data4;
      v28 = v37 == 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v21 + 24) == v13 )
    {
      v24 = *(char **)(v21 + 16);
      v25 = (char *)v10 - v24;
      do
      {
        v26 = *(unsigned __int16 *)&v24[v25];
        v27 = *(unsigned __int16 *)v24 - v26;
        if ( v27 )
          break;
        v24 += 2;
      }
      while ( v26 );
      v28 = v27 == 0;
LABEL_26:
      if ( v28 )
        goto LABEL_27;
    }
  }
  if ( *((_DWORD *)this + 136) < 0x40u )
  {
    v38 = WPF::ProcessHeapImpl::AllocClear(0x98uLL);
    v21 = (__int64)v38;
    if ( !v38 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v38[30] = -1;
    *((_QWORD *)v38 + 6) = v15;
    if ( v11 )
    {
      v45 = *v11;
      LODWORD(v11) = 0;
      *((struct _GUID *)v38 + 2) = v45;
    }
    else
    {
      *((_QWORD *)v38 + 3) = v13;
      v39 = v13 + 1;
      v40 = (unsigned __int16 *)operator new(saturated_mul(v39, 2uLL));
      *(_QWORD *)(v21 + 16) = v40;
      if ( v40 )
        StringCchCopyW(v40, v39, v10);
      else
        LODWORD(v11) = -2147024882;
    }
    *(_QWORD *)(v21 + 8) = v15;
    v41 = *((_DWORD *)this + 137);
    v42 = v41 & 0x1F;
    v43 = *((_QWORD *)this + 69);
    v44 = (((v15 & (unsigned __int64)(-1LL << v42)) >> 56)
         + 37
         * ((unsigned __int8)((v15 & (unsigned __int64)(-1LL << v42)) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v15 & (unsigned __int64)(-1LL << v42)) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v15 & (unsigned __int64)(-1LL << v42)) >> 32)
            + 37
            * ((((unsigned int)v15 & (-1 << v42)) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v15 & (-1 << v42)) >> 16)
              + 37
              * (37 * ((unsigned __int8)(v15 & (-1 << v42)) + 11623883)
               + (unsigned __int8)((unsigned __int16)(v15 & (-1 << v42)) >> 8)))))))) & ((v41 >> 5) - 1);
    *(_QWORD *)v21 = *(_QWORD *)(v43 + 8 * v44);
    *(_QWORD *)(v43 + 8 * v44) = v21;
    ++*((_DWORD *)this + 136);
    if ( (int)v11 < 0 )
    {
      CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        (CAnimationTracking::AnimationScenarioLongtermStatistics *)v21,
        v44);
      v21 = 0LL;
    }
    if ( v21 )
    {
LABEL_27:
      ++*(_DWORD *)(v21 + 56);
      if ( a5 < *(_DWORD *)(v21 + 120) )
        *(_DWORD *)(v21 + 120) = a5;
      if ( a5 > *(_DWORD *)(v21 + 124) )
        *(_DWORD *)(v21 + 124) = a5;
      *(_QWORD *)(v21 + 128) += a6;
      *(_QWORD *)(v21 + 136) += a9;
      *(_QWORD *)(v21 + 144) += a7;
      if ( a4 )
      {
        if ( a4 > 5 )
        {
          if ( a4 <= 0xA )
          {
            ++*(_DWORD *)(v21 + 104);
          }
          else if ( a4 <= 0xF )
          {
            ++*(_DWORD *)(v21 + 108);
          }
          else if ( a4 <= 0x19 )
          {
            ++*(_DWORD *)(v21 + 112);
          }
          else if ( a4 <= 0x32 )
          {
            ++*(_DWORD *)(v21 + 116);
          }
        }
        else
        {
          ++*(_DWORD *)(v21 + 100);
        }
      }
      else
      {
        ++*(_DWORD *)(v21 + 96);
      }
      if ( a7 < 0x32 )
      {
        ++*(_DWORD *)(v21 + 68);
      }
      else if ( a7 < 0x64 )
      {
        ++*(_DWORD *)(v21 + 72);
      }
      else if ( a7 < 0xC8 )
      {
        ++*(_DWORD *)(v21 + 76);
      }
      else if ( a7 < 0x1F4 )
      {
        ++*(_DWORD *)(v21 + 80);
      }
      if ( a8 < 0xC8 )
      {
        ++*(_DWORD *)(v21 + 84);
      }
      else if ( a8 < 0x1F4 )
      {
        ++*(_DWORD *)(v21 + 88);
      }
      else if ( a8 < 0x7D0 )
      {
        ++*(_DWORD *)(v21 + 92);
      }
      v29 = 1000 * a9 / a5;
      if ( v29 >= 0x32 )
      {
        if ( v29 >= 0x96 )
          ++*(_DWORD *)(v21 + 64);
        else
          ++*(_DWORD *)(v21 + 60);
      }
    }
  }
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
