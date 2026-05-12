/*
 * XREFs of StorPortSetDeviceQueueDepth @ 0x1C00060C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     Template_zqcccqqqt @ 0x1C0035360 (Template_zqcccqqqt.c)
 */

char __fastcall StorPortSetDeviceQueueDepth(__int64 a1, char a2, __int64 a3, char a4, unsigned int a5)
{
  char v5; // bl
  char v7; // si
  __int64 v9; // rcx
  __int64 Unit; // rax
  __int64 v11; // rcx
  int v12; // r8d
  unsigned int v14; // eax
  unsigned int v15; // [rsp+70h] [rbp+8h]

  v5 = 0;
  v7 = a3;
  v9 = **(_QWORD **)(a1 - 16);
  if ( !v9 )
    return 0;
  LOBYTE(v15) = a2;
  BYTE1(v15) = a3;
  BYTE2(v15) = a4;
  Unit = RaidAdapterFindUnit(v9, v15, a3);
  v11 = Unit;
  if ( !Unit || a5 > *(_DWORD *)(Unit + 544) )
    return 0;
  v12 = *(_DWORD *)(Unit + 404);
  if ( v12 == a5 )
    return 1;
  v14 = *(_DWORD *)(Unit + 404);
  if ( a5 )
  {
    *(_DWORD *)(v11 + 404) = a5;
    v14 = a5;
  }
  if ( v14 == a5 )
  {
    v5 = 1;
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
      Template_zqcccqqqt(
        *(_DWORD *)(*(_QWORD *)(v11 + 24) + 56LL),
        a5,
        v12,
        *(_QWORD *)(*(_QWORD *)(v11 + 24) + 48LL),
        *(_DWORD *)(*(_QWORD *)(v11 + 24) + 56LL),
        a2,
        v7,
        a4,
        v12,
        a5,
        *(_DWORD *)(v11 + 544),
        1);
  }
  return v5;
}
