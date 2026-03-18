/*
 * XREFs of CmpRmAnalysisPhase @ 0x14066C028
 * Callers:
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpTransSearchAddTransFromRm @ 0x14042D8CC (CmpTransSearchAddTransFromRm.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpRmAnalysisPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // r15
  _QWORD *v6; // r12
  NTSTATUS v7; // eax
  int v8; // esi
  CLFS_LSN v9; // rax
  _DWORD *v10; // rcx
  char *NextElement; // rax
  __int64 v12; // rdx
  char **v13; // rcx
  PVOID ppvReadBuffer; // [rsp+50h] [rbp-9h] BYREF
  PVOID pvReadContext; // [rsp+58h] [rbp-1h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+60h] [rbp+7h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+70h] [rbp+17h] BYREF
  CLFS_LSN plsnRecord; // [rsp+78h] [rbp+1Fh] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+C0h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG pcbBuffer; // [rsp+D0h] [rbp+77h] BYREF
  CLFS_LSN plsnUser; // [rsp+D8h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  pvReadContext = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  plsnUser.ullOffset = 0LL;
  v4 = *(_QWORD **)(a1 + 16);
  peRecordType = 0;
  if ( v4 == v2 )
  {
    v5 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v4[1] = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = *v2;
    v5 = *v2;
    v6 = *(_QWORD **)(*v2 + 8LL);
    v2[1] = v2;
    *v2 = v2;
  }
  v7 = ClfsReadLogRecord(
         *(PVOID *)(a1 + 96),
         &plsnFirst,
         ClfsContextForward,
         &ppvReadBuffer,
         &pcbBuffer,
         &peRecordType,
         &plsnUndoNext,
         &plsnPrevious,
         &pvReadContext);
  v8 = v7;
  while ( v7 >= 0 )
  {
    if ( (peRecordType & 1) != 0 && pcbBuffer >= 0x30 )
    {
      v8 = CmpTransSearchAddTransFromRm((_QWORD *)a1, 0LL, (__int64)ppvReadBuffer + 16, 1, (__int64)&plsnUser);
      if ( v8 < 0 )
        break;
      v9 = plsnUser;
      if ( !plsnUser.ullOffset )
      {
        v8 = -1072103422;
        break;
      }
      v10 = ppvReadBuffer;
      if ( *((_DWORD *)ppvReadBuffer + 2) == 16 )
      {
        *(_DWORD *)(plsnUser.ullOffset + 48) |= 4u;
        v9 = plsnUser;
        v10 = ppvReadBuffer;
      }
      if ( v10[2] == 8 )
      {
        *(_DWORD *)(v9.ullOffset + 48) |= 2u;
        v9 = plsnUser;
        v10 = ppvReadBuffer;
      }
      if ( v10[2] == 4 )
        *(_DWORD *)(v9.ullOffset + 48) |= 1u;
    }
    peRecordType = 1;
    v7 = ClfsReadNextLogRecord(
           pvReadContext,
           &ppvReadBuffer,
           &pcbBuffer,
           &peRecordType,
           0LL,
           &plsnUndoNext,
           &plsnPrevious,
           &plsnRecord);
    v8 = v7;
    if ( v7 == -1073741807 )
    {
      v8 = 0;
LABEL_18:
      v19 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v2, &v19, 0);
        plsnUser.ullOffset = (unsigned __int64)NextElement;
        if ( !NextElement )
          goto LABEL_25;
        if ( (*((_DWORD *)NextElement + 12) & 7) != 1 )
        {
          v12 = *(_QWORD *)NextElement;
          v13 = (char **)*((_QWORD *)NextElement + 1);
          if ( *(char **)(*(_QWORD *)NextElement + 8LL) != NextElement || *v13 != NextElement )
            __fastfail(3u);
          *v13 = (char *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          ExFreePoolWithTag((PVOID)plsnUser.ullOffset, 0x72544D43u);
          goto LABEL_18;
        }
      }
    }
  }
LABEL_25:
  if ( pvReadContext )
    ClfsTerminateReadLog(pvReadContext);
  if ( v5 )
  {
    *v6 = v2;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 24) = v6;
  }
  return (unsigned int)v8;
}
