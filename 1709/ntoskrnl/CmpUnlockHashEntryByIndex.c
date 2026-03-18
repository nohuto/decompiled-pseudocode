/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x140694B88
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x14046EBF0 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntryByIndex(PVOID P, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)P + 350) + 24LL * a2;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PERESOURCE *)P);
  return result;
}
