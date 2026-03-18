/*
 * XREFs of CmpInitializeActualFileSizes @ 0x140498B08
 * Callers:
 *     HvLoadHive @ 0x140496B18 (HvLoadHive.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 * Callees:
 *     CmpGetFileSize @ 0x140498C14 (CmpGetFileSize.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140499C3C (HvpLogTypeToLogArrayIndex.c)
 *     CmpLogFailureToGetFileSize @ 0x1406FB598 (CmpLogFailureToGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualFileSizes(__int64 a1, _DWORD *a2)
{
  int FileSize; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 1536), &v22);
  v6 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v5, 0LL, (unsigned int)FileSize);
    return v6;
  }
  v7 = v22;
  *(_QWORD *)(a1 + 1792) = v22;
  if ( v7 )
  {
    v8 = 2147479552LL;
    if ( v7 <= 2147479552 )
      goto LABEL_4;
    LODWORD(v7) = 2147479552;
  }
  else
  {
    LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096;
    v8 = (unsigned int)v7;
  }
  *(_QWORD *)(a1 + 1792) = v8;
LABEL_4:
  if ( a2 )
    *a2 = v7;
  v9 = *(_DWORD *)(a1 + 164);
  v10 = 1;
  if ( v9 == 1 )
  {
    v16 = CmpGetFileSize(*(_QWORD *)(a1 + 1544), &v22);
LABEL_11:
    if ( v16 < 0 )
    {
      CmpLogFailureToGetFileSize(v17, v10, (unsigned int)v16);
      v18 = 0LL;
    }
    else
    {
      v18 = v22;
    }
    v19 = HvpLogTypeToLogArrayIndex(v10, v18);
    *(_QWORD *)(a1 + 8LL * v19 + 1800) = v20;
    return 0;
  }
  if ( (unsigned int)(v9 - 4) <= 1 )
  {
    v11 = CmpGetFileSize(*(_QWORD *)(a1 + 1568), &v22);
    if ( v11 < 0 )
    {
      CmpLogFailureToGetFileSize(v12, 4LL, (unsigned int)v11);
      v13 = 0LL;
      v22 = 0LL;
    }
    else
    {
      v13 = v22;
    }
    v14 = HvpLogTypeToLogArrayIndex(4LL, v13);
    *(_QWORD *)(a1 + 8LL * v14 + 1800) = v15;
    v16 = CmpGetFileSize(*(_QWORD *)(a1 + 1576), &v22);
    v10 = 5;
    goto LABEL_11;
  }
  return 0;
}
