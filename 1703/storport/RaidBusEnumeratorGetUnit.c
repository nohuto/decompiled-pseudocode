/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x1C00151E4
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014154 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0014390 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014530 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00152E4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidAdapterInsertUnit @ 0x1C001547C (RaidAdapterInsertUnit.c)
 *     RaidAdapterFindZombieUnit @ 0x1C0015610 (RaidAdapterFindZombieUnit.c)
 *     RaidCreateUnit @ 0x1C0016ED0 (RaidCreateUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C001AF68 (RaUnitSetQueueDepth.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Unit; // rdi
  __int64 ZombieUnit; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 1;
  result = RaidBusEnumeratorAllocateUnitResources(a1, a1 + 1, 0LL);
  if ( (int)result >= 0 )
  {
    Unit = RaidAdapterFindUnit(*a1, a2, v8, v9);
    if ( Unit )
      goto LABEL_7;
    ZombieUnit = RaidAdapterFindZombieUnit(*a1, a2);
    v15 = ZombieUnit;
    if ( ZombieUnit )
    {
      Unit = ZombieUnit & -(__int64)((*(_BYTE *)(ZombieUnit + 152) & 4) != 0);
      v15 = Unit;
      if ( Unit )
        goto LABEL_7;
    }
    Unit = v3[6];
    v12 = *a1;
    if ( Unit )
    {
      RaUnitSetQueueDepth(
        v3[6],
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 516LL),
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 512LL));
LABEL_6:
      v13 = *(_QWORD *)(Unit + 24);
      *(_DWORD *)(Unit + 88) = a2;
      *(_WORD *)(Unit + 80) = 1;
      *(_DWORD *)(Unit + 84) = 4;
      *(_WORD *)(Unit + 82) = *(_WORD *)(v13 + 56);
      RaidAdapterInsertUnit(v12, Unit);
      *(_BYTE *)(a3 + 92) = 1;
LABEL_7:
      *(_QWORD *)(a3 + 8) = Unit;
      v14 = *(_DWORD *)(Unit + 88);
      *(_DWORD *)(a3 + 88) = 0;
      *(_DWORD *)(a3 + 1) = v14;
      return 0LL;
    }
    result = RaidCreateUnit(v12, &v15);
    if ( (int)result >= 0 )
    {
      Unit = v15;
      v3[6] = v15;
      *(_BYTE *)(Unit + 152) |= 8u;
      *(_BYTE *)(Unit + 437) = 0;
      goto LABEL_6;
    }
  }
  return result;
}
