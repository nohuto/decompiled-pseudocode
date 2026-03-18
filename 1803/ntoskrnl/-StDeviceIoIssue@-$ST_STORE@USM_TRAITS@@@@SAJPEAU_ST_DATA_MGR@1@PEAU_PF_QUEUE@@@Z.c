/*
 * XREFs of ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1402A3F2C
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402A48D4 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x1402A5BA0 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     StEtaIoStart @ 0x1402A682C (StEtaIoStart.c)
 *     SmIssueIo @ 0x1402A8E14 (SmIssueIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDeviceIoIssue(__int64 a1, __int64 *a2)
{
  int v4; // r8d
  __int64 *v5; // rdx
  unsigned __int64 v6; // rdi
  int *v7; // rsi
  unsigned int v8; // r13d
  unsigned int *v9; // r15
  int v10; // ebp
  unsigned int v11; // r13d
  int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  unsigned __int64 v16; // rax

  v4 = -2147483634;
  while ( 1 )
  {
    v5 = (__int64 *)a2[1];
    if ( v5 == a2 )
      break;
    v6 = *a2;
    *a2 = *(_QWORD *)*a2 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (__int64 *)v6 == v5 )
    {
      *a2 = 0LL;
      a2[1] = (__int64)a2;
    }
    else
    {
      *v5 = *v5 & 7 | (8 * ((unsigned __int64)*v5 >> 3) - 8);
    }
    v7 = (int *)(v6 + 8);
    v8 = *(_DWORD *)(v6 + 24);
    v9 = *(unsigned int **)(v6 + 16);
    v10 = 16 * (v8 & *(_DWORD *)(a1 + 808));
    v11 = v8 >> *(_DWORD *)(a1 + 812);
    v12 = ~(*(_DWORD *)(a1 + 792) - 1) & v10;
    v13 = *(_DWORD *)(v6 + 28);
    v14 = v13;
    v15 = v13 >> 5;
    if ( *(_QWORD *)(a1 + 1816) && (v13 & 4) == 0 )
    {
      *(LARGE_INTEGER *)(v9 + 1) = KeQueryPerformanceCounter(0LL);
      v14 = *(_DWORD *)(v6 + 28);
    }
    StEtaIoStart(*(_QWORD *)(a1 + 1000), v15, 0LL, (unsigned __int64)v7 | ((unsigned __int64)v14 >> 3) & 1);
    *(_DWORD *)(v6 + 28) |= 8u;
    v4 = SmIssueIo(
           *(_QWORD *)(a1 + 800),
           v11,
           v12,
           v15,
           ~(*(unsigned int *)(a1 + 792) - 1LL) & ((unsigned __int64)&v9[4 * *v9 + 2] + *(unsigned int *)(a1 + 792) + 3),
           v6 | 1);
    if ( v4 < 0 )
    {
      *(_DWORD *)(v6 + 28) |= 1u;
      v16 = *(_QWORD *)(v6 + 16);
      if ( v16 )
        *(_DWORD *)(v16 + 4) = v4;
      else
        *v7 = v4;
      *(_QWORD *)v6 = *(_DWORD *)v6 & 7 | ((*(_QWORD *)a2[1] & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      *(_QWORD *)a2[1] = v6 | *(_DWORD *)a2[1] & 7;
      a2[1] = v6;
      return (unsigned int)v4;
    }
  }
  return (unsigned int)v4;
}
