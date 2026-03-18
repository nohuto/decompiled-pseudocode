/*
 * XREFs of IopQueryConflictListInternal @ 0x1406D68B4
 * Callers:
 *     IopQueryConflictList @ 0x1406D681C (IopQueryConflictList.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopResourceRequirementsListToReqList @ 0x1405596CC (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x14055A158 (IopCallArbiter.c)
 *     IopFreeReqList @ 0x14058F240 (IopFreeReqList.c)
 *     PnpCmResourcesToIoResources @ 0x1405D2108 (PnpCmResourcesToIoResources.c)
 *     IopQueryConflictFillConflicts @ 0x1406D62F0 (IopQueryConflictFillConflicts.c)
 */

__int64 __fastcall IopQueryConflictListInternal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  __int64 v7; // r8
  unsigned int ConflictFillConflicts; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  char *v12; // rsi
  int v13; // eax
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  unsigned int v22; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  PVOID v24; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v25[8]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v26[4]; // [rsp+90h] [rbp-9h] BYREF

  v24 = 0LL;
  a4[2] = 0;
  a4[3] = 0;
  a4[4] = 32;
  if ( a1 )
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( !v7 )
    return (unsigned int)-1073741810;
  if ( *(_BYTE *)(a2 + 20) != 1 )
  {
    if ( *(_BYTE *)(a2 + 20) == 2 )
      goto LABEL_14;
    if ( *(_BYTE *)(a2 + 20) != 3 )
    {
      if ( *(_BYTE *)(a2 + 20) == 4 )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 20) != 7 )
        return (unsigned int)-1073741811;
    }
  }
  if ( !*(_DWORD *)(a2 + 32) )
    return 0;
LABEL_14:
  v9 = *(_DWORD *)(v7 + 456);
  v10 = *(_QWORD *)(v7 + 440);
  if ( v9 == -1 )
  {
    if ( !v10 || (v9 = *(_DWORD *)(v10 + 4), v9 == -1) )
      v9 = PnpDefaultInterfaceType;
  }
  *(_DWORD *)(a2 + 4) = v9;
  if ( v9 == 8 )
    *(_DWORD *)(a2 + 4) = PnpDefaultInterfaceType;
  v11 = *(_DWORD *)(v7 + 460);
  if ( v11 == -1 && (!v10 || (v11 = *(_DWORD *)(v10 + 8), v11 == -1)) )
    *(_DWORD *)(a2 + 8) = 0;
  else
    *(_DWORD *)(a2 + 8) = v11;
  v12 = PnpCmResourcesToIoResources(v10, (unsigned int *)a2, 0);
  if ( !v12 )
    return (unsigned int)-1073741811;
  memset(v25, 0, sizeof(v25));
  HIDWORD(v25[1]) = -1;
  v25[0] = a1;
  v25[3] = v12;
  v13 = IopResourceRequirementsListToReqList((__int64)v25, (int **)&v24);
  v14 = v24;
  ConflictFillConflicts = v13;
  if ( v13 >= 0 )
  {
    if ( v24
      && (v15 = *((_QWORD *)v24 + 5), *((_QWORD *)v24 + 2) = (char *)v24 + 40, *(_DWORD *)(v15 + 20) == 1)
      && (v16 = *(_QWORD *)(v15 + 24), *(_BYTE *)(v16 + 8)) )
    {
      v17 = *(_QWORD *)(v16 + 288);
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 64LL);
      v19 = *(_BYTE *)(v18 + 1);
      if ( v19 == (char)0x80 || v19 == -16 )
        v18 += 32LL;
      v22 = 0;
      P = 0LL;
      v26[2] = &v22;
      v26[1] = v18;
      v26[3] = &P;
      v26[0] = a1;
      v20 = IopCallArbiter(v17, 6LL, (__int64)v26);
      ConflictFillConflicts = v20;
      if ( v20 < 0 )
      {
        if ( v20 == -1073741172 )
          ConflictFillConflicts = IopQueryConflictFillConflicts(0LL, 0, 0LL, (__int64)a4, a5, 4);
      }
      else
      {
        ConflictFillConflicts = IopQueryConflictFillConflicts(a1, v22, P, (__int64)a4, a5, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
    else
    {
      ConflictFillConflicts = -1073741811;
    }
  }
  ExFreePoolWithTag(v12, 0);
  if ( v14 )
    IopFreeReqList(v14);
  return ConflictFillConflicts;
}
