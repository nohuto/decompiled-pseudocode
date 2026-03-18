/*
 * XREFs of MiUpdateOldPteWorker @ 0x14021EA1C
 * Callers:
 *     MiUpdateOldPagesEPTCallback @ 0x14021E810 (MiUpdateOldPagesEPTCallback.c)
 *     MiUpdateOldPte @ 0x14021E890 (MiUpdateOldPte.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x140010BF0 (MiEmptyWorkingSetHelper.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiLockSetPfnPriority @ 0x14011AF94 (MiLockSetPfnPriority.c)
 */

__int64 __fastcall MiUpdateOldPteWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _DWORD *v6; // r9
  unsigned __int64 v7; // r11
  unsigned int v8; // edx

  result = MiGetPfnPriority(a3);
  v8 = v6[1];
  if ( (*v6 & 2) != 0 )
  {
    if ( v8 == 8 || (_DWORD)result == v8 )
      return MiEmptyWorkingSetHelper(a1, v7, (__int64)(v6 + 6));
  }
  else if ( (unsigned int)result > v8 )
  {
    return MiLockSetPfnPriority(v5, v8);
  }
  return result;
}
