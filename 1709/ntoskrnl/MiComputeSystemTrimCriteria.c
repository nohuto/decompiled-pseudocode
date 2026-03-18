/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x1400F4B60
 * Callers:
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1400F4ED4 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     MiComputeAgeDistribution @ 0x1400F506C (MiComputeAgeDistribution.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiPulseLowAvailableEvent @ 0x1402304AC (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // rsi
  __int64 v7; // rcx
  unsigned int StandbyRepurposed; // eax
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // r11d
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // r10d
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r10d
  int v23; // r11d
  int v24; // r13d
  unsigned int v25; // ecx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // di
  unsigned __int64 v30; // r12
  char v31; // al
  unsigned __int16 v32; // ax
  __int64 v33; // rax
  __int16 v35; // ax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // [rsp+60h] [rbp+8h]
  unsigned int v44; // [rsp+70h] [rbp+18h]
  unsigned __int64 v45; // [rsp+78h] [rbp+20h]

  v2 = a1[710];
  v43 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  StandbyRepurposed = MiGetStandbyRepurposed(v7, 1LL);
  v9 = *(_DWORD *)(v2 + 44);
  v10 = *(_QWORD *)(v2 + 2408);
  *(_DWORD *)(v2 + 44) = StandbyRepurposed;
  v11 = v9 < StandbyRepurposed ? StandbyRepurposed - v9 : 0;
  v44 = v11;
  if ( AvailablePagesBelowPriority <= v10 )
    v12 = v10 - AvailablePagesBelowPriority;
  else
    v12 = AvailablePagesBelowPriority - v10;
  v13 = *(_DWORD *)(v2 + 128) & 7;
  v14 = 0;
  v15 = 0LL;
  *(_QWORD *)(v2 + 2208) += (v12 >> 3) - (*(_QWORD *)(v2 + 8 * v13 + 2216) >> 3);
  *(_QWORD *)(v2 + 8 * v13 + 2216) = v12;
  if ( *(_DWORD *)(v2 + 88) == 4 && *(_WORD *)(v2 + 2356) && *(_BYTE *)(v2 + 2358) && *(_BYTE *)(v2 + 2359) )
  {
    v16 = *(_QWORD *)(v2 + 2408);
    v19 = 1;
    v18 = v16;
    v17 = 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(v2 + 2408);
    v17 = AvailablePagesBelowPriority - *(_QWORD *)(v2 + 2376);
    v18 = v16 >> 2;
    v19 = 0;
  }
  if ( AvailablePagesBelowPriority < v18
    || AvailablePagesBelowPriority < 4 * v16 && v17 < 0 && AvailablePagesBelowPriority < v16 - v17 )
  {
    v14 = 1;
    v15 = v16 - v17 - AvailablePagesBelowPriority;
    if ( v15 > *(_QWORD *)(v2 + 2392) )
      v15 = *(_QWORD *)(v2 + 2392);
  }
  v45 = v11;
  if ( v11 >= AvailablePagesBelowPriority >> 2 )
  {
    v37 = v11 - (AvailablePagesBelowPriority >> 2);
    if ( v37 > v15 && v15 < 0x2000 && !v19 )
    {
      v15 = v11 - (AvailablePagesBelowPriority >> 2);
      v14 = 3;
      if ( v37 > 0x2000 )
        v15 = 0x2000LL;
    }
  }
  v20 = MiGetStandbyRepurposed(a1, 4LL);
  v24 = v20;
  if ( v15 )
  {
    if ( v15 < 0x1000 && !v22 )
      v15 = 4096LL;
  }
  else if ( !v22 )
  {
    v25 = v20 - *(_DWORD *)(v2 + 48);
    if ( v25 > 0x20000 )
    {
      v36 = a1[744];
      if ( v36 >= 0x100000 || v36 >= a1[722] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v20;
      }
      else
      {
        v15 = 0x8000LL;
        v14 = 2;
      }
    }
    else if ( v23 && v25 > 0x18000 && *(_QWORD *)(v2 + 2416) < 0x20000uLL )
    {
      v43 = 1;
    }
  }
  v26 = *(_QWORD *)(v2 + 2408);
  if ( AvailablePagesBelowPriority < 4 * v26 )
  {
    v21 = *(_QWORD *)(v2 + 2208);
    v38 = 4 * v21;
    if ( 4 * v21 >= v26 )
    {
      v40 = 2 * v21;
      if ( 2 * v21 <= v26 )
        goto LABEL_15;
      v39 = *(_QWORD *)(v2 + 2392);
      *(_QWORD *)(v2 + 2408) = v40;
      if ( v40 <= v39 )
        goto LABEL_15;
    }
    else
    {
      v39 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2408) = v38;
      if ( v38 >= v39 )
        goto LABEL_15;
    }
    *(_QWORD *)(v2 + 2408) = v39;
    goto LABEL_15;
  }
  if ( AvailablePagesBelowPriority > 16 * v26 )
    *(_QWORD *)(v2 + 2408) = *(_QWORD *)(v2 + 2400);
LABEL_15:
  v27 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 2376) = AvailablePagesBelowPriority;
  if ( v27 && v15 < v27 )
  {
    v15 = v27;
    v14 = 5;
  }
  if ( !v15 )
  {
    v28 = *(_QWORD *)(v2 + 2368);
    v29 = 0;
    if ( v28 )
    {
      if ( v28 > *(_QWORD *)(v2 + 2416) )
      {
        v30 = v45;
        v29 = 11;
        if ( *(_WORD *)(v2 + 2354) < 0xFAu )
          *(_WORD *)(v2 + 2354) = 250;
        goto LABEL_24;
      }
      *(_QWORD *)(v2 + 2368) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2416) >= (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2392)) )
      goto LABEL_43;
    if ( !*(_WORD *)(v2 + 2354) )
      goto LABEL_20;
    v35 = MiComputeAgeDistribution(a1, 1LL, 0LL);
    *(_WORD *)(v2 + 2354) = v35;
    if ( v35 )
      v29 = 12;
    if ( v29 )
    {
LABEL_43:
      v30 = v45;
    }
    else
    {
LABEL_20:
      v30 = v45;
      if ( v45 >= AvailablePagesBelowPriority >> 4 )
      {
        v29 = 10;
      }
      else
      {
        v31 = v29;
        if ( v43 == 1 )
          v31 = 9;
        v29 = v31;
      }
    }
LABEL_24:
    v32 = *(_WORD *)(v2 + 2356);
    if ( v32 )
    {
      if ( *(_WORD *)(v2 + 2354) < v32 )
        *(_WORD *)(v2 + 2354) = v32;
      if ( !v29 )
      {
        v29 = 13;
        *(_WORD *)(v2 + 2354) = v32;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    v33 = a1[744];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_QWORD *)(a2 + 72) = v33;
    *(_BYTE *)(a2 + 2) = v29;
    memset((void *)(a2 + 8), 0, 0x40uLL);
    if ( v29 )
    {
      ++*(_DWORD *)(v2 + 4LL * v29 + 2496);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) == 1 )
    {
      v5 |= 0x80u;
      *(_WORD *)(v2 + 2354) = 10;
    }
    else if ( !v5 )
    {
      v5 = 64;
    }
    goto LABEL_29;
  }
  MiPulseLowAvailableEvent(a1, v21, 0LL);
  if ( (unsigned __int8)(v14 - 2) <= 1u )
    *(_QWORD *)(v2 + 2368) = v15;
  *(_QWORD *)(a2 + 80) = v15;
  *(_BYTE *)a2 = 0;
  v5 |= 1u;
  *(_QWORD *)(a2 + 96) = 0LL;
  v41 = a1[744];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v15 + v41;
  *(_BYTE *)(a2 + 2) = v14;
  memset((void *)(a2 + 8), 0, 0x40uLL);
  v42 = v14;
  v30 = v45;
  *(_DWORD *)(v2 + 48) = v24;
  ++*(_DWORD *)(v2 + 4 * v42 + 2496);
LABEL_29:
  if ( AvailablePagesBelowPriority && v30 < AvailablePagesBelowPriority )
    *(_BYTE *)(a2 + 3) = 100 * v44 / AvailablePagesBelowPriority;
  else
    *(_BYTE *)(a2 + 3) = 100;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  return v5;
}
