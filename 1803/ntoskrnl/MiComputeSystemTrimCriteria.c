/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x140081620
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1400819A0 (MiGetStandbyRepurposed.c)
 *     MiComputeAgeDistribution @ 0x1400819D4 (MiComputeAgeDistribution.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiPulseLowAvailableEvent @ 0x14026B7C0 (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // rsi
  unsigned int StandbyRepurposed; // eax
  int v8; // r11d
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // r9d
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // rdi
  int v16; // edx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // r10
  int v24; // r11d
  int v25; // r13d
  unsigned int v26; // ecx
  _QWORD *v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // di
  char v31; // al
  unsigned __int16 v32; // ax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int16 v36; // ax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  int v46; // [rsp+70h] [rbp+18h]
  unsigned int v47; // [rsp+78h] [rbp+20h]

  v2 = a1[846];
  v46 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  StandbyRepurposed = MiGetStandbyRepurposed(a1, 1LL);
  v9 = *(_DWORD *)(v2 + 44);
  v10 = *(_QWORD *)(v2 + 2408);
  *(_DWORD *)(v2 + 44) = StandbyRepurposed;
  v11 = v9 < StandbyRepurposed ? StandbyRepurposed - v9 : 0;
  v47 = v11;
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
    v16 = v8;
  }
  else
  {
    v16 = 1;
    v8 = AvailablePagesBelowPriority <= 0x120;
  }
  v17 = *(_QWORD *)(v2 + 2408);
  v18 = v17;
  if ( v8 == v16 )
  {
    v19 = 0LL;
  }
  else
  {
    v8 = 0;
    v19 = AvailablePagesBelowPriority - *(_QWORD *)(v2 + 2376);
    v18 = v17 >> 2;
  }
  if ( AvailablePagesBelowPriority < v18 )
  {
    v37 = v17 - v19;
  }
  else
  {
    if ( AvailablePagesBelowPriority >= 4 * v17 )
      goto LABEL_9;
    if ( v19 >= 0 )
      goto LABEL_9;
    v37 = v17 - v19;
    if ( AvailablePagesBelowPriority >= v17 - v19 )
      goto LABEL_9;
  }
  v15 = *(_QWORD *)(v2 + 2392);
  v38 = v37 - AvailablePagesBelowPriority;
  v14 = v16;
  if ( v38 <= v15 )
    v15 = v38;
LABEL_9:
  v20 = v11;
  v21 = AvailablePagesBelowPriority >> 2;
  if ( v11 >= AvailablePagesBelowPriority >> 2 && v11 - v21 > v15 && v15 < 0x2000 && !v8 )
  {
    v15 = v11 - v21;
    v14 = 3;
    if ( v15 > 0x2000 )
      v15 = 0x2000LL;
  }
  v22 = MiGetStandbyRepurposed(a1, 4LL);
  v25 = v22;
  if ( v15 )
  {
    v27 = a1;
    if ( v15 < 0x1000 && !v24 )
      v15 = 4096LL;
  }
  else
  {
    if ( v24 )
      goto LABEL_14;
    v26 = v22 - *(_DWORD *)(v2 + 48);
    if ( v26 > 0x20000 )
    {
      v27 = a1;
      v39 = a1[880];
      if ( v39 >= 0x100000 || v39 >= a1[858] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v22;
      }
      else
      {
        v15 = 0x8000LL;
        v14 = 2;
      }
      goto LABEL_15;
    }
    if ( !v47 || v26 <= 0x18000 )
    {
LABEL_14:
      v27 = a1;
      goto LABEL_15;
    }
    v27 = a1;
    if ( *(_QWORD *)(v2 + 2416) < 0x20000uLL )
      v46 = 1;
  }
LABEL_15:
  if ( AvailablePagesBelowPriority < 4 * v23 )
  {
    v40 = *(_QWORD *)(v2 + 2208);
    v41 = 4 * v40;
    if ( 4 * v40 >= v23 )
    {
      v43 = 2 * v40;
      if ( 2 * v40 <= v23 )
        goto LABEL_18;
      v42 = *(_QWORD *)(v2 + 2392);
      *(_QWORD *)(v2 + 2408) = v43;
      if ( v43 <= v42 )
        goto LABEL_18;
    }
    else
    {
      v42 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2408) = v41;
      if ( v41 >= v42 )
        goto LABEL_18;
    }
    *(_QWORD *)(v2 + 2408) = v42;
    goto LABEL_18;
  }
  if ( AvailablePagesBelowPriority > 16 * v23 )
    *(_QWORD *)(v2 + 2408) = *(_QWORD *)(v2 + 2400);
LABEL_18:
  v28 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 2376) = AvailablePagesBelowPriority;
  if ( v28 && v15 < v28 )
  {
    v15 = v28;
    v14 = 5;
  }
  if ( !v15 )
  {
    v29 = *(_QWORD *)(v2 + 2368);
    v30 = 0;
    if ( v29 )
    {
      if ( v29 > *(_QWORD *)(v2 + 2416) )
      {
        v30 = 11;
        if ( *(_WORD *)(v2 + 2354) < 0xFAu )
          *(_WORD *)(v2 + 2354) = 250;
        goto LABEL_27;
      }
      *(_QWORD *)(v2 + 2368) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2416) < (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2392)) )
    {
      if ( !*(_WORD *)(v2 + 2354) )
        goto LABEL_23;
      v36 = MiComputeAgeDistribution(v27, 1LL);
      *(_WORD *)(v2 + 2354) = v36;
      if ( v36 )
        v30 = 12;
      if ( !v30 )
      {
LABEL_23:
        if ( v20 >= AvailablePagesBelowPriority >> 4 )
        {
          v30 = 10;
        }
        else
        {
          v31 = v30;
          if ( v46 == 1 )
            v31 = 9;
          v30 = v31;
        }
      }
    }
LABEL_27:
    v32 = *(_WORD *)(v2 + 2356);
    if ( v32 )
    {
      if ( *(_WORD *)(v2 + 2354) < v32 )
        *(_WORD *)(v2 + 2354) = v32;
      if ( !v30 )
      {
        v30 = 13;
        *(_WORD *)(v2 + 2354) = v32;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    v33 = a1[880];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_QWORD *)(a2 + 72) = v33;
    *(_BYTE *)(a2 + 2) = v30;
    memset((void *)(a2 + 8), 0, 0x40uLL);
    if ( v30 )
    {
      ++*(_DWORD *)(v2 + 4LL * v30 + 2496);
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
    goto LABEL_32;
  }
  MiPulseLowAvailableEvent(v27, 0LL);
  if ( (unsigned __int8)(v14 - 2) <= 1u )
    *(_QWORD *)(v2 + 2368) = v15;
  v5 |= 1u;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 80) = v15;
  v44 = a1[880];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v15 + v44;
  *(_BYTE *)(a2 + 2) = v14;
  memset((void *)(a2 + 8), 0, 0x40uLL);
  *(_DWORD *)(v2 + 48) = v25;
  ++*(_DWORD *)(v2 + 4LL * v14 + 2496);
LABEL_32:
  if ( AvailablePagesBelowPriority && v47 < AvailablePagesBelowPriority )
    v34 = 100 * v47 / AvailablePagesBelowPriority;
  else
    LOBYTE(v34) = 100;
  *(_BYTE *)(a2 + 3) = v34;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  return v5;
}
