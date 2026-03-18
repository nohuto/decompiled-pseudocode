/*
 * XREFs of HvpFindNextDirtyBlock @ 0x140592104
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x140498210 (HvWriteHivePrimaryFile.c)
 *     HvpGenerateLogEntry @ 0x140498C70 (HvpGenerateLogEntry.c)
 *     HvStoreModifiedData @ 0x140499C58 (HvStoreModifiedData.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x1400D4BEC (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     HvpMapEntryGetFreeBin @ 0x1404E35B0 (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *PoolWithTag; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // esi
  _BYTE *CellMap; // rax
  __int64 FreeBin; // rax
  _QWORD *v14; // r8
  int v15; // r10d
  unsigned int v16; // r11d
  unsigned __int64 v17; // rcx
  char *v18; // rax
  int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  unsigned int i; // ebp
  _BYTE *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // r8
  int v28; // r10d
  _OWORD *v29; // rdx
  __int64 v30; // rcx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  unsigned int v33; // [rsp+30h] [rbp-38h]
  unsigned int v34; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v35[2]; // [rsp+38h] [rbp-30h] BYREF

  PoolWithTag = 0LL;
  if ( !HvpFindNextDirtyRun(a2, a3, &v34, v35) )
    return 0;
  v10 = v34 << 9;
  v11 = (v35[0] << 9) - (v34 << 9);
  v33 = v34;
  v34 = v35[0];
  v35[1] = v35[0] << 9;
  if ( a7 && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x33354D43u)) == 0LL )
  {
    *a4 = 0LL;
    return 1;
  }
  else
  {
    CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v10);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0xF22uLL);
    FreeBin = HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
      v17 = (v14[1] & 0xFFFFFFFFFFFFFFF0uLL) + v10 - *(_DWORD *)(FreeBin + 20);
    else
      v17 = *v14 + (v14[1] & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a7 )
      v18 = PoolWithTag;
    else
      v18 = (char *)(v17 + (v10 & 0xFFF));
    *a4 = v18;
    v19 = v16 & 7;
    v20 = v15 - v16;
    v21 = v15 - v16;
    v35[0] = v15 - v16;
    *a6 = v10 + 4096;
    if ( v15 - v16 >= 8 - v19 )
      v21 = 8 - v19;
    v22 = v21 << 9;
    if ( a7 )
    {
      memmove(PoolWithTag, (const void *)(v17 + (unsigned int)(v19 << 9)), v22);
      v20 = v35[0];
      PoolWithTag += v22;
      v16 = v33;
    }
    if ( v20 > v21 )
    {
      for ( i = (v10 + 4096) & 0xFFFFF000; v22 < v11; i += 4096 )
      {
        v25 = (_BYTE *)HvpGetCellMap(BugCheckParameter2, i);
        if ( !v25 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0xF8CuLL);
        if ( !a7 && (v25[8] & 1) != 0 )
          break;
        v26 = HvpMapEntryGetFreeBin(v25);
        if ( v26 )
          v29 = (_OWORD *)((v27[1] & 0xFFFFFFFFFFFFFFF0uLL) + i - *(_DWORD *)(v26 + 20));
        else
          v29 = (_OWORD *)(*v27 + (v27[1] & 0xFFFFFFFFFFFFFFF0uLL));
        if ( v28 - i <= 0x1000 )
        {
          if ( a7 )
            memmove(PoolWithTag, v29, v28 - i);
          goto LABEL_13;
        }
        if ( a7 )
        {
          v30 = 32LL;
          v31 = PoolWithTag;
          do
          {
            *v31 = *v29;
            v31[1] = v29[1];
            v31[2] = v29[2];
            v31[3] = v29[3];
            v31[4] = v29[4];
            v31[5] = v29[5];
            v31[6] = v29[6];
            v31 += 8;
            v32 = v29[7];
            v29 += 8;
            *(v31 - 1) = v32;
            --v30;
          }
          while ( v30 );
          PoolWithTag += 4096;
        }
        v22 += 4096;
        v21 += 8;
      }
      *a5 = v22;
      if ( v21 + v16 != v34 )
        *a3 = v21 + v16;
    }
    else
    {
LABEL_13:
      *a5 = v11;
    }
    return 1;
  }
}
