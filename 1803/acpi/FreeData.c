/*
 * XREFs of FreeData @ 0x1C0003150
 * Callers:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     FreeData @ 0x1C0003150 (FreeData.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     FreeData @ 0x1C0003150 (FreeData.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 */

void *__fastcall FreeData(void *a1)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData(v3);
  }
  else if ( *((_QWORD *)a1 + 4) )
  {
    if ( *((int *)a1 + 2) <= 0 )
    {
      if ( *((_WORD *)a1 + 1) == 4 )
        FreeDataBuffs(*((_QWORD *)a1 + 4) + 8LL, **((_DWORD **)a1 + 4));
      FreeObjData(a1);
    }
    else
    {
      *(_WORD *)a1 |= 8u;
    }
  }
  return memset(a1, 0, 0x28uLL);
}
