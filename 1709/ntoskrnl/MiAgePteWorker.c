/*
 * XREFs of MiAgePteWorker @ 0x14021CBF0
 * Callers:
 *     MiAgeWorkingSetEPTCallback @ 0x14021CDF0 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x14021E290 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x14021E420 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiFlushTbListEarly @ 0x1400E94BC (MiFlushTbListEarly.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiLockSetPfnPriority @ 0x14011AF94 (MiLockSetPfnPriority.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 */

char __fastcall MiAgePteWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, int *a5, char a6)
{
  char VaAge; // al
  char v11; // di
  __int64 v12; // rcx
  int *v13; // rbx
  BOOL v14; // eax
  int v15; // eax
  unsigned int PfnPriority; // eax
  unsigned __int8 v17; // r8
  unsigned int v18; // r14d
  unsigned __int64 v19; // rcx
  unsigned __int8 v20; // r9

  VaAge = MiGetVaAge(a1, a3);
  v11 = VaAge;
  if ( (a6 & 1) != 0 )
  {
    if ( (unsigned __int8)(VaAge - 1) <= 5u )
    {
      v11 = 0;
      MiSetVaAge(a1, a3, 0);
    }
    if ( v11 != 7 && (unsigned int)MiGetPfnPriority(a4) < 5 )
      MiLockSetPfnPriority(v12, 5);
    v13 = 0LL;
    v14 = 0;
    if ( (a6 & 2) != 0 )
      v13 = (int *)*((_QWORD *)a5 + 8);
    else
      v14 = (a6 & 4) != 0;
    v15 = MiClearPteAccessed(a1, a4, a2, v13, dword_140388C68, v14);
    if ( v15 )
      ++*((_QWORD *)a5 + 4);
    if ( v13 )
      LOBYTE(v15) = MiFlushTbListEarly((__int64)v13, 0LL);
    return v15;
  }
  PfnPriority = MiGetPfnPriority(a4);
  v17 = 6;
  v18 = PfnPriority;
  if ( (unsigned __int8)v11 < 6u )
  {
    if ( PfnPriority < 5 )
    {
LABEL_18:
      MiSetVaAge(a1, a3, v17);
      ++*((_QWORD *)a5 + 3);
      goto LABEL_19;
    }
    if ( (*a5 & 1) != 0 )
    {
      v17 = v11 + 1;
      goto LABEL_18;
    }
  }
LABEL_19:
  v19 = *(_QWORD *)(a4 + 40);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 3
    && (v19 >>= 54, LOBYTE(v19) = v19 & 7, (_BYTE)v19 == 4)
    && (v19 = 0x3FFFFFFFFFFFFFFFLL, (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1)
    && *(_WORD *)(a4 + 32) == 1
    || (v15 = *a5, (*a5 & 3) != 0) && ((LOBYTE(v15) = MiGetVaAge(v19, a3), (unsigned __int8)v15 >= v20) || v18 < a5[2]) )
  {
    ++*((_QWORD *)a5 + 5);
    MiInsertTbFlushEntry(a5 + 18, a3, 1LL, 0);
    v15 = a5[20];
    if ( a5[21] == v15 )
    {
      LOBYTE(v15) = MiFreeWsleList(a1, (__int64)(a5 + 18), 0);
      a5[21] = 0;
    }
  }
  return v15;
}
