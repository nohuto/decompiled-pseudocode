/*
 * XREFs of CmpInitializeActualFileSizes @ 0x1404E5ADC
 * Callers:
 *     HvLoadHive @ 0x1404E4CD0 (HvLoadHive.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 * Callees:
 *     CmpGetFileSize @ 0x1404E5BE8 (CmpGetFileSize.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404E5FD4 (HvpLogTypeToLogArrayIndex.c)
 *     CmpLogFailureToGetFileSize @ 0x140698408 (CmpLogFailureToGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualFileSizes(__int64 a1, _DWORD *a2)
{
  int FileSize; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 2664), &v20);
  v6 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v5, 0LL, (unsigned int)FileSize);
    return v6;
  }
  v7 = v20;
  *(_QWORD *)(a1 + 2968) = v20;
  if ( v7 )
  {
    v8 = v7;
    if ( v7 > 2147479552 )
      v8 = 2147479552LL;
  }
  else
  {
    v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096);
  }
  *(_QWORD *)(a1 + 2968) = v8;
  v9 = 1;
  *a2 = v8;
  v10 = *(_DWORD *)(a1 + 148);
  if ( v10 == 1 )
  {
    v15 = CmpGetFileSize(*(_QWORD *)(a1 + 2672), &v20);
LABEL_10:
    if ( v15 < 0 )
      CmpLogFailureToGetFileSize(v16, v9, (unsigned int)v15);
    v17 = HvpLogTypeToLogArrayIndex(v9);
    *(_QWORD *)(a1 + 8LL * v17 + 2976) = v18;
    return 0;
  }
  if ( (unsigned int)(v10 - 4) <= 1 )
  {
    v11 = CmpGetFileSize(*(_QWORD *)(a1 + 2696), &v20);
    if ( v11 < 0 )
    {
      CmpLogFailureToGetFileSize(v12, 4LL, (unsigned int)v11);
      v20 = 0LL;
    }
    v13 = HvpLogTypeToLogArrayIndex(4LL);
    *(_QWORD *)(a1 + 8LL * v13 + 2976) = v14;
    v15 = CmpGetFileSize(*(_QWORD *)(a1 + 2704), &v20);
    v9 = 5;
    goto LABEL_10;
  }
  return 0;
}
