/*
 * XREFs of CmpRegisterCallbackInternal @ 0x140651468
 * Callers:
 *     CmRegisterCallback @ 0x140651440 (CmRegisterCallback.c)
 *     CmRegisterCallbackEx @ 0x1406ED610 (CmRegisterCallbackEx.c)
 *     VrpIncrementSiloCount @ 0x140707988 (VrpIncrementSiloCount.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140651568 (CmpInsertCallbackInListByAltitude.c)
 */

__int64 __fastcall CmpRegisterCallbackInternal(
        __int64 a1,
        __int64 a2,
        const void **a3,
        char a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  int v12; // eax
  PVOID v13; // rax
  __int64 v14; // rdx
  int inserted; // edi
  void *v17; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x62634D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    v11[1] = v11;
    *v11 = v11;
    v11[9] = v11 + 8;
    v11[8] = v11 + 8;
    v12 = (*((_DWORD *)v11 + 5) ^ a5) & 1;
    *((_DWORD *)v11 + 4) = 0;
    *((_DWORD *)v11 + 5) ^= v12;
    v11[4] = a2;
    v11[5] = a1;
    LOWORD(v12) = *(_WORD *)a3;
    *((_WORD *)v11 + 25) = *(_WORD *)a3;
    *((_WORD *)v11 + 24) = v12;
    v13 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3, 0x61634D43u);
    v11[7] = v13;
    if ( v13 )
    {
      memmove(v13, a3[1], *(unsigned __int16 *)a3);
      LOBYTE(v14) = a4;
      inserted = CmpInsertCallbackInListByAltitude(v11, v14);
      *a6 = v11[3];
      if ( inserted >= 0 )
        return (unsigned int)inserted;
    }
    else
    {
      inserted = -1073741670;
    }
    v17 = (void *)v11[7];
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)inserted;
  }
  return 3221225626LL;
}
