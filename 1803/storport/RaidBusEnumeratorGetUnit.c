/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x1C0014224
 * Callers:
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000D948 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0012FEC (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00134B0 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C00121BC (RaUnitSetQueueDepth.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C001432C (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidAdapterInsertUnit @ 0x1C0014750 (RaidAdapterInsertUnit.c)
 *     RaidAdapterFindZombieUnit @ 0x1C00148E4 (RaidAdapterFindZombieUnit.c)
 *     RaidCreateUnit @ 0x1C0014F78 (RaidCreateUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Unit; // rdi
  int v11; // eax
  __int64 ZombieUnit; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 1;
  result = RaidBusEnumeratorAllocateUnitResources(a1, a1 + 1, 0LL);
  if ( (int)result >= 0 )
  {
    Unit = RaidAdapterFindUnit(*a1, a2, v8, v9);
    if ( Unit )
      goto LABEL_3;
    ZombieUnit = RaidAdapterFindZombieUnit(*a1, a2);
    v15 = ZombieUnit;
    if ( ZombieUnit )
    {
      Unit = ZombieUnit & -(__int64)((*(_BYTE *)(ZombieUnit + 152) & 4) != 0);
      v15 = Unit;
      if ( Unit )
        goto LABEL_3;
    }
    Unit = v3[6];
    v13 = *a1;
    if ( Unit )
    {
      RaUnitSetQueueDepth(
        v3[6],
        *(_DWORD *)(*(_QWORD *)(Unit + 24) + 516LL),
        *(_DWORD *)(*(_QWORD *)(Unit + 24) + 512LL));
LABEL_8:
      v14 = *(_QWORD *)(Unit + 24);
      *(_DWORD *)(Unit + 88) = a2;
      *(_WORD *)(Unit + 80) = 1;
      *(_DWORD *)(Unit + 84) = 4;
      *(_WORD *)(Unit + 82) = *(_WORD *)(v14 + 56);
      RaidAdapterInsertUnit(v13, Unit);
      *(_BYTE *)(a3 + 92) = 1;
LABEL_3:
      *(_QWORD *)(a3 + 8) = Unit;
      v11 = *(_DWORD *)(Unit + 88);
      *(_DWORD *)(a3 + 88) = 0;
      *(_DWORD *)(a3 + 1) = v11;
      return 0LL;
    }
    result = RaidCreateUnit(v13, &v15);
    if ( (int)result >= 0 )
    {
      Unit = v15;
      v3[6] = v15;
      *(_BYTE *)(Unit + 152) |= 8u;
      *(_BYTE *)(Unit + 437) = 0;
      goto LABEL_8;
    }
  }
  return result;
}
