/*
 * XREFs of CmpInitializeActualFileSizes @ 0x1404D3A34
 * Callers:
 *     HvLoadHive @ 0x14043A6FC (HvLoadHive.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 * Callees:
 *     CmpGetFileSize @ 0x1404D3B40 (CmpGetFileSize.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 *     CmpLogFailureToGetFileSize @ 0x14066DF10 (CmpLogFailureToGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualFileSizes(__int64 a1, _DWORD *a2)
{
  int FileSize; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v25; // [rsp+30h] [rbp+8h] BYREF

  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 2664), &v25);
  v6 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v5, 0LL, (unsigned int)FileSize);
    return v6;
  }
  v7 = v25;
  *(_QWORD *)(a1 + 2968) = v25;
  if ( !v7 || *(int *)(a1 + 2972) > 0 )
    *(_QWORD *)(a1 + 2968) = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096);
  v8 = 1;
  *a2 = *(_DWORD *)(a1 + 2968);
  v9 = *(_DWORD *)(a1 + 148);
  if ( v9 == 1 )
  {
    v17 = CmpGetFileSize(*(_QWORD *)(a1 + 2672), &v25);
LABEL_9:
    if ( v17 < 0 )
    {
      CmpLogFailureToGetFileSize(v18, v8, (unsigned int)v17);
      v21 = 0LL;
    }
    else
    {
      v21 = v25;
    }
    v22 = HvpLogTypeToLogArrayIndex(v8, v21, v19, v20);
    *(_QWORD *)(a1 + 8LL * v22 + 2976) = v23;
    return 0;
  }
  if ( (unsigned int)(v9 - 4) <= 1 )
  {
    v10 = CmpGetFileSize(*(_QWORD *)(a1 + 2696), &v25);
    if ( v10 < 0 )
    {
      CmpLogFailureToGetFileSize(v11, 4LL, (unsigned int)v10);
      v14 = 0LL;
      v25 = 0LL;
    }
    else
    {
      v14 = v25;
    }
    v15 = HvpLogTypeToLogArrayIndex(4LL, v14, v12, v13);
    *(_QWORD *)(a1 + 8LL * v15 + 2976) = v16;
    v17 = CmpGetFileSize(*(_QWORD *)(a1 + 2704), &v25);
    v8 = 5;
    goto LABEL_9;
  }
  return 0;
}
