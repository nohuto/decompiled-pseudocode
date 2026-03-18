/*
 * XREFs of FsFilterCtrlInit @ 0x1400968B0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1400153C0 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140510380 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x140685364 (FsRtlQueryOpen.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     FsFilterAllocateCompletionStack @ 0x1401E3FD0 (FsFilterAllocateCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlInit(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int16 v10; // ax
  unsigned int v11; // eax
  __int64 result; // rax
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF

  v6 = a5;
  v7 = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)a1 = 64;
  *(_QWORD *)(a1 + 16) = v6;
  memset((void *)(a1 + 24), 0, 0x28uLL);
  v10 = *(char *)(a3 + 76);
  *(_WORD *)(a1 + 72) = v10;
  *(_WORD *)(a1 + 74) = 0;
  if ( v10 <= 0xFu )
  {
    *(_QWORD *)(a1 + 80) = a1 + 88;
    v11 = 480;
    *(_WORD *)(a1 + 72) = 15;
LABEL_3:
    memset(*(void **)(a1 + 80), 0, v11);
    return v7;
  }
  result = FsFilterAllocateCompletionStack(a1, a6, &v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v11 = v13;
    goto LABEL_3;
  }
  return result;
}
