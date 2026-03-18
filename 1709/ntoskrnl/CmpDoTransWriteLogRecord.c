/*
 * XREFs of CmpDoTransWriteLogRecord @ 0x1405D551C
 * Callers:
 *     CmpTransWriteLog @ 0x1405D5318 (CmpTransWriteLog.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall CmpDoTransWriteLogRecord(__int64 a1, char *a2, ULONG a3, ULONG fFlags, PCLFS_LSN plsn)
{
  char *v5; // r14
  void *v6; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // esi
  _DWORD *PoolWithTag; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // eax
  int v13; // ecx
  __int128 v14; // xmm0
  int v15; // r12d
  unsigned int v16; // eax
  CLFS_WRITE_ENTRY rgWriteEntries; // [rsp+50h] [rbp-48h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+A8h] [rbp+10h] BYREF
  ULONG v20; // [rsp+B8h] [rbp+20h]

  v20 = fFlags;
  v5 = a2;
  v6 = *(void **)(a1 + 96);
  plsnUndoNext.ullOffset = CLFS_LSN_NULL_EXT;
  rgWriteEntries.Buffer = a2;
  rgWriteEntries.ByteLength = a3;
  result = ClfsReserveAndAppendLog(v6, &rgWriteEntries, 1u, &plsnUndoNext, &plsnUndoNext, 0, 0LL, fFlags, plsn);
  appended = result;
  if ( result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC00uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      v10 = *((_DWORD *)v5 + 1);
      v11 = 3008;
      v12 = v10;
      if ( v10 >= 0xBC0 )
      {
        v13 = 0;
        do
        {
          ++v13;
          if ( v12 < 0xBC0 )
            break;
          v12 -= 3008;
        }
        while ( v12 );
        *(_OWORD *)PoolWithTag = *(_OWORD *)v5;
        *((_OWORD *)PoolWithTag + 1) = *((_OWORD *)v5 + 1);
        v14 = *((_OWORD *)v5 + 2);
        PoolWithTag[12] = v13;
        *((_OWORD *)PoolWithTag + 2) = v14;
        PoolWithTag[3] |= 0x80000000;
        v15 = 0;
        rgWriteEntries.Buffer = PoolWithTag;
        do
        {
          memmove(PoolWithTag + 16, v5, v11);
          PoolWithTag[13] = v15;
          PoolWithTag[14] = v11;
          rgWriteEntries.ByteLength = v11 + 64;
          ++v15;
          appended = ClfsReserveAndAppendLog(
                       *(PVOID *)(a1 + 96),
                       &rgWriteEntries,
                       1u,
                       &plsnUndoNext,
                       &plsnUndoNext,
                       0,
                       0LL,
                       v20,
                       plsn);
          if ( appended < 0 )
            break;
          v10 -= v11;
          v5 += v11;
          v16 = v10;
          if ( v10 >= v11 )
            v16 = v11;
          v11 = v16;
        }
        while ( v10 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      return appended;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
