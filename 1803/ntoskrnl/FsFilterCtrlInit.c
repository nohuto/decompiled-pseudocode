/*
 * XREFs of FsFilterCtrlInit @ 0x14005C0C0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1401352E8 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404C1720 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x140714EFC (FsRtlQueryOpen.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     FsFilterAllocateCompletionStack @ 0x140225CBC (FsFilterAllocateCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlInit(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int16 v10; // ax
  void *v11; // rcx
  unsigned int v12; // eax
  __int64 result; // rax
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF

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
    v11 = (void *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = a1 + 88;
    v12 = 480;
    *(_WORD *)(a1 + 72) = 15;
LABEL_3:
    memset(v11, 0, v12);
    return v7;
  }
  result = FsFilterAllocateCompletionStack(a1, a6, &v14);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v11 = *(void **)(a1 + 80);
    v12 = v14;
    goto LABEL_3;
  }
  return result;
}
