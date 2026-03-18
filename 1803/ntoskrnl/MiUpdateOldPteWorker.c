/*
 * XREFs of MiUpdateOldPteWorker @ 0x14025A8AC
 * Callers:
 *     MiUpdateOldPagesEPTCallback @ 0x14025A6C0 (MiUpdateOldPagesEPTCallback.c)
 *     MiUpdateOldPte @ 0x14025A740 (MiUpdateOldPte.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x1400ACEE8 (MiEmptyWorkingSetHelper.c)
 *     MiLockSetPfnPriority @ 0x1400BB5D8 (MiLockSetPfnPriority.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
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
