/*
 * XREFs of CempLockInitialize @ 0x18006AAEC
 * Callers:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180038014 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockInitialize(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  result = RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  return result;
}
