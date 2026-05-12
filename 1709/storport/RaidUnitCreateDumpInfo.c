/*
 * XREFs of RaidUnitCreateDumpInfo @ 0x1C006913C
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0068954 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidUnitFreeDumpInfo @ 0x1C003E4C0 (RaidUnitFreeDumpInfo.c)
 *     RaidUnitCreateDumpData @ 0x1C006901C (RaidUnitCreateDumpData.c)
 */

__int64 __fastcall RaidUnitCreateDumpInfo(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _BYTE *a5)
{
  _BYTE *v5; // r10
  int v6; // esi
  bool v9; // zf
  _QWORD *v10; // rcx
  _QWORD *v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // r8
  _BYTE *Pool; // rax
  char *v15; // rbx
  PVOID v16; // rcx
  int v18; // [rsp+40h] [rbp+8h] BYREF
  int v19; // [rsp+44h] [rbp+Ch]
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v19 = HIDWORD(a1);
  v5 = a5;
  v6 = 0;
  *a4 = 0LL;
  P = 0LL;
  v18 = 0;
  v9 = *(_DWORD *)(a3 + 4) == 1;
  *v5 = 0;
  if ( v9 )
    v10 = (_QWORD *)a2[335];
  else
    v10 = (_QWORD *)a2[336];
  if ( v10 )
    goto LABEL_20;
  v11 = (_QWORD *)(a3 + 24);
  v12 = *(_QWORD **)(a3 + 24);
  if ( v12 == (_QWORD *)(a3 + 24) )
    goto LABEL_11;
  do
  {
    v10 = v12 - 1;
    v13 = v12[2] - a2[215];
    if ( !v13 )
      v13 = v10[4] - a2[216];
    if ( !v13 )
      break;
    v12 = (_QWORD *)*v12;
    v10 = 0LL;
  }
  while ( v12 != v11 );
  if ( v10 )
  {
LABEL_20:
    *a4 = v10;
    *v5 = 1;
  }
  else
  {
LABEL_11:
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x44436152u, a2[1]);
    a5 = Pool;
    v15 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0x48uLL);
      *(_DWORD *)v15 = 72;
      *(_OWORD *)(v15 + 24) = *(_OWORD *)(a2 + 215);
      v6 = RaidUnitCreateDumpData((__int64)a2, &P, &v18);
      if ( v6 < 0 )
      {
        v16 = P;
      }
      else
      {
        *((_DWORD *)v15 + 11) = v18;
        *((_QWORD *)v15 + 6) = P;
        v16 = 0LL;
        *a4 = v15;
        v15 = 0LL;
        a5 = 0LL;
      }
      if ( v16 )
        ExFreePoolWithTag(v16, 0x44436152u);
      if ( v15 )
        RaidUnitFreeDumpInfo((PVOID *)&a5);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
