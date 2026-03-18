/*
 * XREFs of CmpTransAllocateTrans @ 0x140568FD0
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x140568E08 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpBindHiveToTrans @ 0x1405690B8 (CmpBindHiveToTrans.c)
 */

char *__fastcall CmpTransAllocateTrans(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rax
  char *v9; // rbx
  int v10; // eax
  __int128 v12; // xmm0

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x72544D43u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB8uLL);
    *((_QWORD *)v9 + 7) = a1;
    *((_QWORD *)v9 + 13) = CLFS_LSN_INVALID_EXT;
    *((_DWORD *)v9 + 12) = 8;
    v10 = *((_DWORD *)v9 + 12);
    if ( (a1 & 1) != 0 )
      v10 = 136;
    *((_QWORD *)v9 + 8) = a3;
    *((_DWORD *)v9 + 12) = v10;
    if ( a2 )
    {
      v12 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_6:
        *((_QWORD *)v9 + 3) = v9 + 16;
        *((_QWORD *)v9 + 2) = v9 + 16;
        *((_QWORD *)v9 + 5) = v9 + 32;
        *((_QWORD *)v9 + 4) = v9 + 32;
        CmpBindHiveToTrans(a4, v9);
        return v9;
      }
      v12 = *(_OWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 176);
    }
    *(_OWORD *)(v9 + 88) = v12;
    goto LABEL_6;
  }
  return v9;
}
