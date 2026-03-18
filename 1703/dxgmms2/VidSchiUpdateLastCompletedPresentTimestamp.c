/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000A670
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000C020 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F360 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0010794 (VidSchiNeedToForcePreemptNode.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C0011BC0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0011C88 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 *     Template_pqxxxx @ 0x1C0025380 (Template_pqxxxx.c)
 */

LONGLONG __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, char a2, char a3)
{
  LARGE_INTEGER *v3; // rbp
  LONGLONG result; // rax
  LARGE_INTEGER v8; // rsi
  __int64 v9; // r13
  LARGE_INTEGER v10; // rax
  int v11; // edx
  LARGE_INTEGER v12; // rcx
  int v13; // r8d
  LARGE_INTEGER v14; // r9
  __int64 v15; // r10
  LARGE_INTEGER v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int64 QuadPart; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  char v25; // r12
  unsigned int v26; // ebx
  int v27; // edi
  __int64 v28; // r9
  unsigned int i; // edi
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned int refreshed; // eax
  int v33; // ecx
  unsigned __int64 v34; // kr00_8
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-80h]
  unsigned __int64 v44; // [rsp+60h] [rbp-78h]
  int v45; // [rsp+68h] [rbp-70h]
  unsigned __int64 v46; // [rsp+70h] [rbp-68h]
  __int64 v47; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v48; // [rsp+80h] [rbp-58h]
  LARGE_INTEGER v49; // [rsp+88h] [rbp-50h]
  LARGE_INTEGER *v50; // [rsp+90h] [rbp-48h]
  unsigned int v53; // [rsp+F8h] [rbp+20h]

  v3 = *(LARGE_INTEGER **)(a1 + 104);
  result = *(unsigned int *)(a1 + 396);
  v50 = v3;
  v8 = v3[4];
  v9 = gulPriorityToYieldPriorityBand[result];
  v45 = v9;
  if ( !(_DWORD)v9 || (_DWORD)v9 == 3 )
    return result;
  v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v14 = v3[18];
  v15 = v9;
  v49 = v10;
  v16 = v10;
  v47 = v9;
  if ( !v14.QuadPart && !a3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_pqxxxx(
        *(_DWORD *)(a1 + 396),
        v11,
        v13,
        *(_QWORD *)(v8.QuadPart + 16),
        1,
        *(_DWORD *)(a1 + 396),
        v10.QuadPart,
        0,
        0);
      goto LABEL_49;
    }
    goto LABEL_39;
  }
  v17 = v10.QuadPart - v14.QuadPart;
  if ( a2 || a3 )
  {
    QuadPart = PerformanceFrequency.QuadPart;
  }
  else
  {
    QuadPart = PerformanceFrequency.QuadPart;
    if ( is_mul_ok(v17, 0x989680uLL) )
    {
      result = v17 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      v19 = result;
    }
    else
    {
      v12.QuadPart = v17 / PerformanceFrequency.QuadPart;
      result = 10000000 * (v17 / PerformanceFrequency.QuadPart);
      v19 = result + 10000000 * (v17 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    }
    if ( v19 < *(_QWORD *)(v8.QuadPart + 2680) )
      return result;
    v15 = v9;
  }
  v53 = *(_DWORD *)(v8.QuadPart + 4 * v15 + 180);
  v20 = v17 * v53;
  v21 = v20 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v22 = v20 / 0x64;
  v44 = v22;
  if ( !v22 && !a3 )
  {
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      return Template_pqxxxx(
               v12.LowPart,
               DWORD2(v21),
               QuadPart,
               *(_QWORD *)(v8.QuadPart + 16),
               2,
               *(_DWORD *)(a1 + 396),
               v17,
               0,
               0);
    return result;
  }
  if ( is_mul_ok(v22, 0x989680uLL) )
    v23 = v22 * (unsigned __int128)0x989680uLL / QuadPart;
  else
    v23 = 10000000 * (v22 / QuadPart) + 10000000 * (v22 % QuadPart) / QuadPart;
  v24 = *(_QWORD *)(v8.QuadPart + 2672);
  v43 = v23;
  if ( v23 > v24 )
  {
    if ( !a3 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        Template_pqxxxx(
          v24,
          v23,
          QuadPart,
          *(_QWORD *)(v8.QuadPart + 16),
          1,
          *(_DWORD *)(a1 + 396),
          v16.QuadPart,
          v14.QuadPart,
          0);
LABEL_49:
        v25 = a1;
LABEL_74:
        v15 = v9;
        goto LABEL_20;
      }
LABEL_39:
      v25 = a1;
      goto LABEL_20;
    }
    v43 = v24;
    v34 = v24;
    v35 = v24;
    v36 = v24 * QuadPart;
    if ( is_mul_ok(v34, QuadPart) )
    {
      LOBYTE(v23) = v35;
      v22 = v36 / 0x989680;
    }
    else
    {
      LOBYTE(v23) = v43;
      v22 = QuadPart * (v35 / 0x989680) + QuadPart * (v35 % 0x989680) / 0x989680;
      v15 = v9;
    }
    v44 = v22;
  }
  v25 = 0;
  v26 = 0;
  v27 = (1 << *(_DWORD *)(a1 + 396)) - 1;
  if ( !*(_DWORD *)(v8.QuadPart + 60) )
    goto LABEL_20;
  do
  {
    v28 = *(_QWORD *)(v8.QuadPart + 8LL * v26 + 416);
    if ( (v27 & *(_DWORD *)(v28 + 1688)) != 0 || (v27 & *(_DWORD *)(v28 + 1692)) != 0 )
    {
      v48 = (unsigned __int64 *)(v28 + 8 * (v15 + 236));
      v46 = *v48;
      if ( v46 <= v17 * (100 - v53) / 0x64 && !a3 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        {
LABEL_36:
          LOBYTE(v23) = v43;
          goto LABEL_18;
        }
        if ( is_mul_ok(v17, 0x989680uLL) )
          v37 = v17 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v37 = 10000000 * (v17 / QuadPart) + 10000000 * (v17 % QuadPart) / QuadPart;
        if ( is_mul_ok(v46, 0x989680uLL) )
          v38 = v46 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v38 = 10000000 * (v46 / QuadPart) + 10000000 * (v46 % QuadPart) / QuadPart;
        Template_pqxxxx(
          *(unsigned __int16 *)(v28 + 4),
          *(_DWORD *)(a1 + 396),
          v38,
          *(_QWORD *)(v8.QuadPart + 16),
          5,
          *(_DWORD *)(a1 + 396),
          v38,
          *(_WORD *)(v28 + 4),
          v37);
LABEL_68:
        QuadPart = PerformanceFrequency.QuadPart;
        v22 = v44;
        v15 = v47;
        goto LABEL_36;
      }
      v23 = v43;
      v25 = 1;
      *(_BYTE *)(v28 + 1944) = 1;
      *(_QWORD *)(v28 + 1936) = v23;
      *(_QWORD *)(v28 + 1928) = v22;
      *(_QWORD *)(v28 + 1920) = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        if ( is_mul_ok(v17, 0x989680uLL) )
          v40 = v17 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        else
          v40 = 10000000 * (v17 / PerformanceFrequency.QuadPart)
              + 10000000 * (v17 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        v41 = *v48;
        if ( is_mul_ok(*v48, 0x989680uLL) )
        {
          v39 = *v48 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          v41 /= PerformanceFrequency.QuadPart;
          v39 = 10000000 * v41 + 10000000 * (*v48 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        }
        Template_pqxxxx(
          *(unsigned __int16 *)(v28 + 4),
          *(_DWORD *)(a1 + 396),
          v41,
          *(_QWORD *)(v8.QuadPart + 16),
          0,
          *(_DWORD *)(a1 + 396),
          v39,
          *(_WORD *)(v28 + 4),
          v40);
        goto LABEL_68;
      }
      QuadPart = PerformanceFrequency.QuadPart;
    }
LABEL_18:
    ++v26;
  }
  while ( v26 < *(_DWORD *)(v8.QuadPart + 60) );
  v16 = v49;
  v9 = v45;
  if ( v25 )
  {
    v33 = *(_DWORD *)(a1 + 396) - 1;
    *(_DWORD *)(v8.QuadPart + 176) = v33;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_pqx(v33, (unsigned int)&EventYieldStartAdapter, QuadPart, *(_QWORD *)(v8.QuadPart + 16), v33, v23);
      goto LABEL_74;
    }
  }
LABEL_20:
  for ( i = 0; i < *(_DWORD *)(v8.QuadPart + 60); ++i )
  {
    v30 = *(_QWORD *)(v8.QuadPart + 8LL * i + 416);
    *(_QWORD *)(v30 + 8 * v15 + 1856) = 0LL;
    *(_QWORD *)(v30 + 8 * v15 + 1888) = 0LL;
    *(LARGE_INTEGER *)(v30 + 8 * v15 + 1824) = v16;
    v31 = *(_QWORD *)(v30 + 8LL * *(unsigned int *)(v30 + 1552) + 1560);
    if ( v31 && gulPriorityToYieldPriorityBand[*(unsigned int *)(v31 + 396)] >= (int)v9 && v16.QuadPart )
      *(LARGE_INTEGER *)(v30 + 8 * v15 + 1856) = v16;
    if ( v25
      && *(_BYTE *)(v30 + 1944)
      && !*(_QWORD *)(v30 + 1920)
      && v31
      && *(_DWORD *)(v31 + 396) <= *(_DWORD *)(v8.QuadPart + 176) )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v30);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v30,
        (LARGE_INTEGER)v16.QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
      v15 = (int)v9;
    }
  }
  result = (LONGLONG)v50;
  v50[18] = v16;
  return result;
}
