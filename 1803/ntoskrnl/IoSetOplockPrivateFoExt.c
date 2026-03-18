/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x140068044
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x140067FD8 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140069DD4 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *FileObjectExtension; // rdi
  char v5; // r10
  __int64 result; // rax
  _QWORD *v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = IopAllocateFileObjectExtension(a1, &v8);
    v2 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_9;
  }
  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(a1, 6LL, &v8);
  if ( !FileObjectExtension )
  {
LABEL_9:
    v7 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = v7;
    if ( !v7 )
      return 3221225626LL;
    memset(v7, 0, 0x30uLL);
    v5 = 1;
  }
  FileObjectExtension[5] = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v2 = IopSetTypeSpecificFoExtension(v8, 6LL, FileObjectExtension);
    if ( v2 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, FileObjectExtension);
  }
  return (unsigned int)v2;
}
