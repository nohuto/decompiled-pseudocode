/*
 * XREFs of IoSetOplockKeyContext @ 0x14014862C
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140024FEC (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140024FC4 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140060ED0 (IopAllocateFileObjectExtension.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall IoSetOplockKeyContext(__int64 a1, __int128 *a2, __int16 a3)
{
  __int64 result; // rax
  char *v6; // rax
  char *v7; // rbx
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  unsigned int v10; // edi
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (unsigned __int16)(a3 - 1) > 1u )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    IopGetFileObjectExtension(a1, 6, &v11);
  }
  else
  {
    result = IopAllocateFileObjectExtension(a1, &v11);
    if ( (int)result < 0 )
      return result;
  }
  v6 = (char *)ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  memset(v6, 0, 0x30uLL);
  *(_WORD *)v7 = a3;
  if ( a3 == 1 )
  {
    v9 = *a2;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_12;
    if ( *((_BYTE *)a2 + 32) )
    {
      v8 = *a2;
      *((_WORD *)v7 + 1) |= 1u;
      *(_OWORD *)(v7 + 4) = v8;
    }
    if ( !*((_BYTE *)a2 + 33) )
      goto LABEL_12;
    v9 = a2[1];
  }
  *((_WORD *)v7 + 1) |= 2u;
  *(_OWORD *)(v7 + 20) = v9;
LABEL_12:
  v10 = IopSetTypeSpecificFoExtension(v11, 6u, (signed __int64)v7);
  if ( v10 == -1073741823 )
    ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v7);
  return v10;
}
