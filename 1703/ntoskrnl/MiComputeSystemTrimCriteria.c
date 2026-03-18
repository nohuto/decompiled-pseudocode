/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x140083750
 * Callers:
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiComputeAgeDistribution @ 0x14001BEA0 (MiComputeAgeDistribution.c)
 *     MiGetStandbyRepurposed @ 0x140083AB0 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiPulseLowAvailableEvent @ 0x14021FB98 (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // rsi
  unsigned int StandbyRepurposed; // eax
  int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // r11d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned __int64 v20; // rdx
  int v21; // r10d
  int v22; // r11d
  int v23; // r13d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // di
  unsigned __int64 v28; // r12
  char v29; // al
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  __int16 v33; // ax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+60h] [rbp+8h]
  unsigned int v43; // [rsp+70h] [rbp+18h]
  unsigned __int64 v44; // [rsp+78h] [rbp+20h]

  v2 = a1[693];
  v42 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  StandbyRepurposed = MiGetStandbyRepurposed(a1, 1LL);
  v9 = *(_DWORD *)(v2 + 44);
  if ( StandbyRepurposed > v9 )
    v10 = StandbyRepurposed - v9;
  else
    v10 = 0;
  v11 = *(_QWORD *)(v2 + 2408);
  v43 = v10;
  *(_DWORD *)(v2 + 44) = StandbyRepurposed;
  if ( AvailablePagesBelowPriority <= v11 )
    v12 = v11 - AvailablePagesBelowPriority;
  else
    v12 = AvailablePagesBelowPriority - v11;
  v13 = *(_DWORD *)(v2 + 128) & 7;
  v14 = 0;
  v15 = 0LL;
  *(_QWORD *)(v2 + 2208) += (v12 >> 3) - (*(_QWORD *)(v2 + 8 * v13 + 2216) >> 3);
  *(_QWORD *)(v2 + 8 * v13 + 2216) = v12;
  if ( *(_DWORD *)(v2 + 88) == 4 && *(_WORD *)(v2 + 2356) && *(_BYTE *)(v2 + 2358) && *(_BYTE *)(v2 + 2359) )
  {
    v16 = *(_QWORD *)(v2 + 2408);
    v17 = 0LL;
    v18 = v16;
  }
  else
  {
    v16 = *(_QWORD *)(v2 + 2408);
    v17 = AvailablePagesBelowPriority - *(_QWORD *)(v2 + 2376);
    v18 = v16 >> 2;
    v8 = 0;
  }
  if ( AvailablePagesBelowPriority < v18
    || AvailablePagesBelowPriority < 4 * v16 && v17 < 0 && AvailablePagesBelowPriority < v16 - v17 )
  {
    v14 = 1;
    v15 = v16 - v17 - AvailablePagesBelowPriority;
    if ( v15 > *(_QWORD *)(v2 + 2392) )
      v15 = *(_QWORD *)(v2 + 2392);
  }
  v44 = v10;
  if ( v10 >= AvailablePagesBelowPriority >> 2 )
  {
    v35 = v10 - (AvailablePagesBelowPriority >> 2);
    if ( v35 > v15 && v15 < 0x2000 && !v8 )
    {
      v15 = v10 - (AvailablePagesBelowPriority >> 2);
      v14 = 3;
      if ( v35 > 0x2000 )
        v15 = 0x2000LL;
    }
  }
  v19 = MiGetStandbyRepurposed(a1, 4LL);
  v23 = v19;
  if ( v15 )
  {
    if ( v15 < 0x1000 && !v21 )
      v15 = 4096LL;
  }
  else if ( !v21 )
  {
    v24 = v19 - *(_DWORD *)(v2 + 48);
    if ( v24 > 0x20000 )
    {
      v34 = a1[720];
      if ( v34 >= 0x100000 || v34 >= a1[698] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v19;
      }
      else
      {
        v15 = 0x8000LL;
        v14 = 2;
      }
    }
    else if ( v22 && v24 > 0x18000 && *(_QWORD *)(v2 + 2416) < 0x20000uLL )
    {
      v42 = 1;
    }
  }
  if ( AvailablePagesBelowPriority < 4LL * *(_QWORD *)(v2 + 2408) )
  {
    v36 = *(_QWORD *)(v2 + 2208);
    v20 = *(_QWORD *)(v2 + 2408);
    v37 = 4 * v36;
    if ( 4 * v36 >= v20 )
    {
      v39 = 2 * v36;
      if ( 2 * v36 <= v20 )
        goto LABEL_17;
      v38 = *(_QWORD *)(v2 + 2392);
      *(_QWORD *)(v2 + 2408) = v39;
      if ( v39 <= v38 )
        goto LABEL_17;
    }
    else
    {
      v38 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2408) = v37;
      if ( v37 >= v38 )
        goto LABEL_17;
    }
    *(_QWORD *)(v2 + 2408) = v38;
    goto LABEL_17;
  }
  if ( AvailablePagesBelowPriority > 16LL * *(_QWORD *)(v2 + 2408) )
    *(_QWORD *)(v2 + 2408) = *(_QWORD *)(v2 + 2400);
LABEL_17:
  v25 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 2376) = AvailablePagesBelowPriority;
  if ( v25 && v15 < v25 )
  {
    v15 = v25;
    v14 = 5;
  }
  if ( !v15 )
  {
    v26 = *(_QWORD *)(v2 + 2368);
    v27 = 0;
    if ( v26 )
    {
      if ( v26 > *(_QWORD *)(v2 + 2416) )
      {
        v28 = v44;
        v27 = 11;
        if ( *(_WORD *)(v2 + 2354) < 0xFAu )
          *(_WORD *)(v2 + 2354) = 250;
        goto LABEL_26;
      }
      *(_QWORD *)(v2 + 2368) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2416) >= (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2392)) )
      goto LABEL_49;
    if ( !*(_WORD *)(v2 + 2354) )
      goto LABEL_22;
    v33 = MiComputeAgeDistribution((__int64)a1, 1);
    v27 = 0;
    *(_WORD *)(v2 + 2354) = v33;
    if ( v33 )
      v27 = 12;
    if ( v27 )
    {
LABEL_49:
      v28 = v44;
    }
    else
    {
LABEL_22:
      v28 = v44;
      if ( v44 >= AvailablePagesBelowPriority >> 4 )
      {
        v27 = 10;
      }
      else
      {
        v29 = v27;
        if ( v42 == 1 )
          v29 = 9;
        v27 = v29;
      }
    }
LABEL_26:
    v30 = *(_WORD *)(v2 + 2356);
    if ( v30 )
    {
      if ( *(_WORD *)(v2 + 2354) < v30 )
        *(_WORD *)(v2 + 2354) = v30;
      if ( !v27 )
      {
        v27 = 13;
        *(_WORD *)(v2 + 2354) = v30;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    v31 = a1[720];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_QWORD *)(a2 + 72) = v31;
    *(_BYTE *)(a2 + 2) = v27;
    memset((void *)(a2 + 8), 0, 0x40uLL);
    if ( v27 )
    {
      ++*(_DWORD *)(v2 + 4LL * v27 + 2488);
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
    goto LABEL_33;
  }
  MiPulseLowAvailableEvent(a1, v20, 0LL);
  if ( (unsigned __int8)(v14 - 2) <= 1u )
    *(_QWORD *)(v2 + 2368) = v15;
  *(_QWORD *)(a2 + 80) = v15;
  *(_BYTE *)a2 = 0;
  v5 |= 1u;
  *(_QWORD *)(a2 + 96) = 0LL;
  v40 = a1[720];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v15 + v40;
  *(_BYTE *)(a2 + 2) = v14;
  memset((void *)(a2 + 8), 0, 0x40uLL);
  v41 = v14;
  v28 = v44;
  *(_DWORD *)(v2 + 48) = v23;
  ++*(_DWORD *)(v2 + 4 * v41 + 2488);
LABEL_33:
  if ( AvailablePagesBelowPriority && v28 < AvailablePagesBelowPriority )
    *(_BYTE *)(a2 + 3) = 100 * v43 / AvailablePagesBelowPriority;
  else
    *(_BYTE *)(a2 + 3) = 100;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  return v5;
}
