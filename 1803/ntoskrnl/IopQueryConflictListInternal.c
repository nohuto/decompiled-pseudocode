/*
 * XREFs of IopQueryConflictListInternal @ 0x14074071C
 * Callers:
 *     IopQueryConflictList @ 0x140740684 (IopQueryConflictList.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x140616150 (IopFreeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x1406168D4 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x14061738C (IopCallArbiter.c)
 *     PnpCmResourcesToIoResources @ 0x140617938 (PnpCmResourcesToIoResources.c)
 *     IopQueryConflictFillConflicts @ 0x140740144 (IopQueryConflictFillConflicts.c)
 */

__int64 __fastcall IopQueryConflictListInternal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  _QWORD *v5; // rdi
  __int64 v8; // r8
  unsigned int ConflictFillConflicts; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  char *v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  unsigned int v22; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v25[8]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v26[4]; // [rsp+90h] [rbp-9h] BYREF

  v5 = 0LL;
  a4[4] = 32;
  a4[2] = 0;
  a4[3] = 0;
  v24 = 0LL;
  if ( a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v8 = 0LL;
  if ( !v8 )
    return (unsigned int)-1073741810;
  if ( *(_BYTE *)(a2 + 20) == 1 )
    goto LABEL_12;
  if ( *(_BYTE *)(a2 + 20) != 2 )
  {
    if ( *(_BYTE *)(a2 + 20) == 3 )
    {
LABEL_12:
      if ( !*(_DWORD *)(a2 + 32) )
        return 0;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(a2 + 20) != 4 )
    {
      if ( *(_BYTE *)(a2 + 20) != 7 )
        return (unsigned int)-1073741811;
      goto LABEL_12;
    }
  }
LABEL_14:
  v10 = *(_DWORD *)(v8 + 456);
  v11 = *(_QWORD *)(v8 + 440);
  if ( v10 == -1 && (!v11 || (v10 = *(_DWORD *)(v11 + 4), v10 == -1)) )
  {
    v10 = PnpDefaultInterfaceType;
    *(_DWORD *)(a2 + 4) = PnpDefaultInterfaceType;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = v10;
  }
  if ( v10 == 8 )
    *(_DWORD *)(a2 + 4) = PnpDefaultInterfaceType;
  v12 = *(_DWORD *)(v8 + 460);
  if ( v12 == -1 )
  {
    if ( !v11 || (v12 = *(_DWORD *)(v11 + 8), v12 == -1) )
      v12 = 0;
  }
  *(_DWORD *)(a2 + 8) = v12;
  v13 = PnpCmResourcesToIoResources(v11, (unsigned int *)a2, 0);
  if ( v13 )
  {
    memset(v25, 0, sizeof(v25));
    HIDWORD(v25[1]) = -1;
    v25[0] = a1;
    v25[3] = v13;
    v14 = IopResourceRequirementsListToReqList((__int64)v25, &v24);
    v5 = v24;
    ConflictFillConflicts = v14;
    if ( v14 >= 0 )
    {
      if ( v24
        && (v15 = v24[5], v24[2] = v24 + 5, *(_DWORD *)(v15 + 20) == 1)
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
    ExFreePoolWithTag(v13, 0);
  }
  else
  {
    ConflictFillConflicts = -1073741811;
  }
  if ( v5 )
    IopFreeReqList(v5);
  return ConflictFillConflicts;
}
